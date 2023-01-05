// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_220578_npc_onecycle.h for the primary calling header

#ifndef VERILATED_VYSYX_220578_NPC_ONECYCLE___024ROOT_H_
#define VERILATED_VYSYX_220578_NPC_ONECYCLE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_220578_npc_onecycle__Syms;
class Vysyx_220578_npc_onecycle_VerilatedVcd;
class Vysyx_220578_npc_onecycle___024unit;


//----------

VL_MODULE(Vysyx_220578_npc_onecycle___024root) {
  public:
    // CELLS
    Vysyx_220578_npc_onecycle___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(inst_addr_cpu2mem,63,0);

    // LOCAL SIGNALS
    QData/*63:0*/ ysyx_220578_npc_onecycle__DOT__pc_reg2_IFU;
    QData/*63:0*/ ysyx_220578_npc_onecycle__DOT__rd_data_EXU2regs;
    QData/*63:0*/ ysyx_220578_npc_onecycle__DOT__ysyx_220578_IDU_inst__DOT__R_imm;
    VlUnpacked<QData/*63:0*/, 32> ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_220578_npc_onecycle__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_220578_npc_onecycle___024root);  ///< Copying not allowed
  public:
    Vysyx_220578_npc_onecycle___024root(const char* name);
    ~Vysyx_220578_npc_onecycle___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_220578_npc_onecycle__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
