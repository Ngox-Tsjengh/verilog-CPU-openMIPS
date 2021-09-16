`timescale 1ns/1ps
`include "defines.v"
module div(
	input wire			clk,
	input wire			rst,
		
	input wire          signed_div_i,
	input wire[31:0]    opdata1_i,
	input wire[31:0]	opdata2_i,
	input wire          start_i,
	input wire          annul_i,

	output reg[63:0]    result_o,
	output reg			ready_o
);

	reg[1:0]			state;		//! Finite State Machine
	reg[5:0]			cnt;		//

	reg[31:0]			temp_op1;
	reg[31:0]			temp_op2;

	reg[64:0]			dividend;	//[cnt:0] Quotient; [31:cnt+1] not operated data; [63:32] Minuend (Reminder)
	reg[31:0]			divisor;	//Subtractor
	wire[32:0]			div_temp;
	assign div_temp = {1'b0,dividend[63:32]} - {1'b0,divisor};	

	always @(posedge clk) begin
		if (rst == `RstEnable) begin
			state		<= `DivFree;
			ready_o		<= `DivResultNotReady;
			result_o	<= {32'h0, 32'h0};
		end else begin
			case (state)
				//******************** DivFree ********************
				//1) Begin operation, Divisor = 0, Enter DivByZero state
				//2) Begin operation, Divisor ~=0, Enter DivOn state
				//3) No operation, keep ready_o as DivResultNotReady, result_o as 64'h0
				//*************************************************
				`DivFree: begin
					if(start_i==1'b1 && annul_i==1'b0) begin
						if(opdata2_i == 32'h0) begin
							state	<= `DivByZero;
						end else begin 
							state	<= `DivOn;
							cnt		<= 6'b000000;
							temp_op1 = (signed_div_i==1'b1 && opdata1_i[31]==1'b1) ? (~opdata1_i+1):(opdata1_i);
							temp_op2 = (signed_div_i==1'b1 && opdata2_i[31]==1'b1) ? (~opdata2_i+1):(opdata2_i);
							dividend	<= {1'h0, 32'h0, 32'h0};
							dividend[32:1]<= temp_op1;
							divisor		<= temp_op2;
						end
					end else begin //if(opdata2_i == 32'h0) 
						ready_o		<= `DivResultNotReady;
						result_o	<= {32'h0, 32'h0};
					end		//if	
				end			//DivFree
				//******************** DivByZero *****************
				//Enter DivEnd state, set results as 0
				//*************************************************
				`DivByZero: begin
					dividend		<= {1'h0, 32'h0, 32'h0};
					state			<= `DivEnd;
				end
				//******************** DivOn *********************
				//1) annul_i = 1, operation cancelled, back to DivFree
				//2) annul_i = 0. cnt != 32, keep DivOn, cnt++
				//	.1> div_temp < 0, result = 0
				//	.2> div_temp > 0, result = 1
				//3) annul_i = 0, cnt = 32, enter DivEnd
				//	.1> for signed operation, take 2's complement as results
				//*************************************************
				`DivOn: begin
					if (annul_i==1'b0) begin
						if (cnt != 6'b100000) begin
							dividend <= (div_temp[32]) ? {dividend[63:0],1'b0}:{div_temp[31:0],dividend[31:0],1'b1}; 
							cnt 	 <= cnt + 1;
						end else begin	//cnt == 32, operation ended
							if ((signed_div_i==1'b1) && (opdata1_i[31]^opdata2_i[31]==1'b1))
								dividend[31:0] <= (~dividend[31:0]+1);
							if ((signed_div_i==1'b1) && (opdata1_i[31]^dividend[64]==1'b1))
								dividend[64:33] <= (~dividend[64:33]+1);
							state	<= `DivEnd;
							cnt		<= 6'b000000;
						end
					end else begin 		//annul_i == 1
						state		<= `DivFree;
					end
				end			//DivOn
				//******************** DivEnd *********************
				//Operation Ended,
				//1) result_o[63:32] <= Reminder
				//1) result_o[31:0]	 <= Quotient
				//1) Wait for DivStop from EX module
				//1) Back to DivFree
				//*************************************************
				`DivEnd: begin
					result_o		<= {dividend[64:33], dividend[31:0]};
					ready_o			<= `DivResultReady;
					if (start_i == `DivStop) begin
						state		<= `DivFree;
						ready_o		<= `DivResultNotReady;
						result_o	<= {32'h0, 32'h0};
					end
				end
			endcase
		end		//if
	end			//always

endmodule
