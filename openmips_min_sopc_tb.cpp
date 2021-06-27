#include "Vopenmips_min_sopc_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main (int argc, char ** argv)
{
	Verilated::commandArgs(argc, argv);

	Vopenmips_min_sopc_tb * tb = new Vopenmips_min_sopc_tb;

	//unsigned tickcount = 0;
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	tb->trace(tfp,99);
	tfp->open("openmips_min_sopc_tb.vcd");

	//for (int k=0; k<(1<<20); k++){
	//	tick(++tickcount, tb, tfp);
	//	}
	while (!Verilated::gotFinish()) {
		tb->eval();
	}
	delete tb;
	return 0;
}
