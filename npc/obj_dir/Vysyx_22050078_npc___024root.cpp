// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050078_npc.h for the primary calling header

#include "Vysyx_22050078_npc___024root.h"
#include "Vysyx_22050078_npc__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void check_rst(svBit rst_flag);

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_rst_TOP(CData/*0:0*/ rst_flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_rst_TOP\n"); );
    // Body
    svBit rst_flag__Vcvt;
    for (size_t rst_flag__Vidx = 0; rst_flag__Vidx < 1; ++rst_flag__Vidx) rst_flag__Vcvt = rst_flag;
    check_rst(rst_flag__Vcvt);
}

extern "C" void diff_read_pc(long long rtl_pc);

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__diff_read_pc_TOP(QData/*63:0*/ rtl_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__diff_read_pc_TOP\n"); );
    // Body
    long long rtl_pc__Vcvt;
    for (size_t rtl_pc__Vidx = 0; rtl_pc__Vidx < 1; ++rtl_pc__Vidx) rtl_pc__Vcvt = rtl_pc;
    diff_read_pc(rtl_pc__Vcvt);
}

extern "C" svBit check_finish(int finish_flag);

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_finish_TOP(IData/*31:0*/ finish_flag, CData/*0:0*/ &check_finish__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_finish_TOP\n"); );
    // Body
    int finish_flag__Vcvt;
    for (size_t finish_flag__Vidx = 0; finish_flag__Vidx < 1; ++finish_flag__Vidx) finish_flag__Vcvt = finish_flag;
    svBit check_finish__Vfuncrtn__Vcvt;
    check_finish__Vfuncrtn__Vcvt = check_finish(finish_flag__Vcvt);
    check_finish__Vfuncrtn = (1U & check_finish__Vfuncrtn__Vcvt);
}

extern "C" void check_error();

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP\n"); );
    // Body
    check_error();
}

extern "C" void check_good_or_bad(svBit rst_flag, long long rtl_pc);

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_good_or_bad_TOP(CData/*0:0*/ rst_flag, QData/*63:0*/ rtl_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_good_or_bad_TOP\n"); );
    // Body
    svBit rst_flag__Vcvt;
    for (size_t rst_flag__Vidx = 0; rst_flag__Vidx < 1; ++rst_flag__Vidx) rst_flag__Vcvt = rst_flag;
    long long rtl_pc__Vcvt;
    for (size_t rtl_pc__Vidx = 0; rtl_pc__Vidx < 1; ++rtl_pc__Vidx) rtl_pc__Vcvt = rtl_pc;
    check_good_or_bad(rst_flag__Vcvt, rtl_pc__Vcvt);
}

