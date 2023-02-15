// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050078_npc__Syms.h"


void Vysyx_22050078_npc___024root__traceChgSub0(Vysyx_22050078_npc___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050078_npc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050078_npc___024root* const __restrict vlSelf = static_cast<Vysyx_22050078_npc___024root*>(voidSelf);
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050078_npc___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050078_npc___024root__traceChgSub0(Vysyx_22050078_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp83;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22050078_npc__DOT__pc),64);
            tracep->chgBit(oldp+2,(((0ULL == vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs
                                     [0xaU]) ? 1U : 0U)));
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[31]),64);
            tracep->chgCData(oldp+67,((0xffU & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])),8);
            tracep->chgQData(oldp+68,((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[4U])) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[3U])) 
                                         << 0x18U) 
                                        | ((QData)((IData)(
                                                           vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                           >> 8U)))),64);
            tracep->chgQData(oldp+70,((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[1U])) 
                                         << 0x18U) 
                                        | ((QData)((IData)(
                                                           vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])) 
                                           >> 8U)))),64);
            tracep->chgWData(oldp+72,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout),136);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+77,((IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)),32);
            tracep->chgCData(oldp+78,(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs),5);
            tracep->chgCData(oldp+79,(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs),5);
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs),5);
            tracep->chgBit(oldp+81,(vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs));
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22050078_npc__DOT__rs1_data),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22050078_npc__DOT__rs2_data),64);
            tracep->chgCData(oldp+86,(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU),6);
            tracep->chgCData(oldp+87,(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU),2);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22050078_npc__DOT__imm),64);
            tracep->chgCData(oldp+90,(vlSelf->ysyx_22050078_npc__DOT__lsu_opt),4);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22050078_npc__DOT__exu_res),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU),64);
            tracep->chgBit(oldp+95,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->ysyx_22050078_npc__DOT__exu_res))))));
            tracep->chgBit(oldp+96,(((0x63U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+97,(((0x6fU == (0x7fU 
                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+98,(((0x67U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                      ? 1U : 0U)));
            tracep->chgQData(oldp+99,(((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                                        ? vlSelf->ysyx_22050078_npc__DOT__exu_res
                                        : vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU)),64);
            tracep->chgCData(oldp+101,(vlSelf->ysyx_22050078_npc__DOT__s_id_err),3);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst),64);
            tracep->chgCData(oldp+104,((0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U)))),7);
            tracep->chgCData(oldp+105,((7U & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+106,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+107,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x14U)))),5);
            tracep->chgCData(oldp+108,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+109,((0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))),7);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm),64);
            tracep->chgQData(oldp+114,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                        >> 0x1fU)))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0x19U)) 
                                                                         << 5U)) 
                                                                     | (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 7U)))))))),64);
            tracep->chgQData(oldp+116,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                        >> 0x1fU)))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                        >> 0x1fU)) 
                                                               << 0x14U)) 
                                                           | ((0xff000U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                           >> 0xcU)) 
                                                                  << 0xcU)) 
                                                              | ((0x800U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                              >> 0x14U)) 
                                                                     << 0xbU)) 
                                                                 | (0x7feU 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0x15U)) 
                                                                       << 1U))))))))),64);
            tracep->chgQData(oldp+118,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                        >> 0x1fU)))))) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0x1fU)) 
                                                                         << 0xcU)) 
                                                                     | ((0x800U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 7U)) 
                                                                            << 0xbU)) 
                                                                        | ((0x7e0U 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0x19U)) 
                                                                               << 5U)) 
                                                                           | (0x1eU 
                                                                              & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 8U)) 
                                                                                << 1U))))))))),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans),64);
            tracep->chgWData(oldp+126,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4),264);
            tracep->chgWData(oldp+135,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+138,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+141,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+144,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+147,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+148,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+149,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+150,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+161,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+162,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4),264);
            tracep->chgWData(oldp+171,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+174,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+177,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+180,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+183,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+184,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+185,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+186,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+197,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+198,((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt)))));
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata),64);
            tracep->chgCData(oldp+201,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask),8);
            __Vtemp83[0U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_data) 
                              << 8U) | (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask));
            __Vtemp83[1U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_data) 
                              >> 0x18U) | ((IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__rs2_data 
                                                    >> 0x20U)) 
                                           << 8U));
            __Vtemp83[2U] = (((IData)((vlSelf->ysyx_22050078_npc__DOT__rs2_data 
                                       >> 0x20U)) >> 0x18U) 
                             | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                                << 8U));
            __Vtemp83[3U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                              >> 0x18U) | ((IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                    >> 0x20U)) 
                                           << 8U));
            __Vtemp83[4U] = ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                      >> 0x20U)) >> 0x18U);
            tracep->chgWData(oldp+202,(__Vtemp83),136);
        }
        tracep->chgBit(oldp+207,(vlSelf->clk));
        tracep->chgBit(oldp+208,(vlSelf->rst_n));
        tracep->chgQData(oldp+209,(((1U & ((((0x63U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                              ? 1U : 0U) 
                                            & (0U != vlSelf->ysyx_22050078_npc__DOT__exu_res)) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                               ? 1U
                                               : 0U)))
                                     ? (vlSelf->ysyx_22050078_npc__DOT__pc 
                                        + vlSelf->ysyx_22050078_npc__DOT__imm)
                                     : (((0x67U == 
                                          (0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                          ? 1U : 0U)
                                         ? (vlSelf->ysyx_22050078_npc__DOT__rs1_data 
                                            + vlSelf->ysyx_22050078_npc__DOT__imm)
                                         : (4ULL + vlSelf->ysyx_22050078_npc__DOT__pc)))),64);
    }
}

void Vysyx_22050078_npc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050078_npc___024root* const __restrict vlSelf = static_cast<Vysyx_22050078_npc___024root*>(voidSelf);
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
