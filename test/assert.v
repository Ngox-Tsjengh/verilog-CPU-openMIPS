`ifndef	ASSERT_V
`define ASSERT_V

/* if env variable DEBUG if defined, the testbench will continue to 
 * executing rather than exiting when meeting wrong assetion.
 * */
`ifdef DEBUG
	`define ASSERT(x) if (1) begin \
			if (!(x)) begin \
			$display("\033[91;1m[%s:%0d] ASSERTION FAILURE: %s\033[0m", `__FILE__, `__LINE__, `"x`"); \
			$finish_and_return(1); \
		end \
	end else if (0)
`else 
	`define ASSERT(x) if (1) begin \
			if (!(x)) begin \
			$display("\033[91;1m[%s:%0d] TEST FAILURE: %s\033[0m", `__FILE__, `__LINE__, `"x`"); \
		end \
	end else if (0)
`endif //DEBUG

`define PASS(test) #2 \
if(1) begin \
	$display("\033[92;1m%s -> PASS\033[0m", `"test`");	\
	$finish;	\
end else if(0)

//! Memory Assertion
`define AM(id, expected) \
	`ASSERT({openmips_min_sopc0.data_ram0.bank3[id], openmips_min_sopc0.data_ram0.bank2[id], openmips_min_sopc0.data_ram0.bank1[id], openmips_min_sopc0.data_ram0.bank0[id]} === expected)

//! Generic Register Assertion
`define AR(id, expected) \
	`ASSERT(openmips_min_sopc0.openmips0.regfile1.regs[id] === expected)

//! HI Register Assertion
`define AHI(expected)	\
	`ASSERT(openmips_min_sopc0.openmips0.hilo_reg0.hi_o === expected)

//! Lo Register Assertion
`define ALO(expected)	\
	`ASSERT(openmips_min_sopc0.openmips0.hilo_reg0.lo_o === expected)

`endif
