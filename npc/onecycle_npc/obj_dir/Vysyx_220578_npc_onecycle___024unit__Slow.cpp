// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_220578_npc_onecycle.h for the primary calling header

#include "Vysyx_220578_npc_onecycle___024unit.h"
#include "Vysyx_220578_npc_onecycle__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_220578_npc_onecycle___024unit___ctor_var_reset(Vysyx_220578_npc_onecycle___024unit* vlSelf);

Vysyx_220578_npc_onecycle___024unit::Vysyx_220578_npc_onecycle___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_220578_npc_onecycle___024unit___ctor_var_reset(this);
}

void Vysyx_220578_npc_onecycle___024unit::__Vconfigure(Vysyx_220578_npc_onecycle__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_220578_npc_onecycle___024unit::~Vysyx_220578_npc_onecycle___024unit() {
}

void Vysyx_220578_npc_onecycle___024unit___ctor_var_reset(Vysyx_220578_npc_onecycle___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_220578_npc_onecycle___024unit___ctor_var_reset\n"); );
}
