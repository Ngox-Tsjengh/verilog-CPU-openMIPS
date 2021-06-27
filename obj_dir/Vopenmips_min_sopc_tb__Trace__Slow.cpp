// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopenmips_min_sopc_tb__Syms.h"


//======================

void Vopenmips_min_sopc_tb::_traceDump() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    __VlSymsp->__Vm_dumperp->dump(VL_TIME_Q());
}
void Vopenmips_min_sopc_tb::_traceDumpOpen() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    if (VL_UNLIKELY(!__VlSymsp->__Vm_dumperp)) {
        __VlSymsp->__Vm_dumperp = new VerilatedVcdC();
        trace(__VlSymsp->__Vm_dumperp, 0, 0);
        std::string dumpfile = __VlSymsp->_vm_contextp__->dumpfile();
        __VlSymsp->__Vm_dumperp->open(dumpfile.c_str());
        __VlSymsp->__Vm_dumping = true;
    }
}
void Vopenmips_min_sopc_tb::_traceDumpClose() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    __VlSymsp->__Vm_dumping = false;
    VL_DO_CLEAR(delete __VlSymsp->__Vm_dumperp, __VlSymsp->__Vm_dumperp = nullptr);
}
void Vopenmips_min_sopc_tb::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vopenmips_min_sopc_tb::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = static_cast<Vopenmips_min_sopc_tb__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vopenmips_min_sopc_tb::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vopenmips_min_sopc_tb::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = static_cast<Vopenmips_min_sopc_tb__Syms*>(userp);
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vopenmips_min_sopc_tb::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = static_cast<Vopenmips_min_sopc_tb__Syms*>(userp);
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"openmips_min_sopc_tb CLOCK_50", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb rst", false,-1);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 clk", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 rst", false,-1);
        tracep->declBus(c+4,"openmips_min_sopc_tb openmips_min_sopc0 inst", false,-1, 31,0);
        tracep->declBus(c+5,"openmips_min_sopc_tb openmips_min_sopc0 inst_addr", false,-1, 31,0);
        tracep->declBit(c+6,"openmips_min_sopc_tb openmips_min_sopc0 rom_ce", false,-1);
        tracep->declBit(c+7,"openmips_min_sopc_tb openmips_min_sopc0 mem_we_i", false,-1);
        tracep->declBus(c+8,"openmips_min_sopc_tb openmips_min_sopc0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+9,"openmips_min_sopc_tb openmips_min_sopc0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+10,"openmips_min_sopc_tb openmips_min_sopc0 mem_data_o", false,-1, 31,0);
        tracep->declBus(c+11,"openmips_min_sopc_tb openmips_min_sopc0 mem_sel_i", false,-1, 3,0);
        tracep->declBit(c+12,"openmips_min_sopc_tb openmips_min_sopc0 mem_ce_i", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 rst", false,-1);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 clk", false,-1);
        tracep->declBus(c+4,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 rom_data_i", false,-1, 31,0);
        tracep->declBus(c+10,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+5,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 rom_addr_o", false,-1, 31,0);
        tracep->declBit(c+6,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 rom_ce_o", false,-1);
        tracep->declBus(c+8,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ram_addr_o", false,-1, 31,0);
        tracep->declBit(c+7,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ram_we_o", false,-1);
        tracep->declBus(c+11,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ram_sel_o", false,-1, 3,0);
        tracep->declBus(c+9,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+12,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ram_ce_o", false,-1);
        tracep->declBus(c+5,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 pc", false,-1, 31,0);
        tracep->declBus(c+13,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_pc_i", false,-1, 31,0);
        tracep->declBus(c+14,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_inst_i", false,-1, 31,0);
        tracep->declBit(c+15,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 reg1_read", false,-1);
        tracep->declBit(c+16,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 reg2_read", false,-1);
        tracep->declBus(c+17,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 reg1_addr", false,-1, 4,0);
        tracep->declBus(c+18,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 reg2_addr", false,-1, 4,0);
        tracep->declBus(c+19,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 reg1_data", false,-1, 31,0);
        tracep->declBus(c+20,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 reg2_data", false,-1, 31,0);
        tracep->declBus(c+21,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_aluop_o", false,-1, 7,0);
        tracep->declBus(c+22,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_alusel_o", false,-1, 2,0);
        tracep->declBus(c+23,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_reg1_o", false,-1, 31,0);
        tracep->declBus(c+24,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_reg2_o", false,-1, 31,0);
        tracep->declBit(c+25,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_wreg_o", false,-1);
        tracep->declBus(c+26,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_wd_o", false,-1, 4,0);
        tracep->declBit(c+27,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_is_in_delayslot_o", false,-1);
        tracep->declBus(c+28,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_link_address_o", false,-1, 31,0);
        tracep->declBit(c+29,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 next_inst_in_delay_slot_o", false,-1);
        tracep->declBus(c+14,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_inst_o", false,-1, 31,0);
        tracep->declBit(c+30,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_branch_flag_o", false,-1);
        tracep->declBus(c+31,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 branch_target_address", false,-1, 31,0);
        tracep->declBus(c+32,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_aluop_i", false,-1, 7,0);
        tracep->declBus(c+33,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_alusel_i", false,-1, 2,0);
        tracep->declBus(c+34,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_reg1_i", false,-1, 31,0);
        tracep->declBus(c+35,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_reg2_i", false,-1, 31,0);
        tracep->declBit(c+36,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_wreg_i", false,-1);
        tracep->declBus(c+37,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_wd_i", false,-1, 4,0);
        tracep->declBit(c+38,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_is_in_delayslot_i", false,-1);
        tracep->declBus(c+39,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_link_address_i", false,-1, 31,0);
        tracep->declBus(c+40,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_inst_i", false,-1, 31,0);
        tracep->declBit(c+41,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 is_in_delayslot_i", false,-1);
        tracep->declBit(c+42,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_wreg_o", false,-1);
        tracep->declBus(c+37,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_wd_o", false,-1, 4,0);
        tracep->declBus(c+43,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_wdata_o", false,-1, 31,0);
        tracep->declBit(c+44,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_whilo_o", false,-1);
        tracep->declBus(c+45,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_hi_o", false,-1, 31,0);
        tracep->declBus(c+46,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_lo_o", false,-1, 31,0);
        tracep->declBus(c+32,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_aluop_o", false,-1, 7,0);
        tracep->declBus(c+47,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+35,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_reg2_o", false,-1, 31,0);
        tracep->declQuad(c+48,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_temp_o", false,-1, 63,0);
        tracep->declBus(c+50,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 cnt_o", false,-1, 1,0);
        tracep->declBit(c+51,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 signed_div", false,-1);
        tracep->declBus(c+52,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div_opdata1", false,-1, 31,0);
        tracep->declBus(c+53,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div_opdata2", false,-1, 31,0);
        tracep->declBit(c+54,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div_start", false,-1);
        tracep->declQuad(c+55,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div_result", false,-1, 63,0);
        tracep->declBit(c+57,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div_ready", false,-1);
        tracep->declBit(c+58,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wreg_i", false,-1);
        tracep->declBus(c+59,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wd_i", false,-1, 4,0);
        tracep->declBus(c+60,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wdata_i", false,-1, 31,0);
        tracep->declBit(c+61,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_whilo_i", false,-1);
        tracep->declBus(c+62,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_hi_i", false,-1, 31,0);
        tracep->declBus(c+63,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_lo_i", false,-1, 31,0);
        tracep->declBus(c+64,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_aluop_i", false,-1, 7,0);
        tracep->declBus(c+65,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+66,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_reg2_i", false,-1, 31,0);
        tracep->declQuad(c+67,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_temp_i", false,-1, 63,0);
        tracep->declBus(c+69,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 cnt_i", false,-1, 1,0);
        tracep->declBit(c+70,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wreg_o", false,-1);
        tracep->declBus(c+71,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wd_o", false,-1, 4,0);
        tracep->declBus(c+72,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wdata_o", false,-1, 31,0);
        tracep->declBit(c+73,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_whilo_o", false,-1);
        tracep->declBus(c+74,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_hi_o", false,-1, 31,0);
        tracep->declBus(c+75,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_lo_o", false,-1, 31,0);
        tracep->declBit(c+76,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 wb_wreg_i", false,-1);
        tracep->declBus(c+77,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 wb_wd_i", false,-1, 4,0);
        tracep->declBus(c+78,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 wb_wdata_i", false,-1, 31,0);
        tracep->declBit(c+79,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 wb_whilo_i", false,-1);
        tracep->declBus(c+80,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 wb_hi_i", false,-1, 31,0);
        tracep->declBus(c+81,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 wb_lo_i", false,-1, 31,0);
        tracep->declBus(c+82,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hi", false,-1, 31,0);
        tracep->declBus(c+83,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 lo", false,-1, 31,0);
        tracep->declBus(c+84,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 stall", false,-1, 5,0);
        tracep->declBit(c+165,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 stallreq_from_id", false,-1);
        tracep->declBit(c+85,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 stallreq_from_ex", false,-1);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 pc_reg0 clk", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 pc_reg0 rst", false,-1);
        tracep->declBit(c+30,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 pc_reg0 branch_flag_i", false,-1);
        tracep->declBus(c+31,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 pc_reg0 branch_target_address_i", false,-1, 31,0);
        tracep->declBus(c+84,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 pc_reg0 stall", false,-1, 5,0);
        tracep->declBus(c+5,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 pc_reg0 pc", false,-1, 31,0);
        tracep->declBit(c+6,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 pc_reg0 ce", false,-1);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 if_id0 clk", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 if_id0 rst", false,-1);
        tracep->declBus(c+5,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 if_id0 if_pc", false,-1, 31,0);
        tracep->declBus(c+4,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 if_id0 if_inst", false,-1, 31,0);
        tracep->declBus(c+84,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 if_id0 stall", false,-1, 5,0);
        tracep->declBus(c+13,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 if_id0 id_pc", false,-1, 31,0);
        tracep->declBus(c+14,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 if_id0 id_inst", false,-1, 31,0);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 rst", false,-1);
        tracep->declBus(c+13,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 pc_i", false,-1, 31,0);
        tracep->declBus(c+14,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+19,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 reg1_data_i", false,-1, 31,0);
        tracep->declBus(c+20,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 reg2_data_i", false,-1, 31,0);
        tracep->declBit(c+42,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 ex_wreg_i", false,-1);
        tracep->declBus(c+43,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 ex_wdata_i", false,-1, 31,0);
        tracep->declBus(c+37,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 ex_wd_i", false,-1, 4,0);
        tracep->declBit(c+70,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 mem_wreg_i", false,-1);
        tracep->declBus(c+72,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 mem_wdata_i", false,-1, 31,0);
        tracep->declBus(c+71,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 mem_wd_i", false,-1, 4,0);
        tracep->declBit(c+41,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 is_in_delayslot_i", false,-1);
        tracep->declBus(c+17,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+18,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+15,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 reg1_read_o", false,-1);
        tracep->declBit(c+16,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 reg2_read_o", false,-1);
        tracep->declBus(c+21,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 aluop_o", false,-1, 7,0);
        tracep->declBus(c+22,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 alusel_o", false,-1, 2,0);
        tracep->declBus(c+23,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 reg1_o", false,-1, 31,0);
        tracep->declBus(c+24,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 reg2_o", false,-1, 31,0);
        tracep->declBus(c+26,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 wd_o", false,-1, 4,0);
        tracep->declBit(c+25,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 wreg_o", false,-1);
        tracep->declBus(c+14,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+30,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 branch_flag_o", false,-1);
        tracep->declBus(c+31,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 branch_target_address_o", false,-1, 31,0);
        tracep->declBus(c+28,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 link_addr_o", false,-1, 31,0);
        tracep->declBit(c+27,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 is_in_delayslot_o", false,-1);
        tracep->declBit(c+29,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 next_inst_in_delay_slot_o", false,-1);
        tracep->declBit(c+165,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 stallreq", false,-1);
        tracep->declBus(c+86,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 op", false,-1, 5,0);
        tracep->declBus(c+87,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 shamt", false,-1, 4,0);
        tracep->declBus(c+88,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 funct", false,-1, 5,0);
        tracep->declBus(c+89,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 rs", false,-1, 4,0);
        tracep->declBus(c+90,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 rt", false,-1, 4,0);
        tracep->declBus(c+91,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 rd", false,-1, 4,0);
        tracep->declBus(c+92,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 sgn_imm", false,-1, 31,0);
        tracep->declBus(c+93,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 zro_imm", false,-1, 31,0);
        tracep->declBus(c+94,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 imm", false,-1, 31,0);
        tracep->declBus(c+95,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 sa", false,-1, 31,0);
        tracep->declBit(c+96,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 inst_valid", false,-1);
        tracep->declBus(c+97,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 pc_8", false,-1, 31,0);
        tracep->declBus(c+98,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 pc_4", false,-1, 31,0);
        tracep->declBus(c+99,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 pc_jump", false,-1, 31,0);
        tracep->declBus(c+100,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id0 pc_branch", false,-1, 31,0);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 clk", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 rst", false,-1);
        tracep->declBit(c+15,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 re1", false,-1);
        tracep->declBus(c+17,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 raddr1", false,-1, 4,0);
        tracep->declBit(c+16,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 re2", false,-1);
        tracep->declBus(c+18,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 raddr2", false,-1, 4,0);
        tracep->declBit(c+76,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 we", false,-1);
        tracep->declBus(c+77,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 waddr", false,-1, 4,0);
        tracep->declBus(c+78,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 wdata", false,-1, 31,0);
        tracep->declBus(c+19,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 rdata1", false,-1, 31,0);
        tracep->declBus(c+20,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 rdata2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+101+i*1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+3,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 regfile1 unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 clk", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 rst", false,-1);
        tracep->declBus(c+21,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_aluop", false,-1, 7,0);
        tracep->declBus(c+22,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_alusel", false,-1, 2,0);
        tracep->declBus(c+23,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_reg1", false,-1, 31,0);
        tracep->declBus(c+24,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_reg2", false,-1, 31,0);
        tracep->declBus(c+26,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_wd", false,-1, 4,0);
        tracep->declBit(c+25,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_wreg", false,-1);
        tracep->declBus(c+28,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_link_address", false,-1, 31,0);
        tracep->declBit(c+27,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_is_in_delayslot", false,-1);
        tracep->declBit(c+29,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 next_inst_in_delay_slot_i", false,-1);
        tracep->declBus(c+14,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 id_inst", false,-1, 31,0);
        tracep->declBus(c+84,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 stall", false,-1, 5,0);
        tracep->declBus(c+33,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_alusel", false,-1, 2,0);
        tracep->declBus(c+32,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_aluop", false,-1, 7,0);
        tracep->declBus(c+34,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_reg1", false,-1, 31,0);
        tracep->declBus(c+35,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_reg2", false,-1, 31,0);
        tracep->declBus(c+37,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_wd", false,-1, 4,0);
        tracep->declBit(c+36,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_wreg", false,-1);
        tracep->declBus(c+39,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_link_address", false,-1, 31,0);
        tracep->declBit(c+38,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_is_in_delayslot_o", false,-1);
        tracep->declBus(c+40,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 ex_inst", false,-1, 31,0);
        tracep->declBit(c+41,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 id_ex0 is_in_delayslot_o", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 rst", false,-1);
        tracep->declBus(c+32,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 aluop_i", false,-1, 7,0);
        tracep->declBus(c+33,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 alusel_i", false,-1, 2,0);
        tracep->declBus(c+34,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 reg1_i", false,-1, 31,0);
        tracep->declBus(c+35,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 reg2_i", false,-1, 31,0);
        tracep->declBus(c+37,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 wd_i", false,-1, 4,0);
        tracep->declBit(c+36,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 wreg_i", false,-1);
        tracep->declBus(c+39,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 link_address_i", false,-1, 31,0);
        tracep->declBit(c+38,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 is_in_delayslot_i", false,-1);
        tracep->declBus(c+40,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+55,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 div_result_i", false,-1, 63,0);
        tracep->declBit(c+57,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 div_ready_i", false,-1);
        tracep->declBus(c+82,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 hi_i", false,-1, 31,0);
        tracep->declBus(c+83,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 lo_i", false,-1, 31,0);
        tracep->declBus(c+80,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 wb_hi_i", false,-1, 31,0);
        tracep->declBus(c+81,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 wb_lo_i", false,-1, 31,0);
        tracep->declBit(c+79,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 wb_whilo_i", false,-1);
        tracep->declBus(c+62,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 mem_hi_i", false,-1, 31,0);
        tracep->declBus(c+63,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 mem_lo_i", false,-1, 31,0);
        tracep->declBit(c+61,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 mem_whilo_i", false,-1);
        tracep->declQuad(c+67,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 hilo_temp_i", false,-1, 63,0);
        tracep->declBus(c+69,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 cnt_i", false,-1, 1,0);
        tracep->declBus(c+37,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 wd_o", false,-1, 4,0);
        tracep->declBit(c+42,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 wreg_o", false,-1);
        tracep->declBus(c+43,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 wdata_o", false,-1, 31,0);
        tracep->declBus(c+45,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 hi_o", false,-1, 31,0);
        tracep->declBus(c+46,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 lo_o", false,-1, 31,0);
        tracep->declBit(c+44,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 whilo_o", false,-1);
        tracep->declBus(c+32,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 aluop_o", false,-1, 7,0);
        tracep->declBus(c+35,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 reg2_o", false,-1, 31,0);
        tracep->declBus(c+47,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+52,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 div_opdata1_o", false,-1, 31,0);
        tracep->declBus(c+53,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 div_opdata2_o", false,-1, 31,0);
        tracep->declBit(c+54,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 div_start_o", false,-1);
        tracep->declBit(c+51,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 signed_div_o", false,-1);
        tracep->declQuad(c+48,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 hilo_temp_o", false,-1, 63,0);
        tracep->declBus(c+50,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 cnt_o", false,-1, 1,0);
        tracep->declBit(c+85,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 stallreq", false,-1);
        tracep->declBus(c+133,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 logicout", false,-1, 31,0);
        tracep->declBus(c+134,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 shiftres", false,-1, 31,0);
        tracep->declBus(c+135,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 moveres", false,-1, 31,0);
        tracep->declBus(c+136,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 HI", false,-1, 31,0);
        tracep->declBus(c+137,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 LO", false,-1, 31,0);
        tracep->declBit(c+138,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 ov_sum", false,-1);
        tracep->declBit(c+166,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 reg1_eq_reg2", false,-1);
        tracep->declBit(c+139,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 reg1_lt_reg2", false,-1);
        tracep->declBus(c+140,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 reg2_i_mux", false,-1, 31,0);
        tracep->declBus(c+141,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 reg1_i_not", false,-1, 31,0);
        tracep->declBus(c+142,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 result_sum", false,-1, 31,0);
        tracep->declBus(c+143,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 arithmeticres", false,-1, 31,0);
        tracep->declBus(c+144,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 multiplicand", false,-1, 31,0);
        tracep->declBus(c+145,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 multipler", false,-1, 31,0);
        tracep->declQuad(c+146,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 hilo_temp", false,-1, 63,0);
        tracep->declQuad(c+148,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 mulres", false,-1, 63,0);
        tracep->declQuad(c+150,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 hilo_temp_1", false,-1, 63,0);
        tracep->declBit(c+152,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 stallreq_from_madd_msub", false,-1);
        tracep->declBit(c+153,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex0 stallreq_from_div", false,-1);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 clk", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 rst", false,-1);
        tracep->declBit(c+51,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 signed_div_i", false,-1);
        tracep->declBus(c+52,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 opdata1_i", false,-1, 31,0);
        tracep->declBus(c+53,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 opdata2_i", false,-1, 31,0);
        tracep->declBit(c+54,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 start_i", false,-1);
        tracep->declBit(c+165,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 annul_i", false,-1);
        tracep->declQuad(c+55,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 result_o", false,-1, 63,0);
        tracep->declBit(c+57,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 ready_o", false,-1);
        tracep->declBus(c+154,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 state", false,-1, 1,0);
        tracep->declBus(c+155,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 cnt", false,-1, 5,0);
        tracep->declBus(c+156,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 temp_op1", false,-1, 31,0);
        tracep->declBus(c+157,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 temp_op2", false,-1, 31,0);
        tracep->declArray(c+158,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 dividend", false,-1, 64,0);
        tracep->declBus(c+161,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 divisor", false,-1, 31,0);
        tracep->declQuad(c+162,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 div0 div_temp", false,-1, 32,0);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 clk", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 rst", false,-1);
        tracep->declBus(c+37,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_wd", false,-1, 4,0);
        tracep->declBit(c+42,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_wreg", false,-1);
        tracep->declBus(c+43,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_wdata", false,-1, 31,0);
        tracep->declBus(c+45,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_hi", false,-1, 31,0);
        tracep->declBus(c+46,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_lo", false,-1, 31,0);
        tracep->declBit(c+44,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_whilo", false,-1);
        tracep->declBus(c+32,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_aluop", false,-1, 7,0);
        tracep->declBus(c+35,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_reg2", false,-1, 31,0);
        tracep->declBus(c+47,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 ex_mem_addr", false,-1, 31,0);
        tracep->declBus(c+84,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 stall", false,-1, 5,0);
        tracep->declQuad(c+48,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 hilo_i", false,-1, 63,0);
        tracep->declBus(c+50,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 cnt_i", false,-1, 1,0);
        tracep->declBus(c+59,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_wd", false,-1, 4,0);
        tracep->declBit(c+58,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_wreg", false,-1);
        tracep->declBus(c+60,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_wdata", false,-1, 31,0);
        tracep->declBus(c+62,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_hi", false,-1, 31,0);
        tracep->declBus(c+63,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_lo", false,-1, 31,0);
        tracep->declBit(c+61,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_whilo", false,-1);
        tracep->declBus(c+64,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_aluop", false,-1, 7,0);
        tracep->declBus(c+66,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_reg2", false,-1, 31,0);
        tracep->declBus(c+65,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 mem_mem_addr", false,-1, 31,0);
        tracep->declQuad(c+67,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 hilo_o", false,-1, 63,0);
        tracep->declBus(c+69,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ex_mem0 cnt_o", false,-1, 1,0);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 rst", false,-1);
        tracep->declBus(c+59,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 wd_i", false,-1, 4,0);
        tracep->declBit(c+58,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 wreg_i", false,-1);
        tracep->declBus(c+60,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 wdata_i", false,-1, 31,0);
        tracep->declBus(c+62,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 hi_i", false,-1, 31,0);
        tracep->declBus(c+63,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 lo_i", false,-1, 31,0);
        tracep->declBit(c+61,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 whilo_i", false,-1);
        tracep->declBus(c+64,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 aluop_i", false,-1, 7,0);
        tracep->declBus(c+66,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 reg2_i", false,-1, 31,0);
        tracep->declBus(c+65,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+10,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+71,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 wd_o", false,-1, 4,0);
        tracep->declBit(c+70,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 wreg_o", false,-1);
        tracep->declBus(c+72,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 wdata_o", false,-1, 31,0);
        tracep->declBus(c+74,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 hi_o", false,-1, 31,0);
        tracep->declBus(c+75,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 lo_o", false,-1, 31,0);
        tracep->declBit(c+73,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 whilo_o", false,-1);
        tracep->declBus(c+8,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+7,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 mem_we_o", false,-1);
        tracep->declBus(c+11,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 mem_sel_o", false,-1, 3,0);
        tracep->declBus(c+9,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+12,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem0 mem_ce_o", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 rst", false,-1);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 clk", false,-1);
        tracep->declBus(c+71,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 mem_wd", false,-1, 4,0);
        tracep->declBit(c+70,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 mem_wreg", false,-1);
        tracep->declBus(c+72,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 mem_wdata", false,-1, 31,0);
        tracep->declBus(c+74,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 mem_hi", false,-1, 31,0);
        tracep->declBus(c+75,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 mem_lo", false,-1, 31,0);
        tracep->declBit(c+73,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 mem_whilo", false,-1);
        tracep->declBus(c+84,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 stall", false,-1, 5,0);
        tracep->declBus(c+77,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 wb_wd", false,-1, 4,0);
        tracep->declBit(c+76,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 wb_wreg", false,-1);
        tracep->declBus(c+78,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 wb_wdata", false,-1, 31,0);
        tracep->declBus(c+80,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 wb_hi", false,-1, 31,0);
        tracep->declBus(c+81,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 wb_lo", false,-1, 31,0);
        tracep->declBit(c+79,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 mem_wb0 wb_whilo", false,-1);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_reg0 rst", false,-1);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_reg0 clk", false,-1);
        tracep->declBit(c+79,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_reg0 we", false,-1);
        tracep->declBus(c+80,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_reg0 hi_i", false,-1, 31,0);
        tracep->declBus(c+81,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_reg0 lo_i", false,-1, 31,0);
        tracep->declBus(c+82,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_reg0 hi_o", false,-1, 31,0);
        tracep->declBus(c+83,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 hilo_reg0 lo_o", false,-1, 31,0);
        tracep->declBit(c+2,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ctrl0 rst", false,-1);
        tracep->declBit(c+165,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ctrl0 stallreq_from_id", false,-1);
        tracep->declBit(c+85,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ctrl0 stallreq_from_ex", false,-1);
        tracep->declBus(c+84,"openmips_min_sopc_tb openmips_min_sopc0 openmips0 ctrl0 stall", false,-1, 5,0);
        tracep->declBit(c+6,"openmips_min_sopc_tb openmips_min_sopc0 inst_rom0 ce", false,-1);
        tracep->declBus(c+5,"openmips_min_sopc_tb openmips_min_sopc0 inst_rom0 addr", false,-1, 31,0);
        tracep->declBus(c+4,"openmips_min_sopc_tb openmips_min_sopc0 inst_rom0 inst", false,-1, 31,0);
        tracep->declBit(c+1,"openmips_min_sopc_tb openmips_min_sopc0 data_ram0 clk", false,-1);
        tracep->declBit(c+12,"openmips_min_sopc_tb openmips_min_sopc0 data_ram0 ce", false,-1);
        tracep->declBit(c+7,"openmips_min_sopc_tb openmips_min_sopc0 data_ram0 we", false,-1);
        tracep->declBus(c+11,"openmips_min_sopc_tb openmips_min_sopc0 data_ram0 sel", false,-1, 3,0);
        tracep->declBus(c+8,"openmips_min_sopc_tb openmips_min_sopc0 data_ram0 addr", false,-1, 31,0);
        tracep->declBus(c+9,"openmips_min_sopc_tb openmips_min_sopc0 data_ram0 data_i", false,-1, 31,0);
        tracep->declBus(c+10,"openmips_min_sopc_tb openmips_min_sopc0 data_ram0 data_o", false,-1, 31,0);
        tracep->declBus(c+164,"openmips_min_sopc_tb openmips_min_sopc0 data_ram0 saddr", false,-1, 16,0);
    }
}

void Vopenmips_min_sopc_tb::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vopenmips_min_sopc_tb::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = static_cast<Vopenmips_min_sopc_tb__Syms*>(userp);
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vopenmips_min_sopc_tb::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = static_cast<Vopenmips_min_sopc_tb__Syms*>(userp);
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->openmips_min_sopc_tb__DOT__CLOCK_50));
        tracep->fullBit(oldp+2,(vlTOPp->openmips_min_sopc_tb__DOT__rst));
        tracep->fullIData(oldp+3,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+4,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__rom_ce)
                                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__inst_rom0__DOT__inst_mem
                                   [(0x1ffffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__pc 
                                                 >> 2U))]
                                    : 0U)),32);
        tracep->fullIData(oldp+5,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__pc),32);
        tracep->fullBit(oldp+6,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__rom_ce));
        tracep->fullBit(oldp+7,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i));
        tracep->fullIData(oldp+8,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i),32);
        tracep->fullIData(oldp+9,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i),32);
        tracep->fullIData(oldp+10,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o),32);
        tracep->fullCData(oldp+11,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i),4);
        tracep->fullBit(oldp+12,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i));
        tracep->fullIData(oldp+13,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i),32);
        tracep->fullIData(oldp+14,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i),32);
        tracep->fullBit(oldp+15,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read));
        tracep->fullBit(oldp+16,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read));
        tracep->fullCData(oldp+17,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr),5);
        tracep->fullCData(oldp+18,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr),5);
        tracep->fullIData(oldp+19,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                     ? 0U : ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr))
                                              ? 0U : 
                                             (((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr) 
                                                 == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i)) 
                                                & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read)) 
                                               & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i))
                                               ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i
                                               : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read)
                                                   ? 
                                                  vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs
                                                  [vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr]
                                                   : 0U))))),32);
        tracep->fullIData(oldp+20,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                     ? 0U : ((0U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr))
                                              ? 0U : 
                                             (((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr) 
                                                 == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i)) 
                                                & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read)) 
                                               & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i))
                                               ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i
                                               : ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read)
                                                   ? 
                                                  vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs
                                                  [vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr]
                                                   : 0U))))),32);
        tracep->fullCData(oldp+21,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o),8);
        tracep->fullCData(oldp+22,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o),3);
        tracep->fullIData(oldp+23,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o),32);
        tracep->fullIData(oldp+24,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o),32);
        tracep->fullBit(oldp+25,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o));
        tracep->fullCData(oldp+26,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o),5);
        tracep->fullBit(oldp+27,(((~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)) 
                                  & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__is_in_delayslot_i))));
        tracep->fullIData(oldp+28,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o),32);
        tracep->fullBit(oldp+29,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o));
        tracep->fullBit(oldp+30,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o));
        tracep->fullIData(oldp+31,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address),32);
        tracep->fullCData(oldp+32,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i),8);
        tracep->fullCData(oldp+33,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i),3);
        tracep->fullIData(oldp+34,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i),32);
        tracep->fullIData(oldp+35,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i),32);
        tracep->fullBit(oldp+36,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_i));
        tracep->fullCData(oldp+37,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wd_i),5);
        tracep->fullBit(oldp+38,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_is_in_delayslot_i));
        tracep->fullIData(oldp+39,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_link_address_i),32);
        tracep->fullIData(oldp+40,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_inst_i),32);
        tracep->fullBit(oldp+41,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__is_in_delayslot_i));
        tracep->fullBit(oldp+42,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_o));
        tracep->fullIData(oldp+43,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wdata_o),32);
        tracep->fullBit(oldp+44,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o));
        tracep->fullIData(oldp+45,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o),32);
        tracep->fullIData(oldp+46,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o),32);
        tracep->fullIData(oldp+47,((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                    + ((0xffff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_inst_i 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                                       | (0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_inst_i)))),32);
        tracep->fullQData(oldp+48,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o),64);
        tracep->fullCData(oldp+50,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o),2);
        tracep->fullBit(oldp+51,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__signed_div));
        tracep->fullIData(oldp+52,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata1),32);
        tracep->fullIData(oldp+53,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata2),32);
        tracep->fullBit(oldp+54,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_start));
        tracep->fullQData(oldp+55,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_result),64);
        tracep->fullBit(oldp+57,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready));
        tracep->fullBit(oldp+58,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_i));
        tracep->fullCData(oldp+59,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_i),5);
        tracep->fullIData(oldp+60,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i),32);
        tracep->fullBit(oldp+61,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_i));
        tracep->fullIData(oldp+62,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_i),32);
        tracep->fullIData(oldp+63,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_i),32);
        tracep->fullCData(oldp+64,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i),8);
        tracep->fullIData(oldp+65,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i),32);
        tracep->fullIData(oldp+66,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i),32);
        tracep->fullQData(oldp+67,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_i),64);
        tracep->fullCData(oldp+69,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i),2);
        tracep->fullBit(oldp+70,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_o));
        tracep->fullCData(oldp+71,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_o),5);
        tracep->fullIData(oldp+72,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o),32);
        tracep->fullBit(oldp+73,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_o));
        tracep->fullIData(oldp+74,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_o),32);
        tracep->fullIData(oldp+75,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_o),32);
        tracep->fullBit(oldp+76,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i));
        tracep->fullCData(oldp+77,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i),5);
        tracep->fullIData(oldp+78,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i),32);
        tracep->fullBit(oldp+79,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_whilo_i));
        tracep->fullIData(oldp+80,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_hi_i),32);
        tracep->fullIData(oldp+81,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_lo_i),32);
        tracep->fullIData(oldp+82,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hi),32);
        tracep->fullIData(oldp+83,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__lo),32);
        tracep->fullCData(oldp+84,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__stall),6);
        tracep->fullBit(oldp+85,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub) 
                                  | (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div))));
        tracep->fullCData(oldp+86,((0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x1aU))),6);
        tracep->fullCData(oldp+87,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U))),5);
        tracep->fullCData(oldp+88,((0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)),6);
        tracep->fullCData(oldp+89,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x15U))),5);
        tracep->fullCData(oldp+90,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x10U))),5);
        tracep->fullCData(oldp+91,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 0xbU))),5);
        tracep->fullIData(oldp+92,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm),32);
        tracep->fullIData(oldp+93,((0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)),32);
        tracep->fullIData(oldp+94,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm),32);
        tracep->fullIData(oldp+95,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U))),32);
        tracep->fullBit(oldp+96,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid));
        tracep->fullIData(oldp+97,(((IData)(8U) + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i)),32);
        tracep->fullIData(oldp+98,(((IData)(4U) + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i)),32);
        tracep->fullIData(oldp+99,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_jump),32);
        tracep->fullIData(oldp+100,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch),32);
        tracep->fullIData(oldp+101,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0]),32);
        tracep->fullIData(oldp+102,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[1]),32);
        tracep->fullIData(oldp+103,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[2]),32);
        tracep->fullIData(oldp+104,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[3]),32);
        tracep->fullIData(oldp+105,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[4]),32);
        tracep->fullIData(oldp+106,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[5]),32);
        tracep->fullIData(oldp+107,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[6]),32);
        tracep->fullIData(oldp+108,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[7]),32);
        tracep->fullIData(oldp+109,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[8]),32);
        tracep->fullIData(oldp+110,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[9]),32);
        tracep->fullIData(oldp+111,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[10]),32);
        tracep->fullIData(oldp+112,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[11]),32);
        tracep->fullIData(oldp+113,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[12]),32);
        tracep->fullIData(oldp+114,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[13]),32);
        tracep->fullIData(oldp+115,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[14]),32);
        tracep->fullIData(oldp+116,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[15]),32);
        tracep->fullIData(oldp+117,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[16]),32);
        tracep->fullIData(oldp+118,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[17]),32);
        tracep->fullIData(oldp+119,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[18]),32);
        tracep->fullIData(oldp+120,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[19]),32);
        tracep->fullIData(oldp+121,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[20]),32);
        tracep->fullIData(oldp+122,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[21]),32);
        tracep->fullIData(oldp+123,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[22]),32);
        tracep->fullIData(oldp+124,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[23]),32);
        tracep->fullIData(oldp+125,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[24]),32);
        tracep->fullIData(oldp+126,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[25]),32);
        tracep->fullIData(oldp+127,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[26]),32);
        tracep->fullIData(oldp+128,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[27]),32);
        tracep->fullIData(oldp+129,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[28]),32);
        tracep->fullIData(oldp+130,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[29]),32);
        tracep->fullIData(oldp+131,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[30]),32);
        tracep->fullIData(oldp+132,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[31]),32);
        tracep->fullIData(oldp+133,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                      ? 0U : ((0x25U 
                                               == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                               ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                  | vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)
                                               : ((0x24U 
                                                   == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                   ? 
                                                  (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)
                                                   : 
                                                  ((0x27U 
                                                    == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                    ? 
                                                   (~ 
                                                    (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                     | vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i))
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                     ? 
                                                    (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                     ^ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)
                                                     : 0U)))))),32);
        tracep->fullIData(oldp+134,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                      ? 0U : ((0x7cU 
                                               == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                               ? (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))
                                               : ((2U 
                                                   == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                   ? 
                                                  (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                                   >> 
                                                   (0x1fU 
                                                    & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                    ? 
                                                   (((0x1fU 
                                                      >= 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))))
                                                      ? 
                                                     ((- (IData)(
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
                                                       >> 
                                                       (0x1fU 
                                                        & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)))
                                                    : 0U))))),32);
        tracep->fullIData(oldp+135,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                      ? 0U : ((0x10U 
                                               == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                               ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI
                                               : ((0x12U 
                                                   == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                   ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                    ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                     ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i
                                                     : 0U)))))),32);
        tracep->fullIData(oldp+136,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI),32);
        tracep->fullIData(oldp+137,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO),32);
        tracep->fullBit(oldp+138,((1U & ((((~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                               >> 0x1fU)) 
                                           & (~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
                                                 >> 0x1fU))) 
                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                             >> 0x1fU)) 
                                         | (((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                              & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux) 
                                             >> 0x1fU) 
                                            & (~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                  >> 0x1fU)))))));
        tracep->fullBit(oldp+139,((1U & ((0x2aU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                          ? ((((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                >> 0x1fU) 
                                               & (~ 
                                                  (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                                   >> 0x1fU))) 
                                              | (((~ 
                                                   (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                    >> 0x1fU)) 
                                                  & (~ 
                                                     (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                                      >> 0x1fU))) 
                                                 & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                    >> 0x1fU))) 
                                             | (((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                  & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i) 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum) 
                                                >> 0x1fU))
                                          : (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                             < vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)))));
        tracep->fullIData(oldp+140,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux),32);
        tracep->fullIData(oldp+141,((~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)),32);
        tracep->fullIData(oldp+142,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum),32);
        tracep->fullIData(oldp+143,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres),32);
        tracep->fullIData(oldp+144,(((((((0xa9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                                         | (0x18U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                        | (0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                       | (0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                         >> 0x1fU))
                                      ? ((IData)(1U) 
                                         + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))
                                      : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)),32);
        tracep->fullIData(oldp+145,(((((((0xa9U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                                         | (0x18U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                        | (0xa6U == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                       | (0xaaU == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                      & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                         >> 0x1fU))
                                      ? ((IData)(1U) 
                                         + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i))
                                      : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)),32);
        tracep->fullQData(oldp+146,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp),64);
        tracep->fullQData(oldp+148,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres),64);
        tracep->fullQData(oldp+150,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1),64);
        tracep->fullBit(oldp+152,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub));
        tracep->fullBit(oldp+153,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div));
        tracep->fullCData(oldp+154,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__state),2);
        tracep->fullCData(oldp+155,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__cnt),6);
        tracep->fullIData(oldp+156,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__temp_op1),32);
        tracep->fullIData(oldp+157,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__temp_op2),32);
        tracep->fullWData(oldp+158,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__dividend),65);
        tracep->fullIData(oldp+161,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__divisor),32);
        tracep->fullQData(oldp+162,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__div_temp),33);
        tracep->fullIData(oldp+164,((0x1ffffU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                                 >> 2U))),17);
        tracep->fullBit(oldp+165,(0U));
        tracep->fullBit(oldp+166,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg1_eq_reg2));
    }
}
