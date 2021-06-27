`timescale 1ns/1ps
`include "defines.v"
module ex_mem(
	input wire				clk,
	input wire				rst,

	input wire[`RegAddrBus]	ex_wd,
	input wire				ex_wreg,
	input wire[`RegBus]		ex_wdata,
	input wire[`RegBus]		ex_hi,
	input wire[`RegBus]		ex_lo,
	input wire				ex_whilo,
	// Load & Store
	input wire[`AluOpBus]	ex_aluop,
	input wire[`RegBus]		ex_reg2,
	input wire[`RegBus]		ex_mem_addr,
	
	/* From Control */
	input wire[5:0]			stall,
	/* Multiple Cycle Instruction */
	input wire[`DoubleRegBus] hilo_i,
	input wire[1:0]			cnt_i,

	output reg[`RegAddrBus]	mem_wd,
	output reg				mem_wreg,
	output reg[`RegBus]		mem_wdata,
	output reg[`RegBus]		mem_hi,
	output reg[`RegBus]		mem_lo,
	output reg				mem_whilo,
	// Load & Store
	output reg[`AluOpBus]	mem_aluop,			//! Tell MEM to L&S
	output reg[`RegBus]		mem_reg2,			//! Data to Store or Original Value of Reg to Load
	output reg[`RegBus]		mem_mem_addr,		//! Address of L&S Operation
	/* Multiple Cycle Instruction */
	output reg[`DoubleRegBus] hilo_o,
	output reg[1:0]			cnt_o
);
	
	always @(posedge clk) begin
		if (rst==`RstEnable) begin
			mem_wd		<= `NOPRegAddr;
			mem_wreg	<= `WriteDisable;
			mem_wdata	<= `ZeroWord;
			mem_hi		<= `ZeroWord;
			mem_lo		<= `ZeroWord;
			mem_whilo	<= `WriteDisable;
			hilo_o		<= {32'b0, 32'b0};
			cnt_o		<= 2'b00;
			mem_aluop	<= `EXE_NOP_OP;
			mem_reg2	<= `ZeroWord;
			mem_mem_addr<= `ZeroWord;
		end else if (stall[3] == `Stop && stall[4] == `NoStop) begin
			mem_wd		<= `NOPRegAddr;
			mem_wreg	<= `WriteDisable;
			mem_wdata	<= `ZeroWord;
			mem_hi		<= `ZeroWord;
			mem_lo		<= `ZeroWord;
			mem_whilo	<= `WriteDisable;
			hilo_o		<= hilo_i;
			cnt_o		<= cnt_i;
			mem_aluop	<= `EXE_NOP_OP;
			mem_reg2	<= `ZeroWord;
			mem_mem_addr<= `ZeroWord;
		end else if (stall[3] == `NoStop) begin
			mem_wd		<= ex_wd;
			mem_wreg	<= ex_wreg;
			mem_wdata	<= ex_wdata;
			mem_hi		<= ex_hi;
			mem_lo		<= ex_lo;
			mem_whilo	<= ex_whilo;
			hilo_o		<= {32'b0, 32'b0};
			cnt_o		<= 2'b00;
			mem_aluop	<= ex_aluop;
			mem_reg2	<= ex_reg2;
			mem_mem_addr<= ex_mem_addr;
//		end	else begin 	
//			hilo_i		<= hilo_i;
//			cnt_o		<= cnt_i;
		end		//if
	end			//always

endmodule
