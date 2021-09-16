`timescale 1ns/1ps
`include "defines.v"
module ex(
	input wire				rst,

	/* From ID/EX */
	input wire[`AluOpBus]	aluop_i,
	input wire[`AluSelBus]	alusel_i,
	input wire[`RegBus]		reg1_i,
	input wire[`RegBus]		reg2_i,
	input wire[`RegAddrBus]	wd_i,
	input wire				wreg_i,
	// DelaySlot
	input wire[`RegBus]		link_address_i,
	input wire				is_in_delayslot_i,
	// Load & Store
	input wire[`RegBus]		inst_i,				//! Decide L&S Address

	// From DIV
	input wire[`DoubleRegBus]div_result_i,
	input wire				div_ready_i,

	//! From HI-LO Module
	input wire[`RegBus]		hi_i,
	input wire[`RegBus]		lo_i,
	/** Operand Forward for HI-LO Register **/
	//! Write Back
	input wire[`RegBus]		wb_hi_i,
	input wire[`RegBus]		wb_lo_i,
	input wire				wb_whilo_i,
	//! Memory
	input wire[`RegBus]		mem_hi_i,
	input wire[`RegBus]		mem_lo_i,
	input wire				mem_whilo_i,
	/********** Operand Forward **********/

	/* Multiple Cycle Instruction */
	input wire[`DoubleRegBus] hilo_temp_i,
	input wire[1:0]			cnt_i,

	//To EX/MEM
	output reg[`RegAddrBus]	wd_o,
	output reg				wreg_o,
	output reg[`RegBus]		wdata_o,
	output reg[`RegBus]		hi_o,
	output reg[`RegBus]		lo_o,
	output reg				whilo_o,
	// Load & Store
	output wire[`AluOpBus]	aluop_o,			//! Tell MEM to L&S
	output wire[`RegBus]	reg2_o,				//! Data to Store or Original Value of Reg to Load
	output wire[`RegBus]	mem_addr_o,			//! Address of L&S Operation

	//To DIV
	output reg[`RegBus]		div_opdata1_o,
	output reg[`RegBus]		div_opdata2_o,
	output reg				div_start_o,
	output reg				signed_div_o,

	/* Multiple Cycle Instruction */
	output reg[`DoubleRegBus] hilo_temp_o,
	output reg[1:0]			cnt_o,

	/* To Control */
	output reg				stallreq
);

	/********************** Pass ***************************/
	assign aluop_o = aluop_i;
	assign mem_addr_o = reg1_i + {{16{inst_i[15]}}, inst_i[15:0]};
	assign reg2_o = reg2_i;
	
	/********************* Save The Result of Operation *************/
		reg[`RegBus]			logicout;
		reg[`RegBus]			shiftres;
		reg[`RegBus]			moveres;
		reg[`RegBus]			HI;
		reg[`RegBus]			LO;

		wire					ov_sum;				//! Overflow Situation
		wire					reg1_eq_reg2;
		wire					reg1_lt_reg2;
		wire[`RegBus]			reg2_i_mux;			//! One's complete of the second operator
		wire[`RegBus]			reg1_i_not;
		wire[`RegBus]			result_sum;			//! Addition Result
		reg[`RegBus]			arithmeticres;

		wire[`RegBus]			multiplicand;
		wire[`RegBus]			multipler;
		wire[`DoubleRegBus]		hilo_temp;			//! 64 bits temporary rsult of mul
		reg[`DoubleRegBus]		mulres;

		reg[`DoubleRegBus]		hilo_temp_1;		//! 64 bits temporary rsult of Multiple Add
		reg						stallreq_from_madd_msub;

		reg						stallreq_from_div;

	/********************* Stall the Pipeline *************/
	always @(*) begin
		stallreq = stallreq_from_madd_msub || stallreq_from_div;
	end

	/***************** 1. Assign *************/
	//1.1 Input to HI LO Register
	always @(*)begin
		if (rst==`RstEnable) begin
			{HI,LO} = {`ZeroWord, `ZeroWord};
		end else if (mem_whilo_i == `WriteEnable) begin
			{HI,LO} = {mem_hi_i, mem_lo_i};
		end else if (wb_whilo_i == `WriteEnable) begin
			{HI,LO} = {wb_hi_i, wb_lo_i};
		end else begin 
			{HI,LO} = {hi_i, lo_i};
		end
	end

	/***************** 2.Do ALU Operation due to aluop_i *************/
	//2.1 Logical Operation
	always @(*) begin
		if (rst==`RstEnable) begin
			logicout		= `ZeroWord; 
		end else begin
			case (aluop_i) 
				`EXE_OR_OP:	 logicout = reg1_i | reg2_i;
				`EXE_AND_OP: logicout = reg1_i & reg2_i;
				`EXE_NOR_OP: logicout = ~(reg1_i|reg2_i);
				`EXE_XOR_OP: logicout = reg1_i ^ reg2_i;
				default: 	 logicout = `ZeroWord;
			endcase
		end
	end

	//2.2 Shift Operation
	always @(*) begin
		if (rst==`RstEnable) begin
			shiftres		= `ZeroWord; 
		end else begin
			case (aluop_i) 
				`EXE_SLL_OP: shiftres = reg2_i << reg1_i[4:0];
				`EXE_SRL_OP: shiftres = reg2_i >> reg1_i[4:0];
				`EXE_SRA_OP: shiftres = ({32{reg2_i[31]}} << (6'd32-{1'b0,reg1_i[4:0]})) | (reg2_i>>reg1_i[4:0]);
				default: 	 shiftres = `ZeroWord;
			endcase
		end
	end

	//2.3 Move Operation
	always @(*) begin
		if (rst==`RstEnable) begin
			moveres			= `ZeroWord;
		end else begin
			case (aluop_i)
				`EXE_MFHI_OP: begin
					moveres	= HI;
				end
				`EXE_MFLO_OP: begin
					moveres	= LO;
				end
				`EXE_MOVZ_OP: begin
					moveres	= reg1_i;
				end
				`EXE_MOVN_OP: begin
					moveres	= reg1_i;
				end
				default: begin
					moveres	= `ZeroWord;
				end
			endcase
		end			//if
	end				//always

	//2.4 Arithmetic Operation
		//Substraction or Signed Comparsion 
		//reg2_i_mux = 2's complement of second operator
		assign reg2_i_mux = ((aluop_i == `EXE_SUB_OP)	||
							 (aluop_i == `EXE_SUBU_OP)	||
							 (aluop_i == `EXE_SLT_OP))	?
							 (~reg2_i)+1 : reg2_i;
		/** Result of Add, Sub, Signed Comparison **/
		assign result_sum = reg1_i + reg2_i_mux;
		assign reg1_i_not = ~reg1_i;
		/** Calculate Overflow **/
		assign ov_sum = ( (!reg1_i[31] && !reg2_i_mux[31]) && result_sum[31])	||
						(  (reg1_i[31] && reg2_i_mux[31]) && !result_sum[31]);
		assign reg1_lt_reg2 = ((aluop_i == `EXE_SLT_OP)) 	?
							  ((reg1_i[31] && !reg2_i[31])						||
							  (!reg1_i[31] && !reg2_i[31] && result_sum[31]) 	||
							  (reg1_i[31] && reg2_i[31] && result_sum[31]))
							: (reg1_i < reg2_i);

	always @(*) begin
		if (rst==`RstEnable) begin
			arithmeticres	= `ZeroWord;
		end else begin
			arithmeticres	= `ZeroWord;
			case (aluop_i)
				`EXE_SLT_OP, `EXE_SLTU_OP: begin
					arithmeticres	= reg1_lt_reg2;
				end
				`EXE_ADD_OP, `EXE_ADDU_OP, `EXE_ADDI_OP, `EXE_ADDIU_OP, `EXE_SUB_OP, `EXE_SUBU_OP: begin
					arithmeticres	= result_sum;
				end
				`EXE_CLZ_OP: begin
					arithmeticres 	=	 reg1_i[31] ? 0 : reg1_i[30] ? 1 : reg1_i[29] ? 2 : reg1_i[28] ? 3 : reg1_i[27] ? 4 : reg1_i[26] ? 5 :
										 reg1_i[25] ? 6 : reg1_i[24] ? 7 : reg1_i[23] ? 8 : reg1_i[22] ? 9 : reg1_i[21] ? 10: reg1_i[20] ? 11:
										 reg1_i[19] ? 12: reg1_i[18] ? 13: reg1_i[17] ? 14: reg1_i[16] ? 15: reg1_i[15] ? 16: reg1_i[14] ? 17:
										 reg1_i[13] ? 18: reg1_i[12] ? 19: reg1_i[11] ? 20: reg1_i[10] ? 21: reg1_i[9] ? 22 : reg1_i[8] ? 23 :
										 reg1_i[7] ? 24 : reg1_i[6] ? 25 : reg1_i[5] ? 26 : reg1_i[4] ? 27 : reg1_i[3] ? 28 : reg1_i[2] ? 29 :
										 reg1_i[1] ? 30 : reg1_i[0] ? 31 : 32 ;
				end
				`EXE_CLO_OP: begin
					arithmeticres	= 	(reg1_i_not[31] ? 0 : reg1_i_not[30] ? 1 : reg1_i_not[29] ? 2 : reg1_i_not[28] ? 3 : reg1_i_not[27] ? 4 : reg1_i_not[26] ? 5 :
										 reg1_i_not[25] ? 6 : reg1_i_not[24] ? 7 : reg1_i_not[23] ? 8 : reg1_i_not[22] ? 9 : reg1_i_not[21] ? 10: reg1_i_not[20] ? 11:
										 reg1_i_not[19] ? 12: reg1_i_not[18] ? 13: reg1_i_not[17] ? 14: reg1_i_not[16] ? 15: reg1_i_not[15] ? 16: reg1_i_not[14] ? 17:
										 reg1_i_not[13] ? 18: reg1_i_not[12] ? 19: reg1_i_not[11] ? 20: reg1_i_not[10] ? 21: reg1_i_not[9] ? 22 : reg1_i_not[8] ? 23 :
										 reg1_i_not[7] ? 24 : reg1_i_not[6] ? 25 : reg1_i_not[5] ? 26 : reg1_i_not[4] ? 27 : reg1_i_not[3] ? 28 : reg1_i_not[2] ? 29 :
										 reg1_i_not[1] ? 30 : reg1_i_not[0] ? 31 : 32) ;
				end
			endcase
		end			//if
	end				//always

	//2.5 Multiplication 
		assign multiplicand = (((aluop_i==`EXE_MUL_OP)||(aluop_i==`EXE_MULT_OP)||(aluop_i==`EXE_MADD_OP)||(aluop_i==`EXE_MSUB_OP))
								&& (reg1_i[31])) ?
								(~reg1_i + 1) : reg1_i;
		assign multipler	= (((aluop_i==`EXE_MUL_OP)||(aluop_i==`EXE_MULT_OP)||(aluop_i==`EXE_MADD_OP)||(aluop_i==`EXE_MSUB_OP))
								&& (reg2_i[31])) ?
								(~reg2_i + 1) : reg2_i;
		assign hilo_temp	= multiplicand * multipler;
		//! Modify the Result
	always @(*) begin
		if (rst==`RstEnable) begin
			mulres		= {`ZeroWord, `ZeroWord};
		end else if ((aluop_i == `EXE_MUL_OP)||(aluop_i == `EXE_MULT_OP)||
					(aluop_i==`EXE_MADD_OP)||(aluop_i==`EXE_MSUB_OP)) begin
			if (reg1_i[31] ^ reg2_i[31] == 1'b1) begin
				mulres	= ~hilo_temp + 1;
			end else begin
				mulres	= hilo_temp;
			end 
		end else begin
			mulres		= hilo_temp;
		end
	end		//always

		`define SET_MARITH(i_hilo_temp_o, i_cnt_o, o_hilo_temp_i, o_stallreq_from_madd_msub) if(1) begin \
			hilo_temp_o				<= i_hilo_temp_o 			; \
			cnt_o    				<= i_cnt_o					; \
			hilo_temp_1    			<= o_hilo_temp_i    		; \
			stallreq_from_madd_msub	<= o_stallreq_from_madd_msub; \
		end else if(0)
	//2.6 Multiply-Add
	always @(*) begin
		if (rst==`RstEnable) begin
			`SET_MARITH (({`ZeroWord, `ZeroWord}),2'b00, (hilo_temp_i + {HI,LO}),	`NoStop);
		end	else begin 
			case (aluop_i)  
				`EXE_MADD_OP, `EXE_MADDU_OP: begin
					if (cnt_i == 2'b00)  
						`SET_MARITH (mulres,				  2'b01, {`ZeroWord, `ZeroWord}, `Stop);
					if (cnt_i == 2'b01) 
						`SET_MARITH (({`ZeroWord, `ZeroWord}),2'b10, (hilo_temp_i + {HI,LO}),`NoStop);
				end
				`EXE_MSUB_OP, `EXE_MSUBU_OP: begin
					if (cnt_i == 2'b00)  
						`SET_MARITH (~mulres + 1,			2'b01, {`ZeroWord, `ZeroWord},	 `Stop);
					if (cnt_i == 2'b01) 
						`SET_MARITH (({`ZeroWord, `ZeroWord}),2'b10, (hilo_temp_i + {HI,LO}),`NoStop);
				end
				default:`SET_MARITH (({`ZeroWord, `ZeroWord}),2'b00, (hilo_temp_i + {HI,LO}),`NoStop);
			endcase
		end			//if
	end				//always

		`define SET_DIV(i_stallreq_from_div, i_div_opdata1_o, i_div_opdata2_o, i_div_start_o, i_signed_div_o) if(1) begin \
			stallreq_from_div		= i_stallreq_from_div		;\
			div_opdata1_o			= i_div_opdata1_o			;\
			div_opdata2_o			= i_div_opdata2_o			;\
			div_start_o				= i_div_start_o			;\
			signed_div_o			= i_signed_div_o			;\
		end else if(0)
	//2.7 Divide
	always @(*) begin
		if(rst == `RstEnable) begin
			`SET_DIV(`NoStop,	32'h0,	32'h0,	`DivStop,	1'b0);
		end else begin
			`SET_DIV(`NoStop,	32'h0,	32'h0,	`DivStop,	1'b0);
			case(aluop_i)
				`EXE_DIV_OP: begin
					if(div_ready_i == `DivResultNotReady) 
						`SET_DIV(`Stop,  reg1_i, reg2_i, `DivStart, 1'b1);
					else if(div_ready_i == `DivResultReady)
						`SET_DIV(`NoStop,reg1_i, reg2_i, `DivStop,  1'b1);
					else 
						`SET_DIV(`NoStop,32'h0,  32'h0,  `DivStop,  1'b0);
				end
				`EXE_DIVU_OP: begin
					if(div_ready_i == `DivResultNotReady)
						`SET_DIV(`Stop,  reg1_i, reg2_i, `DivStart, 1'b0);
					else if(div_ready_i == `DivResultReady)
						`SET_DIV(`NoStop,reg1_i, reg2_i, `DivStop,  1'b0);
					else 
						`SET_DIV(`NoStop,32'h0,  32'h0,  `DivStop,  1'b0);
				end
			endcase
		end			//if
	end				//always

	/***************** 3.Select Result due to alusel_i *************
	***************************************************************/
	//3.1 Output to General Register
	always @(*) begin
		wd_o			= wd_i;
		if (((aluop_i==`EXE_ADD_OP)||(aluop_i==`EXE_ADDI_OP)||(aluop_i==`EXE_SUB_OP)) && (ov_sum==1'b1)) begin
			wreg_o 		= `WriteDisable;
		end else begin
			wreg_o		= wreg_i;
		end
		case (alusel_i)
			`EXE_RES_LOGIC:		wdata_o	= logicout;
			`EXE_RES_SHIFT:		wdata_o = shiftres;
			`EXE_RES_MOVE:		wdata_o	= moveres;
			`EXE_RES_ARITH:		wdata_o = arithmeticres;
			`EXE_RES_MUL:		wdata_o = mulres[31:0];
			`EXE_RES_TRAN:		wdata_o	= link_address_i;
			default:			wdata_o	= `ZeroWord;
		endcase
	end
		// Operations goning to write HI & LO (include moves & division & multipilcation)
		`define SET_HILO_OUT(i_whilo, i_hi, i_lo) if(1) begin \
			whilo_o <= i_whilo ; \
			hi_o    <= i_hi    ; \
			lo_o    <= i_lo    ; \
		end else if(0)
	//3.2 Output to HI-Lo register
	always @(*) begin
		if (rst==`RstEnable) begin
			`SET_HILO_OUT(`WriteDisable, `ZeroWord, `ZeroWord);
		end
		case (aluop_i)
			`EXE_MADDU_OP, `EXE_MADD_OP, `EXE_MSUBU_OP, `EXE_MSUB_OP:
				`SET_HILO_OUT(1'b1,	hilo_temp_1[63:32],	hilo_temp_1[31:0]);
			`EXE_MULT_OP, `EXE_MULTU_OP: 
				`SET_HILO_OUT(1'b1,	mulres[63:32],		mulres[31:0]);
			`EXE_MTHI_OP:
				`SET_HILO_OUT(1'b1,	reg1_i,				LO);
			`EXE_MTLO_OP:
				`SET_HILO_OUT(1'b1,	HI,			   		reg1_i);
			`EXE_DIV_OP, `EXE_DIVU_OP:
				`SET_HILO_OUT(1'b1, div_result_i[63:32],div_result_i[31:0]);
		endcase
	end

    `undef SET_MARITH
    `undef SET_HILO_OUT
    `undef SET_DIV

endmodule
