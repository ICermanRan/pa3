// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_220578_npc_onecycle.h for the primary calling header

#ifndef VERILATED_VYSYX_220578_NPC_ONECYCLE___024UNIT_H_
#define VERILATED_VYSYX_220578_NPC_ONECYCLE___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_220578_npc_onecycle__Syms;
class Vysyx_220578_npc_onecycle_VerilatedVcd;


//----------

VL_MODULE(Vysyx_220578_npc_onecycle___024unit) {
  public:

    // INTERNAL VARIABLES
    Vysyx_220578_npc_onecycle__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_220578_npc_onecycle___024unit);  ///< Copying not allowed
  public:
    Vysyx_220578_npc_onecycle___024unit(const char* name);
    ~Vysyx_220578_npc_onecycle___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_220578_npc_onecycle__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
