// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050078_npc_onecycle__Syms.h"


void Vysyx_22050078_npc_onecycle___024root__traceChgSub0(Vysyx_22050078_npc_onecycle___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050078_npc_onecycle___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050078_npc_onecycle___024root* const __restrict vlSelf = static_cast<Vysyx_22050078_npc_onecycle___024root*>(voidSelf);
    Vysyx_22050078_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050078_npc_onecycle___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050078_npc_onecycle___024root__traceChgSub0(Vysyx_22050078_npc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22050078_npc_onecycle__DOT__pc_reg2_IFU),64);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[0]),64);
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[1]),64);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[2]),64);
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[3]),64);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[4]),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[5]),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[6]),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[7]),64);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[8]),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[9]),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[10]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[11]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[12]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[13]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[14]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[15]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[16]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[17]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[18]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[19]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[20]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[21]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[22]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[23]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[24]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[25]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[26]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[27]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[28]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[29]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[30]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+66,(vlSelf->clk));
        tracep->chgBit(oldp+67,(vlSelf->rst));
        tracep->chgIData(oldp+68,(vlSelf->inst),32);
        tracep->chgQData(oldp+69,(vlSelf->inst_addr_cpu2mem),64);
        tracep->chgCData(oldp+71,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+72,((0x1fU & (vlSelf->inst 
                                            >> 0x14U))),5);
        tracep->chgQData(oldp+73,(((0U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 0xfU)))
                                    ? 0ULL : vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))])),64);
        tracep->chgQData(oldp+75,(((0U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 0x14U)))
                                    ? 0ULL : vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))])),64);
        tracep->chgCData(oldp+77,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+78,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgQData(oldp+79,(((0x13U == (0x7fU 
                                              & vlSelf->inst))
                                    ? ((0U == (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))
                                        ? ((0U == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs
                                           [(0x1fU 
                                             & (vlSelf->inst 
                                                >> 0xfU))])
                                        : 0ULL) : 0ULL)),64);
        tracep->chgQData(oldp+81,(((0x13U == (0x7fU 
                                              & vlSelf->inst))
                                    ? ((0U == (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))
                                        ? (((- (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU)))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x14U))))
                                        : 0ULL) : 0ULL)),64);
        tracep->chgCData(oldp+83,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+84,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+85,(((0x13U == (0x7fU 
                                              & vlSelf->inst))
                                    ? ((0U == (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))
                                        ? (0x1fU & 
                                           (vlSelf->inst 
                                            >> 7U))
                                        : 0U) : 0U)),5);
        tracep->chgQData(oldp+86,(((0x13U == (0x7fU 
                                              & vlSelf->inst))
                                    ? ((0U == (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))
                                        ? (((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->inst))
                                             ? ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU)))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU)))
                                                  ? 0ULL
                                                  : 
                                                 vlSelf->ysyx_22050078_npc_onecycle__DOT__ysyx_22050078_register_inst__DOT__regs
                                                 [(0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))])
                                                 : 0ULL)
                                             : 0ULL) 
                                           + ((0x13U 
                                               == (0x7fU 
                                                   & vlSelf->inst))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                                   : 0ULL)
                                               : 0ULL))
                                        : 0ULL) : 0ULL)),64);
        tracep->chgBit(oldp+88,((IData)((0x13U == (0x707fU 
                                                   & vlSelf->inst)))));
        tracep->chgQData(oldp+89,((((- (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x14U))))),64);
        tracep->chgQData(oldp+91,(((QData)((IData)(
                                                   (vlSelf->inst 
                                                    >> 0xcU))) 
                                   << 0x2cU)),64);
        tracep->chgQData(oldp+93,((((- (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               ((0xfe0U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 7U))))))),64);
        tracep->chgQData(oldp+95,((((- (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU)))) 
                                    << 0x15U) | (QData)((IData)(
                                                                ((0x100000U 
                                                                  & (vlSelf->inst 
                                                                     >> 0xbU)) 
                                                                 | ((0xff000U 
                                                                     & vlSelf->inst) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->inst 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->inst 
                                                                             >> 0x14U))))))))),64);
        tracep->chgQData(oldp+97,((((- (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU)))) 
                                    << 0xdU) | (QData)((IData)(
                                                               ((0x1000U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x13U)) 
                                                                | ((0x800U 
                                                                    & (vlSelf->inst 
                                                                       << 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1eU 
                                                                         & (vlSelf->inst 
                                                                            >> 7U))))))))),64);
    }
}

void Vysyx_22050078_npc_onecycle___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050078_npc_onecycle___024root* const __restrict vlSelf = static_cast<Vysyx_22050078_npc_onecycle___024root*>(voidSelf);
    Vysyx_22050078_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
