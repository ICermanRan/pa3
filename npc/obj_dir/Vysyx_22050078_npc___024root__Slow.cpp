// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050078_npc.h for the primary calling header

#include "Vysyx_22050078_npc___024root.h"
#include "Vysyx_22050078_npc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050078_npc___024root___ctor_var_reset(Vysyx_22050078_npc___024root* vlSelf);

Vysyx_22050078_npc___024root::Vysyx_22050078_npc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050078_npc___024root___ctor_var_reset(this);
}

void Vysyx_22050078_npc___024root::__Vconfigure(Vysyx_22050078_npc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050078_npc___024root::~Vysyx_22050078_npc___024root() {
}

void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22050078_npc___024root___initial__TOP__4(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___initial__TOP__4\n"); );
    // Body
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs);
}

void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_rst_TOP(CData/*0:0*/ rst_flag);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__diff_read_pc_TOP(QData/*63:0*/ rtl_pc);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__rtl_pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ ren);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IDU__DOT__sdb_read_inst_TOP(IData/*31:0*/ rtl_inst);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_finish_TOP(IData/*31:0*/ finish_flag, CData/*0:0*/ &check_finish__Vfuncrtn);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_good_or_bad_TOP(CData/*0:0*/ rst_flag, QData/*63:0*/ rtl_pc);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP();

