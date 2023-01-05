// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_220578_npc_onecycle.h for the primary calling header

#include "Vysyx_220578_npc_onecycle___024root.h"
#include "Vysyx_220578_npc_onecycle__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_220578_npc_onecycle___024root___ctor_var_reset(Vysyx_220578_npc_onecycle___024root* vlSelf);

Vysyx_220578_npc_onecycle___024root::Vysyx_220578_npc_onecycle___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_220578_npc_onecycle___024root___ctor_var_reset(this);
}

void Vysyx_220578_npc_onecycle___024root::__Vconfigure(Vysyx_220578_npc_onecycle__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_220578_npc_onecycle___024root::~Vysyx_220578_npc_onecycle___024root() {
}

void Vysyx_220578_npc_onecycle___024root___settle__TOP__2(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->inst_addr_cpu2mem = vlSelf->ysyx_220578_npc_onecycle__DOT__pc_reg2_IFU;
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

void Vysyx_220578_npc_onecycle___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr);

void Vysyx_220578_npc_onecycle___024root___initial__TOP__4(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___initial__TOP__4\n"); );
    // Body
    Vysyx_220578_npc_onecycle___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->inst_addr_cpu2mem);
}

void Vysyx_220578_npc_onecycle___024root___eval_initial(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_220578_npc_onecycle___024root___initial__TOP__4(vlSelf);
}

void Vysyx_220578_npc_onecycle___024root___eval_settle(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___eval_settle\n"); );
    // Body
    Vysyx_220578_npc_onecycle___024root___settle__TOP__2(vlSelf);
}

void Vysyx_220578_npc_onecycle___024root___final(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___final\n"); );
}

void Vysyx_220578_npc_onecycle___024root___ctor_var_reset(Vysyx_220578_npc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_220578_npc_onecycle___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->inst_addr_cpu2mem = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_220578_npc_onecycle__DOT__pc_reg2_IFU = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_220578_npc_onecycle__DOT__rd_data_EXU2regs = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_IDU_inst__DOT__R_imm = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
