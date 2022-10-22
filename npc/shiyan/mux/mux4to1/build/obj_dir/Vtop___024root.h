// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(a,1,0);
    VL_IN8(b,1,0);
    VL_IN8(c,1,0);
    VL_IN8(d,1,0);
    VL_IN8(Y,1,0);
    VL_OUT8(F,1,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*3:0*/, 4> top__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> top__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> top__DOT__i0__DOT__i0__DOT__data_list;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
