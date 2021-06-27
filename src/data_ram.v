`timescale 1ns/1ps
`include "defines.v"
module data_ram(
	input wire					clk,
	input wire					ce,
	input wire					we,
	input wire[3:0]				sel,
	input wire[`DataAddrBus]	addr,
	input wire[`DataBus]		data_i,

	output reg[`DataBus]		data_o
);
	reg[`ByteWidth]				bank0 [0:`DataMemNum-1];
	reg[`ByteWidth]				bank1 [0:`DataMemNum-1];
	reg[`ByteWidth]				bank2 [0:`DataMemNum-1];
	reg[`ByteWidth]				bank3 [0:`DataMemNum-1];

	wire[`DataMemNumLog2-1:0]	saddr = addr[`DataMemNumLog2+1:2];

	/* Store Data*/
	always @(posedge clk) begin
		if(ce == `ChipEnable) begin
			//data_o 					<= `ZeroWord;
		end else if(we == `WriteEnable) begin
			if (sel[3])	bank3[saddr]	<= data_i[31:24];
			if (sel[2])	bank2[saddr]	<= data_i[23:16];
			if (sel[1])	bank1[saddr]	<= data_i[15: 8];
			if (sel[0])	bank0[saddr]	<= data_i[ 7: 0];
		end
	end

	/* Load Data*/
	always @(*) begin
		if (ce == `ChipDisable) 	data_o	= `ZeroWord;
		else if(we==`WriteDisable)	data_o	= {bank3[saddr], bank2[saddr], bank1[saddr], bank0[saddr]};
		else						data_o	= `ZeroWord;
	end

endmodule
