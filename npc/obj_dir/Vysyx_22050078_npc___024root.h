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
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(inst_addr_cpu2mem,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22050078_npc__DOT__rst_n_sync;
    QData/*63:0*/ ysyx_22050078_npc__DOT__pc_reg2_IFU;
    QData/*63:0*/ ysyx_22050078_npc__DOT__rd_data_EXU2regs;
    QData/*63:0*/ ysyx_22050078_npc__DOT__ysyx_22050078_IDU_inst__DOT__R_imm;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050078_npc__DOT__ysyx_22050078_register_inst__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
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
