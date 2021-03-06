`timescale 1ns/1ps
`include "../test/assert.v"

module inst_ll_sc_test();
    reg     clk, rst;
    integer i  ;

    openmips_min_sopc openmips_min_sopc0 (clk,rst);

    always #1 clk = ~clk;
    wire [31:0] mem0x0000 = {openmips_min_sopc0.data_ram0.bank3[0], openmips_min_sopc0.data_ram0.bank2[0], openmips_min_sopc0.data_ram0.bank1[0], openmips_min_sopc0.data_ram0.bank0[0]};
    wire [31:0] mem0x0004 = {openmips_min_sopc0.data_ram0.bank3[1], openmips_min_sopc0.data_ram0.bank2[1], openmips_min_sopc0.data_ram0.bank1[1], openmips_min_sopc0.data_ram0.bank0[1]};
    wire [31:0] mem0x0008 = {openmips_min_sopc0.data_ram0.bank3[2], openmips_min_sopc0.data_ram0.bank2[2], openmips_min_sopc0.data_ram0.bank1[2], openmips_min_sopc0.data_ram0.bank0[2]};
    initial begin
        $dumpfile("../test/waveform/inst_ll_sc_test.vcd");
        $dumpvars;
        $dumpvars(0, openmips_min_sopc0.openmips0.regfile1.regs[1]);
        $dumpvars(0, openmips_min_sopc0.openmips0.regfile1.regs[3]);

        $readmemh("../data/inst_ll_sc_test.data", openmips_min_sopc0.inst_rom0.inst_mem, 0, 13);

        clk = 0;
        rst = 1;
        #20 rst = 0;
        #12 `AR(1,32'h00001234);
        #2  `AR(1,32'h00001234);
        #2  `AR(1,32'h00005678);
        #2  `AR(1,32'h00000000);
        #2  `AR(1,32'h00001234);
        #2  `AR(1,32'h00001234);
        #2  `AR(1,32'h00000000);
        #2  `AR(1,32'h00001234);
        #2  `AR(1,32'h00001234);
        #2  `AR(1,32'h00001235);
        #2  `AR(1,32'h00000001);
        #2  `AR(1,32'h00001235);
        #20 `PASS(ll && sc instruction test);
    end

endmodule
