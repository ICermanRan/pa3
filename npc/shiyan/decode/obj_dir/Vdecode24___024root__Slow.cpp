// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode24.h for the primary calling header

#include "Vdecode24___024root.h"
#include "Vdecode24__Syms.h"

//==========


void Vdecode24___024root___ctor_var_reset(Vdecode24___024root* vlSelf);

Vdecode24___024root::Vdecode24___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdecode24___024root___ctor_var_reset(this);
}

void Vdecode24___024root::__Vconfigure(Vdecode24__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdecode24___024root::~Vdecode24___024root() {
}

void Vdecode24___024root___eval_initial(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___eval_initial\n"); );
}

void Vdecode24___024root___combo__TOP__1(Vdecode24___024root* vlSelf);

void Vdecode24___024root___eval_settle(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___eval_settle\n"); );
    // Body
    Vdecode24___024root___combo__TOP__1(vlSelf);
}

void Vdecode24___024root___final(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___final\n"); );
}

void Vdecode24___024root___ctor_var_reset(Vdecode24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = VL_RAND_RESET_I(2);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(4);
}
