// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050078_npc.h for the primary calling header

#include "Vysyx_22050078_npc___024root.h"
#include "Vysyx_22050078_npc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050078_npc___024root___ctor_var_reset(Vysyx_22050078_npc___024root* vlSelf);

Vysyx_22050078_npc___024root::Vysyx_22050078_npc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050078_npc___024root___ctor_var_reset(this);
}

void Vysyx_22050078_npc___024root::__Vconfigure(Vysyx_22050078_npc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050078_npc___024root::~Vysyx_22050078_npc___024root() {
}

void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22050078_npc___024root___initial__TOP__2(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___initial__TOP__2\n"); );
    // Body
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs);
}

void Vysyx_22050078_npc___024root___eval_initial(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22050078_npc___024root___initial__TOP__2(vlSelf);
}

void Vysyx_22050078_npc___024root___settle__TOP__3(Vysyx_22050078_npc___024root* vlSelf);

void Vysyx_22050078_npc___024root___eval_settle(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___eval_settle\n"); );
    // Body
    Vysyx_22050078_npc___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22050078_npc___024root___final(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___final\n"); );
}

void Vysyx_22050078_npc___024root___ctor_var_reset(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22050078_npc__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__lsu_opt = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22050078_npc__DOT__exu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__s_id_err = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__i_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__R_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(264, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4);
    VL_RAND_RESET_W(264, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(136, vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout);
    vlSelf->ysyx_22050078_npc__DOT__u_PCU__DOT__pc_next = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__1__Vfuncout = 0;
    vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__7__rdata = 0;
    vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_lsu_pmem_read__10__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
