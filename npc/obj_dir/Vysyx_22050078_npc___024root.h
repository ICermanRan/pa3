// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050078_npc.h for the primary calling header

#ifndef VERILATED_VYSYX_22050078_NPC___024ROOT_H_
#define VERILATED_VYSYX_22050078_NPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050078_npc__Syms;
class Vysyx_22050078_npc_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050078_npc___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);

    // LOCAL SIGNALS
    CData/*4:0*/ ysyx_22050078_npc__DOT__rs1_addr_IDU2regs;
    CData/*4:0*/ ysyx_22050078_npc__DOT__rs2_addr_IDU2regs;
    CData/*4:0*/ ysyx_22050078_npc__DOT__rd_addr_IDU2regs;
    CData/*0:0*/ ysyx_22050078_npc__DOT__rd_wen_IDU2regs;
    CData/*5:0*/ ysyx_22050078_npc__DOT__exu_opt_IDU2EXU;
    CData/*1:0*/ ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU;
    CData/*3:0*/ ysyx_22050078_npc__DOT__lsu_opt;
    CData/*2:0*/ ysyx_22050078_npc__DOT__s_id_err;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r1;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit;
    CData/*7:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT__mask;
    QData/*63:0*/ ysyx_22050078_npc__DOT__pc;
    QData/*63:0*/ ysyx_22050078_npc__DOT__rs1_data;
    QData/*63:0*/ ysyx_22050078_npc__DOT__rs2_data;
    QData/*63:0*/ ysyx_22050078_npc__DOT__imm;
    QData/*63:0*/ ysyx_22050078_npc__DOT__exu_res;
    QData/*63:0*/ ysyx_22050078_npc__DOT__lsu_res_LSU2WBU;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_IFU__DOT__inst;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_IDU__DOT__R_imm;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__src1;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__src2;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT__rdata;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_PCU__DOT__pc_next;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050078_npc__DOT__u_regfile__DOT__regs;
    VlUnpacked<VlWide<3>/*65:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*65:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vfunc_ysyx_22050078_npc__DOT__check_finish__1__Vfuncout;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<9>/*263:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4;
    VlWide<9>/*263:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4;
    VlWide<5>/*135:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout;
    QData/*63:0*/ __Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__3__rdata;
    QData/*63:0*/ __Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__4__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22050078_npc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050078_npc___024root);  ///< Copying not allowed
  public:
    Vysyx_22050078_npc___024root(const char* name);
    ~Vysyx_22050078_npc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050078_npc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
