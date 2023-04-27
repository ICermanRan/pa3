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
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst_n,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2;
    CData/*0:0*/ ysyx_22050078_npc__DOT__idex_bubble;
    CData/*0:0*/ ysyx_22050078_npc__DOT__idu_ldstbp;
    CData/*2:0*/ ysyx_22050078_npc__DOT__s_id_err;
    CData/*4:0*/ ysyx_22050078_npc__DOT__idu_rs1id;
    CData/*4:0*/ ysyx_22050078_npc__DOT__idu_rs2id;
    CData/*4:0*/ ysyx_22050078_npc__DOT__idu_rdid;
    CData/*0:0*/ ysyx_22050078_npc__DOT__idu_rdwen;
    CData/*1:0*/ ysyx_22050078_npc__DOT__idu_src_sel;
    CData/*5:0*/ ysyx_22050078_npc__DOT__idu_exopt;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r1;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit;
    CData/*7:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT__wmask;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit;
    CData/*7:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_BRU__DOT__branch;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_BRU__DOT__jump;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out;
    CData/*0:0*/ ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit;
    QData/*63:0*/ ysyx_22050078_npc__DOT__pc;
    QData/*63:0*/ ysyx_22050078_npc__DOT__idu_imm;
    QData/*63:0*/ ysyx_22050078_npc__DOT__idu_rs1;
    QData/*63:0*/ ysyx_22050078_npc__DOT__idu_rs2;
    QData/*63:0*/ ysyx_22050078_npc__DOT__exu_exres;
    QData/*63:0*/ ysyx_22050078_npc__DOT__lsu_lsres;
    QData/*63:0*/ ysyx_22050078_npc__DOT__wbu_rd;
    QData/*63:0*/ ysyx_22050078_npc__DOT__s_wbu_inst;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_IFU__DOT__ins;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_IDU__DOT__R_imm;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__src1;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__src2;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT__rdata;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res;
    QData/*63:0*/ ysyx_22050078_npc__DOT__u_BRU__DOT__next_pc;
    VlUnpacked<VlWide<3>/*65:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*65:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 4> ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*66:0*/, 7> ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 7> ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 7> ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list;
    VlUnpacked<SData/*10:0*/, 4> ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 4> ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 4> ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs;
    VlUnpacked<CData/*3:0*/, 6> ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 6> ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 6> ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vfunc_ysyx_22050078_npc__DOT__check_finish__3__Vfuncout;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*0:0*/ __Vclklast__TOP__i_rst_n;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2;
    VlWide<5>/*159:0*/ ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout;
    VlWide<11>/*339:0*/ ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout;
    VlWide<9>/*263:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4;
    VlWide<9>/*263:0*/ ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4;
    VlWide<7>/*202:0*/ ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout;
    VlWide<15>/*468:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4;
    VlWide<7>/*198:0*/ ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout;
    IData/*23:0*/ ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4;
    QData/*43:0*/ ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4;
    QData/*63:0*/ __Vtask_ysyx_22050078_npc__DOT__rtl_pmem_read__2__rdata;
    QData/*63:0*/ __Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__8__rdata;
    QData/*63:0*/ __Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__10__rdata;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

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