extern "C" void rtl_pmem_read(long long raddr, long long* rdata, svBit ren);

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ ren) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    svBit ren__Vcvt;
    for (size_t ren__Vidx = 0; ren__Vidx < 1; ++ren__Vidx) ren__Vcvt = ren;
    rtl_pmem_read(raddr__Vcvt, &rdata__Vcvt, ren__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void sdb_read_inst(int rtl_inst);

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IDU__DOT__sdb_read_inst_TOP(IData/*31:0*/ rtl_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IDU__DOT__sdb_read_inst_TOP\n"); );
    // Body
    int rtl_inst__Vcvt;
    for (size_t rtl_inst__Vidx = 0; rtl_inst__Vidx < 1; ++rtl_inst__Vidx) rtl_inst__Vcvt = rtl_inst;
    sdb_read_inst(rtl_inst__Vcvt);
}

extern "C" void rtl_pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    rtl_pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_reg_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_reg_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vysyx_22050078_npc___024root___sequent__TOP__2(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v2;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v3;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v4;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v5;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v6;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v7;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v8;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v9;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v10;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v11;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v12;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v13;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v14;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v15;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v16;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v17;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v18;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v19;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v20;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v21;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v22;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v23;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v24;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v25;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v26;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v27;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v28;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v29;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v30;
    CData/*0:0*/ __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v31;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v4;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v5;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v6;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v7;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v8;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v9;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v10;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v11;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v12;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v13;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v14;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v15;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v16;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v17;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v18;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v19;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v20;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v21;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v22;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v23;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v24;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v25;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v26;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v27;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v28;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v29;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v30;
    QData/*63:0*/ __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v31;
    // Body
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v1 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v2 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v3 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v4 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v5 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v6 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v7 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v8 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v9 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v10 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v11 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v12 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v13 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v14 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v15 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v16 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v17 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v18 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v19 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v20 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v21 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v22 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v23 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v24 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v25 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v26 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v27 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v28 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v29 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v30 = 0U;
    __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v31 = 0U;
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_write_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                                                << 0x35U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                                                << 0x15U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                                                >> 0xbU))), 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                                                << 0x35U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[3U])) 
                                                                                << 0x15U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])) 
                                                                                >> 0xbU))), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__wmask));
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (1U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v1 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v1 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (2U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v2 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v2 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (3U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v3 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v3 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (4U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v4 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v4 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (5U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v5 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v5 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (6U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v6 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v6 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (7U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v7 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v7 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (8U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v8 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v8 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (9U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                            >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v9 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v9 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0xaU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                              >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v10 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v10 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0xbU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                              >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v11 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v11 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0xcU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                              >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v12 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v12 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0xdU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                              >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v13 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v13 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0xeU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                              >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v14 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v14 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0xfU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                              >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v15 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v15 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x10U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v16 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v16 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x11U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v17 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v17 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x12U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v18 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v18 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x13U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v19 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v19 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x14U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v20 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v20 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x15U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v21 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v21 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x16U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v22 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v22 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x17U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v23 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v23 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x18U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v24 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v24 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x19U == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v25 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v25 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x1aU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v26 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v26 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x1bU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v27 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v27 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x1cU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v28 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v28 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x1dU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v29 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v29 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x1eU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v30 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v30 = 1U;
    }
    if ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
         & (0x1fU == (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                               >> 2U))))) {
        __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v31 
            = vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data;
        __Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v31 = 1U;
    }
    vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0U] = 0ULL;
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v1) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[1U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v1;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v2) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[2U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v2;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v3) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[3U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v3;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v4) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[4U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v4;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v5) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[5U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v5;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v6) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[6U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v6;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v7) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[7U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v7;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v8) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[8U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v8;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v9) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[9U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v9;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v10) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0xaU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v10;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v11) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0xbU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v11;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v12) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0xcU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v12;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v13) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0xdU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v13;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v14) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0xeU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v14;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v15) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0xfU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v15;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v16) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x10U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v16;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v17) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x11U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v17;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v18) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x12U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v18;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v19) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x13U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v19;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v20) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x14U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v20;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v21) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x15U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v21;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v22) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x16U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v22;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v23) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x17U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v23;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v24) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x18U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v24;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v25) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x19U] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v25;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v26) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x1aU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v26;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v27) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x1bU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v27;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v28) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x1cU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v28;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v29) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x1dU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v29;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v30) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x1eU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v30;
    }
    if (__Vdlyvset__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v31) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0x1fU] 
            = __Vdlyvval__ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs__v31;
    }
}

extern const VlWide<11>/*351:0*/ Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0;

