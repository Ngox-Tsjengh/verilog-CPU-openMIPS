`timescale 1ns/1ps
`include "defines.v"
module mem(
	input wire				rst,

	input wire[`RegAddrBus]	wd_i,
	input wire				wreg_i,
	input wire[`RegBus]		wdata_i,
	input wire[`RegBus]		hi_i,
	input wire[`RegBus]		lo_i,
	input wire				whilo_i,
	// Load & Store
	input wire[`AluOpBus]	aluop_i,
	input wire[`RegBus]		reg2_i,
	input wire[`RegBus]		mem_addr_i,
	// From Data ROM
	input wire[`RegBus]		mem_data_i,

	output reg[`RegAddrBus]	wd_o,
	output reg				wreg_o,
	output reg[`RegBus]		wdata_o,
	output reg[`RegBus]		hi_o,
	output reg[`RegBus]		lo_o,
	output reg				whilo_o,
	// Load & Store
	output reg[`RegBus]		mem_addr_o,		//! Memory to Access
	output reg				mem_we_o,		//! Write(1) or Read(0)
	output reg[3:0]			mem_sel_o,		//! Which Bit
	output reg[`RegBus]		mem_data_o,		//! Data to Write
	output reg				mem_ce_o		//! RAM Enable
);

		`define SET_MEM(i_wdata, i_mem_we, i_mem_sel, i_mem_addr, i_mem_data, i_mem_ce) if(1) begin \
			wdata_o     = i_wdata    ; \
			mem_we_o    = i_mem_we   ; \
			mem_sel_o   = i_mem_sel  ; \
			mem_addr_o  = i_mem_addr ; \
			mem_data_o  = i_mem_data ; \
			mem_ce_o    = i_mem_ce   ; \
		end else if(0)

	always @(*) begin
		if (rst==`RstEnable) begin
			wd_o		= `NOPRegAddr;
			wreg_o		= `WriteDisable;
			hi_o		= `ZeroWord;
			lo_o		= `ZeroWord;
			whilo_o		= `WriteDisable;
			`SET_MEM(`ZeroWord, `WriteDisable, 4'b0000, `ZeroWord, `ZeroWord, `ChipDisable);
		end else begin
			wd_o		= wd_i;
			wreg_o		= wreg_i;
			hi_o		= hi_i;
			lo_o		= lo_i;
			whilo_o		= whilo_i;
			`SET_MEM(wdata_i, 0, 4'b1111, 0, 0, 0);
			case(aluop_i)
				`EXE_LB_OP: case(mem_addr_i[1:0])
					2'b00:	`SET_MEM( ({{24{mem_data_i[31]}},mem_data_i[31:24]}), 0, 4'b1000, mem_addr_i, 0, 1);
					2'b01:	`SET_MEM( ({{24{mem_data_i[23]}},mem_data_i[23:16]}), 0, 4'b0100, mem_addr_i, 0, 1);
					2'b10:	`SET_MEM( ({{24{mem_data_i[15]}},mem_data_i[15: 8]}), 0, 4'b0010, mem_addr_i, 0, 1);
					2'b11:	`SET_MEM( ({{24{mem_data_i[ 7]}},mem_data_i[ 7: 0]}), 0, 4'b0001, mem_addr_i, 0, 1);
				endcase
				`EXE_LBU_OP: case(mem_addr_i[1:0])
					2'b00:	`SET_MEM( ({{24{1'b0}},mem_data_i[31:24]}), 0, 4'b1000, mem_addr_i, 0, 1);
					2'b01:	`SET_MEM( ({{24{1'b0}},mem_data_i[23:16]}), 0, 4'b0100, mem_addr_i, 0, 1);
					2'b10:	`SET_MEM( ({{24{1'b0}},mem_data_i[15: 8]}), 0, 4'b0010, mem_addr_i, 0, 1);
					2'b11:	`SET_MEM( ({{24{1'b0}},mem_data_i[ 7: 0]}), 0, 4'b0001, mem_addr_i, 0, 1);
				endcase
				`EXE_LH_OP: case(mem_addr_i[1:0])
					2'b00:	`SET_MEM( ({{16{mem_data_i[31]}},mem_data_i[31:16]}), 0, 4'b1100, mem_addr_i, 0, 1);
					2'b10:	`SET_MEM( ({{16{mem_data_i[15]}},mem_data_i[15: 0]}), 0, 4'b0011, mem_addr_i, 0, 1);
				endcase
				`EXE_LHU_OP: case(mem_addr_i[1:0])
					2'b00:	`SET_MEM( ({{16{1'b0}},mem_data_i[31:16]}), 0, 4'b1000, mem_addr_i, 0, 1);
					2'b10:	`SET_MEM( ({{16{1'b0}},mem_data_i[15: 0]}), 0, 4'b0010, mem_addr_i, 0, 1);
				endcase
				`EXE_LW_OP: `SET_MEM(mem_data_i, 0, 4'b1111, mem_addr_i, 0, 1);
				`EXE_LWL_OP: case(mem_addr_i[1:0])
					2'b00:	`SET_MEM( (mem_data_i[31:0]				 ), 0, 4'b1111, ({mem_addr_i[31:2],2'b00}), 0, 1);
					2'b01:	`SET_MEM(({mem_data_i[23:0],reg2_i[7 :0]}), 0, 4'b1111, ({mem_addr_i[31:2],2'b00}), 0, 1);
					2'b10:	`SET_MEM(({mem_data_i[15:0],reg2_i[15:0]}), 0, 4'b1111, ({mem_addr_i[31:2],2'b00}), 0, 1);
					2'b11:	`SET_MEM(({mem_data_i[7 :0],reg2_i[23:0]}), 0, 4'b1111, ({mem_addr_i[31:2],2'b00}), 0, 1);
				endcase
				`EXE_LWR_OP: case(mem_addr_i[1:0])
					2'b00:	`SET_MEM(({reg2_i[31: 8],mem_data_i[ 7:0]}), 0, 4'b1111, ({mem_addr_i[31:2],2'b00}), 0, 1);
					2'b01:	`SET_MEM(({reg2_i[31:16],mem_data_i[15:0]}), 0, 4'b1111, ({mem_addr_i[31:2],2'b00}), 0, 1);
					2'b10:	`SET_MEM(({reg2_i[31:24],mem_data_i[23:0]}), 0, 4'b1111, ({mem_addr_i[31:2],2'b00}), 0, 1);
					2'b11:	`SET_MEM( (mem_data_i[31:0]	  			  ), 0, 4'b1111, ({mem_addr_i[31:2],2'b00}), 0, 1);
				endcase
				`EXE_SB_OP: begin
					`SET_MEM(wdata_i, 1, 4'b0000, mem_addr_i, ({reg2_i[7:0],reg2_i[7:0],reg2_i[7:0],reg2_i[7:0]}), 1);
					case(mem_addr_i[1:0])
						2'b00:	mem_sel_o = 4'b1000;
						2'b01:	mem_sel_o = 4'b0100;
						2'b10:	mem_sel_o = 4'b0010;
						2'b11:	mem_sel_o = 4'b0001;
					endcase
				end
				`EXE_SH_OP: begin
					`SET_MEM(wdata_i, 1, 4'b0000, mem_addr_i, ({reg2_i[15:0],reg2_i[15:0]}), 1);
					case(mem_addr_i[1:0])
						2'b00:	mem_sel_o = 4'b1100;
						2'b10:	mem_sel_o = 4'b0011;
					endcase
				end
				`EXE_SW_OP: begin
					`SET_MEM(wdata_i, 1, 4'b1111, mem_addr_i, reg2_i, 1);
				end
				`EXE_SWL_OP: begin 
					`SET_MEM(wdata_i, 1, 4'b0000, ({mem_addr_i[31:2], 2'b00}), 0, 1);
					case(mem_addr_i[1:0])
						2'b00:	`SET_MEM(wdata_i, 1, 4'b1111, ({mem_addr_i[31:2], 2'b00}), reg2_i, 1);
						2'b01:	`SET_MEM(wdata_i, 1, 4'b0111, ({mem_addr_i[31:2], 2'b00}), ({8'b0, reg2_i[31:8]}) , 1);
						2'b10:	`SET_MEM(wdata_i, 1, 4'b0011, ({mem_addr_i[31:2], 2'b00}), ({16'b0, reg2_i[31:16]}), 1);
						2'b11:	`SET_MEM(wdata_i, 1, 4'b0001, ({mem_addr_i[31:2], 2'b00}), ({24'b0, reg2_i[31:24]}), 1);
					endcase
				end
				`EXE_SWR_OP: begin 
					`SET_MEM(wdata_i, 1, 4'b0000, ({mem_addr_i[31:2], 2'b00}), 0, 1);
					case(mem_addr_i[1:0])
						2'b00:	`SET_MEM(wdata_i, 1, 4'b1000, ({mem_addr_i[31:2], 2'b00}), ({reg2_i[7:0], 24'b0}), 1);
						2'b01:	`SET_MEM(wdata_i, 1, 4'b1100, ({mem_addr_i[31:2], 2'b00}), ({reg2_i[15:0], 16'b0}) , 1);
						2'b10:	`SET_MEM(wdata_i, 1, 4'b1110, ({mem_addr_i[31:2], 2'b00}), ({reg2_i[23:0], 8'b0}), 1);
						2'b11:	`SET_MEM(wdata_i, 1, 4'b1111, ({mem_addr_i[31:2], 2'b00}), {reg2_i[31:0]}, 1);
					endcase
				end
			endcase	//aluop_i
		end			//if
	end				//always

endmodule
