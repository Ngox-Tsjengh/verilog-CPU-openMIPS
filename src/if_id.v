`timescale 1ns/1ps
`include "defines.v"
module if_id(
	input wire		clk,
	input wire		rst,

	/* From Instruction Fetch Stage */
	input wire[`InstAddrBus]	if_pc,
	//Get Instruction from ROM
	input wire[`InstBus]		if_inst,

	/* From Control Module */
	input wire[5:0]				stall,

	/* To Instruction Decipher Stage */
	output reg[`InstAddrBus]	id_pc,
	output reg[`InstBus]		id_inst
);

	always @(posedge clk) begin
		if (rst == `RstEnable) begin
			id_pc	<= `ZeroWord;
			id_inst <= `ZeroWord;
		end else if (stall[1] == `Stop && stall[2] == `NoStop) begin
			id_pc	<= `ZeroWord;
			id_inst <= `ZeroWord;
		end else if (stall[1] == `NoStop) begin
			id_pc   <= if_pc;
			id_inst <= if_inst;
		end
	end

endmodule
