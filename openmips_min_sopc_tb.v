`timescale 1ns/1ps
`include "defines.v"

module openmips_min_sopc_tb();

	reg 	CLOCK_50;
	reg		rst;

	openmips_min_sopc openmips_min_sopc0(
		.clk(CLOCK_50),
		.rst(rst)
	);

	initial begin
		CLOCK_50 = 1'b0;
		forever #10 CLOCK_50 = ~CLOCK_50;
	end

	genvar i;		//dump registers
	for (i = 0; i < 8; i = i + 1) initial $dumpvars(0,openmips_min_sopc0.openmips0.regfile1.regs[i]);
	for (i = 0; i < 4; i = i + 1) initial $dumpvars(0,openmips_min_sopc0.data_ram0.bank3[i]);
	for (i = 0; i < 4; i = i + 1) initial $dumpvars(0,openmips_min_sopc0.data_ram0.bank2[i]);
	for (i = 0; i < 4; i = i + 1) initial $dumpvars(0,openmips_min_sopc0.data_ram0.bank1[i]);
	for (i = 0; i < 4; i = i + 1) initial $dumpvars(0,openmips_min_sopc0.data_ram0.bank0[i]);

	initial begin
		$readmemh ("inst_rom.data",openmips_min_sopc0.inst_rom0.inst_mem);
		$dumpfile("dump.vcd");
		$dumpvars(0,openmips_min_sopc0);
				rst = `RstEnable;
		#25 	rst = `RstDisable;
		#2000 	$finish;
	end

endmodule
