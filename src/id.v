`timescale 1ns/1ps
`include "defines.v"
module id(
	input wire					rst,

	//Read Instruction from IF_ID
	input wire[`InstAddrBus] 	pc_i,
	input wire[`InstBus]		inst_i,

	//Read Data from Regfile
	input wire[`RegBus]			reg1_data_i,			
	input wire[`RegBus]			reg2_data_i,			

	/********** Data Forward **********/ 
	input wire					ex_wreg_i,
	input wire[`RegBus]			ex_wdata_i,
	input wire[`RegAddrBus]		ex_wd_i,
	input wire					mem_wreg_i,
	input wire[`RegBus]			mem_wdata_i,
	input wire[`RegAddrBus]		mem_wd_i,
	/********** Data Forward **********/ 

	//From ID/EX
	input wire					is_in_delayslot_i,

	//Send Information to Regfile
	output reg[`RegAddrBus]		reg1_addr_o,
	output reg[`RegAddrBus]		reg2_addr_o,
	output reg					reg1_read_o,
	output reg					reg2_read_o,

	//ALU operation
	output reg[`AluOpBus]		aluop_o,
	output reg[`AluSelBus]		alusel_o,
	//Read Info from Regfile and send to ID_EX
	output reg[`RegBus]			reg1_o,
	output reg[`RegBus]			reg2_o,
	//Which Reg to write
	output reg[`RegAddrBus]		wd_o,
	output reg					wreg_o,
	//Which Instruction is in ID: prepare for the Load & Store Opration
	output wire[`RegBus]			inst_o,

	/********** DelaySlot **********/ 
	//To ID
	output reg					branch_flag_o,
	output reg[`RegBus]			branch_target_address_o,
	//To ID/EX
	output reg[`RegBus]			link_addr_o,
	output reg					is_in_delayslot_o,
		//Loop Back
	output reg					next_inst_in_delay_slot_o,
	/********** DelaySlot **********/ 

	/* To Control Module */
	output wire					stallreq
);

	/* Get Opration Code */
		//Opcode(6) in R,I,J
		wire [5:0] op		= inst_i[31:26];
		//Shamt(5) in R
		wire [4:0] shamt	= inst_i[10:6];		//offset
		//Funct(6) in R
		wire [5:0] funct	= inst_i[5:0];
		//rs(5) in R,I
		wire [4:0] rs		= inst_i[25:21];
		//rt(5) in R,I
		wire [4:0] rt		= inst_i[20:16];
		//rd(5) in R,I,J
		wire [4:0] rd		= inst_i[15:11];
		//Sign-extended Imm
		wire [31:0] sgn_imm	= {{16{inst_i[15]}}, inst_i[15:0]};
		//Zero-extended Imm
		wire [31:0] zro_imm	= {16'h0,inst_i[15:0]};

	/* Immediate Number */
	reg [`RegBus] imm ;
		wire [`RegBus] sa	= {27'h0,shamt[4:0]};
	
	/* State */
	reg 	inst_valid;

	/* Stall Request */
	assign stallreq = `NoStop;

	/* DelaySlot */
	wire [`RegBus] pc_8		= pc_i + 8; 
	wire [`RegBus] pc_4		= pc_i + 4; 
	wire [`RegBus] pc_jump	= {pc_4[31:28], inst_i[25:0], 2'b00};
	wire [`RegBus] pc_branch= pc_4 + {{14{inst_i[15]}},inst_i[15:0],2'b00};

	/* Load & Store */
	assign inst_o = inst_i;

	/********************* 1.Instruction Decipher ********************
	* In this Stage, OP1(31~26) is read, then we send instruction 
	* to other stage
	***************************************************************/
	
		`define SET_INST(i_aluop, i_alusel, i_read1, i_reg1_addr, i_read2, i_reg2_addr, i_wreg, i_wd, i_imm, i_inst_valid) if(1) begin \
			aluop_o       =  i_aluop       ; \
			alusel_o      =  i_alusel      ; \
			reg1_read_o   =  i_read1       ; \
			reg1_addr_o   =  i_reg1_addr   ; \
			reg2_read_o   =  i_read2       ; \
			reg2_addr_o   =  i_reg2_addr   ; \
			wreg_o        =  i_wreg        ; \
			wd_o	      =  i_wd          ; \
			imm           =  i_imm         ; \
			inst_valid    =  i_inst_valid  ; \
		end else if(0)
		/* Transfer Instruction */
		`define SET_BRANCH(i_branch_flag, i_branch_target_addr, i_link_addr, i_next_in_delay_slot) if(1) begin \
			branch_flag_o         		=  i_branch_flag         ; \
			branch_target_address_o		=  i_branch_target_addr  ; \
			link_addr_o           		=  i_link_addr           ; \
			next_inst_in_delay_slot_o	=  i_next_in_delay_slot  ; \
		end else if(0)
	/* Instruction Decipher */
	always @(*) begin 
		if(rst==`RstEnable) begin 
			`SET_INST(`EXE_NOP_OP,`EXE_RES_NOP,`ReadDisable,`NOPRegAddr,`ReadDisable,`NOPRegAddr,`WriteDisable,`NOPRegAddr,`ZeroWord,`InstValid);
			//Mind this ! valide (1'b0) and it's nop
			`SET_BRANCH(`NotBranch, `ZeroWord, `ZeroWord, `NotIndelaySlot);
		end else begin
			`SET_INST(`EXE_NOP_OP,`EXE_RES_NOP,0,rs,0,rt,0,rd,`ZeroWord,1);
			`SET_BRANCH(`NotBranch, `ZeroWord, `ZeroWord, `NotIndelaySlot);
			case(op) 					//op(31~26)
				`EXE_SPEC_INST:	begin	//op(31~26):5'0 indicates special instruction
					case(funct)
							//This will cause reg2_read_o to be 1 after reset, but it's ok
						`EXE_SLL:	`SET_INST(`EXE_SLL_OP,	`EXE_RES_SHIFT,0,rs,1,rt,1,rd,sa,0);
						`EXE_SRL:	`SET_INST(`EXE_SRL_OP,	`EXE_RES_SHIFT,0,rs,1,rt,1,rd,sa,0);
						`EXE_SRA:	`SET_INST(`EXE_SRA_OP,	`EXE_RES_SHIFT,0,rs,1,rt,1,rd,sa,0);
						`EXE_SLLV:	`SET_INST(`EXE_SLL_OP,	`EXE_RES_SHIFT,1,rs,1,rt,1,rd,0 ,0);
						`EXE_SRLV:	`SET_INST(`EXE_SRL_OP,	`EXE_RES_SHIFT,1,rs,1,rt,1,rd,0 ,0);
						`EXE_SRAV:	`SET_INST(`EXE_SRA_OP,	`EXE_RES_SHIFT,1,rs,1,rt,1,rd,0 ,0);

						`EXE_OR:	`SET_INST(`EXE_OR_OP,	`EXE_RES_LOGIC,1,rs,1,rt,1,rd,0 ,0);
						`EXE_AND:	`SET_INST(`EXE_AND_OP,	`EXE_RES_LOGIC,1,rs,1,rt,1,rd,0 ,0);
						`EXE_XOR:	`SET_INST(`EXE_XOR_OP,	`EXE_RES_LOGIC,1,rs,1,rt,1,rd,0 ,0);
						`EXE_NOR:	`SET_INST(`EXE_NOR_OP, 	`EXE_RES_LOGIC,1,rs,1,rt,1,rd,0 ,0);
							//sa != 0
						`EXE_SYNC:	`SET_INST(`EXE_NOP_OP,	`EXE_RES_NOP,  0,rs,0,rt,0,rd,0 ,0);

						`EXE_MTHI:	`SET_INST(`EXE_MTHI_OP,	`EXE_RES_NOP,  1,rs,0,rt,0,rd,0 ,0);
						`EXE_MTLO:	`SET_INST(`EXE_MTLO_OP,	`EXE_RES_NOP,  1,rs,0,rt,0,rd,0 ,0);
						`EXE_MFHI:	`SET_INST(`EXE_MFHI_OP,	`EXE_RES_MOVE, 0,rs,0,rt,1,rd,0 ,0);
						`EXE_MFLO:	`SET_INST(`EXE_MFLO_OP,	`EXE_RES_MOVE, 0,rs,0,rt,1,rd,0 ,0);
						`EXE_MOVN:	`SET_INST(`EXE_MOVN_OP,	`EXE_RES_MOVE, 1,rs,1,rt,reg2_o!=0,rd,0,0);
						`EXE_MOVZ:	`SET_INST(`EXE_MOVZ_OP,	`EXE_RES_MOVE, 1,rs,1,rt,reg2_o==0,rd,0,0);
							
						`EXE_ADD:	`SET_INST(`EXE_ADD_OP,	`EXE_RES_ARITH,1,rs,1,rt,1,rd,0	,0);	
						`EXE_ADDU:	`SET_INST(`EXE_ADDU_OP,	`EXE_RES_ARITH,1,rs,1,rt,1,rd,0	,0);	
						`EXE_SUB:	`SET_INST(`EXE_SUB_OP,	`EXE_RES_ARITH,1,rs,1,rt,1,rd,0	,0);	
						`EXE_SUBU:	`SET_INST(`EXE_SUBU_OP,	`EXE_RES_ARITH,1,rs,1,rt,1,rd,0	,0);	
						`EXE_SLT:	`SET_INST(`EXE_SLT_OP,	`EXE_RES_ARITH,1,rs,1,rt,1,rd,0	,0);	
						`EXE_SLTU:	`SET_INST(`EXE_SLTU_OP,	`EXE_RES_ARITH,1,rs,1,rt,1,rd,0	,0);	
						`EXE_MULT:	`SET_INST(`EXE_MULT_OP,	`EXE_RES_NOP,  1,rs,1,rt,0,rd,0	,0);	
						`EXE_MULTU:	`SET_INST(`EXE_MULTU_OP,`EXE_RES_NOP,  1,rs,1,rt,0,rd,0	,0);	

						`EXE_DIV:	`SET_INST(`EXE_DIV_OP,	`EXE_RES_NOP,  1,rs,1,rt,0,rd,0 ,0);
						`EXE_DIVU:	`SET_INST(`EXE_DIVU_OP,	`EXE_RES_NOP,  1,rs,1,rt,0,rd,0 ,0);

						`EXE_JR: begin
									`SET_INST(`EXE_JR_OP,	`EXE_RES_TRAN, 1,rs,0,rt,0,rd,0, 0);
									`SET_BRANCH(1'b1, reg1_o, 32'h0, 1'b1);
						end
						`EXE_JALR: begin
									`SET_INST(`EXE_JALR_OP,	`EXE_RES_TRAN, 1,rs,0,rt,1,rd,0, 0);
									`SET_BRANCH(1'b1, reg1_o, pc_8,  1'b1);
						end
					endcase		//case(funct)
				end				//`EXE_SPEC_INST
				`EXE_SPEC2_INST: begin	//op(31~26):6'b011100 indicates special-2 instruction
					case(funct)
						`EXE_MUL:	`SET_INST(`EXE_MUL_OP,	`EXE_RES_MUL,  1,rs,1,rt,1,rd,0 ,0);

						`EXE_CLZ:	`SET_INST(`EXE_CLZ_OP,	`EXE_RES_ARITH,1,rs,0,rt,1,rd,0 ,0);
						`EXE_CLO:	`SET_INST(`EXE_CLO_OP,	`EXE_RES_ARITH,1,rs,0,rt,1,rd,0 ,0);
							//AluSel can also be `EXE_RES_NOP since we don't write general registers
						`EXE_MADD:	`SET_INST(`EXE_MADD_OP,	`EXE_RES_MUL,  1,rs,1,rt,0,rd,0 ,0);
						`EXE_MADDU:	`SET_INST(`EXE_MADDU_OP,`EXE_RES_MUL,  1,rs,1,rt,0,rd,0 ,0);
						`EXE_MSUB:	`SET_INST(`EXE_MSUB_OP,	`EXE_RES_MUL,  1,rs,1,rt,0,rd,0 ,0);
						`EXE_MSUBU:	`SET_INST(`EXE_MSUBU_OP,`EXE_RES_MUL,  1,rs,1,rt,0,rd,0 ,0);
					endcase		
				end				//`EXE_SPEC2_INST
				`EXE_ORI:	`SET_INST(`EXE_OR_OP,	`EXE_RES_LOGIC,1,rs,0,rt,1,rt,zro_imm,0);
				`EXE_ANDI:	`SET_INST(`EXE_AND_OP,	`EXE_RES_LOGIC,1,rs,0,rt,1,rt,zro_imm,0);
				`EXE_XORI:	`SET_INST(`EXE_XOR_OP,	`EXE_RES_LOGIC,1,rs,0,rt,1,rt,zro_imm,0);
				`EXE_LUI:	`SET_INST(`EXE_OR_OP,	`EXE_RES_LOGIC,0,rs,0,rt,1,rt,({inst_i[15:0],16'h0}),0);
				`EXE_PERF:	`SET_INST(`EXE_NOP_OP,	`EXE_RES_NOP  ,0,rs,0,rt,0,rd,0 ,0);

				`EXE_ADDI:	`SET_INST(`EXE_ADDI_OP,	`EXE_RES_ARITH,1,rs,0,rt,1,rt,sgn_imm,0);
				`EXE_ADDIU:	`SET_INST(`EXE_ADDIU_OP,`EXE_RES_ARITH,1,rs,0,rt,1,rt,sgn_imm,0);
				`EXE_SLTI:	`SET_INST(`EXE_SLT_OP,	`EXE_RES_ARITH,1,rs,0,rt,1,rt,sgn_imm,0);
				`EXE_SLTIU:	`SET_INST(`EXE_SLTU_OP,	`EXE_RES_ARITH,1,rs,0,rt,1,rt,sgn_imm,0);

				`EXE_LB:	`SET_INST(`EXE_LB_OP,	`EXE_RES_MEM,  1,rs,0,rt,1,rt,0	,0);
				`EXE_LBU:	`SET_INST(`EXE_LBU_OP,	`EXE_RES_MEM,  1,rs,0,rt,1,rt,0	,0);
				`EXE_LH:	`SET_INST(`EXE_LH_OP,	`EXE_RES_MEM,  1,rs,0,rt,1,rt,0	,0);
				`EXE_LHU:	`SET_INST(`EXE_LHU_OP,	`EXE_RES_MEM,  1,rs,0,rt,1,rt,0	,0);
				`EXE_LW:	`SET_INST(`EXE_LW_OP,	`EXE_RES_MEM,  1,rs,0,rt,1,rt,0	,0);
				`EXE_LWL:	`SET_INST(`EXE_LWL_OP,	`EXE_RES_MEM,  1,rs,1,rt,1,rt,0	,0);
				`EXE_LWR:	`SET_INST(`EXE_LWR_OP,	`EXE_RES_MEM,  1,rs,1,rt,1,rt,0	,0);
				`EXE_SB:	`SET_INST(`EXE_SB_OP,	`EXE_RES_MEM,  1,rs,1,rt,0,rd,0	,0);
				`EXE_SH:	`SET_INST(`EXE_SH_OP,	`EXE_RES_MEM,  1,rs,1,rt,0,rd,0	,0);
				`EXE_SW:	`SET_INST(`EXE_SW_OP,	`EXE_RES_MEM,  1,rs,1,rt,0,rd,0	,0);
				`EXE_SWL:	`SET_INST(`EXE_SWL_OP,	`EXE_RES_MEM,  1,rs,1,rt,0,rd,0	,0);
				`EXE_SWR:	`SET_INST(`EXE_SWR_OP,	`EXE_RES_MEM,  1,rs,1,rt,0,rd,0	,0);

				`EXE_J: begin
							`SET_INST(`EXE_J_OP,	`EXE_RES_TRAN, 0,rs,0,rt,0,rd	,0	,0);
							`SET_BRANCH(1'b1, pc_jump, 32'h0,	 1'b1);
				end
				`EXE_JAL: begin
							`SET_INST(`EXE_JAL_OP,	`EXE_RES_TRAN, 0,rs,0,rt,1,5'd31,0  ,0);
							`SET_BRANCH(1'b1, pc_jump, pc_8,	 1'b1);
				end
				`EXE_BEQ: begin
							`SET_INST(`EXE_BEQ_OP,	`EXE_RES_TRAN, 1,rs,1,rt,0,rd	,0	,0);
					if(reg1_o == reg2_o) 	`SET_BRANCH(1'b1, pc_branch, 32'h0,	1'b1);
				end
				`EXE_BGTZ: begin
							`SET_INST(`EXE_BGTZ_OP,	`EXE_RES_TRAN, 1,rs,0,rt,0,rd	,0  ,0);
					if(reg1_o[31]==1'b0 && (reg1_o!=32'h0))	`SET_BRANCH(1'b1, pc_branch, 32'h0,	1'b1);
				end
				`EXE_BLEZ: begin
							`SET_INST(`EXE_BLEZ_OP,	`EXE_RES_TRAN, 1,rs,0,rt,0,rd	,0   ,0);
					if(reg1_o[31]==1'b1 || (reg1_o==32'h0))	`SET_BRANCH(1'b1, pc_branch, 32'h0,	1'b1);
				end
				`EXE_BNE: begin
							`SET_INST(`EXE_BNE_OP,	`EXE_RES_TRAN, 1,rs,1,rt,0,rd	,0   ,0);
					if(reg1_o == reg2_o)	`SET_BRANCH(1'b1, pc_branch, 32'h0,	1'b1);
				end
				`EXE_REGIMM_INST: begin	//op(31~26):6'b000001 indicates 
					case(rt)
						`EXE_BGEZ: begin
							`SET_INST(`EXE_BGEZ_OP,	`EXE_RES_TRAN, 1,rs,0,rt,0,rd	,0   ,0);
							if(reg1_o[31]==1'b0)	`SET_BRANCH(1'b1, pc_branch, 32'h0,	1'b1);
						end
						`EXE_BGEZAL: begin
							`SET_INST(`EXE_BGEZAL_OP,`EXE_RES_TRAN,1,rs,0,rt,1,5'd31,0   ,0);
							if(reg1_o[31]==1'b0)	`SET_BRANCH(1'b1, pc_branch, pc_8,	1'b1);
						end
						`EXE_BLTZ: begin
							`SET_INST(`EXE_BLTZ_OP,	`EXE_RES_TRAN, 1,rs,0,rt,0,rd	,0   ,0);
							if(reg1_o[31]==1'b1)	`SET_BRANCH(1'b1, pc_branch, 32'h0,	1'b1);
						end
						`EXE_BLTZAL: begin
							`SET_INST(`EXE_BLTZAL_OP,`EXE_RES_TRAN,1,rs,0,rt,1,5'd31,0   ,0);
							if(reg1_o[31]==1'b1)	`SET_BRANCH(1'b1, pc_branch, pc_8,	1'b1);
						end
					endcase
				end
			endcase	//case(op)
		end			//if
	end				//always

	/********************* 2.Get the Source Operators ********************/
	always @(*) begin
		if(rst==`RstEnable) begin
			reg1_o		= `ZeroWord;
		end else if((reg1_read_o==1'b1) && (ex_wreg_i==1'b1) && (reg1_addr_o==ex_wd_i)) begin
			reg1_o		= ex_wdata_i;
		end else if((reg1_read_o==1'b1) && (mem_wreg_i==1'b1) && (reg1_addr_o==mem_wd_i)) begin
			reg1_o		= mem_wdata_i;
		end else if(reg1_read_o == 1'b1) begin
			reg1_o 		= reg1_data_i;
		end else if(reg1_read_o == 1'b0) begin
			reg1_o 		= imm;
		end else begin
			reg1_o		= `ZeroWord;
		end
	end
	
	always @(*) begin
		if(rst==`RstEnable) begin
			reg2_o		= `ZeroWord;
		end else if((reg2_read_o==1'b1) && (ex_wreg_i==1'b1) && (reg2_addr_o==ex_wd_i)) begin
			reg2_o		= ex_wdata_i;
		end else if((reg2_read_o==1'b1) && (mem_wreg_i==1'b1) && (reg2_addr_o==mem_wd_i)) begin
			reg2_o		= mem_wdata_i;
		end else if(reg2_read_o == 1'b1) begin
			reg2_o 		= reg2_data_i;
		end else if(reg2_read_o == 1'b0) begin
			reg2_o 		= imm;
		end else begin
			reg2_o		= `ZeroWord;
		end
	end

	//! DelaySlot 
	always @(*) begin
		if(rst == `RstEnable) begin
			is_in_delayslot_o	= `NotIndelaySlot;
		end else begin
			is_in_delayslot_o	= is_in_delayslot_i;
		end
	end

    `undef SET_INST
    `undef SET_BRANCH

endmodule
