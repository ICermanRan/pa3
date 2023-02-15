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

void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22050078_npc___024root___initial__TOP__2(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___initial__TOP__2\n"); );
    // Body
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs);
}

void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ ren);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__diff_read_pc_TOP(QData/*63:0*/ rtl_pc);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_rst_TOP(CData/*0:0*/ rst_flag);
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_finish_TOP(IData/*31:0*/ finish_flag, CData/*0:0*/ &check_finish__Vfuncrtn);
extern const VlUnpacked<CData/*7:0*/, 16> Vysyx_22050078_npc__ConstPool__TABLE_b0f347eb_0;
void Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vysyx_22050078_npc___024root___settle__TOP__3(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___settle__TOP__3\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<3>/*95:0*/ __Vtemp87;
    // Body
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read_TOP(vlSelf->ysyx_22050078_npc__DOT__pc, vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__3__rdata, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2));
    vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
        = vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__3__rdata;
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__diff_read_pc_TOP(vlSelf->ysyx_22050078_npc__DOT__pc);
    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs = 0U;
    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                       >> 6U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 4U)))) {
                if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                                vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                                    = (0x1fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 7U)));
                            }
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 3U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 2U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                                = (0x1fU & (IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                    >> 7U)));
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                            = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                >> 7U)));
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 4U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 3U)))) {
                if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                                = (0x1fU & (IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                    >> 7U)));
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                            = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                >> 7U)));
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                        = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                            >> 7U)));
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 4U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 3U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                            = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                >> 7U)));
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                        = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                            >> 7U)));
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                    = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                        >> 7U)));
            }
        }
    } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                 >> 3U))))) {
        if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 2U))))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs 
                        = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                            >> 7U)));
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 0U;
    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                       >> 6U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 5U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 4U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 3U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 2U)))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                                vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 2U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 4U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 3U)))) {
                if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 4U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 3U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
            }
        }
    } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                 >> 3U))))) {
        if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 2U))))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__s_id_err = 0U;
    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                       >> 6U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 4U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 3U)))) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 2U)))) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 3U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 2U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))) {
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
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))) {
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
        } else {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 4U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 3U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 2U)))) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 0xeU)))) {
                            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                               >> 0xdU)))) {
                                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (2U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            } else if ((1U & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 0xcU)))) {
                                if ((0U != (0x7fU & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                             >> 0x19U))))) {
                                    if ((0x20U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                              >> 0x19U))))) {
                                        if ((1U != 
                                             (0x7fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                                = (4U 
                                                   | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                  >> 0xdU)))) {
                            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                = (2U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                        } else if ((1U & (~ (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                     >> 0xcU))))) {
                            if ((0U != (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                if ((0x20U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x19U))))) {
                                    if ((1U != (0x7fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                           >> 0x19U))))) {
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
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 0xdU)))) {
                            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                               >> 0xcU)))) {
                                if ((0U != (0x7fU & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                             >> 0x19U))))) {
                                    if ((1U != (0x7fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                            = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                    }
                                }
                            } else if ((0U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x19U))))) {
                                if ((1U != (0x7fU & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                  >> 0xcU)))) {
                            if ((0U != (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                if ((0x20U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x19U))))) {
                                    if ((0x21U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                            = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                    }
                                }
                            }
                        } else if ((0U != (0x7fU & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                            if ((1U != (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                              >> 0xdU)))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 0xcU)))) {
                            if ((0U != (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                if ((1U != (0x7fU & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        } else if ((0U != (0x7fU & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                            if ((1U != (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                              >> 0xcU)))) {
                        if ((0U != (0x7fU & (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                     >> 0x19U))))) {
                            if ((1U != (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                    = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                            }
                        }
                    } else if ((0U != (0x7fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0x19U))))) {
                        if ((0x20U != (0x7fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0x19U))))) {
                            if ((1U != (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
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
        } else {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 4U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 3U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 2U)))) {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    if ((0U != (7U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                              >> 0xcU))))) {
                        if ((5U == (7U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                  >> 0xcU))))) {
                            if ((0U != (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                if ((0x20U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x19U))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        } else {
                            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                = (2U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
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
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))) {
                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                        = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                }
            } else {
                vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                    = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 0xeU)))) {
                    if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 0xdU))))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 0xcU)))) {
                            if ((0U != (0x3fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x1aU))))) {
                                if ((0x10U != (0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x1aU))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                                        = (4U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 0xdU)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                            = (2U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
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
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 3U)))) {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 2U)))) {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))) {
            vlSelf->ysyx_22050078_npc__DOT__s_id_err 
                = (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
        }
    } else {
        vlSelf->ysyx_22050078_npc__DOT__s_id_err = 
            (1U | (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err));
    }
    vlSelf->ysyx_22050078_npc__DOT__lsu_opt = ((3U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                                ? (0xeU 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                               >> 0xcU)) 
                                                      << 1U))
                                                : 0xfU);
    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 1U;
    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                       >> 6U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 5U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 4U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 3U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 2U)))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 2U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 4U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 3U)))) {
                if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                               >> 0xeU)))) {
                                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0xcU))))) {
                                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x25U;
                                    }
                                } else if ((1U & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0xcU)))) {
                                    if ((0U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x12U;
                                    } else if ((0x20U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x13U;
                                    } else if ((1U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x24U;
                                    }
                                } else {
                                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x23U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x11U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 3U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 4U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x22U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 1U;
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 0xdU)))) {
                            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                               >> 0xcU)))) {
                                if ((0U == (0x7fU & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 5U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x21U;
                                }
                            } else if ((0U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 6U;
                            } else if ((1U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x20U;
                            }
                        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                  >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 9U;
                            } else if ((0x20U == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                             >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x10U;
                            } else if ((0x21U == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                             >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x19U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 7U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x18U;
                        }
                    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                              >> 0xdU)))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x28U;
                            } else if ((1U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x17U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x27U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x16U;
                        }
                    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                              >> 0xcU)))) {
                        if ((0U == (0x7fU & (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 8U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x15U;
                        }
                    } else if ((0U == (0x7fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0x19U))))) {
                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 1U;
                    } else if ((0x20U == (0x7fU & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                           >> 0x19U))))) {
                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 2U;
                    } else if ((1U == (0x7fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0x19U))))) {
                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x14U;
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 4U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 3U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        if ((0U == (7U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 3U;
                        } else if ((5U == (7U & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0xcU))))) {
                            if ((0U == (0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x12U;
                            } else if ((0x20U == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                             >> 0x19U))))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x13U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 1U;
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 0xeU)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 0xdU)))) {
                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU 
                            = ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                              >> 0xcU)))
                                ? 5U : 6U);
                    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                              >> 0xcU)))) {
                        if ((0U == (0x3fU & (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                     >> 0x1aU))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 9U;
                        } else if ((0x10U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                         >> 0x1aU))))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x10U;
                        }
                    } else {
                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 7U;
                    }
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 0xdU)))) {
                    if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 0xcU))))) {
                        vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 0x27U;
                    }
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU 
                        = ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 0xcU)))
                            ? 8U : 1U);
                }
            }
        }
    } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                 >> 3U))))) {
        if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 2U))))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 1U;
    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                       >> 6U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 5U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 4U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 3U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 2U)))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                                vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 2U;
                            }
                        }
                    }
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 2U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 2U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 4U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 3U)))) {
                if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 0U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 1U;
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 0U;
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 4U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 3U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 1U;
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 3U;
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 1U;
            }
        }
    } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                 >> 3U))))) {
        if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 2U))))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs = 0U;
    if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                          >> 6U))))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 4U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 3U)))) {
                    if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                                vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs 
                                    = (0x1fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0x14U)));
                            }
                        }
                    }
                } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                             >> 2U))))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs 
                                = (0x1fU & (IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs = 0U;
    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                       >> 6U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 4U)))) {
                if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                                vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs 
                                    = (0x1fU & (IData)(
                                                       (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                        >> 0xfU)));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                         >> 3U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 2U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs 
                                = (0x1fU & (IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                    >> 0xfU)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 4U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 3U)))) {
                if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs 
                                = (0x1fU & (IData)(
                                                   (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                    >> 0xfU)));
                        }
                    }
                }
            } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                         >> 2U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs 
                            = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                >> 0xfU)));
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 4U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 3U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs 
                            = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                >> 0xfU)));
                    }
                }
            }
        } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                     >> 2U))))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs 
                        = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                            >> 0xfU)));
                }
            }
        }
    } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                 >> 3U))))) {
        if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 2U))))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs 
                        = (0x1fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                            >> 0xfU)));
                }
            }
        }
    }
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm 
        = (((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                              >> 0x1fU)))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                          >> 0x14U))))));
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(((IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                  >> 0xcU)) 
                                         << 0xcU))));
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_rst_TOP(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2);
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__check_finish_TOP((IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst), vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__1__Vfuncout);
    if (VL_UNLIKELY(vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__1__Vfuncout)) {
        VL_WRITEF("\n----------EBREAK: HIT !!%s!! TRAP!!---------------\n\n",
                  32,(((0ULL == vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs
                        [0xaU]) ? 1U : 0U) ? 0x474f4f44U
                       : 0x424144U));
        VL_FINISH_MT("/home/ran/ysyx/ysyx-workbench/npc/vsrc/ysyx_22050078_npc.v", 157, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2) 
                      & (0U != (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) 
                     & (IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, opcode == %b---------------\n\n",
                  64,vlSelf->ysyx_22050078_npc__DOT__pc,
                  7,(0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)));
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2) 
                      & (0U != (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) 
                     & ((IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err) 
                        >> 1U)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, funct3 == %b---------------\n\n",
                  64,vlSelf->ysyx_22050078_npc__DOT__pc,
                  3,(7U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 0xcU))));
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2) 
                      & (0U != (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) 
                     & ((IData)(vlSelf->ysyx_22050078_npc__DOT__s_id_err) 
                        >> 2U)))) {
        VL_WRITEF("\n----------inst decode error, pc = %x, funct7 == %b---------------\n\n",
                  64,vlSelf->ysyx_22050078_npc__DOT__pc,
                  7,(0x7fU & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 0x19U))));
    }
    __Vtableidx1 = vlSelf->ysyx_22050078_npc__DOT__lsu_opt;
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask 
        = Vysyx_22050078_npc__ConstPool__TABLE_b0f347eb_0
        [__Vtableidx1];
    vlSelf->ysyx_22050078_npc__DOT__rs2_data = vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs
        [vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs];
    vlSelf->ysyx_22050078_npc__DOT__rs1_data = vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs
        [vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs];
    vlSelf->ysyx_22050078_npc__DOT__imm = 0ULL;
    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                       >> 6U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 5U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 4U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 3U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 2U)))) {
                        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                                vlSelf->ysyx_22050078_npc__DOT__imm 
                                    = (((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                       >> 0x1fU)))))) 
                                        << 0x15U) | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0x1fU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xff000U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0xcU)) 
                                                                            << 0xcU)) 
                                                                        | ((0x800U 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0x14U)) 
                                                                               << 0xbU)) 
                                                                           | (0x7feU 
                                                                              & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0x15U)) 
                                                                                << 1U))))))));
                            }
                        }
                    }
                } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                          >> 2U)))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__imm 
                                = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 4U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 3U)))) {
                if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                            vlSelf->ysyx_22050078_npc__DOT__imm = 0ULL;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 2U)))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__imm 
                            = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm;
                    }
                }
            } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                      >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__imm = 0ULL;
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 4U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                           >> 3U)))) {
            if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                        vlSelf->ysyx_22050078_npc__DOT__imm 
                            = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 2U)))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__imm 
                        = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm;
                }
            }
        } else if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                  >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                vlSelf->ysyx_22050078_npc__DOT__imm 
                    = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
            }
        }
    } else if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                 >> 3U))))) {
        if ((1U & (~ (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                              >> 2U))))) {
            if ((1U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))) {
                    vlSelf->ysyx_22050078_npc__DOT__imm 
                        = vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm;
                }
            }
        }
    }
    VL_EXTEND_WQ(66,64, __Vtemp80, vlSelf->ysyx_22050078_npc__DOT__rs1_data);
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
        = (8U | (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs1_data) 
                  << 4U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__pc 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[5U] 
        = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs1_data) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__rs1_data 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[6U] 
        = (0x10U | ((__Vtemp80[0U] << 6U) | ((IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__rs1_data 
                                                      >> 0x20U)) 
                                             >> 0x1cU)));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[7U] 
        = ((__Vtemp80[0U] >> 0x1aU) | (__Vtemp80[1U] 
                                       << 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4[8U] 
        = ((__Vtemp80[1U] >> 0x1aU) | (__Vtemp80[2U] 
                                       << 6U));
    VL_EXTEND_WQ(66,64, __Vtemp87, vlSelf->ysyx_22050078_npc__DOT__rs2_data);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22050078_npc__DOT__imm);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22050078_npc__DOT__imm 
                   >> 0x20U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[2U] = 0x13U;
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[3U] = 0U;
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[4U] 
        = (8U | ((IData)(vlSelf->ysyx_22050078_npc__DOT__imm) 
                 << 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[5U] 
        = (((IData)(vlSelf->ysyx_22050078_npc__DOT__imm) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__imm 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[6U] 
        = (0x10U | ((__Vtemp87[0U] << 6U) | ((IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__imm 
                                                      >> 0x20U)) 
                                             >> 0x1cU)));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[7U] 
        = ((__Vtemp87[0U] >> 0x1aU) | (__Vtemp87[1U] 
                                       << 6U));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4[8U] 
        = ((__Vtemp87[1U] >> 0x1aU) | (__Vtemp87[2U] 
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
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
                               == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
           == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
              == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
              == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
              == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
                               == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
           == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
              == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
              == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
                                  == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU) 
              == vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2 
        = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22050078_npc__DOT__exu_res = 0ULL;
    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans = 0ULL;
    if ((0x20U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            vlSelf->ysyx_22050078_npc__DOT__exu_res = 0ULL;
        } else if ((8U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            if ((4U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
                vlSelf->ysyx_22050078_npc__DOT__exu_res = 0ULL;
            } else if ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
                vlSelf->ysyx_22050078_npc__DOT__exu_res = 0ULL;
            } else if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
                vlSelf->ysyx_22050078_npc__DOT__exu_res = 0ULL;
            } else {
                vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                    = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                       - vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2);
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                                                     >> 0x3fU)))));
            }
        } else if ((4U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            if ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
                if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
                    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                        = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                           - vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2);
                    vlSelf->ysyx_22050078_npc__DOT__exu_res 
                        = (QData)((IData)((1U & (IData)(
                                                        (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                                                         >> 0x3fU)))));
                } else {
                    vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                        = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans) 
                           | (IData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
                    vlSelf->ysyx_22050078_npc__DOT__exu_res 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans)));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                       | (IData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
            } else {
                vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans) 
                       | (IData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                       | (IData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans)));
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                       | (IData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1), (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
            } else {
                vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans 
                    = ((QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1)) 
                       * (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)));
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                       | (IData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans)));
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
            }
        } else {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                    ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)
                    : VL_MODDIVS_QQQ(64, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2));
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
        if ((8U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = ((4U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                               ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                                          ? VL_DIV_QQQ(64, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)
                                          : VL_DIV_QQQ(64, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2))));
        } else if ((4U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                    ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                               ? 0ULL : (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                         * vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)));
        } else if ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = ((((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                                                >> 0x1fU))))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1))) 
                       >> (0x1fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)));
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
            } else {
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                       | (IData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1) 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2))))));
                vlSelf->ysyx_22050078_npc__DOT__exu_res 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                   | (IData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1) 
                                      << (0x1fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2))))));
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
        } else {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1, 
                                 (0x3fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)));
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
        vlSelf->ysyx_22050078_npc__DOT__exu_res = (
                                                   (4U 
                                                    & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                                                      ? 
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                                      >> 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))
                                                      : 
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                                      << 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2))))));
    } else if ((4U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
        if ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                    ? (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                       ^ vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)
                    : (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                       | vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2));
        } else if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                   & vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2);
        } else {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                   | (IData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1) 
                                      - (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
        if ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))) {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = ((0xffffffff00000000ULL & vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                   | (IData)((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1) 
                                      + (IData)(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)))));
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res)));
        } else {
            vlSelf->ysyx_22050078_npc__DOT__exu_res 
                = (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                   - vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2);
        }
    } else {
        vlSelf->ysyx_22050078_npc__DOT__exu_res = (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU))
                                                    ? 
                                                   (vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1 
                                                    + vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2)
                                                    : 0ULL);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_PCU__DOT__pc_next 
        = ((1U & ((((0x63U == (0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                     ? 1U : 0U) & (0U != vlSelf->ysyx_22050078_npc__DOT__exu_res)) 
                  | ((0x6fU == (0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                      ? 1U : 0U))) ? (vlSelf->ysyx_22050078_npc__DOT__pc 
                                      + vlSelf->ysyx_22050078_npc__DOT__imm)
            : (((0x67U == (0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                 ? 1U : 0U) ? (vlSelf->ysyx_22050078_npc__DOT__rs1_data 
                               + vlSelf->ysyx_22050078_npc__DOT__imm)
                : (4ULL + vlSelf->ysyx_22050078_npc__DOT__pc)));
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read_TOP(vlSelf->ysyx_22050078_npc__DOT__exu_res, vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__5__rdata, 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))));
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
        = vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__5__rdata;
    Vysyx_22050078_npc___024root____Vdpiimwrap_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_write_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[4U])) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[3U])) 
                                                                                << 0x18U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                                                                >> 8U))), 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[1U])) 
                                                                                << 0x18U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])) 
                                                                                >> 8U))), 
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U]));
    vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU 
        = ((8U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
            ? ((4U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                ? ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                    ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                               ? 0ULL : (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))
                : ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                    ? ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                        ? 0ULL : (QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))))
                    : ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                        ? 0ULL : (QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))))))
            : ((4U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                ? ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                    ? ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                        ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)
                    : ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                        ? 0ULL : (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))))
                : ((2U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                    ? ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                        ? 0ULL : (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata))))))
                    : ((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                        ? 0ULL : (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata 
                                                                  >> 7U)))))) 
                                   << 8U) | (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata)))))))));
}

void Vysyx_22050078_npc___024root___eval_initial(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22050078_npc___024root___initial__TOP__2(vlSelf);
}

void Vysyx_22050078_npc___024root___eval_settle(Vysyx_22050078_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050078_npc___024root___eval_settle\n"); );
    // Body
    Vysyx_22050078_npc___024root___settle__TOP__3(vlSelf);
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
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22050078_npc__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__lsu_opt = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22050078_npc__DOT__exu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__s_id_err = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__R_imm = VL_RAND_RESET_Q(64);
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
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(136, vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout);
    vlSelf->ysyx_22050078_npc__DOT__u_PCU__DOT__pc_next = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22050078_npc__DOT__check_finish__1__Vfuncout = 0;
    vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_IFU__DOT__rtl_pmem_read__3__rdata = 0;
    vlSelf->__Vtask_ysyx_22050078_npc__DOT__u_LSU__DOT__rtl_pmem_read__5__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
