// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

extern const VlUnpacked<CData/*3:0*/, 512> Vtop__ConstPool__TABLE_268f7173_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_d484eecf_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Variables
    CData/*3:0*/ top__DOT__trans;
    CData/*0:0*/ top__DOT____Vcellout__encode83_inst__Ys;
    SData/*8:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->data_in) << 1U) 
                    | (IData)(vlSelf->en));
    top__DOT__trans = Vtop__ConstPool__TABLE_268f7173_0
        [__Vtableidx1];
    top__DOT____Vcellout__encode83_inst__Ys = Vtop__ConstPool__TABLE_d484eecf_0
        [__Vtableidx1];
    if ((8U & (IData)(top__DOT__trans))) {
        if ((4U & (IData)(top__DOT__trans))) {
            if (VL_LIKELY((2U & (IData)(top__DOT__trans)))) {
                if (VL_LIKELY((1U & (IData)(top__DOT__trans)))) {
                    vlSelf->seg = 0xffU;
                } else {
                    VL_STOP_MT("/home/ran/ysyx/ysyx-workbench/npc/shiyan/encode2seg/vsrc/bcd7seg.v", 20, "");
                }
            } else {
                VL_STOP_MT("/home/ran/ysyx/ysyx-workbench/npc/shiyan/encode2seg/vsrc/bcd7seg.v", 20, "");
            }
        } else if (VL_UNLIKELY((2U & (IData)(top__DOT__trans)))) {
            VL_STOP_MT("/home/ran/ysyx/ysyx-workbench/npc/shiyan/encode2seg/vsrc/bcd7seg.v", 20, "");
        } else {
            vlSelf->seg = ((1U & (IData)(top__DOT__trans))
                            ? 0x84U : 0x80U);
        }
    } else {
        vlSelf->seg = ((4U & (IData)(top__DOT__trans))
                        ? ((2U & (IData)(top__DOT__trans))
                            ? ((1U & (IData)(top__DOT__trans))
                                ? 0x8fU : 0xa0U) : 
                           ((1U & (IData)(top__DOT__trans))
                             ? 0xa4U : 0xccU)) : ((2U 
                                                   & (IData)(top__DOT__trans))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(top__DOT__trans))
                                                    ? 0x86U
                                                    : 0x92U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(top__DOT__trans))
                                                    ? 0xcfU
                                                    : 0x81U)));
    }
    vlSelf->led = (((IData)(top__DOT____Vcellout__encode83_inst__Ys) 
                    << 3U) | (7U & (IData)(top__DOT__trans)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
