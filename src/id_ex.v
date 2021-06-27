`timescale 1ns/1ps
`include "defines.v"
module id_ex(
	input wire				clk,
	input wire				rst,

	//Type and Sub-type of ALU Operation
	input wire[`AluOpBus]	id_aluop,
	input wire[`AluSelBus]	id_alusel,

	input wire[`RegBus]		id_reg1,	
	input wire[`RegBus]		id_reg2,

	input wire[`RegAddrBus]	id_wd,
	input wire				id_wreg,
	//Transfer
	input wire[`RegBus]		id_link_address,
	input wire				id_is_in_delayslot,
	input wire				next_inst_in_delay_slot_i,
	//Load & Store
	input wire[`RegBus]		id_inst,

	/* From Control */
	input wire[5:0]			stall,

	output reg[`AluSelBus]	ex_alusel,
	output reg[`AluOpBus]	ex_aluop,

	output reg[`RegBus]		ex_reg1,
	output reg[`RegBus]		ex_reg2,

	output reg[`RegAddrBus]	ex_wd,
	output reg				ex_wreg,
	//Transfer
	output reg[`RegBus]		ex_link_address,
	output reg				ex_is_in_delayslot_o,
	//Load & Store
	output reg[`RegBus]		ex_inst,

	/* To PC */
	output reg				is_in_delayslot_o
);

	always @(posedge clk) begin
		if (rst==`RstEnable || (stall[2] == `Stop && stall[3] == `NoStop)) begin
			ex_alusel		<= `EXE_RES_NOP;
			ex_aluop		<= `EXE_NOP_OP;
			ex_reg1			<= `ZeroWord;
			ex_reg2			<= `ZeroWord;
			ex_wd			<= `NOPRegAddr;
			ex_wreg			<= `WriteDisable;
			ex_link_address	<= `ZeroWord;
			ex_is_in_delayslot_o	<= `NotIndelaySlot;
			is_in_delayslot_o		<= `NotIndelaySlot;
			ex_inst			<= `ZeroWord;
		end else if (stall[2] == `NoStop ) begin
			ex_alusel		<= id_alusel;
			ex_aluop		<= id_aluop;
			ex_reg1			<= id_reg1;
			ex_reg2			<= id_reg2;
			ex_wd			<= id_wd;
			ex_wreg			<= id_wreg;
			ex_link_address	<= id_link_address;
			ex_is_in_delayslot_o	<= id_is_in_delayslot;
			is_in_delayslot_o		<= next_inst_in_delay_slot_i;
			ex_inst			<= id_inst;
		end 
	end

endmodule
