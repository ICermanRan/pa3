// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_220578_npc_onecycle.h for the primary calling header

#include "Vysyx_220578_npc_onecycle___024unit.h"
#include "Vysyx_220578_npc_onecycle__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr);

VL_INLINE_OPT void Vysyx_220578_npc_onecycle___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_220578_npc_onecycle___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    pmem_read(raddr__Vcvt);
}
