// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode24.h for the primary calling header

#ifndef VERILATED_VDECODE24___024ROOT_H_
#define VERILATED_VDECODE24___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdecode24__Syms;
class Vdecode24_VerilatedVcd;


//----------

VL_MODULE(Vdecode24___024root) {
  public:

    // PORTS
    VL_IN8(x,1,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,3,0);

    // INTERNAL VARIABLES
    Vdecode24__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdecode24___024root);  ///< Copying not allowed
  public:
    Vdecode24___024root(const char* name);
    ~Vdecode24___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdecode24__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