void Vysyx_22050078_npc___024root___settle__TOP__5(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___settle__TOP__5\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<15>/*479:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp143;
    VlWide<3>/*95:0*/ __Vtemp144;
    VlWide<3>/*95:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp148;
    VlWide<3>/*95:0*/ __Vtemp149;
    VlWide<3>/*95:0*/ __Vtemp150;
    // Body
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_rst_TOP(vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2);
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__diff_read_pc_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[0U]))));
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__rtl_pmem_read_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[0U]))), vlSelf->__Vtask_ysyx_22050078_npc__DOT__rtl_pmem_read__2__rdata, (IData)(vlSelf->i_rst_n));
    vlSelf->ysyx_22050078_npc__DOT__s_wbu_inst = vlSelf->__Vtask_ysyx_22050078_npc__DOT__rtl_pmem_read__2__rdata;
    vlSelf->ysyx_22050078_npc__DOT__wbu_rd = ((1U & 
                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U])
                                               ? (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[3U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U])) 
                                                        >> 7U)))
                                               : (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[6U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[5U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U])) 
                                                        >> 7U))));
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
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__rtl_pmem_read_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                                                << 0x35U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                                                << 0x15U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                                                >> 0xbU))), vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__10__rdata, 
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                                                >> 1U)));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
        = vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__10__rdata;
    VL_EXTEND_WQ(66,64, __Vtemp1, (((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                    << 0x2cU) | (((QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                                    >> 0x14U))));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U]))));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U]))) 
                   >> 0x20U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[2U] 
        = (3U | ((IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U])))) 
                 << 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[3U] 
        = (((IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U])))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U]))) 
                                  >> 0x20U)) << 2U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[4U] 
        = (8U | (((IData)((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                            << 0x2cU) | (((QData)((IData)(
                                                          vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                          << 0xcU) 
                                         | ((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                            >> 0x14U)))) 
                  << 4U) | ((IData)(((((QData)((IData)(
                                                       vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U]))) 
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
        = (0x10U | ((__Vtemp1[0U] << 6U) | ((IData)(
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
        = ((__Vtemp1[0U] >> 0x1aU) | (__Vtemp1[1U] 
                                      << 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[8U] 
        = ((__Vtemp1[1U] >> 0x1aU) | (__Vtemp1[2U] 
                                      << 6U));
    VL_EXTEND_WQ(66,64, __Vtemp8, (((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                    << 0x2cU) | (((QData)((IData)(
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
        = (0x10U | ((__Vtemp8[0U] << 6U) | ((IData)(
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
        = ((__Vtemp8[0U] >> 0x1aU) | (__Vtemp8[1U] 
                                      << 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[8U] 
        = ((__Vtemp8[1U] >> 0x1aU) | (__Vtemp8[2U] 
                                      << 6U));
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IDU__DOT__sdb_read_inst_TOP(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]);
    vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 1U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 2U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 0U;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 1U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 0U;
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 1U;
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 3U;
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 1U;
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 1U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt 
                                        = ((0x1000U 
                                            & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])
                                            ? 0x26U
                                            : 0x25U);
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                    if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x12U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                 >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x13U;
                                    } else if ((1U 
                                                == 
                                                (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                 >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x24U;
                                    }
                                } else {
                                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x23U;
                                }
                            } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x11U;
                                } else if ((0U == (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 3U;
                                } else if ((0x20U == 
                                            (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                             >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 4U;
                                } else if ((1U == (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x22U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 1U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 5U;
                                } else if ((1U == (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x21U;
                                }
                            } else if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 6U;
                            } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x20U;
                            }
                        } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 9U;
                            } else if ((0x20U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                  >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x10U;
                            } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x19U;
                            }
                        } else if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 7U;
                        } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x18U;
                        }
                    } else if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x28U;
                            } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x17U;
                            }
                        } else if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x27U;
                        } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x16U;
                        }
                    } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 8U;
                        } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x15U;
                        }
                    } else if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                       >> 0x19U))) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 1U;
                    } else if ((0x20U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                          >> 0x19U))) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 2U;
                    } else if ((1U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                       >> 0x19U))) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x14U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0U == (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 3U;
                        } else if ((1U == (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                 >> 0xcU)))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x11U;
                        } else if ((5U == (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                 >> 0xcU)))) {
                            if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x12U;
                            } else if ((0x20U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                  >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x13U;
                            }
                        }
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 1U;
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt 
                            = ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])
                                ? 5U : 6U);
                    } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 9U;
                        } else if ((0x10U == (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                              >> 0x1aU))) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 0x10U;
                        }
                    } else {
                        vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 7U;
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt 
                        = ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])
                            ? ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])
                                ? 0x28U : 0x27U) : 
                           ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])
                             ? 8U : 1U));
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__idu_rdid = 0U;
    vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                                    = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                >> 7U));
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 7U));
                            vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 7U));
                        vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 7U));
                            vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 7U));
                        vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 7U));
                    vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 7U));
                        vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 7U));
                    vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                    = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                >> 7U));
                vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_rdid 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 7U));
                    vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 1U;
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rdid))) {
        vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = 0U;
    }
    vlSelf->ysyx_22050078_npc__DOT__s_id_err = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) {
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
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) {
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
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                          >> 0xdU)))) {
                                if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                    if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        if ((0x20U 
                                             != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                 >> 0x19U))) {
                                            if ((1U 
                                                 != 
                                                 (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
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
                        } else if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                = (2U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                             >> 0xcU)))) {
                            if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                    if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
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
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                            = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                    }
                                }
                            } else if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                               >> 0x19U))) {
                                    if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                            = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                    }
                                }
                            }
                        } else if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((0x2000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        } else if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                           >> 0x19U))) {
                            if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 0x19U))) {
                            if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                       >> 0x19U))) {
                        if ((0x20U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                       >> 0x19U))) {
                            if ((1U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
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
        } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((0U != (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                          >> 0xcU)))) {
                            if ((5U == (7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                              >> 0xcU)))) {
                                if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 0x19U))) {
                                    if ((0x20U != (
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
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
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((0x4000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((0U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x1aU))) {
                                if ((0x10U != (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
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
    } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((1U & (~ vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    }
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm 
        = (((- (QData)((IData)((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 0x14U))));
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))));
    vlSelf->ysyx_22050078_npc__DOT__idu_rs1id = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                                    = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                >> 0xfU));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                 >> 3U)))) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 0xfU));
                        }
                    }
                } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0xfU));
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 0xfU));
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rs1id = 0U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 0xfU));
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0xfU));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0xfU));
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                             >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 0xfU));
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_rs1id 
                        = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                    >> 0xfU));
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__idu_rs2id = 0U;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_rs2id 
                                    = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                >> 0x14U));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_rs2id 
                                = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                            >> 0x14U));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                 >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rs2id 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x14U));
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_rs2id 
                            = (0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                        >> 0x14U));
                    }
                }
            }
        }
    }
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__rtl_pmem_read_TOP(vlSelf->ysyx_22050078_npc__DOT__pc, vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__8__rdata, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2));
    vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__ins 
        = vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__8__rdata;
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_finish_TOP((IData)(vlSelf->ysyx_22050078_npc__DOT__s_wbu_inst), vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__3__Vfuncout);
    if (VL_UNLIKELY(vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__3__Vfuncout)) {
        VL_WRITEF("\n----------EBREAK: HIT !!%s!! TRAP!!---------------\n\n",
                  32,((0U != vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                       [0xaU]) ? 0x424144U : 0x474f4f44U));
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
        VL_FINISH_MT("/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/ysyx_22050078_npc.v", 701, "");
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
    VL_EXTEND_WQ(67,64, __Vtemp15, (((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                    >> 7U)))))) 
                                     << 8U) | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))));
    __Vtemp27[0xbU] = ((0xfffU & ((IData)((((- (QData)((IData)(
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
    __Vtemp27[0xcU] = (0x8000U | ((0xfffU & ((IData)(
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
                                  | ((__Vtemp15[0U] 
                                      << 0x12U) | (0x7000U 
                                                   & ((IData)(
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
        = __Vtemp27[0xbU];
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xcU] 
        = __Vtemp27[0xcU];
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xdU] 
        = ((0xfffU & (__Vtemp15[0U] >> 0xeU)) | ((0x7000U 
                                                  & (__Vtemp15[0U] 
                                                     >> 0xeU)) 
                                                 | ((0x38000U 
                                                     & (__Vtemp15[0U] 
                                                        >> 0xeU)) 
                                                    | (__Vtemp15[1U] 
                                                       << 0x12U))));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4[0xeU] 
        = ((0xfffU & (__Vtemp15[1U] >> 0xeU)) | ((0x7000U 
                                                  & (__Vtemp15[1U] 
                                                     >> 0xeU)) 
                                                 | ((0x38000U 
                                                     & (__Vtemp15[1U] 
                                                        >> 0xeU)) 
                                                    | (__Vtemp15[2U] 
                                                       << 0x12U))));
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
    if (VL_UNLIKELY((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2) 
                      & (0U != vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) 
                     & (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, opcode == %b---------------\n\n",
                  64,(((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U]))),
                  7,(0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]));
        Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2) 
                      & (0U != vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) 
                     & ((IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err) 
                        >> 1U)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, funct3 == %b---------------\n\n",
                  64,(((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U]))),
                  3,(7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                           >> 0xcU)));
        Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2) 
                      & (0U != vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) 
                     & ((IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err) 
                        >> 2U)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, funct7 == %b---------------\n\n",
                  64,(((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U]))),
                  7,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                     >> 0x19U));
        Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_error_TOP();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2) 
                      & (0U != vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) 
                     & (0U != (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err))))) {
        VL_FINISH_MT("/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/ysyx_22050078_npc.v", 737, "");
    }
    vlSelf->ysyx_22050078_npc__DOT__idu_imm = 0ULL;
    if ((0x40U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                                vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                                    = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                        >> 0x1fU)))) 
                                    << 0x15U) | (QData)((IData)(
                                                                ((0x100000U 
                                                                  & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                     >> 0xbU)) 
                                                                 | ((0xff000U 
                                                                     & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                             >> 0x14U))))))));
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                            = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                        = (((- (QData)((IData)((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                >> 0x1fU)))) 
                            << 0xdU) | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                    >> 7U))))))));
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                            vlSelf->ysyx_22050078_npc__DOT__idu_imm = 0ULL;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                            = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm;
                    }
                }
            } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_imm = 0ULL;
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                  >> 7U))))));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
        if ((8U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                        vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                            = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                    vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                        = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm;
                }
            }
        } else if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
            if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                vlSelf->ysyx_22050078_npc__DOT__idu_imm 
                    = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
                if ((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) {
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
                                                      == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs2id))) 
                                                  & (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])));
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
    vlSelf->ysyx_22050078_npc__DOT__idex_bubble = (
                                                   (((vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                      >> 2U) 
                                                     & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                        >> 0xeU)) 
                                                    & (((0x1fU 
                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                            >> 0xfU)) 
                                                        == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs1id)) 
                                                       | ((0x1fU 
                                                           & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                              >> 0xfU)) 
                                                          == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs2id)))) 
                                                   & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp)));
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
    vlSelf->ysyx_22050078_npc__DOT__idu_rs2 = ((((~ 
                                                  (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                   >> 2U)) 
                                                 & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                    >> 0xeU)) 
                                                & ((0x1fU 
                                                    & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs2id)))
                                                ? vlSelf->ysyx_22050078_npc__DOT__exu_exres
                                                : (
                                                   ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                     >> 5U) 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                           >> 6U)) 
                                                       == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs2id)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])
                                                     ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                           >> 0xbU))))
                                                    : 
                                                   (((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                                      >> 1U) 
                                                     & ((0x1fU 
                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                                            >> 2U)) 
                                                        == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs2id)))
                                                     ? vlSelf->ysyx_22050078_npc__DOT__wbu_rd
                                                     : 
                                                    vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                                    [vlSelf->ysyx_22050078_npc__DOT__idu_rs2id])));
    vlSelf->ysyx_22050078_npc__DOT__idu_rs1 = ((((~ 
                                                  (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                   >> 2U)) 
                                                 & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                    >> 0xeU)) 
                                                & ((0x1fU 
                                                    & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs1id)))
                                                ? vlSelf->ysyx_22050078_npc__DOT__exu_exres
                                                : (
                                                   ((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                     >> 5U) 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                           >> 6U)) 
                                                       == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs1id)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])
                                                     ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                           >> 0xbU))))
                                                    : 
                                                   (((vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                                      >> 1U) 
                                                     & ((0x1fU 
                                                         & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                                            >> 2U)) 
                                                        == (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rs1id)))
                                                     ? vlSelf->ysyx_22050078_npc__DOT__wbu_rd
                                                     : 
                                                    vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                                    [vlSelf->ysyx_22050078_npc__DOT__idu_rs1id])));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res 
        = (vlSelf->ysyx_22050078_npc__DOT__idu_rs1 
           - vlSelf->ysyx_22050078_npc__DOT__idu_rs2);
    VL_EXTEND_WQ(65,64, __Vtemp143, vlSelf->ysyx_22050078_npc__DOT__idu_rs1);
    VL_EXTEND_WQ(65,64, __Vtemp144, vlSelf->ysyx_22050078_npc__DOT__idu_rs2);
    VL_SUB_W(3, __Vtemp145, __Vtemp143, __Vtemp144);
    VL_EXTEND_WQ(65,64, __Vtemp148, vlSelf->ysyx_22050078_npc__DOT__idu_rs1);
    VL_EXTEND_WQ(65,64, __Vtemp149, vlSelf->ysyx_22050078_npc__DOT__idu_rs2);
    VL_SUB_W(3, __Vtemp150, __Vtemp148, __Vtemp149);
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
                                                             & (__Vtemp145[2U] 
                                                                << 4U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  (1U 
                                                                   & __Vtemp150[2U])))))))));
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
        = (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                   >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                  >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [1U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [2U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [3U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [4U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                      >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
               [5U]) & vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                     >> 0xcU)) == vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__branch 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit) 
           & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump 
        = ((((0x63U == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])) 
             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__branch)) 
            | (0x6fU == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) 
           | (0x67U == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])));
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__next_pc 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
            ? ((0x67U == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))
                ? (vlSelf->ysyx_22050078_npc__DOT__idu_rs1 
                   + vlSelf->ysyx_22050078_npc__DOT__idu_imm)
                : ((((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U]))) 
                   + vlSelf->ysyx_22050078_npc__DOT__idu_imm))
            : (4ULL + vlSelf->ysyx_22050078_npc__DOT__pc));
}

