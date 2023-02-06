// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_npc.v:111:31
    extern svBit check_finish(int finish_flag);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_npc.v:110:32
    extern void check_rst(svBit rst_flag);

#ifdef __cplusplus
}
#endif
