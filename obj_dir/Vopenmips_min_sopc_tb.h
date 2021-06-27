// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VOPENMIPS_MIN_SOPC_TB_H_
#define VERILATED_VOPENMIPS_MIN_SOPC_TB_H_  // guard

#include "verilated_heavy.h"

//==========

class Vopenmips_min_sopc_tb__Syms;
class Vopenmips_min_sopc_tb_VerilatedVcd;


//----------

VL_MODULE(Vopenmips_min_sopc_tb) {
  public:
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ openmips_min_sopc_tb__DOT__CLOCK_50;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__rst;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__rom_ce;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i;
        CData/*3:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read;
        CData/*4:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr;
        CData/*4:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr;
        CData/*7:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o;
        CData/*2:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o;
        CData/*4:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o;
        CData/*7:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i;
        CData/*2:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_i;
        CData/*4:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wd_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_is_in_delayslot_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__is_in_delayslot_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_o;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o;
        CData/*1:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__signed_div;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_start;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_i;
        CData/*4:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_i;
        CData/*7:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i;
        CData/*1:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_o;
        CData/*4:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_o;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_o;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i;
        CData/*4:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_whilo_i;
        CData/*5:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__stall;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg1_eq_reg2;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub;
        CData/*0:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div;
        CData/*1:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__state;
        CData/*5:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__cnt;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__pc;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_link_address_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_inst_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wdata_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata1;
    };
    struct {
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata2;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_o;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_hi_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_lo_i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hi;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__lo;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_jump;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__temp_op1;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__temp_op2;
        WData/*64:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__dividend[3];
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__divisor;
        QData/*63:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o;
        QData/*63:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_result;
        QData/*63:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_i;
        QData/*63:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp;
        QData/*63:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres;
        QData/*63:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1;
        QData/*32:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__div_temp;
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[32];
        IData/*31:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__inst_rom0__DOT__inst_mem[131072];
        CData/*7:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank0[131072];
        CData/*7:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank1[131072];
        CData/*7:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank2[131072];
        CData/*7:0*/ openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank3[131072];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__openmips_min_sopc_tb__DOT__CLOCK_50;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vopenmips_min_sopc_tb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vopenmips_min_sopc_tb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vopenmips_min_sopc_tb(VerilatedContext* contextp, const char* name = "TOP");
    Vopenmips_min_sopc_tb(const char* name = "TOP")
      : Vopenmips_min_sopc_tb(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vopenmips_min_sopc_tb();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp);
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
    void __Vconfigure(Vopenmips_min_sopc_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
