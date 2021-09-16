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
		$dumpvars(0, mem0x0000);
		$dumpvars(0, mem0x0004);
		$dumpvars(0, mem0x0008);
				rst = `RstEnable;
		#25 	rst = `RstDisable;

		// 1. test sb, lb, lbu
		//#20		//Next Posedge 		//Next Negedge, Middle of a clock cycle
		#100
		#20		`AR(1,32'h00000000);`AR(3,32'h0000EEFF);	//ori $3,$0,0xeeff
		#20		`AM(0,32'hxxxxxxFF);						//sb  $3,0x3($0)
		#20		`AR(1,32'h00000000);`AR(3,32'h000000EE);	//srl $3,$3,8
		#20		`AM(0,32'hxxxxEEFF);						//sb  $3,0x2($0)
		#20		`AR(1,32'h00000000);`AR(3,32'h0000CCDD);	//ori $3,$0,0xccdd
		#20		`AM(0,32'hxxDDEEFF);						//sb  $3,0x1($0)
		#20		`AR(1,32'h00000000);`AR(3,32'h000000CC);	//srl $3,$3,8
		#20		`AM(0,32'hCCDDEEFF);						//sb  $3,0x0($0)
		#20		`AR(1,32'hFFFFFFFF);`AR(3,32'h000000CC);	//lb  $1,0x3($0)
		#20		`AR(1,32'h000000EE);`AR(3,32'h000000CC);	//lbu $1,0x2($0)
		
		// 2. test sh, lh, lhu
		#20		`AR(1,32'h000000ee);`AR(3,32'h0000aabb);	//ori $3,$0,0xaabb
		#20		`AM(1,32'hAABBxxxx);
		#20		`AR(1,32'h0000aabb);`AR(3,32'h0000aabb);
		#20		`AR(1,32'hffffaabb);`AR(3,32'h0000AABB);
		#20		`AR(1,32'hffffaabb);`AR(3,32'h00008899);
		#20		`AM(1,32'hAABB8899);
		#20		`AR(1,32'hffff8899);`AR(3,32'h00008899);
		#20		`AR(1,32'h00008899);`AR(3,32'h00008899);

		// 3. test sw, lw ,lwl, lwr
		#20		`AR(1,32'h00008899);`AR(3,32'h00004455);
		#20		`AR(1,32'h00008899);`AR(3,32'h44550000);
		#20		`AR(1,32'h00008899);`AR(3,32'h44556677);
		#20		`AM(2,32'h44556677);
		#20		`AR(1,32'h44556677);`AR(3,32'h44556677);
		#20		`AR(1,32'hbb889977);`AR(3,32'h44556677);
		#20		`AR(1,32'hbb889944);`AR(3,32'h44556677);

		// 4.test swl, swr
		#20		`AR(1,32'hbb889944);`AR(3,32'h44556677);
		#20		`AR(1,32'hbb889944);`AR(3,32'h44556677);
		#20		`AR(1,32'hbb889944);`AR(3,32'h44556677);
		#20		`AR(1,32'hbb889944);`AR(3,32'h44556677);



		#1000 	$finish;
	end


endmodule
