// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->operation) >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->operation) >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->operation)))) {
                vlSelf->out_s = (1U & (((IData)(vlSelf->A) 
                                        + (IData)(vlSelf->B)) 
                                       >> 4U));
            }
        }
    }
    if ((4U & (IData)(vlSelf->operation))) {
        vlSelf->result = ((2U & (IData)(vlSelf->operation))
                           ? ((1U & (IData)(vlSelf->operation))
                               ? (((IData)(vlSelf->A) 
                                   == (IData)(vlSelf->B))
                                   ? 1U : 0U) : (((IData)(vlSelf->A) 
                                                  > (IData)(vlSelf->B))
                                                  ? 1U
                                                  : 0U))
                           : ((1U & (IData)(vlSelf->operation))
                               ? ((IData)(vlSelf->A) 
                                  ^ (IData)(vlSelf->B))
                               : ((IData)(vlSelf->A) 
                                  | (IData)(vlSelf->B))));
    } else if ((2U & (IData)(vlSelf->operation))) {
        vlSelf->result = (0xfU & ((1U & (IData)(vlSelf->operation))
                                   ? ((IData)(vlSelf->A) 
                                      & (IData)(vlSelf->B))
                                   : (~ (IData)(vlSelf->A))));
    } else if ((1U & (IData)(vlSelf->operation))) {
        vlSelf->result = (0xfU & ((IData)(vlSelf->A) 
                                  - (IData)(vlSelf->B)));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->A) 
                                    >> 3U)) == (1U 
                                                & ((IData)(vlSelf->B) 
                                                   >> 3U))) 
                            & ((1U & ((IData)(vlSelf->result) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->A) 
                                                     >> 3U))));
        vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->result)))));
    } else {
        vlSelf->result = (0xfU & ((IData)(vlSelf->A) 
                                  + (IData)(vlSelf->B)));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->A) 
                                    >> 3U)) == (1U 
                                                & ((IData)(vlSelf->B) 
                                                   >> 3U))) 
                            & ((1U & ((IData)(vlSelf->result) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->A) 
                                                     >> 3U))));
        vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->result)))));
    }
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
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
    if (VL_UNLIKELY((vlSelf->operation & 0xf8U))) {
        Verilated::overWidthError("operation");}
}
#endif  // VL_DEBUG
