// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_385a38f7_0;
extern const VlUnpacked<CData/*7:0*/, 64> Vtop__ConstPool__TABLE_17bddf3f_0;
extern const VlUnpacked<CData/*7:0*/, 64> Vtop__ConstPool__TABLE_39ba7bd3_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_e302652c_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_6aaab36d_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_07ac4e22_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_720d8b2d_0;

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*7:0*/ top__DOT__my_seg__DOT__seg_3;
    CData/*7:0*/ top__DOT__my_seg__DOT__seg_2;
    CData/*7:0*/ top__DOT__my_seg__DOT__seg_1;
    CData/*7:0*/ top__DOT__my_seg__DOT__seg_0;
    CData/*5:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx3;
    // Body
    __Vtableidx1 = vlSelf->top__DOT__my_seg__DOT__cnt;
    if ((1U & Vtop__ConstPool__TABLE_385a38f7_0[__Vtableidx1])) {
        vlSelf->top__DOT__my_seg__DOT__seg_5 = Vtop__ConstPool__TABLE_17bddf3f_0
            [__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_385a38f7_0[__Vtableidx1])) {
        vlSelf->top__DOT__my_seg__DOT__seg_4 = Vtop__ConstPool__TABLE_39ba7bd3_0
            [__Vtableidx1];
    }
    vlSelf->top__DOT__trans_data = vlSelf->top__DOT__my_keyboard__DOT__fifo
        [vlSelf->top__DOT__my_keyboard__DOT__r_ptr];
    vlSelf->seg_5 = vlSelf->top__DOT__my_seg__DOT__seg_5;
    vlSelf->seg_4 = vlSelf->top__DOT__my_seg__DOT__seg_4;
    __Vtableidx2 = vlSelf->top__DOT__trans_data;
    top__DOT__my_seg__DOT__seg_3 = Vtop__ConstPool__TABLE_e302652c_0
        [__Vtableidx2];
    top__DOT__my_seg__DOT__seg_2 = Vtop__ConstPool__TABLE_6aaab36d_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelf->top__DOT__trans_data;
    top__DOT__my_seg__DOT__seg_1 = Vtop__ConstPool__TABLE_07ac4e22_0
        [__Vtableidx3];
    top__DOT__my_seg__DOT__seg_0 = Vtop__ConstPool__TABLE_720d8b2d_0
        [__Vtableidx3];
    vlSelf->seg_3 = top__DOT__my_seg__DOT__seg_3;
    vlSelf->seg_2 = top__DOT__my_seg__DOT__seg_2;
    vlSelf->seg_1 = top__DOT__my_seg__DOT__seg_1;
    vlSelf->seg_0 = top__DOT__my_seg__DOT__seg_0;
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->overflow = 0;
    vlSelf->seg_0 = 0;
    vlSelf->seg_1 = 0;
    vlSelf->seg_2 = 0;
    vlSelf->seg_3 = 0;
    vlSelf->seg_4 = 0;
    vlSelf->seg_5 = 0;
    vlSelf->top__DOT__trans_data = 0;
    vlSelf->top__DOT__ready = 0;
    vlSelf->top__DOT__my_keyboard__DOT__buffer = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__my_keyboard__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->top__DOT__my_keyboard__DOT__w_ptr = 0;
    vlSelf->top__DOT__my_keyboard__DOT__r_ptr = 0;
    vlSelf->top__DOT__my_keyboard__DOT__count = 0;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound1 = 0;
    vlSelf->top__DOT__my_seg__DOT__cnt = 0;
    vlSelf->top__DOT__my_seg__DOT__seg_5 = 0;
    vlSelf->top__DOT__my_seg__DOT__seg_4 = 0;
}