VL_INLINE_OPT void Vysyx_22050078_npc___024root___sequent__TOP__5(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___sequent__TOP__5\n"); );
    // Variables
    VlWide<11>/*351:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<15>/*479:0*/ __Vtemp203;
    VlWide<3>/*95:0*/ __Vtemp225;
    VlWide<3>/*95:0*/ __Vtemp292;
    VlWide<3>/*95:0*/ __Vtemp335;
    VlWide<3>/*95:0*/ __Vtemp336;
    VlWide<3>/*95:0*/ __Vtemp337;
    VlWide<3>/*95:0*/ __Vtemp340;
    VlWide<3>/*95:0*/ __Vtemp341;
    VlWide<3>/*95:0*/ __Vtemp342;
    // Body
    if (vlSelf->rst_n) {
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[0U] 
            = (IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U]))));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[1U] 
            = (IData)(((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U]))) 
                       >> 0x20U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
            = (((IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_lsres) 
                << 7U) | ((0x7cU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                    >> 4U)) | ((2U 
                                                & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                   >> 4U)) 
                                               | (1U 
                                                  & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                     >> 1U)))));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[3U] 
            = (((IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_lsres) 
                >> 0x19U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__lsu_lsres 
                                      >> 0x20U)) << 7U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U] 
            = (((IData)((vlSelf->ysyx_22050078_npc__DOT__lsu_lsres 
                         >> 0x20U)) >> 0x19U) | ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                                >> 0xbU)))) 
                                                 << 7U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[5U] 
            = (((IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                          << 0x35U) | (((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                        << 0x15U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                        >> 0xbU)))) 
                >> 0x19U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                           >> 0xbU))) 
                                      >> 0x20U)) << 7U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[6U] 
            = ((IData)(((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                          << 0x35U) | (((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                        << 0x15U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                        >> 0xbU))) 
                        >> 0x20U)) >> 0x19U);
    } else {
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[0U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[1U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[3U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[5U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[6U] = 0U;
    }
    vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data = (
                                                   (1U 
                                                    & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[3U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U])) 
                                                          >> 7U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[6U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[5U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U])) 
                                                          >> 7U))));
    if (vlSelf->rst_n) {
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U] 
            = (IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U]))));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U] 
            = (IData)(((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U]))) 
                       >> 0x20U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
            = (((IData)(((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                          ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                          : (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                              << 0x2cU) | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                              >> 0x14U))))) 
                << 0xbU) | ((0x7c0U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                       >> 9U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                      >> 9U)) 
                                                  | ((0x1cU 
                                                      & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                         >> 1U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                              >> 1U)))))));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[3U] 
            = (((IData)(((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                          ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                          : (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                              << 0x2cU) | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                              >> 0x14U))))) 
                >> 0x15U) | ((IData)((((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                        ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                        : (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                 >> 0x14U)))) 
                                      >> 0x20U)) << 0xbU));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U] 
            = (((IData)((((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                           ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                           : (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                               << 0x2cU) | (((QData)((IData)(
                                                             vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                               >> 0x14U)))) 
                         >> 0x20U)) >> 0x15U) | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                                                 << 0xbU));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U] 
            = (((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                >> 0x15U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                      >> 0x20U)) << 0xbU));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U] 
            = ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                        >> 0x20U)) >> 0x15U);
    } else {
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[3U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U] = 0U;
    }
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4 
        = (0x40000000ULL | (((QData)((IData)((1U & 
                                              (- (IData)(
                                                         (1U 
                                                          & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])))))) 
                             << 0x21U) | (QData)((IData)(
                                                         (0x100300U 
                                                          | ((0xc00000U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U]))) 
                                                                 << 0x16U)) 
                                                             | ((0x7800U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U]))) 
                                                                    << 0xbU)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])))))))))));
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                                                << 0x35U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                                                << 0x15U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                                                >> 0xbU))), vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__9__rdata, 
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                                                >> 1U)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
        = vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__9__rdata;
    __Vtemp189[4U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                 ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX)) 
                       << 0x14U) | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                       ? 0U : (IData)(vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX)) 
                                     << 0xfU) | (((
                                                   (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX)) 
                                                  << 0xeU) 
                                                 | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                       ? 1U
                                                       : (IData)(vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX)) 
                                                     << 0xcU) 
                                                    | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                          ? 1U
                                                          : (IData)(vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX)) 
                                                        << 6U) 
                                                       | ((0x38U 
                                                           & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                              >> 9U)) 
                                                          | ((((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                               & (3U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) 
                                                              << 2U) 
                                                             | ((((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                                  & (0x23U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp))))))))));
    if (vlSelf->rst_n) {
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U] 
            = (IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                        ? 1ULL : (((QData)((IData)(
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[0U])))));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U] 
            = (IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                         ? 1ULL : (((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[0U])))) 
                       >> 0x20U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U] 
            = (IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U]))));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U] 
            = (IData)(((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U]))) 
                       >> 0x20U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
            = __Vtemp189[4U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U] 
            = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                          ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX)) 
                >> 0xcU) | ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                       ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX) 
                                     >> 0x20U)) << 0x14U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U] 
            = (((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                           ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX) 
                         >> 0x20U)) >> 0xcU) | ((IData)(
                                                        ((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                          ? 0ULL
                                                          : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX)) 
                                                << 0x14U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U] 
            = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                          ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX)) 
                >> 0xcU) | ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                       ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX) 
                                     >> 0x20U)) << 0x14U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U] 
            = (((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                           ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX) 
                         >> 0x20U)) >> 0xcU) | ((IData)(
                                                        ((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                          ? 0ULL
                                                          : vlSelf->ysyx_22050078_npc__DOT__idu_imm)) 
                                                << 0x14U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U] 
            = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                          ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm)) 
                >> 0xcU) | ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                       ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm) 
                                     >> 0x20U)) << 0x14U));
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU] 
            = ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                          ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm) 
                        >> 0x20U)) >> 0xcU);
    } else {
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[0U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[1U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[2U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[3U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[4U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[5U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[6U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[7U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[8U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[9U];
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU] 
            = Vysyx_22050078_npc__ConstPool__CONST_7f5ecf71_0[0xaU];
    }
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4 
                             >> 0xbU)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4 
                             >> 0x16U)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4 
                             >> 0x21U)));
    VL_EXTEND_WQ(67,64, __Vtemp191, (((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))));
    __Vtemp203[0xbU] = ((0xfffU & ((IData)((((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                            >> 0xfU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))))) 
                                   >> 0x11U)) | ((0x7000U 
                                                  & ((IData)(
                                                             (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                               << 0x10U) 
                                                              | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))))) 
                                                     >> 0x11U)) 
                                                 | ((IData)(
                                                            ((((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                               << 0x10U) 
                                                              | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))) 
                                                             >> 0x20U)) 
                                                    << 0xfU)));
    __Vtemp203[0xcU] = (0x8000U | ((0xfffU & ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))) 
                                                       >> 0x20U)) 
                                              >> 0x11U)) 
                                   | ((__Vtemp191[0U] 
                                       << 0x12U) | 
                                      (0x7000U & ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))) 
                                                           >> 0x20U)) 
                                                  >> 0x11U)))));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0U] 
        = (IData)((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[1U] 
        = (IData)(((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)) 
                   >> 0x20U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[2U] 
        = (6U | ((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))) 
                 << 3U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[3U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))) 
            >> 0x1dU) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))) 
                                  >> 0x20U)) << 3U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[4U] 
        = (0x28U | (((IData)((QData)((IData)((0xffU 
                                              & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))) 
                     << 6U) | ((IData)(((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[5U] 
        = (((IData)((QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))) 
            >> 0x1aU) | ((IData)(((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))) 
                                  >> 0x20U)) << 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[6U] 
        = (0x100U | (((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata) 
                      << 9U) | ((IData)(((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))) 
                                         >> 0x20U)) 
                                >> 0x1aU)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[7U] 
        = (((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata) 
            >> 0x17U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                  >> 0x20U)) << 9U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[8U] 
        = (0x600U | (((IData)((((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))) 
                      << 0xcU) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                           >> 0x20U)) 
                                  >> 0x17U)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[9U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))) 
            >> 0x14U) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xaU] 
        = (0x2000U | (((IData)((((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                >> 0xfU)))))) 
                                 << 0x10U) | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))))) 
                       << 0xfU) | ((IData)(((((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))) 
                                            >> 0x20U)) 
                                   >> 0x14U)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xbU] 
        = __Vtemp203[0xbU];
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xcU] 
        = __Vtemp203[0xcU];
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xdU] 
        = ((0xfffU & (__Vtemp191[0U] >> 0xeU)) | ((0x7000U 
                                                   & (__Vtemp191[0U] 
                                                      >> 0xeU)) 
                                                  | ((0x38000U 
                                                      & (__Vtemp191[0U] 
                                                         >> 0xeU)) 
                                                     | (__Vtemp191[1U] 
                                                        << 0x12U))));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xeU] 
        = ((0xfffU & (__Vtemp191[1U] >> 0xeU)) | ((0x7000U 
                                                   & (__Vtemp191[1U] 
                                                      >> 0xeU)) 
                                                  | ((0x38000U 
                                                      & (__Vtemp191[1U] 
                                                         >> 0xeU)) 
                                                     | (__Vtemp191[2U] 
                                                        << 0x12U))));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0U];
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[1U];
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[2U] 
                         >> 3U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[3U] 
                         >> 3U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[4U] 
                 >> 3U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[4U] 
                         >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[5U] 
                         >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[6U] 
                 >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[7U] 
            << 0x17U) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[6U] 
                         >> 9U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[8U] 
            << 0x17U) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[7U] 
                         >> 9U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[8U] 
                 >> 9U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[9U] 
            << 0x14U) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xbU] 
            << 0x11U) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xaU] 
                         >> 0xfU));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xcU] 
            << 0x11U) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xbU] 
                         >> 0xfU));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xcU] 
                 >> 0xfU));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xdU] 
            << 0xeU) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xcU] 
                        >> 0x12U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xeU] 
            << 0xeU) | (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xdU] 
                        >> 0x12U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[6U][2U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xeU] 
                 >> 0x12U));
    VL_EXTEND_WQ(66,64, __Vtemp225, (((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                      >> 0x14U))));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU])) 
                    << 0x2cU) | (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U])) 
                                  << 0xcU) | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                              >> 0x14U))));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU])) 
                     << 0x2cU) | (((QData)((IData)(
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U])) 
                                   << 0xcU) | ((QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                               >> 0x14U))) 
                   >> 0x20U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[2U] = 0x13U;
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[3U] = 0U;
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[4U] 
        = (8U | ((IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU])) 
                           << 0x2cU) | (((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                         >> 0x14U)))) 
                 << 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[5U] 
        = (((IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU])) 
                      << 0x2cU) | (((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U])) 
                                    << 0xcU) | ((QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                                >> 0x14U)))) 
            >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU])) 
                                    << 0x2cU) | (((QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                                    >> 0x14U))) 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[6U] 
        = (0x10U | ((__Vtemp225[0U] << 6U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU])) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U])) 
                                                            << 0xcU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                                              >> 0x14U))) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[7U] 
        = ((__Vtemp225[0U] >> 0x1aU) | (__Vtemp225[1U] 
                                        << 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[8U] 
        = ((__Vtemp225[1U] >> 0x1aU) | (__Vtemp225[2U] 
                                        << 6U));
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)))) {
            vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[0U] 
                = (IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                            ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__pc));
            vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[1U] 
                = (IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                             ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__pc) 
                           >> 0x20U));
            vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U] 
                = (IData)(vlSelf->ysyx_22050078_npc__DOT__pc);
            vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U] 
                = (IData)((vlSelf->ysyx_22050078_npc__DOT__pc 
                           >> 0x20U));
            vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                    ? 0x13U : (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst));
        }
    } else {
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[0U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[1U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U] = 0U;
        vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] = 0U;
    }
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                              >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                  >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                 >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                 >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                 >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__wmask 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[6U] 
        = (7U & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[0U];
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[1U];
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[2U] 
                         >> 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[3U] 
                         >> 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[4U] 
                 >> 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[5U] 
            << 0x1cU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[4U] 
                         >> 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[6U] 
            << 0x1cU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[5U] 
                         >> 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[6U] 
                 >> 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[7U] 
            << 0x1aU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[6U] 
                         >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[8U] 
            << 0x1aU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[7U] 
                         >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[8U] 
                 >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                      >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                  >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                         >> 2U)) == 
                                  vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                         >> 2U)) == 
                                  vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                         >> 2U)) == 
                                  vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                         >> 2U)) == 
                                  vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                         >> 2U)) == 
                                  vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                         >> 2U)) == 
                                  vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                     >> 2U)) == vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050078_npc__DOT__lsu_lsres = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit)
                                                  ? vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out
                                                  : 0ULL);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[3U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list
           [3U][2U]);
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IDU__DOT__sdb_read_inst_TOP(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]);
    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                                    = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 7U));
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 7U));
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 7U));
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 7U));
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 7U));
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 7U));
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 7U));
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 7U));
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                    = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                >> 7U));
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2pipe_ID_EX 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 7U));
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2pipe_ID_EX = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 1U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 2U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 0U;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 1U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 0U;
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 1U;
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 3U;
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 1U;
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__src_sel_IDU2pipe_ID_EX = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 1U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX 
                                        = ((0x1000U 
                                            & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])
                                            ? 0x26U
                                            : 0x25U);
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                    if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x12U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x13U;
                                    } else if ((1U 
                                                == 
                                                (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x24U;
                                    }
                                } else {
                                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x23U;
                                }
                            } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x11U;
                                } else if ((0U == (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 3U;
                                } else if ((0x20U == 
                                            (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                             >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 4U;
                                } else if ((1U == (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x22U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 1U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 5U;
                                } else if ((1U == (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x21U;
                                }
                            } else if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 6U;
                            } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x20U;
                            }
                        } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 9U;
                            } else if ((0x20U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                  >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x10U;
                            } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x19U;
                            }
                        } else if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 7U;
                        } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x18U;
                        }
                    } else if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x28U;
                            } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x17U;
                            }
                        } else if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x27U;
                        } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x16U;
                        }
                    } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 8U;
                        } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x15U;
                        }
                    } else if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                       >> 0x19U))) {
                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 1U;
                    } else if ((0x20U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                          >> 0x19U))) {
                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 2U;
                    } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                       >> 0x19U))) {
                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x14U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0U == (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 3U;
                        } else if ((1U == (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 0xcU)))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x11U;
                        } else if ((5U == (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 0xcU)))) {
                            if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x12U;
                            } else if ((0x20U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                  >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x13U;
                            }
                        }
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 1U;
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX 
                            = ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])
                                ? 5U : 6U);
                    } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 9U;
                        } else if ((0x10U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                              >> 0x1aU))) {
                            vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 0x10U;
                        }
                    } else {
                        vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 7U;
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX 
                        = ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])
                            ? ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])
                                ? 0x28U : 0x27U) : 
                           ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])
                             ? 8U : 1U));
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__exopt_IDU2pipe_ID_EX = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__s_id_err = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) {
                            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                        }
                    } else {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                          >> 0xdU)))) {
                                if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                    if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        if ((0x20U 
                                             != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                 >> 0x19U))) {
                                            if ((1U 
                                                 != 
                                                 (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                  >> 0x19U))) {
                                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                                    = 
                                                    (4U 
                                                     | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                = (2U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                             >> 0xcU)))) {
                            if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                    if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                            = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                            = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                    }
                                }
                            } else if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                    if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                            = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                    }
                                }
                            }
                        } else if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        } else if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 0x19U))) {
                            if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                       >> 0x19U))) {
                        if ((0x20U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                       >> 0x19U))) {
                            if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((0U != (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                          >> 0xcU)))) {
                            if ((5U == (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                              >> 0xcU)))) {
                                if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    if ((0x20U != (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                   >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                            = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                    }
                                }
                            } else {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (2U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x1aU))) {
                                if ((0x10U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                               >> 0x1aU))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    }
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm 
        = (((- (QData)((IData)((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 0x14U))));
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))));
    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                                    = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 0xfU));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                 >> 3U)))) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 0xfU));
                        }
                    }
                } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0xfU));
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 0xfU));
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass = 0U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 0xfU));
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0xfU));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0xfU));
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                             >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 0xfU));
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                    >> 0xfU));
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass 
                                    = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 0x14U));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                            >> 0x14U));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                 >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x14U));
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                        >> 0x14U));
                    }
                }
            }
        }
    }
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)))) {
            vlSelf->ysyx_22050078_npc__DOT__pc = vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__next_pc;
        }
    } else {
        vlSelf->ysyx_22050078_npc__DOT__pc = 0x80000000ULL;
    }
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                      >> 0xcU)) == 
                               vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                  >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                         >> 0xcU)) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                         >> 0xcU)) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                         >> 0xcU)) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22050078_npc__DOT__idu_imm = 0ULL;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                                    = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                        >> 0x1fU)))) 
                                    << 0x15U) | (QData)((IData)(
                                                                ((0x100000U 
                                                                  & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                     >> 0xbU)) 
                                                                 | ((0xff000U 
                                                                     & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                             >> 0x14U))))))));
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                            = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                        = (((- (QData)((IData)((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                >> 0x1fU)))) 
                            << 0xdU) | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                    >> 7U))))))));
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_imm = 0ULL;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                            = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_imm = 0ULL;
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                                                                  >> 7U))))));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                            = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                        = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm;
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                    = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                        = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp = ((
                                                   ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                     >> 2U) 
                                                    & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                       >> 0xeU)) 
                                                   & ((0x1fU 
                                                       & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                          >> 0xfU)) 
                                                      == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass))) 
                                                  & (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])));
    vlSelf->ysyx_22050078_npc__DOT__idex_bubble = (
                                                   (((vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                      >> 2U) 
                                                     & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                        >> 0xeU)) 
                                                    & (((0x1fU 
                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                            >> 0xfU)) 
                                                        == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass)) 
                                                       | ((0x1fU 
                                                           & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                              >> 0xfU)) 
                                                          == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass)))) 
                                                   & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp)));
    VL_EXTEND_WQ(66,64, __Vtemp292, (((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                                      >> 0x14U))));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22050078_npc__DOT__pc);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22050078_npc__DOT__pc 
                   >> 0x20U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[2U] 
        = (3U | ((IData)(vlSelf->ysyx_22050078_npc__DOT__pc) 
                 << 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[3U] 
        = (((IData)(vlSelf->ysyx_22050078_npc__DOT__pc) 
            >> 0x1eU) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__pc 
                                  >> 0x20U)) << 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[4U] 
        = (8U | (((IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                            << 0x2cU) | (((QData)((IData)(
                                                          vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                          << 0xcU) 
                                         | ((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                            >> 0x14U)))) 
                  << 4U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__pc 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[5U] 
        = (((IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                      << 0x2cU) | (((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                    << 0xcU) | ((QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                                >> 0x14U)))) 
            >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                    << 0x2cU) | (((QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                                    >> 0x14U))) 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[6U] 
        = (0x10U | ((__Vtemp292[0U] << 6U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                                            << 0xcU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                                              >> 0x14U))) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[7U] 
        = ((__Vtemp292[0U] >> 0x1aU) | (__Vtemp292[1U] 
                                        << 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[8U] 
        = ((__Vtemp292[1U] >> 0x1aU) | (__Vtemp292[2U] 
                                        << 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[0U];
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[1U];
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[2U] 
                         >> 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[3U] 
                         >> 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[4U] 
                 >> 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[5U] 
            << 0x1cU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[4U] 
                         >> 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[6U] 
            << 0x1cU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[5U] 
                         >> 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[6U] 
                 >> 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[7U] 
            << 0x1aU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[6U] 
                         >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[8U] 
            << 0x1aU) | (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[7U] 
                         >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[8U] 
                 >> 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[3U] 
        = (3U & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                      >> 0xcU)) == 
                               vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                  >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                         >> 0xcU)) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                         >> 0xcU)) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                         >> 0xcU)) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22050078_npc__DOT__exu_exres = 0ULL;
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans = 0ULL;
    if ((0x800U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
        if ((0x400U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres = 0ULL;
        } else if ((0x200U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            if ((0x100U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__exu_exres = 0ULL;
            } else if ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__exu_exres = 0ULL;
            } else if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__exu_exres = 0ULL;
            } else {
                vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                    = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                       - vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2);
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                                                     >> 0x3fU)))));
            }
        } else if ((0x100U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            if ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
                if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                           - vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2);
                    vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                        = (QData)((IData)((1U & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                                                         >> 0x3fU)))));
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                        = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans) 
                           | (IData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
                    vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans)));
                }
            } else if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                       | (IData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
            } else {
                vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans) 
                       | (IData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                       | (IData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans)));
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
            }
        } else if ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                       | (IData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
            } else {
                vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                    = ((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1)) 
                       * (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)));
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                       | (IData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans)));
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
            }
        } else {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                    ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)
                    : VL_MODDIVS_QQQ(64, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2));
        }
    } else if ((0x400U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
        if ((0x200U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = ((0x100U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                    ? 0ULL : ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                               ? 0ULL : ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                          ? VL_DIV_QQQ(64, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)
                                          : VL_DIV_QQQ(64, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2))));
        } else if ((0x100U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                    ? 0ULL : ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                               ? 0ULL : (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                         * vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)));
        } else if ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = ((((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                                                >> 0x1fU))))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1))) 
                       >> (0x1fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)));
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
            } else {
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                       | (IData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1) 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2))))));
                vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
            }
        } else if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                   | (IData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1) 
                                      << (0x1fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2))))));
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
        } else {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, 
                                 (0x3fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)));
        }
    } else if ((0x200U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
        vlSelf->ysyx_22050078_npc__DOT__exu_exres = 
            ((0x100U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
              ? 0ULL : ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                         ? 0ULL : ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                    ? (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                       >> (0x3fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))
                                    : (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                       << (0x3fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2))))));
    } else if ((0x100U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
        if ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                    ? (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                       ^ vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)
                    : (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                       | vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2));
        } else if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                   & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2);
        } else {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                   | (IData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1) 
                                      - (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
        }
    } else if ((0x80U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
        if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                   | (IData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1) 
                                      + (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres)));
        } else {
            vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                   - vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2);
        }
    } else {
        vlSelf->ysyx_22050078_npc__DOT__exu_exres = 
            ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
              ? (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                 + vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)
              : 0ULL);
    }
    vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX 
        = ((((~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                 >> 2U)) & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                            >> 0xeU)) & ((0x1fU & (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass)))
            ? vlSelf->ysyx_22050078_npc__DOT__exu_exres
            : (((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                 >> 5U) & ((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                     >> 6U)) == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass)))
                ? ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])
                    ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                    : (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                        << 0x35U) | (((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                      << 0x15U) | ((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                   >> 0xbU))))
                : ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                    & ((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                 >> 2U)) == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass)))
                    ? vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data
                    : vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                   [vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2bypass])));
    vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX 
        = ((((~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                 >> 2U)) & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                            >> 0xeU)) & ((0x1fU & (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass)))
            ? vlSelf->ysyx_22050078_npc__DOT__exu_exres
            : (((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                 >> 5U) & ((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                     >> 6U)) == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass)))
                ? ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])
                    ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                    : (((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                        << 0x35U) | (((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                      << 0x15U) | ((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                   >> 0xbU))))
                : ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                    & ((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                 >> 2U)) == (IData)(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass)))
                    ? vlSelf->ysyx_22050078_npc__DOT__wbu_rd_data
                    : vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                   [vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2bypass])));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res 
        = (vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX 
           - vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX);
    VL_EXTEND_WQ(65,64, __Vtemp335, vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX);
    VL_EXTEND_WQ(65,64, __Vtemp336, vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX);
    VL_SUB_W(3, __Vtemp337, __Vtemp335, __Vtemp336);
    VL_EXTEND_WQ(65,64, __Vtemp340, vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX);
    VL_EXTEND_WQ(65,64, __Vtemp341, vlSelf->ysyx_22050078_npc__DOT__rs2_data_bypass2pipe_ID_EX);
    VL_SUB_W(3, __Vtemp342, __Vtemp340, __Vtemp341);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4 
        = (0x28aceU | ((0x100000U & ((~ (IData)((0U 
                                                 != vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res))) 
                                     << 0x14U)) | (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res)) 
                                                    << 0x10U) 
                                                   | ((0x1000U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res 
                                                                   >> 0x3fU)) 
                                                          << 0xcU)) 
                                                      | ((0x100U 
                                                          & ((~ (IData)(
                                                                        (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res 
                                                                         >> 0x3fU))) 
                                                             << 8U)) 
                                                         | ((0x10U 
                                                             & (__Vtemp337[2U] 
                                                                << 4U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  (1U 
                                                                   & __Vtemp342[2U])))))))));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[0U] 
        = (0xfU & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[1U] 
        = (0xfU & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4 
                   >> 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[2U] 
        = (0xfU & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4 
                   >> 8U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[3U] 
        = (0xfU & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4 
                   >> 0xcU));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[4U] 
        = (0xfU & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4 
                   >> 0x10U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[5U] 
        = (0xfU & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4 
                   >> 0x14U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[3U] 
        = (1U & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
                 [3U] >> 1U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[4U] 
        = (1U & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
                 [4U] >> 1U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[5U] 
        = (1U & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list
                 [5U] >> 1U));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                   >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                  >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [1U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [2U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [3U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [4U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [5U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__branch 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump 
        = ((((0x63U == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) 
             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__branch)) 
            | (0x6fU == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))) 
           | (0x67U == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__next_pc 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
            ? ((0x67U == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]))
                ? (vlSelf->ysyx_22050078_npc__DOT__rs1_data_bypass2pipe_ID_EX 
                   + vlSelf->ysyx_22050078_npc__DOT__idu_imm)
                : ((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[2U]))) 
                   + vlSelf->ysyx_22050078_npc__DOT__idu_imm))
            : (4ULL + vlSelf->ysyx_22050078_npc__DOT__pc));
}

VL_INLINE_OPT void Vysyx_22050078_npc___024root___combo__TOP__6(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___combo__TOP__6\n"); );
    // Body
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_rst_TOP(vlSelf->rst_n);
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__diff_read_pc_TOP(vlSelf->ysyx_22050078_npc__DOT__pc);
    if (VL_UNLIKELY((((IData)(vlSelf->rst_n) & (0U 
                                                != 
                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) 
                     & (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, opcode == %b---------------\n\n",
                  64,vlSelf->ysyx_22050078_npc__DOT__pc,
                  7,(0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U]));
        Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->rst_n) & (0U 
                                                != 
                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) 
                     & ((IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err) 
                        >> 1U)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, funct3 == %b---------------\n\n",
                  64,vlSelf->ysyx_22050078_npc__DOT__pc,
                  3,(7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                           >> 0xcU)));
        Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->rst_n) & (0U 
                                                != 
                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) 
                     & ((IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err) 
                        >> 2U)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, funct7 == %b---------------\n\n",
                  64,vlSelf->ysyx_22050078_npc__DOT__pc,
                  7,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U] 
                     >> 0x19U));
        Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->rst_n) & (0U 
                                                != 
                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_rd_reg__o_dout[4U])) 
                     & (0U != (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err))))) {
        VL_FINISH_MT("/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/ysyx_22050078_npc.v", 464, "");
    }
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read_TOP(vlSelf->ysyx_22050078_npc__DOT__pc, vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__7__rdata, (IData)(vlSelf->rst_n));
    vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
        = vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__7__rdata;
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_finish_TOP((IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst), vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__2__Vfuncout);
    if (vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__2__Vfuncout) {
        Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_good_or_bad_TOP(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                                                                [0xaU]), 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[0U]))));
    }
}

void Vysyx_22050078_npc___024root___eval(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050078_npc___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vysyx_22050078_npc___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vysyx_22050078_npc___024root___combo__TOP__6(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vysyx_22050078_npc___024root___change_request_1(Vysyx_22050078_npc___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050078_npc___024root___change_request(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___change_request\n"); );
    // Body
    return (Vysyx_22050078_npc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050078_npc___024root___change_request_1(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050078_npc___024root___eval_debug_assertions(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
