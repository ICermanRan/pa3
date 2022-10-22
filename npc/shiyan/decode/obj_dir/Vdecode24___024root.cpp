// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode24.h for the primary calling header

#include "Vdecode24___024root.h"
#include "Vdecode24__Syms.h"

//==========

extern const VlUnpacked<CData/*3:0*/, 8> Vdecode24__ConstPool__TABLE_d6ee2a19_0;

VL_INLINE_OPT void Vdecode24___024root___combo__TOP__1(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___combo__TOP__1\n"); );
    // Variables
    CData/*2:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->y = Vdecode24__ConstPool__TABLE_d6ee2a19_0
        [__Vtableidx1];
}

void Vdecode24___024root___eval(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___eval\n"); );
    // Body
    Vdecode24___024root___combo__TOP__1(vlSelf);
}

QData Vdecode24___024root___change_request_1(Vdecode24___024root* vlSelf);

VL_INLINE_OPT QData Vdecode24___024root___change_request(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___change_request\n"); );
    // Body
    return (Vdecode24___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdecode24___024root___change_request_1(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdecode24___024root___eval_debug_assertions(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x & 0xfcU))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
