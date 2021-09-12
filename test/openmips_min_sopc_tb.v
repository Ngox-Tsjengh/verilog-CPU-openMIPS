`timescale 1ns/1ps
`include "../src/defines.v"
`include "../test/assert.v"

module openmips_min_sopc_tb();

	reg 	clk;
	reg		rst;

	openmips_min_sopc openmips_min_sopc0(
		.clk(clk),
		.rst(rst)
	);

	initial begin
		clk = 1'b0;
		forever #10 clk = ~clk;
	end

		`define CAT_MEMORY(name, address) \
			{ ``name``3[``address``], ``name``2[``address``], ``name``1[``address``], ``name``0[``address``] }

	// Dump Memory
	wire [31:0] mem0x0000 =	`CAT_MEMORY(openmips_min_sopc0.data_ram0.bank, 0);
	wire [31:0] mem0x0004 =	`CAT_MEMORY(openmips_min_sopc0.data_ram0.bank, 1);
	wire [31:0] mem0x0008 =	`CAT_MEMORY(openmips_min_sopc0.data_ram0.bank, 2);

	initial begin
		$readmemh ("data/inst_rom.data",openmips_min_sopc0.inst_rom0.inst_mem);
		$dumpfile("test/waveform/dump.vcd");
		$dumpvars(0, openmips_min_sopc0);
		$dumpvars(0, openmips_min_sopc0.openmips0.regfile1.regs[1]);
		$dumpvars(0, openmips_min_sopc0.openmips0.regfile1.regs[3]);
				rst = `RstEnable;
		#25 	rst = `RstDisable;

	//	#120	`AR(1,32'hxxxxxxxx);`AR(3,32'h0000EEFF);
	//	#20		`AR(1,32'hxxxxxxxx);`AR(3,32'h0000EEFF);
	//	#20		`AR(1,32'hxxxxxxxx);`AR(3,32'h000000EE);
	//	#20		`AR(1,32'hxxxxxxxx);`AR(3,32'h000000EE);
	//	#20	

		#1000 	$finish;
	end


endmodule
