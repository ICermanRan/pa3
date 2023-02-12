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
    VlWide<5>/*159:0*/ __Vtemp158;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2));
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22050078_npc__DOT__pc),64);
            tracep->chgIData(oldp+3,((IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)),32);
            tracep->chgCData(oldp+4,(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs),5);
            tracep->chgCData(oldp+5,(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs),5);
            tracep->chgCData(oldp+6,(vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs),5);
            tracep->chgBit(oldp+7,(vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs));
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22050078_npc__DOT__rs1_data),64);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22050078_npc__DOT__rs2_data),64);
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU),6);
            tracep->chgCData(oldp+13,(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU),2);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22050078_npc__DOT__imm),64);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22050078_npc__DOT__lsu_opt),4);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22050078_npc__DOT__exu_res),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU),64);
            tracep->chgBit(oldp+21,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->ysyx_22050078_npc__DOT__exu_res))))));
            tracep->chgBit(oldp+22,(((0x63U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+23,(((0x6fU == (0x7fU 
                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+24,(((0x67U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                      ? 1U : 0U)));
            tracep->chgQData(oldp+25,(((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                                        ? vlSelf->ysyx_22050078_npc__DOT__exu_res
                                        : vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU)),64);
            tracep->chgBit(oldp+27,(((0ULL == vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs
                                      [0xaU]) ? 1U : 0U)));
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22050078_npc__DOT__s_id_err),3);
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r1));
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[31]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst),64);
            tracep->chgCData(oldp+96,((0x7fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0x19U)))),7);
            tracep->chgCData(oldp+97,((7U & (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                     >> 0xcU)))),3);
            tracep->chgCData(oldp+98,((0x1fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0xfU)))),5);
            tracep->chgCData(oldp+99,((0x1fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0x14U)))),5);
            tracep->chgCData(oldp+100,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+101,((0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))),7);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm),64);
            tracep->chgQData(oldp+106,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+108,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+110,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans),64);
            tracep->chgWData(oldp+118,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4),264);
            tracep->chgWData(oldp+127,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+130,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+133,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+136,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+139,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+140,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+141,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+142,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+153,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+154,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4),264);
            tracep->chgWData(oldp+163,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+166,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+169,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+172,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+175,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+176,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+177,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+178,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+189,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+190,((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt)))));
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata),64);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask),8);
            tracep->chgCData(oldp+194,((0xffU & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])),8);
            tracep->chgQData(oldp+195,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[4U])) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[3U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                              >> 8U)))),64);
            tracep->chgQData(oldp+197,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[1U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])) 
                                              >> 8U)))),64);
            __Vtemp158[0U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_data) 
                               << 8U) | (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask));
            __Vtemp158[1U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_data) 
                               >> 0x18U) | ((IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__rs2_data 
                                                     >> 0x20U)) 
                                            << 8U));
            __Vtemp158[2U] = (((IData)((vlSelf->ysyx_22050078_npc__DOT__rs2_data 
                                        >> 0x20U)) 
                               >> 0x18U) | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                                            << 8U));
            __Vtemp158[3U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                               >> 0x18U) | ((IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                     >> 0x20U)) 
                                            << 8U));
            __Vtemp158[4U] = ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                       >> 0x20U)) >> 0x18U);
            tracep->chgWData(oldp+199,(__Vtemp158),136);
            tracep->chgWData(oldp+204,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout),136);
            tracep->chgQData(oldp+209,(((1U & ((((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                                  ? 1U
                                                  : 0U) 
                                                & (0U 
                                                   != vlSelf->ysyx_22050078_npc__DOT__exu_res)) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                                   ? 1U
                                                   : 0U)))
                                         ? (vlSelf->ysyx_22050078_npc__DOT__pc 
                                            + vlSelf->ysyx_22050078_npc__DOT__imm)
                                         : (((0x67U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                              ? 1U : 0U)
                                             ? (vlSelf->ysyx_22050078_npc__DOT__rs1_data 
                                                + vlSelf->ysyx_22050078_npc__DOT__imm)
                                             : (4ULL 
                                                + vlSelf->ysyx_22050078_npc__DOT__pc)))),64);
        }
        tracep->chgBit(oldp+211,(vlSelf->clk));
        tracep->chgBit(oldp+212,(vlSelf->rst_n));
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
    }
}
