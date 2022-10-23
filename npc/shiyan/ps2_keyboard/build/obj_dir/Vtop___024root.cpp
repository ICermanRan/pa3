// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_385a38f7_0;
extern const VlUnpacked<CData/*7:0*/, 64> Vtop__ConstPool__TABLE_17bddf3f_0;
extern const VlUnpacked<CData/*7:0*/, 64> Vtop__ConstPool__TABLE_39ba7bd3_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_e302652c_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_6aaab36d_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_07ac4e22_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_720d8b2d_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ top__DOT__my_seg__DOT__seg_3;
    CData/*7:0*/ top__DOT__my_seg__DOT__seg_2;
    CData/*7:0*/ top__DOT__my_seg__DOT__seg_1;
    CData/*7:0*/ top__DOT__my_seg__DOT__seg_0;
    CData/*5:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx3;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__w_ptr;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__r_ptr;
    CData/*0:0*/ __Vdly__overflow;
    CData/*0:0*/ __Vdly__top__DOT__ready;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__ready = vlSelf->top__DOT__ready;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__top__DOT__my_keyboard__DOT__w_ptr = vlSelf->top__DOT__my_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__r_ptr = vlSelf->top__DOT__my_keyboard__DOT__r_ptr;
    __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    vlSelf->top__DOT__my_seg__DOT__cnt = ((IData)(vlSelf->rst)
                                           ? 0U : (0x3fU 
                                                   & ((0xf0U 
                                                       == (IData)(vlSelf->top__DOT__trans_data))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->top__DOT__my_seg__DOT__cnt))
                                                       : 
                                                      ((0x32U 
                                                        == (IData)(vlSelf->top__DOT__my_seg__DOT__cnt))
                                                        ? 0U
                                                        : (IData)(vlSelf->top__DOT__my_seg__DOT__cnt)))));
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
        __Vdly__top__DOT__my_keyboard__DOT__w_ptr = 0U;
        __Vdly__top__DOT__my_keyboard__DOT__r_ptr = 0U;
        __Vdly__overflow = 0U;
        __Vdly__top__DOT__ready = 0U;
    } else {
        if (vlSelf->top__DOT__ready) {
            __Vdly__top__DOT__my_keyboard__DOT__r_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr)));
            if (((IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr) 
                 == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr))))) {
                __Vdly__top__DOT__ready = 0U;
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                if (VL_UNLIKELY((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                                  & (IData)(vlSelf->ps2_data)) 
                                 & VL_REDXOR_32((0x1ffU 
                                                 & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                    >> 1U)))))) {
                    VL_WRITEF("receive %x\n",8,(0xffU 
                                                & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                   >> 1U)));
                    __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0 
                        = vlSelf->top__DOT__my_keyboard__DOT__w_ptr;
                    __Vdly__top__DOT__ready = 1U;
                    __Vdly__top__DOT__my_keyboard__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr)));
                    __Vdly__overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__my_keyboard__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)))) {
                    vlSelf->top__DOT__my_keyboard__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound1) 
                                        << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
                }
                __Vdly__top__DOT__my_keyboard__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
            }
        }
    }
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__w_ptr = __Vdly__top__DOT__my_keyboard__DOT__w_ptr;
    vlSelf->overflow = __Vdly__overflow;
    vlSelf->top__DOT__ready = __Vdly__top__DOT__ready;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    vlSelf->top__DOT__my_keyboard__DOT__r_ptr = __Vdly__top__DOT__my_keyboard__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0) {
        vlSelf->top__DOT__my_keyboard__DOT__fifo[__Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0;
    }
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
