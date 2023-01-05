// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_220578_npc_onecycle__Syms.h"


void Vysyx_220578_npc_onecycle___024root__traceInitSub0(Vysyx_220578_npc_onecycle___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_220578_npc_onecycle___024root__traceInitTop(Vysyx_220578_npc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_220578_npc_onecycle___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_220578_npc_onecycle___024root__traceInitSub0(Vysyx_220578_npc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+67,"clk", false,-1);
        tracep->declBit(c+68,"rst", false,-1);
        tracep->declBus(c+69,"inst", false,-1, 31,0);
        tracep->declQuad(c+70,"inst_addr_cpu2mem", false,-1, 63,0);
        tracep->declBus(c+100,"ysyx_220578_npc_onecycle ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_220578_npc_onecycle INST_WIDTH", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle INSTADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle PC_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"ysyx_220578_npc_onecycle clk", false,-1);
        tracep->declBit(c+68,"ysyx_220578_npc_onecycle rst", false,-1);
        tracep->declBus(c+69,"ysyx_220578_npc_onecycle inst", false,-1, 31,0);
        tracep->declQuad(c+70,"ysyx_220578_npc_onecycle inst_addr_cpu2mem", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_220578_npc_onecycle pc_reg2_IFU", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_220578_npc_onecycle inst_IFU2IDU", false,-1, 31,0);
        tracep->declQuad(c+1,"ysyx_220578_npc_onecycle pc_IFU2IDU", false,-1, 63,0);
        tracep->declBus(c+72,"ysyx_220578_npc_onecycle rs1_addr_IDU2regs", false,-1, 4,0);
        tracep->declBus(c+73,"ysyx_220578_npc_onecycle rs2_addr_IDU2regs", false,-1, 4,0);
        tracep->declQuad(c+74,"ysyx_220578_npc_onecycle src1_regs2IDU", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_220578_npc_onecycle src2_regs2IDU", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_220578_npc_onecycle inst_IDU2EXU", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_220578_npc_onecycle opcode_IDU2EXU", false,-1, 6,0);
        tracep->declBus(c+79,"ysyx_220578_npc_onecycle rd_addr_IDU2EXU", false,-1, 4,0);
        tracep->declQuad(c+80,"ysyx_220578_npc_onecycle op1_IDU2EXU", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_220578_npc_onecycle op2_IDU2EXU", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_220578_npc_onecycle func3_IDU2EXU", false,-1, 2,0);
        tracep->declBus(c+85,"ysyx_220578_npc_onecycle func7_IDU2EXU", false,-1, 6,0);
        tracep->declBus(c+86,"ysyx_220578_npc_onecycle rd_addr_EXU2regs", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_220578_npc_onecycle rd_data_EXU2regs", false,-1, 63,0);
        tracep->declBit(c+89,"ysyx_220578_npc_onecycle rd_wen_EXU2regs", false,-1);
        tracep->declBit(c+67,"ysyx_220578_npc_onecycle ysyx_220578_pc_reg_inst clk", false,-1);
        tracep->declBit(c+68,"ysyx_220578_npc_onecycle ysyx_220578_pc_reg_inst rst", false,-1);
        tracep->declQuad(c+1,"ysyx_220578_npc_onecycle ysyx_220578_pc_reg_inst pc", false,-1, 63,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle ysyx_220578_IFU_inst ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_220578_npc_onecycle ysyx_220578_IFU_inst INST_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1,"ysyx_220578_npc_onecycle ysyx_220578_IFU_inst pc", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_220578_npc_onecycle ysyx_220578_IFU_inst inst_in", false,-1, 31,0);
        tracep->declBus(c+69,"ysyx_220578_npc_onecycle ysyx_220578_IFU_inst inst_out", false,-1, 31,0);
        tracep->declQuad(c+1,"ysyx_220578_npc_onecycle ysyx_220578_IFU_inst pc_IFU2IDU", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_220578_npc_onecycle ysyx_220578_IFU_inst pc_IFU2mem", false,-1, 63,0);
        tracep->declBus(c+100,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst INST_WIDTH", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst INSTADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst PC_WIDTH", false,-1, 31,0);
        tracep->declBus(c+69,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst inst_in", false,-1, 31,0);
        tracep->declQuad(c+1,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst pc_in", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst src1_in", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst src2_in", false,-1, 63,0);
        tracep->declBus(c+72,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst rs1_addr", false,-1, 4,0);
        tracep->declBus(c+73,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst rs2_addr", false,-1, 4,0);
        tracep->declBus(c+69,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst inst_out", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst opcode", false,-1, 6,0);
        tracep->declBus(c+79,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst rd_addr", false,-1, 4,0);
        tracep->declQuad(c+80,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst op1", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst op2", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst func3", false,-1, 2,0);
        tracep->declBus(c+85,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst func7", false,-1, 6,0);
        tracep->declQuad(c+90,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst I_imm", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst U_imm", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst S_imm", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst J_imm", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst R_imm", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_220578_npc_onecycle ysyx_220578_IDU_inst B_imm", false,-1, 63,0);
        tracep->declBus(c+100,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst INST_WIDTH", false,-1, 31,0);
        tracep->declBus(c+69,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst inst_in", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst opcode", false,-1, 6,0);
        tracep->declBus(c+79,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst rd_addr_in", false,-1, 4,0);
        tracep->declQuad(c+80,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst op1", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst op2", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst func3", false,-1, 2,0);
        tracep->declBus(c+85,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst func7", false,-1, 6,0);
        tracep->declBus(c+86,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst rd_addr_out", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst rd_data_out", false,-1, 63,0);
        tracep->declBit(c+89,"ysyx_220578_npc_onecycle ysyx_220578_EXU_inst rd_wen", false,-1);
        tracep->declBus(c+100,"ysyx_220578_npc_onecycle ysyx_220578_register_inst ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_220578_npc_onecycle ysyx_220578_register_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"ysyx_220578_npc_onecycle ysyx_220578_register_inst clk", false,-1);
        tracep->declBit(c+89,"ysyx_220578_npc_onecycle ysyx_220578_register_inst w_en", false,-1);
        tracep->declBus(c+72,"ysyx_220578_npc_onecycle ysyx_220578_register_inst rs1_addr", false,-1, 4,0);
        tracep->declBus(c+73,"ysyx_220578_npc_onecycle ysyx_220578_register_inst rs2_addr", false,-1, 4,0);
        tracep->declBus(c+105,"ysyx_220578_npc_onecycle ysyx_220578_register_inst rd", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_220578_npc_onecycle ysyx_220578_register_inst wr_data", false,-1, 63,0);
        tracep->declBus(c+86,"ysyx_220578_npc_onecycle ysyx_220578_register_inst wr_addr", false,-1, 4,0);
        tracep->declQuad(c+74,"ysyx_220578_npc_onecycle ysyx_220578_register_inst rd_data1", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_220578_npc_onecycle ysyx_220578_register_inst rd_data2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+3+i*2,"ysyx_220578_npc_onecycle ysyx_220578_register_inst regs", true,(i+0), 63,0);}}
    }
}

void Vysyx_220578_npc_onecycle___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_220578_npc_onecycle___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_220578_npc_onecycle___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_220578_npc_onecycle___024root__traceRegister(Vysyx_220578_npc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_220578_npc_onecycle___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_220578_npc_onecycle___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_220578_npc_onecycle___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_220578_npc_onecycle___024root__traceFullSub0(Vysyx_220578_npc_onecycle___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_220578_npc_onecycle___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_220578_npc_onecycle___024root* const __restrict vlSelf = static_cast<Vysyx_220578_npc_onecycle___024root*>(voidSelf);
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_220578_npc_onecycle___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_220578_npc_onecycle___024root__traceFullSub0(Vysyx_220578_npc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_220578_npc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_220578_npc_onecycle__DOT__pc_reg2_IFU),64);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[0]),64);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[1]),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[2]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[3]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[4]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[5]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[6]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[7]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[8]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[9]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[10]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[11]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[12]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[13]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[14]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[15]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[16]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[17]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[18]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[19]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[20]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[21]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[22]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[23]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[24]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[25]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[26]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[27]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[28]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[29]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[30]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs[31]),64);
        tracep->fullBit(oldp+67,(vlSelf->clk));
        tracep->fullBit(oldp+68,(vlSelf->rst));
        tracep->fullIData(oldp+69,(vlSelf->inst),32);
        tracep->fullQData(oldp+70,(vlSelf->inst_addr_cpu2mem),64);
        tracep->fullCData(oldp+72,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+73,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+74,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))])),64);
        tracep->fullQData(oldp+76,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))])),64);
        tracep->fullCData(oldp+78,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+79,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+80,(((0x13U == (0x7fU 
                                               & vlSelf->inst))
                                     ? ((0U == (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU)))
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs
                                            [(0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU))])
                                         : 0ULL) : 0ULL)),64);
        tracep->fullQData(oldp+82,(((0x13U == (0x7fU 
                                               & vlSelf->inst))
                                     ? ((0U == (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU)))
                                         ? (((- (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x14U))))
                                         : 0ULL) : 0ULL)),64);
        tracep->fullCData(oldp+84,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+85,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+86,(((0x13U == (0x7fU 
                                               & vlSelf->inst))
                                     ? ((0U == (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU)))
                                         ? (0x1fU & 
                                            (vlSelf->inst 
                                             >> 7U))
                                         : 0U) : 0U)),5);
        tracep->fullQData(oldp+87,(((0x13U == (0x7fU 
                                               & vlSelf->inst))
                                     ? ((0U == (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU)))
                                         ? (((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->inst))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0xfU)))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_register_inst__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))])
                                                  : 0ULL)
                                              : 0ULL) 
                                            + ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x14U))))
                                                    : 0ULL)
                                                : 0ULL))
                                         : 0ULL) : 0ULL)),64);
        tracep->fullBit(oldp+89,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->fullQData(oldp+90,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+92,(((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0xcU))) 
                                    << 0x2cU)),64);
        tracep->fullQData(oldp+94,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->fullQData(oldp+96,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->inst 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U))))))))),64);
        tracep->fullQData(oldp+98,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->inst 
                                                                             >> 7U))))))))),64);
        tracep->fullIData(oldp+100,(5U),32);
        tracep->fullIData(oldp+101,(0x40U),32);
        tracep->fullIData(oldp+102,(0x20U),32);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_220578_npc_onecycle__DOT__ysyx_220578_IDU_inst__DOT__R_imm),64);
        tracep->fullCData(oldp+105,(0U),5);
    }
}
