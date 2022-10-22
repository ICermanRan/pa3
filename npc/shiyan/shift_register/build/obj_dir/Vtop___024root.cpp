// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT____Vcellout__shift_register_inst__dout 
        = ((IData)(vlSelf->rst) ? (((IData)(vlSelf->top__DOT__shift_register_inst__DOT__trans_8) 
                                    << 7U) | (0x7fU 
                                              & ((IData)(vlSelf->top__DOT____Vcellout__shift_register_inst__dout) 
                                                 >> 1U)))
            : 0U);
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_c9d0e253_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_0ca6b649_0;
extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_90c235fa_0;
extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_72e22731_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*7:0*/ top__DOT__shift_register_inst__DOT__trans;
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    // Body
    top__DOT__shift_register_inst__DOT__trans = (0xffU 
                                                 & ((0U 
                                                     == (IData)(vlSelf->din))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->din))
                                                     : (IData)(vlSelf->din)));
    vlSelf->top__DOT____Vcellout__shift_register_inst__dout 
        = top__DOT__shift_register_inst__DOT__trans;
    vlSelf->top__DOT__shift_register_inst__DOT__trans_8 
        = (1U & VL_REDXOR_32((0x1dU & (IData)(vlSelf->top__DOT____Vcellout__shift_register_inst__dout))));
    __Vtableidx1 = 0U;
    vlSelf->seg_high = Vtop__ConstPool__TABLE_c9d0e253_0
        [__Vtableidx1];
    __Vtableidx2 = (1U & (IData)(vlSelf->top__DOT____Vcellout__shift_register_inst__dout));
    if ((1U & Vtop__ConstPool__TABLE_0ca6b649_0[__Vtableidx2])) {
        vlSelf->seg_low = Vtop__ConstPool__TABLE_90c235fa_0
            [__Vtableidx2];
    }
    if ((2U & Vtop__ConstPool__TABLE_0ca6b649_0[__Vtableidx2])) {
        vlSelf->seg_high = Vtop__ConstPool__TABLE_72e22731_0
            [__Vtableidx2];
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    Vtop___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