void Vysyx_22050078_npc___024root___eval_initial(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__i_clk = vlSelf->i_clk;
    vlSelf->__Vclklast__TOP__i_rst_n = vlSelf->i_rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2;
    Vysyx_22050078_npc___024root___initial__TOP__4(vlSelf);
}

void Vysyx_22050078_npc___024root___eval_settle(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___eval_settle\n"); );
    // Body
    Vysyx_22050078_npc___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22050078_npc___024root___final(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___final\n"); );
}

void Vysyx_22050078_npc___024root___ctor_var_reset(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__idex_bubble = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__s_id_err = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22050078_npc__DOT__idu_rs1id = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__idu_rs2id = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__idu_rdid = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__idu_rdwen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__idu_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__idu_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__idu_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__idu_src_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22050078_npc__DOT__idu_exopt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22050078_npc__DOT__exu_exres = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__lsu_lsres = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__wbu_rd = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__s_wbu_inst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__ins = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(160, vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__R_imm = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(340, vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(264, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4);
    VL_RAND_RESET_W(264, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(203, vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(469, vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4 = VL_RAND_RESET_Q(44);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(199, vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4 = VL_RAND_RESET_I(24);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__next_pc = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_ysyx_22050078_npc__DOT__rtl_pmem_read__2__rdata = 0;
    vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__3__Vfuncout = 0;
    vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__8__rdata = 0;
    vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__10__rdata = 0;
    vlSelf->__VinpClk__TOP__ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
