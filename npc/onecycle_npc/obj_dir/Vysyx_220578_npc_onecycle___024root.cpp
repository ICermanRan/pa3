// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_220578_npc_onecycle.h for the primary calling header

#include "Vysyx_220578_npc_onecycle___024root.h"
#include "Vysyx_220578_npc_onecycle__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_220578_npc_onecycle___024root___sequent__TOP__1(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0;
    // Body
    __Vdlyvset__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0 = 0U;
    vlSelf->ysyx_220578_npc_onecycle__DOT__pc_reg2_IFU 
        = ((IData)(vlSelf->rst) ? 0x80000000ULL : (4ULL 
                                                   + vlSelf->ysyx_220578_npc_onecycle__DOT__pc_reg2_IFU));
    if ((IData)((0x13U == (0x707fU & vlSelf->inst)))) {
        __Vdlyvval__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0 
            = vlSelf->ysyx_220578_npc_onecycle__DOT__rd_data_EXU2regs;
        __Vdlyvset__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0 = 1U;
        __Vdlyvdim0__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0 
            = ((0x13U == (0x7fU & vlSelf->inst)) ? 
               ((0U == (7U & (vlSelf->inst >> 0xcU)))
                 ? (0x1fU & (vlSelf->inst >> 7U)) : 0U)
                : 0U);
    }
    if (__Vdlyvset__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0) {
        vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[__Vdlyvdim0__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0] 
            = __Vdlyvval__ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs__v0;
    }
    vlSelf->inst_addr_cpu2mem = vlSelf->ysyx_220578_npc_onecycle__DOT__pc_reg2_IFU;
}

VL_INLINE_OPT void Vysyx_220578_npc_onecycle___024root___combo__TOP__3(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->ysyx_220578_npc_onecycle__DOT__rd_data_EXU2regs 
        = ((0x13U == (0x7fU & vlSelf->inst)) ? ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU)))
                                                 ? 
                                                (((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  ((0U 
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
                                                    vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 0xfU))])
                                                    : 0ULL)
                                                   : 0ULL) 
                                                 + 
                                                 ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  ((0U 
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
                                                 : 0ULL)
            : 0ULL);
}

void Vysyx_220578_npc_onecycle___024root___eval(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_220578_npc_onecycle___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_220578_npc_onecycle___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_220578_npc_onecycle___024root___change_request_1(Vysyx_220578_npc_onecycle___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_220578_npc_onecycle___024root___change_request(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___change_request\n"); );
    // Body
    return (Vysyx_220578_npc_onecycle___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_220578_npc_onecycle___024root___change_request_1(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_220578_npc_onecycle___024root___eval_debug_assertions(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
