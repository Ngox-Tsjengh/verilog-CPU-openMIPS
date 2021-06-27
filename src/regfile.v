`timescale 1ns/1ps
`include "defines.v"
module regfile(
	//Only for write back
	input wire				clk,
	input wire				rst,

	//Get from ID module, don't need clk
	input wire				re1,
	input wire[`RegAddrBus]	raddr1,
	input wire				re2,
	input wire[`RegAddrBus]	raddr2,

	//From MEM/WB module, need clk to synchronise
	input wire				we,
	input wire[`RegAddrBus] waddr,
	input wire[`RegBus]		wdata,

	output reg[`RegBus]		rdata1,
	output reg[`RegBus]		rdata2
);

	/********************* 1. Define Registers ********************
	* There are 32 common registers, each of them are general purpose
	* except that $0 is always zero, which can simplify many designs
	***************************************************************/
	reg[`RegBus]			regs[0:`RegNum-1];

	/********************* 2.Write Data Back ********************
	* Write what we get from the last stage
	***************************************************************/

	initial begin
		for (integer i=0;i<=31;i=i+1)
			regs[i] = 32'h0;
	end

	always @(posedge clk) begin
		if (rst==`RstDisable) begin
			if((we==`WriteEnable) && (waddr!=`RegNumLog2'h0))begin
				regs[waddr]	<= wdata;
			end
		end
	end

	/********************* 3.Read Regfile and send to ID ****************
	* Write what we get from the last stage
	***************************************************************/
	always @(*) begin
		if (rst==`RstEnable) begin
			rdata1			= `ZeroWord;
		end else if (raddr1==`RegNumLog2'h0) begin
			rdata1			= `ZeroWord;
		//Prevent Data Hazard for RAW (two inst.s)
		end else if ((raddr1==waddr) && (re1==`ReadEnable) && (we==`WriteEnable)) begin
			rdata1			= wdata;
		end else if (re1==`ReadEnable) begin
			rdata1			= regs[raddr1];
		end else begin
			rdata1			= `ZeroWord;
		end
	end

	always @(*) begin
		if (rst==`RstEnable) begin
			rdata2			= `ZeroWord;
		end else if (raddr2==`RegNumLog2'h0) begin
			rdata2			= `ZeroWord;
		end else if ((raddr2==waddr) && (re2==`ReadEnable) && (we==`WriteEnable)) begin
			rdata2			= wdata;
		end else if (re2==`ReadEnable) begin
			rdata2			= regs[raddr2];
		end else begin
			rdata2			= `ZeroWord;
		end
	end

endmodule
