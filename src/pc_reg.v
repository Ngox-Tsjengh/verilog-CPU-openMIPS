`timescale 1ns/1ps
`include "defines.v"
module pc_reg(
	input wire					clk,	
	input wire					rst,
	//From ID
	input wire					branch_flag_i,
	input wire[`RegBus]			branch_target_address_i,
	// From Control Module
	input wire[5:0]				stall,

	output reg[`InstAddrBus]	pc,
	output reg					ce		//ChipEnable
		//Instruction ROM 
);
	
	always @(posedge clk) begin
		if(rst == `RstEnable) begin
			ce <= `ChipDisable;
		end else begin
			ce <= `ChipEnable;
		end
	end

	always @(posedge clk) begin
		if(ce == `ChipDisable) begin
			pc 		<= 32'h00000000;
		end else if (stall[0] == `NoStop)begin
			if(branch_flag_i == `Branch)
				pc	<= branch_target_address_i;
			else
				pc	<= pc + 32'h4;
		end
	end
	
endmodule
