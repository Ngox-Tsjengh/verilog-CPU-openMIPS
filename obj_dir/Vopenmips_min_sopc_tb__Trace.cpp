// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopenmips_min_sopc_tb__Syms.h"


void Vopenmips_min_sopc_tb::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = static_cast<Vopenmips_min_sopc_tb__Syms*>(userp);
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vopenmips_min_sopc_tb::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = static_cast<Vopenmips_min_sopc_tb__Syms*>(userp);
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlTOPp->openmips_min_sopc_tb__DOT__CLOCK_50));
            tracep->chgBit(oldp+1,(vlTOPp->openmips_min_sopc_tb__DOT__rst));
            tracep->chgIData(oldp+2,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+3,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__rom_ce)
                                       ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__inst_rom0__DOT__inst_mem
                                      [(0x1ffffU & 
                                        (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__pc 
                                         >> 2U))] : 0U)),32);
            tracep->chgIData(oldp+4,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__pc),32);
            tracep->chgBit(oldp+5,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__rom_ce));
            tracep->chgBit(oldp+6,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_we_i));
            tracep->chgIData(oldp+7,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i),32);
            tracep->chgIData(oldp+8,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_i),32);
            tracep->chgIData(oldp+9,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_data_o),32);
            tracep->chgCData(oldp+10,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_sel_i),4);
            tracep->chgBit(oldp+11,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_ce_i));
            tracep->chgIData(oldp+12,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i),32);
            tracep->chgIData(oldp+13,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i),32);
            tracep->chgBit(oldp+14,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read));
            tracep->chgBit(oldp+15,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read));
            tracep->chgCData(oldp+16,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr),5);
            tracep->chgCData(oldp+17,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr),5);
            tracep->chgIData(oldp+18,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                        ? 0U : ((0U 
                                                 == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr))
                                                 ? 0U
                                                 : 
                                                (((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr) 
                                                    == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i)) 
                                                   & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read)) 
                                                  & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i))
                                                  ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i
                                                  : 
                                                 ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_read)
                                                   ? 
                                                  vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs
                                                  [vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg1_addr]
                                                   : 0U))))),32);
            tracep->chgIData(oldp+19,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                        ? 0U : ((0U 
                                                 == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr))
                                                 ? 0U
                                                 : 
                                                (((((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr) 
                                                    == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i)) 
                                                   & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read)) 
                                                  & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i))
                                                  ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i
                                                  : 
                                                 ((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_read)
                                                   ? 
                                                  vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs
                                                  [vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__reg2_addr]
                                                   : 0U))))),32);
            tracep->chgCData(oldp+20,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_aluop_o),8);
            tracep->chgCData(oldp+21,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_alusel_o),3);
            tracep->chgIData(oldp+22,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg1_o),32);
            tracep->chgIData(oldp+23,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_reg2_o),32);
            tracep->chgBit(oldp+24,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wreg_o));
            tracep->chgCData(oldp+25,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_wd_o),5);
            tracep->chgBit(oldp+26,(((~ (IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)) 
                                     & (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__is_in_delayslot_i))));
            tracep->chgIData(oldp+27,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_link_address_o),32);
            tracep->chgBit(oldp+28,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__next_inst_in_delay_slot_o));
            tracep->chgBit(oldp+29,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_branch_flag_o));
            tracep->chgIData(oldp+30,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__branch_target_address),32);
            tracep->chgCData(oldp+31,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i),8);
            tracep->chgCData(oldp+32,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_alusel_i),3);
            tracep->chgIData(oldp+33,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i),32);
            tracep->chgIData(oldp+34,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i),32);
            tracep->chgBit(oldp+35,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_i));
            tracep->chgCData(oldp+36,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wd_i),5);
            tracep->chgBit(oldp+37,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_is_in_delayslot_i));
            tracep->chgIData(oldp+38,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_link_address_i),32);
            tracep->chgIData(oldp+39,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_inst_i),32);
            tracep->chgBit(oldp+40,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__is_in_delayslot_i));
            tracep->chgBit(oldp+41,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wreg_o));
            tracep->chgIData(oldp+42,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_wdata_o),32);
            tracep->chgBit(oldp+43,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_whilo_o));
            tracep->chgIData(oldp+44,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_hi_o),32);
            tracep->chgIData(oldp+45,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_lo_o),32);
            tracep->chgIData(oldp+46,((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                       + ((0xffff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_inst_i 
                                                             >> 0xfU)))) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_inst_i)))),32);
            tracep->chgQData(oldp+47,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_o),64);
            tracep->chgCData(oldp+49,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_o),2);
            tracep->chgBit(oldp+50,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__signed_div));
            tracep->chgIData(oldp+51,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata1),32);
            tracep->chgIData(oldp+52,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_opdata2),32);
            tracep->chgBit(oldp+53,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_start));
            tracep->chgQData(oldp+54,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_result),64);
            tracep->chgBit(oldp+56,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div_ready));
            tracep->chgBit(oldp+57,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_i));
            tracep->chgCData(oldp+58,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_i),5);
            tracep->chgIData(oldp+59,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_i),32);
            tracep->chgBit(oldp+60,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_i));
            tracep->chgIData(oldp+61,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_i),32);
            tracep->chgIData(oldp+62,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_i),32);
            tracep->chgCData(oldp+63,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_aluop_i),8);
            tracep->chgIData(oldp+64,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_mem_addr_i),32);
            tracep->chgIData(oldp+65,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_reg2_i),32);
            tracep->chgQData(oldp+66,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hilo_temp_i),64);
            tracep->chgCData(oldp+68,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__cnt_i),2);
            tracep->chgBit(oldp+69,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wreg_o));
            tracep->chgCData(oldp+70,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wd_o),5);
            tracep->chgIData(oldp+71,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_wdata_o),32);
            tracep->chgBit(oldp+72,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_whilo_o));
            tracep->chgIData(oldp+73,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_hi_o),32);
            tracep->chgIData(oldp+74,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__mem_lo_o),32);
            tracep->chgBit(oldp+75,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wreg_i));
            tracep->chgCData(oldp+76,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wd_i),5);
            tracep->chgIData(oldp+77,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_wdata_i),32);
            tracep->chgBit(oldp+78,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_whilo_i));
            tracep->chgIData(oldp+79,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_hi_i),32);
            tracep->chgIData(oldp+80,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__wb_lo_i),32);
            tracep->chgIData(oldp+81,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__hi),32);
            tracep->chgIData(oldp+82,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__lo),32);
            tracep->chgCData(oldp+83,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__stall),6);
            tracep->chgBit(oldp+84,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub) 
                                     | (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div))));
            tracep->chgCData(oldp+85,((0x3fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x1aU))),6);
            tracep->chgCData(oldp+86,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 6U))),5);
            tracep->chgCData(oldp+87,((0x3fU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)),6);
            tracep->chgCData(oldp+88,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x15U))),5);
            tracep->chgCData(oldp+89,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x10U))),5);
            tracep->chgCData(oldp+90,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 0xbU))),5);
            tracep->chgIData(oldp+91,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__sgn_imm),32);
            tracep->chgIData(oldp+92,((0xffffU & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i)),32);
            tracep->chgIData(oldp+93,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__imm),32);
            tracep->chgIData(oldp+94,((0x1fU & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_inst_i 
                                                >> 6U))),32);
            tracep->chgBit(oldp+95,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__inst_valid));
            tracep->chgIData(oldp+96,(((IData)(8U) 
                                       + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i)),32);
            tracep->chgIData(oldp+97,(((IData)(4U) 
                                       + vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id_pc_i)),32);
            tracep->chgIData(oldp+98,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_jump),32);
            tracep->chgIData(oldp+99,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__id0__DOT__pc_branch),32);
            tracep->chgIData(oldp+100,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[0]),32);
            tracep->chgIData(oldp+101,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[1]),32);
            tracep->chgIData(oldp+102,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[2]),32);
            tracep->chgIData(oldp+103,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[3]),32);
            tracep->chgIData(oldp+104,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[4]),32);
            tracep->chgIData(oldp+105,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[5]),32);
            tracep->chgIData(oldp+106,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[6]),32);
            tracep->chgIData(oldp+107,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[7]),32);
            tracep->chgIData(oldp+108,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[8]),32);
            tracep->chgIData(oldp+109,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[9]),32);
            tracep->chgIData(oldp+110,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[10]),32);
            tracep->chgIData(oldp+111,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[11]),32);
            tracep->chgIData(oldp+112,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[12]),32);
            tracep->chgIData(oldp+113,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[13]),32);
            tracep->chgIData(oldp+114,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[14]),32);
            tracep->chgIData(oldp+115,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[15]),32);
            tracep->chgIData(oldp+116,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[16]),32);
            tracep->chgIData(oldp+117,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[17]),32);
            tracep->chgIData(oldp+118,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[18]),32);
            tracep->chgIData(oldp+119,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[19]),32);
            tracep->chgIData(oldp+120,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[20]),32);
            tracep->chgIData(oldp+121,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[21]),32);
            tracep->chgIData(oldp+122,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[22]),32);
            tracep->chgIData(oldp+123,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[23]),32);
            tracep->chgIData(oldp+124,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[24]),32);
            tracep->chgIData(oldp+125,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[25]),32);
            tracep->chgIData(oldp+126,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[26]),32);
            tracep->chgIData(oldp+127,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[27]),32);
            tracep->chgIData(oldp+128,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[28]),32);
            tracep->chgIData(oldp+129,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[29]),32);
            tracep->chgIData(oldp+130,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[30]),32);
            tracep->chgIData(oldp+131,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__regfile1__DOT__regs[31]),32);
            tracep->chgIData(oldp+132,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                         ? 0U : ((0x25U 
                                                  == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                  ? 
                                                 (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                  | vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)
                                                  : 
                                                 ((0x24U 
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
            tracep->chgIData(oldp+133,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                         ? 0U : ((0x7cU 
                                                  == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                  ? 
                                                 (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))
                                                  : 
                                                 ((2U 
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
            tracep->chgIData(oldp+134,(((IData)(vlTOPp->openmips_min_sopc_tb__DOT__rst)
                                         ? 0U : ((0x10U 
                                                  == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
                                                  ? vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI
                                                  : 
                                                 ((0x12U 
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
            tracep->chgIData(oldp+135,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__HI),32);
            tracep->chgIData(oldp+136,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__LO),32);
            tracep->chgBit(oldp+137,((1U & ((((~ (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                  >> 0x1fU)) 
                                              & (~ 
                                                 (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
                                                  >> 0x1fU))) 
                                             & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                >> 0x1fU)) 
                                            | (((vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                                 & vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux) 
                                                >> 0x1fU) 
                                               & (~ 
                                                  (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                   >> 0x1fU)))))));
            tracep->chgBit(oldp+138,((1U & ((0x2aU 
                                             == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))
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
            tracep->chgIData(oldp+139,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux),32);
            tracep->chgIData(oldp+140,((~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)),32);
            tracep->chgIData(oldp+141,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__result_sum),32);
            tracep->chgIData(oldp+142,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__arithmeticres),32);
            tracep->chgIData(oldp+143,(((((((0xa9U 
                                             == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                                            | (0x18U 
                                               == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                           | (0xa6U 
                                              == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                          | (0xaaU 
                                             == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                         & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i 
                                            >> 0x1fU))
                                         ? ((IData)(1U) 
                                            + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i))
                                         : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg1_i)),32);
            tracep->chgIData(oldp+144,(((((((0xa9U 
                                             == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i)) 
                                            | (0x18U 
                                               == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                           | (0xa6U 
                                              == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                          | (0xaaU 
                                             == (IData)(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_aluop_i))) 
                                         & (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i 
                                            >> 0x1fU))
                                         ? ((IData)(1U) 
                                            + (~ vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i))
                                         : vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex_reg2_i)),32);
            tracep->chgQData(oldp+145,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp),64);
            tracep->chgQData(oldp+147,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__mulres),64);
            tracep->chgQData(oldp+149,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__hilo_temp_1),64);
            tracep->chgBit(oldp+151,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_madd_msub));
            tracep->chgBit(oldp+152,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__ex0__DOT__stallreq_from_div));
            tracep->chgCData(oldp+153,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__state),2);
            tracep->chgCData(oldp+154,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__cnt),6);
            tracep->chgIData(oldp+155,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__temp_op1),32);
            tracep->chgIData(oldp+156,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__temp_op2),32);
            tracep->chgWData(oldp+157,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__dividend),65);
            tracep->chgIData(oldp+160,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__divisor),32);
            tracep->chgQData(oldp+161,(vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__openmips0__DOT__div0__DOT__div_temp),33);
            tracep->chgIData(oldp+163,((0x1ffffU & 
                                        (vlTOPp->openmips_min_sopc_tb__DOT__openmips_min_sopc0__DOT__mem_addr_i 
                                         >> 2U))),17);
        }
    }
}

void Vopenmips_min_sopc_tb::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vopenmips_min_sopc_tb__Syms* __restrict vlSymsp = static_cast<Vopenmips_min_sopc_tb__Syms*>(userp);
    Vopenmips_min_sopc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
