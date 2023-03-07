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
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_npc.v:154:32
    extern void check_error();
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_npc.v:153:31
    extern svBit check_finish(int finish_flag);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_npc.v:155:32
    extern void check_good_or_bad(svBit rst_flag, long long rtl_pc);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_npc.v:152:32
    extern void check_rst(svBit rst_flag);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_IFU.v:27:34
    extern void diff_read_pc(long long rtl_pc);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_LSU.v:77:32
    extern void rtl_lsu_pmem_read(long long raddr, long long* rdata, svBit ren);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_IFU.v:25:34
    extern void rtl_pmem_read(long long raddr, long long* rdata, svBit ren);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_LSU.v:78:32
    extern void rtl_pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_IDU.v:329:32
    extern void sdb_read_inst(int rtl_inst);
    // DPI import at /home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_regfile.v:53:32
    extern void set_reg_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
