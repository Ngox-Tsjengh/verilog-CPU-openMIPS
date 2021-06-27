// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopenmips_min_sopc_tb.h for the primary calling header

#include "Vopenmips_min_sopc_tb.h"
#include "Vopenmips_min_sopc_tb__Syms.h"

//==========

Vopenmips_min_sopc_tb::Vopenmips_min_sopc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vopenmips_min_sopc_tb__Syms(_vcontextp__, this, name());
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vopenmips_min_sopc_tb::__Vconfigure(Vopenmips_min_sopc_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vopenmips_min_sopc_tb::~Vopenmips_min_sopc_tb() {
#ifdef VM_TRACE
    if (VL_UNLIKELY(__VlSymsp->__Vm_dumping)) _traceDumpClose();
#endif  // VM_TRACE
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vopenmips_min_sopc_tb::_initial__TOP__1(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopenmips_min_sopc_tb::_initial__TOP__1\n"); );
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp2[4];
    // Body
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlSymsp->TOPp->_traceDumpOpen();
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[1U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[2U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[3U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[4U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[5U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[6U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[7U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[8U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[9U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0xaU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0xbU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0xcU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0xdU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0xeU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0xfU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x10U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x11U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x12U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x13U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x14U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x15U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x16U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x17U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x18U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x19U] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x1aU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x1bU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x1cU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x1dU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x1eU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0x1fU] = 0U;
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__unnamedblk1__DOT__i = 0x20U;
    vlTOPp->openmips_min_sopc_tb__DOT__CLOCK_50 = 0U;
    while (1U) {
        vlTOPp->openmips_min_sopc_tb__DOT__CLOCK_50 
            = (1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__CLOCK_50)));
    }
    __Vtemp2[0U] = 0x64617461U;
    __Vtemp2[1U] = 0x726f6d2eU;
    __Vtemp2[2U] = 0x6e73745fU;
    __Vtemp2[3U] = 0x69U;
    VL_READMEM_N(true, 32, 131072, 0, VL_CVT_PACK_STR_NW(4, __Vtemp2)
                 , vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__inst_rom0__DOT__inst_mem
                 , 0, ~0ULL);
    vlSymsp->_vm_contextp__->dumpfile(std::string("dump.vcd"));
    vlSymsp->TOPp->_traceDumpOpen();
    vlTOPp->openmips_min_sopc_tb__DOT__rst = 0U;
    VL_FINISH_MT("openmips_min_sopc_tb.v", 32, "");
}

void Vopenmips_min_sopc_tb::_settle__TOP__3(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopenmips_min_sopc_tb::_settle__TOP__3\n"); );
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__div_temp 
        = (0x1ffffffffULL & ((QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__dividend[1U])) 
                             - (QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__divisor))));
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp 
        = ((QData)((IData)(((((((0xa9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                                | (0x18U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                               | (0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                              | (0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                >> 0x1fU)) ? ((IData)(1U) 
                                              + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))
                             : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))) 
           * (QData)((IData)(((((((0xa9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                                  | (0x18U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                 | (0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                | (0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                  >> 0x1fU)) ? ((IData)(1U) 
                                                + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i))
                               : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i))));
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
        = ((((0x22U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0x23U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
            | (0x2aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))
            ? ((IData)(1U) + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i))
            : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i);
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_jump 
        = ((0xf0000000U & ((IData)(4U) + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i)) 
           | (0xffffffcU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                            << 2U)));
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch 
        = ((IData)(4U) + (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i 
                          + ((0xfffc0000U & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                            >> 0xfU)))) 
                                             << 0x12U)) 
                             | (0x3fffcU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            << 2U)))));
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm 
        = ((0xffff0000U & ((- (IData)((1U & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0xfU)))) 
                           << 0x10U)) | (0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i));
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o 
                        = ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                            ? 2U : ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                     ? 2U : ((3U == 
                                              (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                              ? 2U : 
                                             ((4U == 
                                               (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                               ? 2U
                                               : ((6U 
                                                   == 
                                                   (0x3fU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                   ? 2U
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x3fU 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                    ? 2U
                                                    : 1U))))));
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o 
                            = ((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                ? 1U : ((0x27U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                         ? 1U : ((0xfU 
                                                  == 
                                                  (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                  ? 0U
                                                  : 
                                                 ((0x11U 
                                                   == 
                                                   (0x3fU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                   ? 0U
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x3fU 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                    ? 0U
                                                    : 3U)))));
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o 
                                = ((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                    ? 3U : ((0x20U 
                                             == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                             ? 4U : 
                                            ((0x21U 
                                              == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                              ? 4U : 
                                             ((0x22U 
                                               == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                               ? 4U
                                               : ((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                   ? 4U
                                                   : 
                                                  ((0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                    ? 4U
                                                    : 
                                                   ((0x2bU 
                                                     == 
                                                     (0x3fU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                     ? 4U
                                                     : 0U)))))));
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 0U;
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 0U;
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 0U;
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 5U;
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 4U;
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 4U;
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 5U;
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 5U;
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 5U;
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 5U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o 
                        = ((0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))
                            ? 1U : ((0xcU == (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))
                                     ? 1U : ((0xeU 
                                              == (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU)))
                                              ? 1U : 
                                             ((0xfU 
                                               == (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))
                                               ? 1U
                                               : ((0x33U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))
                                                   ? 0U
                                                   : 4U)))));
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o 
                    = ((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))
                        ? 4U : ((0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))
                                 ? 4U : ((0xbU == (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))
                                          ? 4U : 7U)));
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o 
                        = ((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))
                            ? 7U : ((0x26U == (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))
                                     ? 7U : ((0x28U 
                                              == (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU)))
                                              ? 7U : 
                                             ((0x29U 
                                               == (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))
                                               ? 7U
                                               : ((0x2bU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))
                                                   ? 7U
                                                   : 
                                                  ((0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x1aU)))
                                                    ? 7U
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x1aU)))
                                                     ? 7U
                                                     : 6U)))))));
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = 6U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                        >> 0xbU));
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                        = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0xbU));
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0xbU));
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0xbU));
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0xbU));
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0xbU));
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0xbU));
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                                = (0x1fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0xbU));
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0xbU));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0xbU));
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0xbU));
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0xbU));
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0xbU));
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0xbU));
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                                = (0x1fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0xbU));
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0xbU));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                        = (0x1fU & ((0xdU == (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))
                                     ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x10U) : 
                                    ((0xcU == (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))
                                      ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x10U) : 
                                     ((0xeU == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))
                                       ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x10U)
                                       : ((0xfU == 
                                           (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))
                                           ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x10U)
                                           : ((0x33U 
                                               == (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))
                                               ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0xbU)
                                               : (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x10U)))))));
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x10U));
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                        = (0x1fU & ((0x22U == (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))
                                     ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x10U) : 
                                    ((0x26U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))
                                      ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x10U) : 
                                     (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0xbU))));
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o = 0x1fU;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0xbU));
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0xbU));
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0xbU));
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0xbU));
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0xbU));
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o = 0x1fU;
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o 
                                                            = 
                                                            (0x1fU 
                                                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                >> 0xbU));
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o = 0x1fU;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 1U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o 
                        = ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                            ? 0x7cU : ((2U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                        ? 2U : ((3U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                 ? 3U
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                  ? 0x7cU
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (0x3fU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                   ? 2U
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x3fU 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                    ? 3U
                                                    : 
                                                   ((0x25U 
                                                     == 
                                                     (0x3fU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                     ? 0x25U
                                                     : 0x24U)))))));
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o 
                            = ((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                ? 0x26U : ((0x27U == 
                                            (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                            ? 0x27U
                                            : ((0xfU 
                                                == 
                                                (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                ? 0U
                                                : (
                                                   (0x11U 
                                                    == 
                                                    (0x3fU 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                    ? 0x11U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x3fU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                     ? 0x13U
                                                     : 
                                                    ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                      ? 0x10U
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x3fU 
                                                        & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                       ? 0x12U
                                                       : 0xbU)))))));
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o 
                                = ((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                    ? 0xaU : ((0x20U 
                                               == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                               ? 0x20U
                                               : ((0x21U 
                                                   == 
                                                   (0x3fU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                   ? 0x21U
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                    ? 0x22U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x3fU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                     ? 0x23U
                                                     : 
                                                    ((0x2aU 
                                                      == 
                                                      (0x3fU 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                      ? 0x2aU
                                                      : 
                                                     ((0x2bU 
                                                       == 
                                                       (0x3fU 
                                                        & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                       ? 0x2bU
                                                       : 0x18U)))))));
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x19U;
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x1aU;
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x1bU;
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 8U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 9U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0xa9U;
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0xb0U;
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0xb1U;
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0xa6U;
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0xa8U;
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0xaaU;
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0xabU;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o 
                        = ((0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))
                            ? 0x25U : ((0xcU == (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))
                                        ? 0x24U : (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x1aU)))
                                                    ? 0x26U
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x1aU)))
                                                     ? 0x25U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                          >> 0x1aU)))
                                                      ? 0U
                                                      : 0x55U)))));
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o 
                    = ((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))
                        ? 0x56U : ((0xaU == (0x3fU 
                                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))
                                    ? 0x2aU : ((0xbU 
                                                == 
                                                (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))
                                                ? 0x2bU
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x1aU)))
                                                    ? 0xe0U
                                                    : 
                                                   ((0x24U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x1aU)))
                                                     ? 0xe4U
                                                     : 
                                                    ((0x21U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                          >> 0x1aU)))
                                                      ? 0xe1U
                                                      : 
                                                     ((0x25U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                           >> 0x1aU)))
                                                       ? 0xe5U
                                                       : 0xe3U)))))));
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o 
                        = ((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))
                            ? 0xe2U : ((0x26U == (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU)))
                                        ? 0xe6U : (
                                                   (0x28U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x1aU)))
                                                    ? 0xe8U
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x1aU)))
                                                     ? 0xe9U
                                                     : 
                                                    ((0x2bU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                          >> 0x1aU)))
                                                      ? 0xebU
                                                      : 
                                                     ((0x2aU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                           >> 0x1aU)))
                                                       ? 0xeaU
                                                       : 
                                                      ((0x2eU 
                                                        == 
                                                        (0x3fU 
                                                         & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                            >> 0x1aU)))
                                                        ? 0xeeU
                                                        : 0x4fU)))))));
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x50U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x51U;
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x54U;
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x53U;
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x52U;
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x41U;
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x4bU;
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x40U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = 0x4aU;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o = 0U;
    }
    if (((((0xa8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
           | (0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
          | (0xabU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
         | (0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o = 1U;
    } else {
        if (((0x18U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0x19U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o = 1U;
        } else {
            if ((0x11U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o = 1U;
            } else {
                if ((0x13U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o = 1U;
                } else {
                    if (((0x1aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                         | (0x1bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_o 
        = ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
            ? 0U : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_i);
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_o 
        = ((~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)) 
           & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_i));
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_o 
        = ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
            ? 0U : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_i);
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o = 0U;
    } else {
        if (((0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0xa8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
            if ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o = 1U;
            }
            if ((1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o = 2U;
            }
        } else {
            if (((0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                 | (0xabU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
                if ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o = 1U;
                }
                if ((1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o = 2U;
                }
            } else {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o = 0U;
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_start = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_start = 0U;
        if ((0x1aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
            if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_start = 1U;
            }
        } else {
            if ((0x1bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_start = 1U;
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__signed_div = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__signed_div = 0U;
        if ((0x1aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
            if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__signed_div = 1U;
            }
        } else {
            if ((0x1bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__signed_div = 0U;
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 0xfU;
        if (((((((((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)) 
                   | (0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                  | (0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                 | (0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                | (0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
               | (0xe2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
              | (0xe6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
             | (0xe8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)))) {
            if ((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i 
                    = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                        ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                            ? 1U : 2U) : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                           ? 4U : 8U));
            } else {
                if ((0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i 
                        = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                            ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                ? 1U : 2U) : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                               ? 4U
                                               : 8U));
                } else {
                    if ((0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 0xcU;
                        } else {
                            if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 3U;
                            }
                        }
                    } else {
                        if ((0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 8U;
                            } else {
                                if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 2U;
                                }
                            }
                        } else {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i 
                                = ((0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                    ? 0xfU : ((0xe2U 
                                               == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                               ? 0xfU
                                               : ((0xe6U 
                                                   == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                                   ? 0xfU
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                     ? 4U
                                                     : 8U)))));
                        }
                    }
                }
            }
        } else {
            if ((0xe9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 0U;
                if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 0xcU;
                } else {
                    if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 3U;
                    }
                }
            } else {
                if ((0xebU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = 0xfU;
                } else {
                    if ((0xeaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i 
                            = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? 1U : 3U) : ((1U 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                   ? 7U
                                                   : 0xfU));
                    } else {
                        if ((0xeeU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i 
                                = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                        ? 0xfU : 0xeU)
                                    : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                        ? 0xcU : 8U));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata1 = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata1 = 0U;
        if ((0x1aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
            if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata1 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i;
            }
        } else {
            if ((0x1bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata1 
                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i;
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata2 = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata2 = 0U;
        if ((0x1aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
            if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata2 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i;
            }
        } else {
            if ((0x1bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata2 
                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i;
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = 0U;
        if (((((((((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)) 
                   | (0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                  | (0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                 | (0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                | (0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
               | (0xe2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
              | (0xe6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
             | (0xe8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)))) {
            if ((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = 0U;
            } else {
                if ((0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = 0U;
                } else {
                    if ((0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = 0U;
                        } else {
                            if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = 0U;
                            }
                        }
                    } else {
                        if ((0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = 0U;
                            } else {
                                if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = 0U;
                                }
                            }
                        } else {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i 
                                = ((0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                    ? 0U : ((0xe2U 
                                             == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                             ? 0U : 
                                            ((0xe6U 
                                              == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                              ? 0U : 
                                             ((0xff000000U 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                                  << 0x18U)) 
                                              | ((0xff0000U 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i)))))));
                        }
                    }
                }
            }
        } else {
            if ((0xe9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i 
                    = ((0xffff0000U & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                       << 0x10U)) | 
                       (0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i));
            } else {
                if ((0xebU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i 
                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i;
                } else {
                    if ((0xeaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i 
                            = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? (0xffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                                >> 0x18U))
                                    : (0xffffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                                  >> 0x10U)))
                                : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? (0xffffffU & 
                                       (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                        >> 8U)) : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i));
                    } else {
                        if ((0xeeU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i 
                                = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                        ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i
                                        : (0xffffff00U 
                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                              << 8U)))
                                    : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                        ? (0xffff0000U 
                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                              << 0x10U))
                                        : (0xff000000U 
                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i 
                                              << 0x18U))));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub = 0U;
    } else {
        if (((0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0xa8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
            if ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub = 1U;
            }
            if ((1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub = 0U;
            }
        } else {
            if (((0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                 | (0xabU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
                if ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub = 1U;
                }
                if ((1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub = 0U;
                }
            } else {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub = 0U;
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div = 0U;
        if ((0x1aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
            if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div = 1U;
            }
        } else {
            if ((0x1bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                if ((1U & (~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div = 1U;
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read 
                        = ((0U != (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           & ((2U != (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                              & (3U != (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))));
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read 
                            = ((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | ((0x27U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                  | ((0xfU != (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                     & ((0x11U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                        | ((0x13U == 
                                            (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                           | ((0x10U 
                                               != (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                              & (0x12U 
                                                 != 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))))))));
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read 
                        = ((0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU))) 
                           | ((0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))) 
                              | ((0xeU == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU))) 
                                 | ((0xfU != (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))) 
                                    & (0x33U != (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))))));
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read 
                        = ((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | ((0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU))) 
                              | ((0x28U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU))) 
                                 | ((0x29U == (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU))) 
                                    | ((0x2bU == (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU))) 
                                       | ((0x2aU == 
                                           (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU))) 
                                          | (0x2eU 
                                             == (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))))))));
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 0U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                        >> 0x15U));
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                        = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x15U));
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x15U));
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x15U));
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x15U));
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x15U));
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x15U));
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                                = (0x1fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x15U));
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x15U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x15U));
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x15U));
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x15U));
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x15U));
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x15U));
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                                = (0x1fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x15U));
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x15U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                        = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x15U));
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x15U));
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                        = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x15U));
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x15U));
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x15U));
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x15U));
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x15U));
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x15U));
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x15U));
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                                        = 
                                                        (0x1fU 
                                                         & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                            >> 0x15U));
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                                            = 
                                                            (0x1fU 
                                                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                >> 0x15U));
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr 
                                                                = 
                                                                (0x1fU 
                                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                    >> 0x15U));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read 
                            = ((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | ((0x27U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                  | ((0xfU != (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                     & ((0x11U != (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                        & ((0x13U != 
                                            (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                           & ((0x10U 
                                               != (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                              & (0x12U 
                                                 != 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))))))));
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read 
                        = ((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | ((0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU))) 
                              | ((0x28U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU))) 
                                 | ((0x29U == (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU))) 
                                    | ((0x2bU == (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU))) 
                                       | ((0x2aU == 
                                           (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU))) 
                                          | (0x2eU 
                                             == (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))))))));
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 1U;
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                        >> 0x10U));
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                        = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x10U));
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x10U));
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U));
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x10U));
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U));
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x10U));
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                                = (0x1fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x10U));
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x10U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x10U));
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U));
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x10U));
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U));
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x10U));
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                                = (0x1fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x10U));
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x10U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                        = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x10U));
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x10U));
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                        = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x10U));
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                            = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x10U));
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U));
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                    = (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x10U));
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                        = (0x1fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U));
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                            = (0x1fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x10U));
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 0x10U));
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                                        = 
                                                        (0x1fU 
                                                         & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                            >> 0x10U));
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                                            = 
                                                            (0x1fU 
                                                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                >> 0x10U));
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr 
                                                                = 
                                                                (0x1fU 
                                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                    >> 0x10U));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_o 
        = ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
            ? 0U : (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_i));
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_o 
        = ((~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)) 
           & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_i));
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI = 0U;
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI 
            = ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_i)
                ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_i
                : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_whilo_i)
                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_hi_i
                    : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hi));
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO 
            = ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_i)
                ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_i
                : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_whilo_i)
                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_lo_i
                    : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__lo));
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 0U;
        if (((((((((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)) 
                   | (0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                  | (0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                 | (0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                | (0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
               | (0xe2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
              | (0xe6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
             | (0xe8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)))) {
            if ((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 0U;
            } else {
                if ((0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 0U;
                } else {
                    if ((0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 0U;
                        } else {
                            if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 0U;
                            }
                        }
                    } else {
                        if ((0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 0U;
                            } else {
                                if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 0U;
                                }
                            }
                        } else {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i 
                                = ((0xe3U != (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)) 
                                   & ((0xe2U != (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)) 
                                      & (0xe6U != (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))));
                        }
                    }
                }
            }
        } else {
            if ((0xe9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 1U;
            } else {
                if ((0xebU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 1U;
                } else {
                    if ((0xeaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 1U;
                    } else {
                        if ((0xeeU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 0U;
        if (((((((((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)) 
                   | (0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                  | (0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                 | (0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                | (0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
               | (0xe2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
              | (0xe6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
             | (0xe8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)))) {
            if ((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
            } else {
                if ((0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                } else {
                    if ((0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                        } else {
                            if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                            }
                        }
                    } else {
                        if ((0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                            } else {
                                if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                                }
                            }
                        } else {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0xe9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
            } else {
                if ((0xebU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                } else {
                    if ((0xeaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                    } else {
                        if ((0xeeU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i = 0U;
        if (((((((((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)) 
                   | (0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                  | (0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                 | (0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                | (0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
               | (0xe2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
              | (0xe6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
             | (0xe8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)))) {
            if ((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
            } else {
                if ((0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
                } else {
                    if ((0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
                        } else {
                            if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
                            }
                        }
                    } else {
                        if ((0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
                            } else {
                                if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
                                }
                            }
                        } else {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                = ((0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i
                                    : ((0xe2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                        ? ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                            ? ((1U 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (0xfffffffcU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                : (0xfffffffcU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))
                                            : ((1U 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (0xfffffffcU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                : (0xfffffffcU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)))
                                        : ((0xe6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                            ? ((2U 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (
                                                   (1U 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   (0xfffffffcU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    : 
                                                   (0xfffffffcU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))
                                                : (
                                                   (1U 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   (0xfffffffcU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    : 
                                                   (0xfffffffcU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)))
                                            : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)));
                        }
                    }
                }
            }
        } else {
            if ((0xe9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
            } else {
                if ((0xebU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i;
                } else {
                    if ((0xeaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                            = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? (0xfffffffcU 
                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    : (0xfffffffcU 
                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))
                                : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? (0xfffffffcU 
                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    : (0xfffffffcU 
                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)));
                    } else {
                        if ((0xeeU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                        ? (0xfffffffcU 
                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                        : (0xfffffffcU 
                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))
                                    : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                        ? (0xfffffffcU 
                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                        : (0xfffffffcU 
                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres 
        = ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
            ? 0ULL : (((((0xa9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                         | (0x18U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                        | (0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                       | (0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))
                       ? ((0x80000000U & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                          ^ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i))
                           ? (1ULL + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp))
                           : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp)
                       : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp));
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
        = (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
           + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux);
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm 
                        = ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                            ? (0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 6U)) : (
                                                   (2U 
                                                    == 
                                                    (0x3fU 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                    ? 
                                                   (0x1fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 6U))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x3fU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                        >> 6U))
                                                     : 0U)));
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm 
                        = ((0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))
                            ? (0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)
                            : ((0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))
                                ? (0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)
                                : ((0xeU == (0x3fU 
                                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))
                                    ? (0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)
                                    : ((0xfU == (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))
                                        ? (0xffff0000U 
                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              << 0x10U))
                                        : ((0x33U == 
                                            (0x3fU 
                                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))
                                            ? 0U : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm)))));
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm 
                    = ((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))
                        ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm
                        : ((0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))
                            ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm
                            : ((0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))
                                ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm
                                : 0U)));
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__stall 
        = ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
            ? 0U : (((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub) 
                     | (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div))
                     ? 0xfU : 0U));
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1 
            = (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_i 
               + (((QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI)) 
                   << 0x20U) | (QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO))));
    } else {
        if (((0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0xa8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
            if ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1 = 0ULL;
            }
            if ((1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1 
                    = (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_i 
                       + (((QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI)) 
                           << 0x20U) | (QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO))));
            }
        } else {
            if (((0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                 | (0xabU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
                if ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1 = 0ULL;
                }
                if ((1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1 
                        = (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_i 
                           + (((QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI)) 
                               << 0x20U) | (QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO))));
                }
            } else {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1 
                    = (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_i 
                       + (((QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI)) 
                           << 0x20U) | (QData)((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO))));
            }
        }
    }
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
        = ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i)
            ? ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i)
                ? 0U : ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank3
                         [(0x1ffffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                       >> 2U))] << 0x18U) 
                        | ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank2
                            [(0x1ffffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                          >> 2U))] 
                            << 0x10U) | ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank1
                                          [(0x1ffffU 
                                            & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                               >> 2U))] 
                                          << 8U) | 
                                         vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank0
                                         [(0x1ffffU 
                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                              >> 2U))]))))
            : 0U);
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o = 0ULL;
    } else {
        if (((0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0xa8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
            if ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres;
            }
            if ((1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o = 0ULL;
            }
        } else {
            if (((0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                 | (0xabU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
                if ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o 
                        = (1ULL + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres));
                }
                if ((1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o = 0ULL;
                }
            } else {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o = 0ULL;
            }
        }
    }
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_o 
        = ((~ ((((0x20U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                 | (0x55U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                | (0x22U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
               & ((((~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                        >> 0x1fU)) & (~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
                                         >> 0x1fU))) 
                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
                      >> 0x1fU)) | (((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux) 
                                     >> 0x1fU) & (~ 
                                                  (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                   >> 0x1fU)))))) 
           & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_i));
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres = 0U;
        if (((0x2aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0x2bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres 
                = (1U & ((0x2aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                          ? ((((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                >> 0x1fU) & (~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                                >> 0x1fU))) 
                              | (((~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                      >> 0x1fU)) & 
                                  (~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                      >> 0x1fU))) & 
                                 (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                  >> 0x1fU))) | (((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i) 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum) 
                                                 >> 0x1fU))
                          : (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                             < vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)));
        } else {
            if (((((((0x20U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                     | (0x21U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                    | (0x55U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                   | (0x56U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                  | (0x22U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                 | (0x23U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum;
            } else {
                if ((0xb0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres 
                        = ((0x80000000U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                            ? 0U : ((0x40000000U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                     ? 1U : ((0x20000000U 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                              ? 2U : 
                                             ((0x10000000U 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                               ? 3U
                                               : ((0x8000000U 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                   ? 4U
                                                   : 
                                                  ((0x4000000U 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                    ? 5U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                     ? 6U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                      ? 7U
                                                      : 
                                                     ((0x800000U 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                       ? 8U
                                                       : 
                                                      ((0x400000U 
                                                        & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                        ? 9U
                                                        : 
                                                       ((0x200000U 
                                                         & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                         ? 0xaU
                                                         : 
                                                        ((0x100000U 
                                                          & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                          ? 0xbU
                                                          : 
                                                         ((0x80000U 
                                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                           ? 0xcU
                                                           : 
                                                          ((0x40000U 
                                                            & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                            ? 0xdU
                                                            : 
                                                           ((0x20000U 
                                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                             ? 0xeU
                                                             : 
                                                            ((0x10000U 
                                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                              ? 0xfU
                                                              : 
                                                             ((0x8000U 
                                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                               ? 0x10U
                                                               : 
                                                              ((0x4000U 
                                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                ? 0x11U
                                                                : 
                                                               ((0x2000U 
                                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x1000U 
                                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x800U 
                                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x400U 
                                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x200U 
                                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x100U 
                                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x80U 
                                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x40U 
                                                                        & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x20U 
                                                                         & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x10U 
                                                                          & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((8U 
                                                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((4U 
                                                                            & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((2U 
                                                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((1U 
                                                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                              ? 0x1fU
                                                                              : 0x20U))))))))))))))))))))))))))))))));
                } else {
                    if ((0xb1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres 
                            = ((0x80000000U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                ? ((0x40000000U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                    ? ((0x20000000U 
                                        & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                        ? ((0x10000000U 
                                            & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                            ? ((0x8000000U 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                ? (
                                                   (0x4000000U 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                    ? 
                                                   ((0x2000000U 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                     ? 
                                                    ((0x1000000U 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                      ? 
                                                     ((0x800000U 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                       ? 
                                                      ((0x400000U 
                                                        & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                        ? 
                                                       ((0x200000U 
                                                         & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                         ? 
                                                        ((0x100000U 
                                                          & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                          ? 
                                                         ((0x80000U 
                                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                           ? 
                                                          ((0x40000U 
                                                            & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                            ? 
                                                           ((0x20000U 
                                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                             ? 
                                                            ((0x10000U 
                                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                              ? 
                                                             ((0x8000U 
                                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                               ? 
                                                              ((0x4000U 
                                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                ? 
                                                               ((0x2000U 
                                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                 ? 
                                                                ((0x1000U 
                                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                  ? 
                                                                 ((0x800U 
                                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                   ? 
                                                                  ((0x400U 
                                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                    ? 
                                                                   ((0x200U 
                                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                     ? 
                                                                    ((0x100U 
                                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                      ? 
                                                                     ((0x80U 
                                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                       ? 
                                                                      ((0x40U 
                                                                        & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                        ? 
                                                                       ((0x20U 
                                                                         & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                         ? 
                                                                        ((0x10U 
                                                                          & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                          ? 
                                                                         ((8U 
                                                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                           ? 
                                                                          ((4U 
                                                                            & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                            ? 
                                                                           ((2U 
                                                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                             ? 
                                                                            ((1U 
                                                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)
                                                                              ? 0x20U
                                                                              : 0x1fU)
                                                                             : 0x1eU)
                                                                            : 0x1dU)
                                                                           : 0x1cU)
                                                                          : 0x1bU)
                                                                         : 0x1aU)
                                                                        : 0x19U)
                                                                       : 0x18U)
                                                                      : 0x17U)
                                                                     : 0x16U)
                                                                    : 0x15U)
                                                                   : 0x14U)
                                                                  : 0x13U)
                                                                 : 0x12U)
                                                                : 0x11U)
                                                               : 0x10U)
                                                              : 0xfU)
                                                             : 0xeU)
                                                            : 0xdU)
                                                           : 0xcU)
                                                          : 0xbU)
                                                         : 0xaU)
                                                        : 9U)
                                                       : 8U)
                                                      : 7U)
                                                     : 6U)
                                                    : 5U)
                                                : 4U)
                                            : 3U) : 2U)
                                    : 1U) : 0U);
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o = 0U;
    }
    if (((((0xa8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
           | (0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
          | (0xabU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
         | (0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o 
            = (IData)((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1 
                       >> 0x20U));
    } else {
        if (((0x18U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0x19U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o 
                = (IData)((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres 
                           >> 0x20U));
        } else {
            if ((0x11U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i;
            } else {
                if ((0x13U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o 
                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI;
                } else {
                    if (((0x1aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                         | (0x1bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o 
                            = (IData)((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_result 
                                       >> 0x20U));
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o = 0U;
    }
    if (((((0xa8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
           | (0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
          | (0xabU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
         | (0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o 
            = (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1);
    } else {
        if (((0x18U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0x19U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o 
                = (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres);
        } else {
            if ((0x11U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO;
            } else {
                if ((0x13U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o 
                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i;
                } else {
                    if (((0x1aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                         | (0x1bU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o 
                            = (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_result);
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
            = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i;
        if (((((((((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)) 
                   | (0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                  | (0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                 | (0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
                | (0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
               | (0xe2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
              | (0xe6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) 
             | (0xe8U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i)))) {
            if ((0xe0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                    = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                        ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                            ? ((0xffffff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0xffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o))
                            : ((0xffffff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                              >> 0xfU)))) 
                                               << 8U)) 
                               | (0xffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                           >> 8U))))
                        : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                            ? ((0xffffff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                              >> 0x17U)))) 
                                               << 8U)) 
                               | (0xffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                           >> 0x10U)))
                            : ((0xffffff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                              >> 0x1fU)))) 
                                               << 8U)) 
                               | (0xffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                           >> 0x18U)))));
            } else {
                if ((0xe4U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                        = ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                            ? ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                ? (0xffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o)
                                : (0xffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                            >> 8U)))
                            : ((1U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                ? (0xffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                            >> 0x10U))
                                : (0xffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                            >> 0x18U))));
                } else {
                    if ((0xe1U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                                = ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                                  >> 0x1fU)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                 >> 0x10U)));
                        } else {
                            if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                                    = ((0xffff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                                       | (0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o));
                            }
                        }
                    } else {
                        if ((0xe5U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            if ((0U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                                    = (0xffffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                  >> 0x10U));
                            } else {
                                if ((2U == (3U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                                        = (0xffffU 
                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o);
                                }
                            }
                        } else {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                                = ((0xe3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o
                                    : ((0xe2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                        ? ((2U & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                            ? ((1U 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (
                                                   (0xff000000U 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                       << 0x18U)) 
                                                   | (0xffffffU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i))
                                                : (
                                                   (0xffff0000U 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i)))
                                            : ((1U 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (
                                                   (0xffffff00U 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i))
                                                : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o))
                                        : ((0xe6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))
                                            ? ((2U 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (
                                                   (1U 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o
                                                    : 
                                                   ((0xff000000U 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i) 
                                                    | (0xffffffU 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o)))
                                                : (
                                                   (1U 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i) 
                                                    | (0xffffU 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o))
                                                    : 
                                                   ((0xffffff00U 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i) 
                                                    | (0xffU 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o))))
                                            : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i)));
                        }
                    }
                }
            }
        } else {
            if ((0xe9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i;
            } else {
                if ((0xebU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i;
                } else {
                    if ((0xeaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                            = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i;
                    } else {
                        if ((0xeeU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o 
                                = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wdata_o 
        = ((4U & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i))
            ? ((2U & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i))
                ? ((1U & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i))
                    ? 0U : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_link_address_i)
                : ((1U & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i))
                    ? (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres)
                    : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres))
            : ((2U & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i))
                ? ((1U & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i))
                    ? ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                        ? 0U : ((0x10U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                 ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI
                                 : ((0x12U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                     ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO
                                     : ((0xaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                         ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i
                                         : ((0xbU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                             ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i
                                             : 0U)))))
                    : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                        ? 0U : ((0x7cU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                 ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                    << (0x1fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))
                                 : ((2U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                     ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                        >> (0x1fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))
                                     : ((3U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                         ? (((0x1fU 
                                              >= (0x3fU 
                                                  & ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))))
                                              ? ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                                                >> 0x1fU)))) 
                                                 << 
                                                 (0x3fU 
                                                  & ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))))
                                              : 0U) 
                                            | (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                               >> (0x1fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)))
                                         : 0U))))) : 
               ((1U & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i))
                 ? ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                     ? 0U : ((0x25U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                              ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                 | vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)
                              : ((0x24U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                  ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)
                                  : ((0x27U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                      ? (~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                            | vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i))
                                      : ((0x26U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                          ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                             ^ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)
                                          : 0U)))))
                 : 0U)));
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o = 0U;
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
            = ((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read) 
                 & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_o)) 
                & ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr) 
                   == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wd_i)))
                ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wdata_o
                : ((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read) 
                     & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_o)) 
                    & ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr) 
                       == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_o)))
                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o
                    : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read)
                        ? ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                            ? 0U : ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr))
                                     ? 0U : (((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr) 
                                                == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i)) 
                                               & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read)) 
                                              & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i))
                                              ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i
                                              : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read)
                                                  ? 
                                                 vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs
                                                 [vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr]
                                                  : 0U))))
                        : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read)
                            ? 0U : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm))));
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o 
            = ((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read) 
                 & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_o)) 
                & ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr) 
                   == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wd_i)))
                ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wdata_o
                : ((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read) 
                     & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_o)) 
                    & ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr) 
                       == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_o)))
                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o
                    : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read)
                        ? ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                            ? 0U : ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr))
                                     ? 0U : (((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr) 
                                                == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i)) 
                                               & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read)) 
                                              & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i))
                                              ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i
                                              : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read)
                                                  ? 
                                                 vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs
                                                 [vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr]
                                                  : 0U))))
                        : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read)
                            ? 0U : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm))));
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if (((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                           | (2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (3U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                        | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                       | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                      | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                     | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
                } else {
                    if (((((((((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | (0x27U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0xfU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x11U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                            | (0x13U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                           | (0x10U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                          | (0x12U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                         | (0xbU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o 
                            = ((0x26U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                               | ((0x27U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                  | ((0xfU != (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                     & ((0x11U != (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                        & ((0x13U != 
                                            (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                           & ((0x10U 
                                               == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                              | ((0x12U 
                                                  == 
                                                  (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                                 | (0U 
                                                    != vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o))))))));
                    } else {
                        if (((((((((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                   | (0x20U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0x21U == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (0x22U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (0x23U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x2aU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x2bU == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                             | (0x18U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o 
                                = ((0xaU == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))
                                    ? (0U == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)
                                    : ((0x20U == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                       | ((0x21U == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                          | ((0x22U 
                                              == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                             | ((0x23U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                                | ((0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                                   | (0x2bU 
                                                      == 
                                                      (0x3fU 
                                                       & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))))))));
                        } else {
                            if ((0x19U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                            } else {
                                if ((0x1aU == (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                } else {
                                    if ((0x1bU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                    } else {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x1cU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) {
                    if ((2U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
                    } else {
                        if ((0x20U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
                        } else {
                            if ((0x21U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
                            } else {
                                if ((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                } else {
                                    if ((1U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                    } else {
                                        if ((4U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                        } else {
                                            if ((5U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o 
                        = ((0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU))) 
                           | ((0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))) 
                              | ((0xeU == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU))) 
                                 | ((0xfU == (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))) 
                                    | (0x33U != (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))))));
                }
            }
        } else {
            if (((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))) 
                       | (0xaU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                      | (0xbU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                     | (0x20U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                           >> 0x1aU)))) 
                    | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) 
                   | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) 
                  | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU)))) 
                 | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU))))) {
                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
            } else {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o 
                        = ((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))));
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 0U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if ((1U & (~ ((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                    | (2U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                   | (3U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                    if ((1U & (~ ((((((((0x26U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                        | (0x27U == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                       | (0xfU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                      | (0x11U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                     | (0x13U == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                    | (0x10U == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                   | (0x12U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0xbU == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                        if ((1U & (~ ((((((((0xaU == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                            | (0x20U 
                                               == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                           | (0x21U 
                                              == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                          | (0x22U 
                                             == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                         | (0x23U == 
                                            (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                        | (0x2aU == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                       | (0x2bU == 
                                          (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                      | (0x18U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                            if ((0x19U != (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                if ((0x1aU != (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    if ((0x1bU != (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))) 
                                | (0xaU == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                               | (0xbU == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                              | (0x20U == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                             | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) 
                            | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))) 
                           | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU))))))) {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    if ((0x22U != (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) {
                        if ((0x26U != (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) {
                            if ((0x28U != (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) {
                                if ((0x29U != (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))) {
                                    if ((0x2bU != (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) {
                                        if ((0x2aU 
                                             != (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))) {
                                            if ((0x2eU 
                                                 != 
                                                 (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            if ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                 == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                            }
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                if (((~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                         >> 0x1fU)) 
                                     & (0U != vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                }
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    if ((1U & ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                >> 0x1fU) 
                                               | (0U 
                                                  == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                    }
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        if ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                             == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                        }
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                         >> 0x1fU)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                                }
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                             >> 0x1fU)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        if (
                                                            (0x80000000U 
                                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                                        }
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            if (
                                                                (0x80000000U 
                                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)) {
                                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if ((1U & (~ ((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                    | (2U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                   | (3U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                    if ((1U & (~ ((((((((0x26U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                        | (0x27U == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                       | (0xfU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                      | (0x11U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                     | (0x13U == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                    | (0x10U == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                   | (0x12U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0xbU == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                        if ((1U & (~ ((((((((0xaU == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                            | (0x20U 
                                               == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                           | (0x21U 
                                              == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                          | (0x22U 
                                             == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                         | (0x23U == 
                                            (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                        | (0x2aU == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                       | (0x2bU == 
                                          (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                      | (0x18U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                            if ((0x19U != (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                if ((0x1aU != (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    if ((0x1bU != (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))) 
                                | (0xaU == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                               | (0xbU == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                              | (0x20U == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                             | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) 
                            | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))) 
                           | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU))))))) {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    if ((0x22U != (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) {
                        if ((0x26U != (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) {
                            if ((0x28U != (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) {
                                if ((0x29U != (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))) {
                                    if ((0x2bU != (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) {
                                        if ((0x2aU 
                                             != (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))) {
                                            if ((0x2eU 
                                                 != 
                                                 (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            if ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                 == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                            }
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                if (((~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                         >> 0x1fU)) 
                                     & (0U != vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                }
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    if ((1U & ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                >> 0x1fU) 
                                               | (0U 
                                                  == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                    }
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        if ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                             == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                        }
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                         >> 0x1fU)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                                }
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                             >> 0x1fU)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        if (
                                                            (0x80000000U 
                                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                                        }
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            if (
                                                                (0x80000000U 
                                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)) {
                                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if ((1U & (~ ((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                    | (2U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                   | (3U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                    if ((1U & (~ ((((((((0x26U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                        | (0x27U == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                       | (0xfU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                      | (0x11U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                     | (0x13U == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                    | (0x10U == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                   | (0x12U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0xbU == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                        if ((1U & (~ ((((((((0xaU == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                            | (0x20U 
                                               == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                           | (0x21U 
                                              == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                          | (0x22U 
                                             == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                         | (0x23U == 
                                            (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                        | (0x2aU == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                       | (0x2bU == 
                                          (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                      | (0x18U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                            if ((0x19U != (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                if ((0x1aU != (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    if ((0x1bU != (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o 
                                                    = 
                                                    ((IData)(8U) 
                                                     + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))) 
                                | (0xaU == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                               | (0xbU == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                              | (0x20U == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                             | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) 
                            | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))) 
                           | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU))))))) {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    if ((0x22U != (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) {
                        if ((0x26U != (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) {
                            if ((0x28U != (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) {
                                if ((0x29U != (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))) {
                                    if ((0x2bU != (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) {
                                        if ((0x2aU 
                                             != (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))) {
                                            if ((0x2eU 
                                                 != 
                                                 (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o 
                            = ((IData)(8U) + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i);
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            if ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                 == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
                            }
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                if (((~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                         >> 0x1fU)) 
                                     & (0U != vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
                                }
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    if ((1U & ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                >> 0x1fU) 
                                               | (0U 
                                                  == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
                                    }
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        if ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                             == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
                                        }
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                         >> 0x1fU)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
                                                }
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                             >> 0x1fU)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o 
                                                            = 
                                                            ((IData)(8U) 
                                                             + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i);
                                                    }
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        if (
                                                            (0x80000000U 
                                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = 0U;
                                                        }
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            if (
                                                                (0x80000000U 
                                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)) {
                                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->openmips_min_sopc_tb__DOT__rst) {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address = 0U;
    } else {
        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address = 0U;
        if (((((((((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x1aU)))) 
                  | (0xdU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)))) 
                 | (0xcU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) 
                | (0xeU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                     >> 0x1aU)))) | 
               (0xfU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) 
             | (8U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                >> 0x1aU))))) {
            if ((0U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1aU)))) {
                if ((1U & (~ ((((((((0U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                    | (2U == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                   | (3U == (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (4U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                 | (6U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                | (7U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                               | (0x25U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                              | (0x24U == (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                    if ((1U & (~ ((((((((0x26U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                        | (0x27U == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                       | (0xfU == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                      | (0x11U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                     | (0x13U == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                    | (0x10U == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                   | (0x12U == (0x3fU 
                                                & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                  | (0xbU == (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                        if ((1U & (~ ((((((((0xaU == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)) 
                                            | (0x20U 
                                               == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                           | (0x21U 
                                              == (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                          | (0x22U 
                                             == (0x3fU 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                         | (0x23U == 
                                            (0x3fU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                        | (0x2aU == 
                                           (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                       | (0x2bU == 
                                          (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) 
                                      | (0x18U == (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)))))) {
                            if ((0x19U != (0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                if ((0x1aU != (0x3fU 
                                               & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                    if ((0x1bU != (0x3fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                        if ((8U == 
                                             (0x3fU 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                                = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o;
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x3fU 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((((((((9U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU))) 
                                | (0xaU == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                               | (0xbU == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                              | (0x20U == (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                             | (0x24U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) 
                            | (0x21U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))) 
                           | (0x25U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x23U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU))))))) {
                if (((((((((0x22U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU))) 
                           | (0x26U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) 
                          | (0x28U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) 
                         | (0x29U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                               >> 0x1aU)))) 
                        | (0x2bU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x1aU)))) 
                       | (0x2aU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) 
                      | (0x2eU == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) 
                     | (2U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x1aU))))) {
                    if ((0x22U != (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) {
                        if ((0x26U != (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU)))) {
                            if ((0x28U != (0x3fU & 
                                           (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x1aU)))) {
                                if ((0x29U != (0x3fU 
                                               & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x1aU)))) {
                                    if ((0x2bU != (0x3fU 
                                                   & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                      >> 0x1aU)))) {
                                        if ((0x2aU 
                                             != (0x3fU 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x1aU)))) {
                                            if ((0x2eU 
                                                 != 
                                                 (0x3fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x1aU)))) {
                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_jump;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((3U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                         >> 0x1aU)))) {
                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                            = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_jump;
                    } else {
                        if ((4U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                            if ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                 == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)) {
                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
                            }
                        } else {
                            if ((7U == (0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                if (((~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                         >> 0x1fU)) 
                                     & (0U != vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o))) {
                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
                                }
                            } else {
                                if ((6U == (0x3fU & 
                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU)))) {
                                    if ((1U & ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                >> 0x1fU) 
                                               | (0U 
                                                  == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)))) {
                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                            = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
                                    }
                                } else {
                                    if ((5U == (0x3fU 
                                                & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                   >> 0x1aU)))) {
                                        if ((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                             == vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o)) {
                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                                = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
                                        }
                                    } else {
                                        if ((1U == 
                                             (0x3fU 
                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                 >> 0x1aU)))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                     >> 0x10U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                         >> 0x1fU)))) {
                                                    vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                                        = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
                                                }
                                            } else {
                                                if (
                                                    (0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                         >> 0x10U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o 
                                                             >> 0x1fU)))) {
                                                        vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                                            = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
                                                    }
                                                } else {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                             >> 0x10U)))) {
                                                        if (
                                                            (0x80000000U 
                                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)) {
                                                            vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                                                = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
                                                        }
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                                 >> 0x10U)))) {
                                                            if (
                                                                (0x80000000U 
                                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o)) {
                                                                vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address 
                                                                    = vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vopenmips_min_sopc_tb::_eval_initial(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopenmips_min_sopc_tb::_eval_initial\n"); );
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__openmips_min_sopc_tb__DOT__CLOCK_50 
        = vlTOPp->openmips_min_sopc_tb__DOT__CLOCK_50;
}

void Vopenmips_min_sopc_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopenmips_min_sopc_tb::final\n"); );
    // Variables
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vopenmips_min_sopc_tb::_eval_settle(Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopenmips_min_sopc_tb::_eval_settle\n"); );
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vopenmips_min_sopc_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopenmips_min_sopc_tb::_ctor_var_reset\n"); );
    // Body
    openmips_min_sopc_tb__DOT__CLOCK_50 = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__rst = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__rom_ce = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i = VL_RAND_RESET_I(4);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__pc = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr = VL_RAND_RESET_I(5);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr = VL_RAND_RESET_I(5);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o = VL_RAND_RESET_I(8);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o = VL_RAND_RESET_I(3);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o = VL_RAND_RESET_I(5);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i = VL_RAND_RESET_I(8);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i = VL_RAND_RESET_I(3);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wd_i = VL_RAND_RESET_I(5);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_is_in_delayslot_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_link_address_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_inst_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__is_in_delayslot_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_o = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wdata_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o = VL_RAND_RESET_Q(64);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o = VL_RAND_RESET_I(2);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__signed_div = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata1 = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata2 = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_start = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_result = VL_RAND_RESET_Q(64);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_i = VL_RAND_RESET_I(5);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i = VL_RAND_RESET_I(8);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_i = VL_RAND_RESET_Q(64);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i = VL_RAND_RESET_I(2);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_o = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_o = VL_RAND_RESET_I(5);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_o = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_o = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i = VL_RAND_RESET_I(5);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_whilo_i = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_hi_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_lo_i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hi = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__lo = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__stall = VL_RAND_RESET_I(6);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_jump = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg1_eq_reg2 = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp = VL_RAND_RESET_Q(64);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres = VL_RAND_RESET_Q(64);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1 = VL_RAND_RESET_Q(64);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div = VL_RAND_RESET_I(1);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__state = VL_RAND_RESET_I(2);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__cnt = VL_RAND_RESET_I(6);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__temp_op1 = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__temp_op2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__dividend);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__divisor = VL_RAND_RESET_I(32);
    openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__div_temp = VL_RAND_RESET_Q(33);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__inst_rom0__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__data_ram0__DOT__bank3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
