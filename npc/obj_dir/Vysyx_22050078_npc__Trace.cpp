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
    VlWide<11>/*351:0*/ __Vtemp401;
    VlWide<7>/*223:0*/ __Vtemp408;
    VlWide<7>/*223:0*/ __Vtemp413;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp416;
    VlWide<3>/*95:0*/ __Vtemp417;
    VlWide<3>/*95:0*/ __Vtemp420;
    VlWide<3>/*95:0*/ __Vtemp421;
    VlWide<3>/*95:0*/ __Vtemp422;
    VlWide<3>/*95:0*/ __Vtemp423;
    VlWide<5>/*159:0*/ __Vtemp425;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                                     [0xaU]))))));
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22050078_npc__DOT__pc),64);
            tracep->chgBit(oldp+67,((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)))));
            tracep->chgBit(oldp+68,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump));
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22050078_npc__DOT__idex_bubble));
            tracep->chgBit(oldp+70,(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp));
            tracep->chgBit(oldp+71,((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])));
            tracep->chgCData(oldp+72,(vlSelf->ysyx_22050078_npc__DOT__s_id_err),3);
            tracep->chgQData(oldp+73,((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[0U])))),64);
            tracep->chgQData(oldp+75,((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U])))),64);
            tracep->chgQData(oldp+77,((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U])))),64);
            tracep->chgQData(oldp+79,((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[0U])))),64);
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]),32);
            tracep->chgCData(oldp+82,(vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX),5);
            tracep->chgBit(oldp+83,(vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX));
            tracep->chgQData(oldp+84,((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                         >> 0x14U)))),64);
            tracep->chgCData(oldp+86,(vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX),2);
            tracep->chgCData(oldp+87,(vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX),6);
            tracep->chgCData(oldp+88,((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+89,((3U == (0x7fU & 
                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))));
            tracep->chgBit(oldp+90,((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))));
            tracep->chgBit(oldp+91,((0x6fU == (0x7fU 
                                               & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))));
            tracep->chgBit(oldp+92,((0x67U == (0x7fU 
                                               & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))));
            tracep->chgBit(oldp+93,((0x63U == (0x7fU 
                                               & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))));
            tracep->chgCData(oldp+94,(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass),5);
            tracep->chgCData(oldp+95,(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass),5);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22050078_npc__DOT__idu_imm),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX),64);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                              >> 0x14U)))),64);
            tracep->chgQData(oldp+104,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                              >> 0x14U)))),64);
            tracep->chgCData(oldp+106,((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                              >> 0xcU))),2);
            tracep->chgCData(oldp+107,((0x3fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                 >> 6U))),6);
            tracep->chgQData(oldp+108,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U])))),64);
            tracep->chgQData(oldp+110,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U])))),64);
            tracep->chgCData(oldp+112,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                 >> 0xfU))),5);
            tracep->chgBit(oldp+113,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+114,((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+115,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                            >> 2U))));
            tracep->chgBit(oldp+116,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                            >> 1U))));
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22050078_npc__DOT__exu_exres),64);
            tracep->chgQData(oldp+119,(((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                         ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                  >> 0x14U))))),64);
            tracep->chgQData(oldp+121,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                              >> 0xbU)))),64);
            tracep->chgBit(oldp+123,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+124,((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])));
            tracep->chgCData(oldp+125,((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                              >> 2U))),3);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[3U])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])) 
                                              >> 0xbU)))),64);
            tracep->chgCData(oldp+128,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                 >> 6U))),5);
            tracep->chgBit(oldp+129,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                            >> 5U))));
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22050078_npc__DOT__lsu_lsres),64);
            tracep->chgQData(oldp+132,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[6U])) 
                                         << 0x39U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[5U])) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U])) 
                                              >> 7U)))),64);
            tracep->chgQData(oldp+134,((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U])) 
                                         << 0x39U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[3U])) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U])) 
                                              >> 7U)))),64);
            tracep->chgCData(oldp+136,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                                 >> 2U))),5);
            tracep->chgBit(oldp+137,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+138,((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data),64);
            tracep->chgQData(oldp+141,(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                         ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__pc)),64);
            tracep->chgWData(oldp+143,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout),160);
            tracep->chgCData(oldp+148,((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+149,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+150,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+151,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+152,((0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])),7);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm),64);
            tracep->chgQData(oldp+157,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+159,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]) 
                                                              | ((0x800U 
                                                                  & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                       >> 0x14U))))))))),64);
            tracep->chgQData(oldp+161,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                             >> 0x1fU)))) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                                >> 7U))))))))),64);
            tracep->chgQData(oldp+163,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm)),64);
            tracep->chgQData(oldp+165,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX)),64);
            tracep->chgQData(oldp+167,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX)),64);
            tracep->chgCData(oldp+169,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 0U : (IData)(vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX))),5);
            tracep->chgBit(oldp+170,(((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                      & (IData)(vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX))));
            tracep->chgCData(oldp+171,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 1U : (IData)(vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX))),2);
            tracep->chgCData(oldp+172,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 1U : (IData)(vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX))),6);
            tracep->chgBit(oldp+173,(((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                      & (3U == (0x7fU 
                                                & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])))));
            tracep->chgBit(oldp+174,(((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                      & (0x23U == (0x7fU 
                                                   & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])))));
            tracep->chgBit(oldp+175,(((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                      & (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp))));
            tracep->chgQData(oldp+176,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 1ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[0U]))))),64);
            __Vtemp401[0U] = (IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                       ? 1ULL : (((QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[0U])))));
            __Vtemp401[1U] = (IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                        ? 1ULL : (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[0U])))) 
                                      >> 0x20U));
            __Vtemp401[2U] = (IData)((((QData)((IData)(
                                                       vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U]))));
            __Vtemp401[3U] = (IData)(((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U]))) 
                                      >> 0x20U));
            __Vtemp401[4U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX)) 
                               << 0x14U) | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                               ? 0U
                                               : (IData)(vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX)) 
                                             << 0xfU) 
                                            | ((((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                 & (IData)(vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX)) 
                                                << 0xeU) 
                                               | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                     ? 1U
                                                     : (IData)(vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX)) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                        ? 1U
                                                        : (IData)(vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX)) 
                                                      << 6U) 
                                                     | ((0x38U 
                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                            >> 9U)) 
                                                        | ((((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                             & (3U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) 
                                                            << 2U) 
                                                           | ((((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                                & (0x23U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) 
                                                               << 1U) 
                                                              | ((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                                 & (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp))))))))));
            __Vtemp401[5U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX)) 
                               >> 0xcU) | ((IData)(
                                                   (((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                      ? 0ULL
                                                      : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX) 
                                                    >> 0x20U)) 
                                           << 0x14U));
            __Vtemp401[6U] = (((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                          ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX) 
                                        >> 0x20U)) 
                               >> 0xcU) | ((IData)(
                                                   ((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                     ? 0ULL
                                                     : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX)) 
                                           << 0x14U));
            __Vtemp401[7U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX)) 
                               >> 0xcU) | ((IData)(
                                                   (((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                      ? 0ULL
                                                      : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX) 
                                                    >> 0x20U)) 
                                           << 0x14U));
            __Vtemp401[8U] = (((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                          ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX) 
                                        >> 0x20U)) 
                               >> 0xcU) | ((IData)(
                                                   ((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                     ? 0ULL
                                                     : vlSelf->ysyx_22050078_npc__DOT__idu_imm)) 
                                           << 0x14U));
            __Vtemp401[9U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                         ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm)) 
                               >> 0xcU) | ((IData)(
                                                   (((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                      ? 0ULL
                                                      : vlSelf->ysyx_22050078_npc__DOT__idu_imm) 
                                                    >> 0x20U)) 
                                           << 0x14U));
            __Vtemp401[0xaU] = ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                           ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm) 
                                         >> 0x20U)) 
                                >> 0xcU);
            tracep->chgWData(oldp+178,(__Vtemp401),340);
            tracep->chgWData(oldp+189,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout),340);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans),64);
            tracep->chgWData(oldp+206,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4),264);
            tracep->chgWData(oldp+215,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+218,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+221,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+224,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+227,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+228,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+229,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+230,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+241,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+242,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4),264);
            tracep->chgWData(oldp+251,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+254,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+257,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+260,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+263,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+264,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+265,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+266,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+277,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit));
            __Vtemp408[0U] = (IData)((((QData)((IData)(
                                                       vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U]))));
            __Vtemp408[1U] = (IData)(((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U]))) 
                                      >> 0x20U));
            __Vtemp408[2U] = (((IData)(((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                         ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                  >> 0x14U))))) 
                               << 0xbU) | ((0x7c0U 
                                            & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                               >> 9U)) 
                                           | ((0x20U 
                                               & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              | ((0x1cU 
                                                  & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                     >> 1U)) 
                                                 | ((2U 
                                                     & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                          >> 1U)))))));
            __Vtemp408[3U] = (((IData)(((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                         ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                  >> 0x14U))))) 
                               >> 0x15U) | ((IData)(
                                                    (((1U 
                                                       & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                                       ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                                           << 0xcU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                             >> 0x14U)))) 
                                                     >> 0x20U)) 
                                            << 0xbU));
            __Vtemp408[4U] = (((IData)((((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                          ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                          : (((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                   >> 0x14U)))) 
                                        >> 0x20U)) 
                               >> 0x15U) | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                                            << 0xbU));
            __Vtemp408[5U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                               >> 0x15U) | ((IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                     >> 0x20U)) 
                                            << 0xbU));
            __Vtemp408[6U] = ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                       >> 0x20U)) >> 0x15U);
            tracep->chgWData(oldp+278,(__Vtemp408),203);
            tracep->chgWData(oldp+285,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout),203);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata),64);
            tracep->chgCData(oldp+294,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__wmask),8);
            tracep->chgWData(oldp+295,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4),469);
            tracep->chgWData(oldp+310,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+313,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+316,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+319,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+322,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+325,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[5]),67);
            tracep->chgWData(oldp+328,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[6]),67);
            tracep->chgCData(oldp+331,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+332,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+333,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+334,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+335,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+336,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[5]),3);
            tracep->chgCData(oldp+337,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[6]),3);
            tracep->chgQData(oldp+338,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+346,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+354,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+355,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4),44);
            tracep->chgSData(oldp+357,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+358,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+359,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+360,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgCData(oldp+361,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+362,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+363,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+364,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+365,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+366,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[1]),8);
            tracep->chgCData(oldp+367,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[2]),8);
            tracep->chgCData(oldp+368,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[3]),8);
            tracep->chgCData(oldp+369,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+370,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit));
            __Vtemp413[0U] = (IData)((((QData)((IData)(
                                                       vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U]))));
            __Vtemp413[1U] = (IData)(((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U]))) 
                                      >> 0x20U));
            __Vtemp413[2U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_lsres) 
                               << 7U) | ((0x7cU & (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                   >> 4U)) 
                                         | ((2U & (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                >> 1U)))));
            __Vtemp413[3U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_lsres) 
                               >> 0x19U) | ((IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__lsu_lsres 
                                                     >> 0x20U)) 
                                            << 7U));
            __Vtemp413[4U] = (((IData)((vlSelf->ysyx_22050078_npc__DOT__lsu_lsres 
                                        >> 0x20U)) 
                               >> 0x19U) | ((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                           >> 0xbU)))) 
                                            << 7U));
            __Vtemp413[5U] = (((IData)((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                              >> 0xbU)))) 
                               >> 0x19U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U)) 
                                            << 7U));
            __Vtemp413[6U] = ((IData)(((((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                              >> 0xbU))) 
                                       >> 0x20U)) >> 0x19U);
            tracep->chgWData(oldp+371,(__Vtemp413),199);
            tracep->chgWData(oldp+378,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout),199);
            tracep->chgBit(oldp+385,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__branch));
            VL_EXTEND_WQ(65,64, __Vtemp415, vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX);
            VL_EXTEND_WQ(65,64, __Vtemp416, vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX);
            VL_SUB_W(3, __Vtemp417, __Vtemp415, __Vtemp416);
            tracep->chgBit(oldp+386,((1U & __Vtemp417[2U])));
            tracep->chgQData(oldp+387,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res),64);
            VL_EXTEND_WQ(65,64, __Vtemp420, vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX);
            VL_EXTEND_WQ(65,64, __Vtemp421, vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX);
            VL_SUB_W(3, __Vtemp422, __Vtemp420, __Vtemp421);
            __Vtemp423[0U] = __Vtemp422[0U];
            __Vtemp423[1U] = __Vtemp422[1U];
            __Vtemp423[2U] = (1U & __Vtemp422[2U]);
            tracep->chgWData(oldp+389,(__Vtemp423),65);
            tracep->chgQData(oldp+392,((4ULL + vlSelf->ysyx_22050078_npc__DOT__pc)),64);
            tracep->chgQData(oldp+394,(((0x67U == (0x7fU 
                                                   & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))
                                         ? (vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX 
                                            + vlSelf->ysyx_22050078_npc__DOT__idu_imm)
                                         : ((((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U]))) 
                                            + vlSelf->ysyx_22050078_npc__DOT__idu_imm))),64);
            tracep->chgQData(oldp+396,(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                         ? ((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))
                                             ? (vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX 
                                                + vlSelf->ysyx_22050078_npc__DOT__idu_imm)
                                             : ((((QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U]))) 
                                                + vlSelf->ysyx_22050078_npc__DOT__idu_imm))
                                         : (4ULL + vlSelf->ysyx_22050078_npc__DOT__pc))),64);
            tracep->chgIData(oldp+398,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4),24);
            tracep->chgCData(oldp+399,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+400,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+401,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+402,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+403,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[4]),4);
            tracep->chgCData(oldp+404,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[5]),4);
            tracep->chgCData(oldp+405,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+406,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+407,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+408,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+409,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+410,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[5]),3);
            tracep->chgBit(oldp+411,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+412,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+413,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+414,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+415,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+416,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+417,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+418,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgIData(oldp+419,(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                         ? 0x13U : (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))),32);
            __Vtemp425[0U] = (IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                       ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__pc));
            __Vtemp425[1U] = (IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                        ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__pc) 
                                      >> 0x20U));
            __Vtemp425[2U] = (IData)(vlSelf->ysyx_22050078_npc__DOT__pc);
            __Vtemp425[3U] = (IData)((vlSelf->ysyx_22050078_npc__DOT__pc 
                                      >> 0x20U));
            __Vtemp425[4U] = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                               ? 0x13U : (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst));
            tracep->chgWData(oldp+420,(__Vtemp425),160);
        }
        tracep->chgBit(oldp+425,(vlSelf->clk));
        tracep->chgBit(oldp+426,(vlSelf->rst_n));
        tracep->chgIData(oldp+427,((IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)),32);
        tracep->chgQData(oldp+428,(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst),64);
        tracep->chgQData(oldp+430,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                   [vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass]),64);
        tracep->chgQData(oldp+432,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                   [vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass]),64);
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
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
