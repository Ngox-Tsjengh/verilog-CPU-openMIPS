`timescale 1ns/1ps
`include "defines.v"
module inst_rom(
	input wire					ce,
	input wire[`InstAddrBus]	addr,

	output reg[`InstBus]		inst
);

	//Define Data Array
	reg[`InstBus]				inst_mem[0:`InstMemNum-1];

	always @(*) begin
		if (ce==`ChipDisable) begin
			inst		= `ZeroWord;
		end else begin
			inst		= inst_mem[addr[`InstMemNumLog2+1:2]];
		end
	end

endmodule
