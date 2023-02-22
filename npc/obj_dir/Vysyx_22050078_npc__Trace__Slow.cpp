// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050078_npc__Syms.h"


void Vysyx_22050078_npc___024root__traceInitSub0(Vysyx_22050078_npc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050078_npc___024root__traceInitTop(Vysyx_22050078_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050078_npc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050078_npc___024root__traceInitSub0(Vysyx_22050078_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
<<<<<<< HEAD
        tracep->declBit(c+212,"clk", false,-1);
        tracep->declBit(c+213,"rst_n", false,-1);
        tracep->declBus(c+214,"ysyx_22050078_npc ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+216,"ysyx_22050078_npc INST_WIDTH", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc INSTADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc PC_WIDTH", false,-1, 31,0);
        tracep->declBit(c+212,"ysyx_22050078_npc clk", false,-1);
        tracep->declBit(c+213,"ysyx_22050078_npc rst_n", false,-1);
        tracep->declBit(c+1,"ysyx_22050078_npc rst_n_sync", false,-1);
        tracep->declQuad(c+2,"ysyx_22050078_npc pc", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22050078_npc inst_IFU2IDU", false,-1, 31,0);
        tracep->declBus(c+5,"ysyx_22050078_npc rs1_addr_IDU2regs", false,-1, 4,0);
        tracep->declBus(c+6,"ysyx_22050078_npc rs2_addr_IDU2regs", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22050078_npc rd_addr_IDU2regs", false,-1, 4,0);
        tracep->declBit(c+8,"ysyx_22050078_npc rd_wen_IDU2regs", false,-1);
        tracep->declQuad(c+9,"ysyx_22050078_npc rs1_data", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22050078_npc rs2_data", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_22050078_npc exu_opt_IDU2EXU", false,-1, 5,0);
        tracep->declBus(c+14,"ysyx_22050078_npc exu_src_sel_IDU2EXU", false,-1, 1,0);
        tracep->declQuad(c+15,"ysyx_22050078_npc imm", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22050078_npc lsu_opt", false,-1, 3,0);
        tracep->declQuad(c+18,"ysyx_22050078_npc exu_res", false,-1, 63,0);
        tracep->declQuad(c+20,"ysyx_22050078_npc lsu_res_LSU2WBU", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22050078_npc zero_EXU2PCU", false,-1);
        tracep->declBit(c+23,"ysyx_22050078_npc brch_IDU2PCU", false,-1);
        tracep->declBit(c+24,"ysyx_22050078_npc jal_IDU2PCU", false,-1);
        tracep->declBit(c+25,"ysyx_22050078_npc jalr_IDU2PCU", false,-1);
        tracep->declQuad(c+26,"ysyx_22050078_npc rd_data_WBU2regs", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22050078_npc a0zero", false,-1);
        tracep->declBus(c+29,"ysyx_22050078_npc s_id_err", false,-1, 2,0);
        tracep->declBit(c+212,"ysyx_22050078_npc u_stdrst clk", false,-1);
        tracep->declBit(c+213,"ysyx_22050078_npc u_stdrst rst_n", false,-1);
        tracep->declBit(c+1,"ysyx_22050078_npc u_stdrst o_rst_n_sync", false,-1);
        tracep->declBit(c+30,"ysyx_22050078_npc u_stdrst rst_n_r1", false,-1);
        tracep->declBit(c+1,"ysyx_22050078_npc u_stdrst rst_n_r2", false,-1);
        tracep->declBus(c+214,"ysyx_22050078_npc u_regfile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_regfile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+212,"ysyx_22050078_npc u_regfile clk", false,-1);
        tracep->declQuad(c+26,"ysyx_22050078_npc u_regfile i_wdata", false,-1, 63,0);
        tracep->declBit(c+8,"ysyx_22050078_npc u_regfile i_wen", false,-1);
        tracep->declBus(c+7,"ysyx_22050078_npc u_regfile i_waddr", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_22050078_npc u_regfile i_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+6,"ysyx_22050078_npc u_regfile i_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+9,"ysyx_22050078_npc u_regfile o_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22050078_npc u_regfile o_rs2_data", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22050078_npc u_regfile s_a0zero", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+31+i*2,"ysyx_22050078_npc u_regfile regs", true,(i+0), 63,0);}}
        tracep->declQuad(c+2,"ysyx_22050078_npc u_IFU i_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050078_npc u_IFU rst_n", false,-1);
        tracep->declBus(c+4,"ysyx_22050078_npc u_IFU inst_out", false,-1, 31,0);
        tracep->declQuad(c+95,"ysyx_22050078_npc u_IFU inst", false,-1, 63,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_IDU DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_IDU INSTADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_IDU PC_WIDTH", false,-1, 31,0);
        tracep->declBus(c+4,"ysyx_22050078_npc u_IDU inst_in", false,-1, 31,0);
        tracep->declBus(c+5,"ysyx_22050078_npc u_IDU o_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+6,"ysyx_22050078_npc u_IDU o_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22050078_npc u_IDU o_rd_addr", false,-1, 4,0);
        tracep->declBit(c+8,"ysyx_22050078_npc u_IDU o_rd_wen", false,-1);
        tracep->declQuad(c+15,"ysyx_22050078_npc u_IDU o_imm", false,-1, 63,0);
        tracep->declBus(c+14,"ysyx_22050078_npc u_IDU o_exu_src_sel", false,-1, 1,0);
        tracep->declBus(c+13,"ysyx_22050078_npc u_IDU o_exu_opt", false,-1, 5,0);
        tracep->declBus(c+17,"ysyx_22050078_npc u_IDU o_lsu_opt", false,-1, 3,0);
        tracep->declBit(c+23,"ysyx_22050078_npc u_IDU o_brch", false,-1);
        tracep->declBit(c+24,"ysyx_22050078_npc u_IDU o_jal", false,-1);
        tracep->declBit(c+25,"ysyx_22050078_npc u_IDU o_jalr", false,-1);
        tracep->declBus(c+29,"ysyx_22050078_npc u_IDU s_id_err", false,-1, 2,0);
        tracep->declBus(c+97,"ysyx_22050078_npc u_IDU func7", false,-1, 6,0);
        tracep->declBus(c+98,"ysyx_22050078_npc u_IDU func3", false,-1, 2,0);
        tracep->declBus(c+99,"ysyx_22050078_npc u_IDU rs1_addr", false,-1, 4,0);
        tracep->declBus(c+100,"ysyx_22050078_npc u_IDU rs2_addr", false,-1, 4,0);
        tracep->declBus(c+101,"ysyx_22050078_npc u_IDU rd_addr", false,-1, 4,0);
        tracep->declBus(c+102,"ysyx_22050078_npc u_IDU opcode", false,-1, 6,0);
        tracep->declQuad(c+103,"ysyx_22050078_npc u_IDU I_imm", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22050078_npc u_IDU U_imm", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22050078_npc u_IDU S_imm", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22050078_npc u_IDU J_imm", false,-1, 63,0);
        tracep->declQuad(c+217,"ysyx_22050078_npc u_IDU R_imm", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_22050078_npc u_IDU B_imm", false,-1, 63,0);
        tracep->declQuad(c+2,"ysyx_22050078_npc u_EXU pc", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22050078_npc u_EXU i_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22050078_npc u_EXU i_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_22050078_npc u_EXU i_imm", false,-1, 63,0);
        tracep->declBus(c+14,"ysyx_22050078_npc u_EXU i_src_sel", false,-1, 1,0);
        tracep->declBus(c+13,"ysyx_22050078_npc u_EXU i_exopt", false,-1, 5,0);
        tracep->declQuad(c+18,"ysyx_22050078_npc u_EXU o_exu_res", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22050078_npc u_EXU o_zero", false,-1);
        tracep->declQuad(c+113,"ysyx_22050078_npc u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_22050078_npc u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+117,"ysyx_22050078_npc u_EXU exu_res_trans", false,-1, 63,0);
        tracep->declBus(c+219,"ysyx_22050078_npc u_EXU mux_src1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+220,"ysyx_22050078_npc u_EXU mux_src1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_EXU mux_src1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+113,"ysyx_22050078_npc u_EXU mux_src1 out", false,-1, 63,0);
        tracep->declBus(c+14,"ysyx_22050078_npc u_EXU mux_src1 key", false,-1, 1,0);
        tracep->declQuad(c+221,"ysyx_22050078_npc u_EXU mux_src1 default_out", false,-1, 63,0);
        tracep->declArray(c+119,"ysyx_22050078_npc u_EXU mux_src1 lut", false,-1, 263,0);
        tracep->declBus(c+219,"ysyx_22050078_npc u_EXU mux_src1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+220,"ysyx_22050078_npc u_EXU mux_src1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_EXU mux_src1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+223,"ysyx_22050078_npc u_EXU mux_src1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+113,"ysyx_22050078_npc u_EXU mux_src1 i0 out", false,-1, 63,0);
        tracep->declBus(c+14,"ysyx_22050078_npc u_EXU mux_src1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+221,"ysyx_22050078_npc u_EXU mux_src1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+119,"ysyx_22050078_npc u_EXU mux_src1 i0 lut", false,-1, 263,0);
        tracep->declBus(c+224,"ysyx_22050078_npc u_EXU mux_src1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+128+i*3,"ysyx_22050078_npc u_EXU mux_src1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+140+i*1,"ysyx_22050078_npc u_EXU mux_src1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+144+i*2,"ysyx_22050078_npc u_EXU mux_src1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+152,"ysyx_22050078_npc u_EXU mux_src1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+154,"ysyx_22050078_npc u_EXU mux_src1 i0 hit", false,-1);
        tracep->declBus(c+225,"ysyx_22050078_npc u_EXU mux_src1 i0 i", false,-1, 31,0);
        tracep->declBus(c+219,"ysyx_22050078_npc u_EXU mux_src2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+220,"ysyx_22050078_npc u_EXU mux_src2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_EXU mux_src2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+115,"ysyx_22050078_npc u_EXU mux_src2 out", false,-1, 63,0);
        tracep->declBus(c+14,"ysyx_22050078_npc u_EXU mux_src2 key", false,-1, 1,0);
        tracep->declQuad(c+221,"ysyx_22050078_npc u_EXU mux_src2 default_out", false,-1, 63,0);
        tracep->declArray(c+155,"ysyx_22050078_npc u_EXU mux_src2 lut", false,-1, 263,0);
        tracep->declBus(c+219,"ysyx_22050078_npc u_EXU mux_src2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+220,"ysyx_22050078_npc u_EXU mux_src2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_EXU mux_src2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+223,"ysyx_22050078_npc u_EXU mux_src2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+115,"ysyx_22050078_npc u_EXU mux_src2 i0 out", false,-1, 63,0);
        tracep->declBus(c+14,"ysyx_22050078_npc u_EXU mux_src2 i0 key", false,-1, 1,0);
        tracep->declQuad(c+221,"ysyx_22050078_npc u_EXU mux_src2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+155,"ysyx_22050078_npc u_EXU mux_src2 i0 lut", false,-1, 263,0);
        tracep->declBus(c+224,"ysyx_22050078_npc u_EXU mux_src2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+164+i*3,"ysyx_22050078_npc u_EXU mux_src2 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+176+i*1,"ysyx_22050078_npc u_EXU mux_src2 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+180+i*2,"ysyx_22050078_npc u_EXU mux_src2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+188,"ysyx_22050078_npc u_EXU mux_src2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+190,"ysyx_22050078_npc u_EXU mux_src2 i0 hit", false,-1);
        tracep->declBus(c+225,"ysyx_22050078_npc u_EXU mux_src2 i0 i", false,-1, 31,0);
        tracep->declBit(c+212,"ysyx_22050078_npc u_LSU clk", false,-1);
        tracep->declBit(c+1,"ysyx_22050078_npc u_LSU rst_n", false,-1);
        tracep->declBus(c+17,"ysyx_22050078_npc u_LSU i_opt", false,-1, 3,0);
        tracep->declQuad(c+18,"ysyx_22050078_npc u_LSU i_addr", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22050078_npc u_LSU i_regst", false,-1, 63,0);
        tracep->declQuad(c+20,"ysyx_22050078_npc u_LSU o_regld", false,-1, 63,0);
        tracep->declBit(c+191,"ysyx_22050078_npc u_LSU ren", false,-1);
        tracep->declQuad(c+18,"ysyx_22050078_npc u_LSU raddr", false,-1, 63,0);
        tracep->declQuad(c+192,"ysyx_22050078_npc u_LSU rdata", false,-1, 63,0);
        tracep->declBus(c+194,"ysyx_22050078_npc u_LSU mask", false,-1, 7,0);
        tracep->declBus(c+195,"ysyx_22050078_npc u_LSU wmask", false,-1, 7,0);
        tracep->declQuad(c+196,"ysyx_22050078_npc u_LSU waddr", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22050078_npc u_LSU wdata", false,-1, 63,0);
        tracep->declBus(c+226,"ysyx_22050078_npc u_LSU u_stdreg WIDTH", false,-1, 31,0);
        tracep->declBus(c+227,"ysyx_22050078_npc u_LSU u_stdreg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+212,"ysyx_22050078_npc u_LSU u_stdreg clk", false,-1);
        tracep->declBit(c+1,"ysyx_22050078_npc u_LSU u_stdreg rst_n", false,-1);
        tracep->declBit(c+228,"ysyx_22050078_npc u_LSU u_stdreg i_wen", false,-1);
        tracep->declArray(c+200,"ysyx_22050078_npc u_LSU u_stdreg i_din", false,-1, 135,0);
        tracep->declArray(c+205,"ysyx_22050078_npc u_LSU u_stdreg o_dout", false,-1, 135,0);
        tracep->declQuad(c+18,"ysyx_22050078_npc u_WBU i_exu_res", false,-1, 63,0);
        tracep->declQuad(c+20,"ysyx_22050078_npc u_WBU i_lsu_res", false,-1, 63,0);
        tracep->declBit(c+191,"ysyx_22050078_npc u_WBU i_load_en", false,-1);
        tracep->declQuad(c+26,"ysyx_22050078_npc u_WBU o_rd", false,-1, 63,0);
        tracep->declBit(c+212,"ysyx_22050078_npc u_PCU clk", false,-1);
        tracep->declBit(c+1,"ysyx_22050078_npc u_PCU rst_n", false,-1);
        tracep->declBit(c+23,"ysyx_22050078_npc u_PCU i_brch", false,-1);
        tracep->declBit(c+24,"ysyx_22050078_npc u_PCU i_jal", false,-1);
        tracep->declBit(c+25,"ysyx_22050078_npc u_PCU i_jalr", false,-1);
        tracep->declBit(c+22,"ysyx_22050078_npc u_PCU i_zero", false,-1);
        tracep->declQuad(c+9,"ysyx_22050078_npc u_PCU i_rs1", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_22050078_npc u_PCU i_imm", false,-1, 63,0);
        tracep->declQuad(c+2,"ysyx_22050078_npc u_PCU o_pc", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22050078_npc u_PCU pc_next", false,-1, 63,0);
        tracep->declBus(c+215,"ysyx_22050078_npc u_PCU u_stdreg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+229,"ysyx_22050078_npc u_PCU u_stdreg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+212,"ysyx_22050078_npc u_PCU u_stdreg clk", false,-1);
        tracep->declBit(c+1,"ysyx_22050078_npc u_PCU u_stdreg rst_n", false,-1);
        tracep->declBit(c+228,"ysyx_22050078_npc u_PCU u_stdreg i_wen", false,-1);
        tracep->declQuad(c+210,"ysyx_22050078_npc u_PCU u_stdreg i_din", false,-1, 63,0);
        tracep->declQuad(c+2,"ysyx_22050078_npc u_PCU u_stdreg o_dout", false,-1, 63,0);
=======
        tracep->declBit(c+208,"clk", false,-1);
        tracep->declBit(c+209,"rst_n", false,-1);
        tracep->declBus(c+212,"ysyx_22050078_npc ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+214,"ysyx_22050078_npc INST_WIDTH", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc INSTADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc PC_WIDTH", false,-1, 31,0);
        tracep->declBit(c+208,"ysyx_22050078_npc clk", false,-1);
        tracep->declBit(c+209,"ysyx_22050078_npc rst_n", false,-1);
        tracep->declBit(c+209,"ysyx_22050078_npc rst_n_sync", false,-1);
        tracep->declQuad(c+1,"ysyx_22050078_npc pc", false,-1, 63,0);
        tracep->declBus(c+78,"ysyx_22050078_npc inst_IFU2IDU", false,-1, 31,0);
        tracep->declBus(c+79,"ysyx_22050078_npc rs1_addr_IDU2regs", false,-1, 4,0);
        tracep->declBus(c+80,"ysyx_22050078_npc rs2_addr_IDU2regs", false,-1, 4,0);
        tracep->declBus(c+81,"ysyx_22050078_npc rd_addr_IDU2regs", false,-1, 4,0);
        tracep->declBit(c+82,"ysyx_22050078_npc rd_wen_IDU2regs", false,-1);
        tracep->declQuad(c+83,"ysyx_22050078_npc rs1_data", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22050078_npc rs2_data", false,-1, 63,0);
        tracep->declBus(c+87,"ysyx_22050078_npc exu_opt_IDU2EXU", false,-1, 5,0);
        tracep->declBus(c+88,"ysyx_22050078_npc exu_src_sel_IDU2EXU", false,-1, 1,0);
        tracep->declQuad(c+89,"ysyx_22050078_npc imm", false,-1, 63,0);
        tracep->declBus(c+91,"ysyx_22050078_npc lsu_opt", false,-1, 3,0);
        tracep->declQuad(c+92,"ysyx_22050078_npc exu_res", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22050078_npc lsu_res_LSU2WBU", false,-1, 63,0);
        tracep->declBit(c+96,"ysyx_22050078_npc zero_EXU2PCU", false,-1);
        tracep->declBit(c+97,"ysyx_22050078_npc brch_IDU2PCU", false,-1);
        tracep->declBit(c+98,"ysyx_22050078_npc jal_IDU2PCU", false,-1);
        tracep->declBit(c+99,"ysyx_22050078_npc jalr_IDU2PCU", false,-1);
        tracep->declQuad(c+100,"ysyx_22050078_npc rd_data_WBU2regs", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22050078_npc a0zero", false,-1);
        tracep->declBus(c+102,"ysyx_22050078_npc s_id_err", false,-1, 2,0);
        tracep->declBit(c+208,"ysyx_22050078_npc u_stdrst clk", false,-1);
        tracep->declBit(c+209,"ysyx_22050078_npc u_stdrst rst_n", false,-1);
        tracep->declBit(c+209,"ysyx_22050078_npc u_stdrst o_rst_n_sync", false,-1);
        tracep->declBus(c+212,"ysyx_22050078_npc u_regfile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_regfile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+208,"ysyx_22050078_npc u_regfile clk", false,-1);
        tracep->declQuad(c+100,"ysyx_22050078_npc u_regfile i_wdata", false,-1, 63,0);
        tracep->declBit(c+82,"ysyx_22050078_npc u_regfile i_wen", false,-1);
        tracep->declBus(c+81,"ysyx_22050078_npc u_regfile i_waddr", false,-1, 4,0);
        tracep->declBus(c+79,"ysyx_22050078_npc u_regfile i_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+80,"ysyx_22050078_npc u_regfile i_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+83,"ysyx_22050078_npc u_regfile o_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22050078_npc u_regfile o_rs2_data", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22050078_npc u_regfile s_a0zero", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+4+i*2,"ysyx_22050078_npc u_regfile regs", true,(i+0), 63,0);}}
        tracep->declBit(c+208,"ysyx_22050078_npc u_IFU clk", false,-1);
        tracep->declQuad(c+1,"ysyx_22050078_npc u_IFU i_pc", false,-1, 63,0);
        tracep->declBit(c+209,"ysyx_22050078_npc u_IFU rst_n", false,-1);
        tracep->declBus(c+78,"ysyx_22050078_npc u_IFU inst_out", false,-1, 31,0);
        tracep->declQuad(c+103,"ysyx_22050078_npc u_IFU inst", false,-1, 63,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_IDU DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_IDU INSTADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_IDU PC_WIDTH", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_22050078_npc u_IDU inst_in", false,-1, 31,0);
        tracep->declBus(c+79,"ysyx_22050078_npc u_IDU o_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+80,"ysyx_22050078_npc u_IDU o_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+81,"ysyx_22050078_npc u_IDU o_rd_addr", false,-1, 4,0);
        tracep->declBit(c+82,"ysyx_22050078_npc u_IDU o_rd_wen", false,-1);
        tracep->declQuad(c+89,"ysyx_22050078_npc u_IDU o_imm", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050078_npc u_IDU o_exu_src_sel", false,-1, 1,0);
        tracep->declBus(c+87,"ysyx_22050078_npc u_IDU o_exu_opt", false,-1, 5,0);
        tracep->declBus(c+91,"ysyx_22050078_npc u_IDU o_lsu_opt", false,-1, 3,0);
        tracep->declBit(c+97,"ysyx_22050078_npc u_IDU o_brch", false,-1);
        tracep->declBit(c+98,"ysyx_22050078_npc u_IDU o_jal", false,-1);
        tracep->declBit(c+99,"ysyx_22050078_npc u_IDU o_jalr", false,-1);
        tracep->declBus(c+102,"ysyx_22050078_npc u_IDU s_id_err", false,-1, 2,0);
        tracep->declBus(c+105,"ysyx_22050078_npc u_IDU func7", false,-1, 6,0);
        tracep->declBus(c+106,"ysyx_22050078_npc u_IDU func3", false,-1, 2,0);
        tracep->declBus(c+107,"ysyx_22050078_npc u_IDU rs1_addr", false,-1, 4,0);
        tracep->declBus(c+108,"ysyx_22050078_npc u_IDU rs2_addr", false,-1, 4,0);
        tracep->declBus(c+109,"ysyx_22050078_npc u_IDU rd_addr", false,-1, 4,0);
        tracep->declBus(c+110,"ysyx_22050078_npc u_IDU opcode", false,-1, 6,0);
        tracep->declQuad(c+111,"ysyx_22050078_npc u_IDU I_imm", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22050078_npc u_IDU U_imm", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_22050078_npc u_IDU S_imm", false,-1, 63,0);
        tracep->declQuad(c+117,"ysyx_22050078_npc u_IDU J_imm", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22050078_npc u_IDU R_imm", false,-1, 63,0);
        tracep->declQuad(c+119,"ysyx_22050078_npc u_IDU B_imm", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_22050078_npc u_EXU pc", false,-1, 63,0);
        tracep->declQuad(c+83,"ysyx_22050078_npc u_EXU i_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22050078_npc u_EXU i_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22050078_npc u_EXU i_imm", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050078_npc u_EXU i_src_sel", false,-1, 1,0);
        tracep->declBus(c+87,"ysyx_22050078_npc u_EXU i_exopt", false,-1, 5,0);
        tracep->declQuad(c+92,"ysyx_22050078_npc u_EXU o_exu_res", false,-1, 63,0);
        tracep->declBit(c+96,"ysyx_22050078_npc u_EXU o_zero", false,-1);
        tracep->declQuad(c+121,"ysyx_22050078_npc u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22050078_npc u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+125,"ysyx_22050078_npc u_EXU exu_res_trans", false,-1, 63,0);
        tracep->declBus(c+217,"ysyx_22050078_npc u_EXU mux_src1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+218,"ysyx_22050078_npc u_EXU mux_src1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_EXU mux_src1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+121,"ysyx_22050078_npc u_EXU mux_src1 out", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050078_npc u_EXU mux_src1 key", false,-1, 1,0);
        tracep->declQuad(c+219,"ysyx_22050078_npc u_EXU mux_src1 default_out", false,-1, 63,0);
        tracep->declArray(c+127,"ysyx_22050078_npc u_EXU mux_src1 lut", false,-1, 263,0);
        tracep->declBus(c+217,"ysyx_22050078_npc u_EXU mux_src1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+218,"ysyx_22050078_npc u_EXU mux_src1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_EXU mux_src1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+221,"ysyx_22050078_npc u_EXU mux_src1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+121,"ysyx_22050078_npc u_EXU mux_src1 i0 out", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050078_npc u_EXU mux_src1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+219,"ysyx_22050078_npc u_EXU mux_src1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+127,"ysyx_22050078_npc u_EXU mux_src1 i0 lut", false,-1, 263,0);
        tracep->declBus(c+222,"ysyx_22050078_npc u_EXU mux_src1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+136+i*3,"ysyx_22050078_npc u_EXU mux_src1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+148+i*1,"ysyx_22050078_npc u_EXU mux_src1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+152+i*2,"ysyx_22050078_npc u_EXU mux_src1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+160,"ysyx_22050078_npc u_EXU mux_src1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+162,"ysyx_22050078_npc u_EXU mux_src1 i0 hit", false,-1);
        tracep->declBus(c+223,"ysyx_22050078_npc u_EXU mux_src1 i0 i", false,-1, 31,0);
        tracep->declBus(c+217,"ysyx_22050078_npc u_EXU mux_src2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+218,"ysyx_22050078_npc u_EXU mux_src2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_EXU mux_src2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+123,"ysyx_22050078_npc u_EXU mux_src2 out", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050078_npc u_EXU mux_src2 key", false,-1, 1,0);
        tracep->declQuad(c+219,"ysyx_22050078_npc u_EXU mux_src2 default_out", false,-1, 63,0);
        tracep->declArray(c+163,"ysyx_22050078_npc u_EXU mux_src2 lut", false,-1, 263,0);
        tracep->declBus(c+217,"ysyx_22050078_npc u_EXU mux_src2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+218,"ysyx_22050078_npc u_EXU mux_src2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_EXU mux_src2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+221,"ysyx_22050078_npc u_EXU mux_src2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+123,"ysyx_22050078_npc u_EXU mux_src2 i0 out", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050078_npc u_EXU mux_src2 i0 key", false,-1, 1,0);
        tracep->declQuad(c+219,"ysyx_22050078_npc u_EXU mux_src2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+163,"ysyx_22050078_npc u_EXU mux_src2 i0 lut", false,-1, 263,0);
        tracep->declBus(c+222,"ysyx_22050078_npc u_EXU mux_src2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+172+i*3,"ysyx_22050078_npc u_EXU mux_src2 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+184+i*1,"ysyx_22050078_npc u_EXU mux_src2 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+188+i*2,"ysyx_22050078_npc u_EXU mux_src2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+196,"ysyx_22050078_npc u_EXU mux_src2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+198,"ysyx_22050078_npc u_EXU mux_src2 i0 hit", false,-1);
        tracep->declBus(c+223,"ysyx_22050078_npc u_EXU mux_src2 i0 i", false,-1, 31,0);
        tracep->declBit(c+208,"ysyx_22050078_npc u_LSU clk", false,-1);
        tracep->declBit(c+209,"ysyx_22050078_npc u_LSU rst_n", false,-1);
        tracep->declBus(c+91,"ysyx_22050078_npc u_LSU i_opt", false,-1, 3,0);
        tracep->declQuad(c+92,"ysyx_22050078_npc u_LSU i_addr", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22050078_npc u_LSU i_regst", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22050078_npc u_LSU o_regld", false,-1, 63,0);
        tracep->declBit(c+199,"ysyx_22050078_npc u_LSU ren", false,-1);
        tracep->declQuad(c+92,"ysyx_22050078_npc u_LSU raddr", false,-1, 63,0);
        tracep->declQuad(c+200,"ysyx_22050078_npc u_LSU rdata", false,-1, 63,0);
        tracep->declBus(c+202,"ysyx_22050078_npc u_LSU mask", false,-1, 7,0);
        tracep->declBus(c+68,"ysyx_22050078_npc u_LSU wmask", false,-1, 7,0);
        tracep->declQuad(c+69,"ysyx_22050078_npc u_LSU waddr", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22050078_npc u_LSU wdata", false,-1, 63,0);
        tracep->declBus(c+224,"ysyx_22050078_npc u_LSU u_stdreg WIDTH", false,-1, 31,0);
        tracep->declBus(c+225,"ysyx_22050078_npc u_LSU u_stdreg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+208,"ysyx_22050078_npc u_LSU u_stdreg clk", false,-1);
        tracep->declBit(c+209,"ysyx_22050078_npc u_LSU u_stdreg rst_n", false,-1);
        tracep->declBit(c+226,"ysyx_22050078_npc u_LSU u_stdreg i_wen", false,-1);
        tracep->declArray(c+203,"ysyx_22050078_npc u_LSU u_stdreg i_din", false,-1, 135,0);
        tracep->declArray(c+73,"ysyx_22050078_npc u_LSU u_stdreg o_dout", false,-1, 135,0);
        tracep->declQuad(c+92,"ysyx_22050078_npc u_WBU i_exu_res", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22050078_npc u_WBU i_lsu_res", false,-1, 63,0);
        tracep->declBit(c+199,"ysyx_22050078_npc u_WBU i_load_en", false,-1);
        tracep->declQuad(c+100,"ysyx_22050078_npc u_WBU o_rd", false,-1, 63,0);
        tracep->declBit(c+208,"ysyx_22050078_npc u_PCU clk", false,-1);
        tracep->declBit(c+209,"ysyx_22050078_npc u_PCU rst_n", false,-1);
        tracep->declBit(c+97,"ysyx_22050078_npc u_PCU i_brch", false,-1);
        tracep->declBit(c+98,"ysyx_22050078_npc u_PCU i_jal", false,-1);
        tracep->declBit(c+99,"ysyx_22050078_npc u_PCU i_jalr", false,-1);
        tracep->declBit(c+96,"ysyx_22050078_npc u_PCU i_zero", false,-1);
        tracep->declQuad(c+83,"ysyx_22050078_npc u_PCU i_rs1", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22050078_npc u_PCU i_imm", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_22050078_npc u_PCU o_pc", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22050078_npc u_PCU pc_next", false,-1, 63,0);
        tracep->declBus(c+213,"ysyx_22050078_npc u_PCU u_stdreg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+227,"ysyx_22050078_npc u_PCU u_stdreg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+208,"ysyx_22050078_npc u_PCU u_stdreg clk", false,-1);
        tracep->declBit(c+209,"ysyx_22050078_npc u_PCU u_stdreg rst_n", false,-1);
        tracep->declBit(c+226,"ysyx_22050078_npc u_PCU u_stdreg i_wen", false,-1);
        tracep->declQuad(c+210,"ysyx_22050078_npc u_PCU u_stdreg i_din", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_22050078_npc u_PCU u_stdreg o_dout", false,-1, 63,0);
>>>>>>> test
    }
}

void Vysyx_22050078_npc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050078_npc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050078_npc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050078_npc___024root__traceRegister(Vysyx_22050078_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050078_npc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050078_npc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050078_npc___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050078_npc___024root__traceFullSub0(Vysyx_22050078_npc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050078_npc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050078_npc___024root* const __restrict vlSelf = static_cast<Vysyx_22050078_npc___024root*>(voidSelf);
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050078_npc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050078_npc___024root__traceFullSub0(Vysyx_22050078_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050078_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
<<<<<<< HEAD
    VlWide<5>/*159:0*/ __Vtemp156;
=======
    VlWide<5>/*159:0*/ __Vtemp81;
>>>>>>> test
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
<<<<<<< HEAD
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r2));
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22050078_npc__DOT__pc),64);
        tracep->fullIData(oldp+4,((IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)),32);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs),5);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs),5);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs),5);
        tracep->fullBit(oldp+8,(vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs));
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22050078_npc__DOT__rs1_data),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22050078_npc__DOT__rs2_data),64);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU),6);
        tracep->fullCData(oldp+14,(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU),2);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22050078_npc__DOT__imm),64);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22050078_npc__DOT__lsu_opt),4);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22050078_npc__DOT__exu_res),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU),64);
        tracep->fullBit(oldp+22,((1U & (~ (IData)((0U 
                                                   != vlSelf->ysyx_22050078_npc__DOT__exu_res))))));
        tracep->fullBit(oldp+23,(((0x63U == (0x7fU 
                                             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+24,(((0x6fU == (0x7fU 
                                             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+25,(((0x67U == (0x7fU 
                                             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                   ? 1U : 0U)));
        tracep->fullQData(oldp+26,(((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                                     ? vlSelf->ysyx_22050078_npc__DOT__exu_res
                                     : vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU)),64);
        tracep->fullBit(oldp+28,(((0ULL == vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs
                                   [0xaU]) ? 1U : 0U)));
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22050078_npc__DOT__s_id_err),3);
        tracep->fullBit(oldp+30,(vlSelf->ysyx_22050078_npc__DOT__u_stdrst__DOT__rst_n_r1));
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[31]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst),64);
        tracep->fullCData(oldp+97,((0x7fU & (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                     >> 0x19U)))),7);
        tracep->fullCData(oldp+98,((7U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                  >> 0xcU)))),3);
        tracep->fullCData(oldp+99,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+100,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 0x14U)))),5);
        tracep->fullCData(oldp+101,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+102,((0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))),7);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm),64);
        tracep->fullQData(oldp+107,((((- (QData)((IData)(
=======
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22050078_npc__DOT__pc),64);
        tracep->fullBit(oldp+3,(((0ULL == vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs
                                  [0xaU]) ? 1U : 0U)));
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22050078_npc__DOT__u_regfile__DOT__regs[31]),64);
        tracep->fullCData(oldp+68,((0xffU & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])),8);
        tracep->fullQData(oldp+69,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[4U])) 
                                     << 0x38U) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[3U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                                     >> 8U)))),64);
        tracep->fullQData(oldp+71,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                     << 0x38U) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])) 
                                                     >> 8U)))),64);
        tracep->fullWData(oldp+73,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout),136);
        tracep->fullIData(oldp+78,((IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)),32);
        tracep->fullCData(oldp+79,(vlSelf->ysyx_22050078_npc__DOT__rs1_addr_IDU2regs),5);
        tracep->fullCData(oldp+80,(vlSelf->ysyx_22050078_npc__DOT__rs2_addr_IDU2regs),5);
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22050078_npc__DOT__rd_addr_IDU2regs),5);
        tracep->fullBit(oldp+82,(vlSelf->ysyx_22050078_npc__DOT__rd_wen_IDU2regs));
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22050078_npc__DOT__rs1_data),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22050078_npc__DOT__rs2_data),64);
        tracep->fullCData(oldp+87,(vlSelf->ysyx_22050078_npc__DOT__exu_opt_IDU2EXU),6);
        tracep->fullCData(oldp+88,(vlSelf->ysyx_22050078_npc__DOT__exu_src_sel_IDU2EXU),2);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22050078_npc__DOT__imm),64);
        tracep->fullCData(oldp+91,(vlSelf->ysyx_22050078_npc__DOT__lsu_opt),4);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22050078_npc__DOT__exu_res),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU),64);
        tracep->fullBit(oldp+96,((1U & (~ (IData)((0U 
                                                   != vlSelf->ysyx_22050078_npc__DOT__exu_res))))));
        tracep->fullBit(oldp+97,(((0x63U == (0x7fU 
                                             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+98,(((0x6fU == (0x7fU 
                                             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+99,(((0x67U == (0x7fU 
                                             & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                   ? 1U : 0U)));
        tracep->fullQData(oldp+100,(((1U & (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt))
                                      ? vlSelf->ysyx_22050078_npc__DOT__exu_res
                                      : vlSelf->ysyx_22050078_npc__DOT__lsu_res_LSU2WBU)),64);
        tracep->fullCData(oldp+102,(vlSelf->ysyx_22050078_npc__DOT__s_id_err),3);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst),64);
        tracep->fullCData(oldp+105,((0x7fU & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+106,((7U & (IData)((vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+107,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+108,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 0x14U)))),5);
        tracep->fullCData(oldp+109,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+110,((0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst))),7);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm),64);
        tracep->fullQData(oldp+115,((((- (QData)((IData)(
>>>>>>> test
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                     >> 0x1fU)))))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                               >> 0x19U)) 
                                                                      << 5U)) 
                                                                  | (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 7U)))))))),64);
<<<<<<< HEAD
        tracep->fullQData(oldp+109,((((- (QData)((IData)(
=======
        tracep->fullQData(oldp+117,((((- (QData)((IData)(
>>>>>>> test
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
                                                                               << 1U))))))))),64);
<<<<<<< HEAD
        tracep->fullQData(oldp+111,((((- (QData)((IData)(
=======
        tracep->fullQData(oldp+119,((((- (QData)((IData)(
>>>>>>> test
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                     >> 0x1fU)))))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                               >> 0x1fU)) 
                                                                      << 0xcU)) 
                                                                  | ((0x800U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 7U)) 
                                                                         << 0xbU)) 
                                                                     | ((0x7e0U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 0x19U)) 
                                                                            << 5U)) 
                                                                        | (0x1eU 
                                                                           & ((IData)(
                                                                                (vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst 
                                                                                >> 8U)) 
                                                                              << 1U))))))))),64);
<<<<<<< HEAD
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans),64);
        tracep->fullWData(oldp+119,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4),264);
        tracep->fullWData(oldp+128,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+131,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+134,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+137,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+140,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+141,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+142,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+143,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+155,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4),264);
        tracep->fullWData(oldp+164,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+167,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+170,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+173,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+176,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+177,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+178,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+179,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+190,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt)))));
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata),64);
        tracep->fullCData(oldp+194,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask),8);
        tracep->fullCData(oldp+195,((0xffU & vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])),8);
        tracep->fullQData(oldp+196,((((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[4U])) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[3U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                                      >> 8U)))),64);
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[2U])) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[1U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout[0U])) 
                                                      >> 8U)))),64);
        __Vtemp156[0U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_data) 
                           << 8U) | (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask));
        __Vtemp156[1U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_data) 
                           >> 0x18U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__rs2_data 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp156[2U] = (((IData)((vlSelf->ysyx_22050078_npc__DOT__rs2_data 
                                    >> 0x20U)) >> 0x18U) 
                          | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                             << 8U));
        __Vtemp156[3U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                           >> 0x18U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp156[4U] = ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                   >> 0x20U)) >> 0x18U);
        tracep->fullWData(oldp+200,(__Vtemp156),136);
        tracep->fullWData(oldp+205,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellout__u_stdreg__o_dout),136);
=======
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans),64);
        tracep->fullWData(oldp+127,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4),264);
        tracep->fullWData(oldp+136,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+139,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+142,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+145,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+148,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+149,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+150,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+151,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+162,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+163,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4),264);
        tracep->fullWData(oldp+172,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+175,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+178,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+181,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+184,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+185,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+186,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+187,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+198,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_opt)))));
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata),64);
        tracep->fullCData(oldp+202,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask),8);
        __Vtemp81[0U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_data) 
                          << 8U) | (IData)(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mask));
        __Vtemp81[1U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__rs2_data) 
                          >> 0x18U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__rs2_data 
                                                >> 0x20U)) 
                                       << 8U));
        __Vtemp81[2U] = (((IData)((vlSelf->ysyx_22050078_npc__DOT__rs2_data 
                                   >> 0x20U)) >> 0x18U) 
                         | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                            << 8U));
        __Vtemp81[3U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_res) 
                          >> 0x18U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                                >> 0x20U)) 
                                       << 8U));
        __Vtemp81[4U] = ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_res 
                                  >> 0x20U)) >> 0x18U);
        tracep->fullWData(oldp+203,(__Vtemp81),136);
        tracep->fullBit(oldp+208,(vlSelf->clk));
        tracep->fullBit(oldp+209,(vlSelf->rst_n));
>>>>>>> test
        tracep->fullQData(oldp+210,(((1U & ((((0x63U 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                               ? 1U
                                               : 0U) 
                                             & (0U 
                                                != vlSelf->ysyx_22050078_npc__DOT__exu_res)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                                ? 1U
                                                : 0U)))
                                      ? (vlSelf->ysyx_22050078_npc__DOT__pc 
                                         + vlSelf->ysyx_22050078_npc__DOT__imm)
                                      : (((0x67U == 
                                           (0x7fU & (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__inst)))
                                           ? 1U : 0U)
                                          ? (vlSelf->ysyx_22050078_npc__DOT__rs1_data 
                                             + vlSelf->ysyx_22050078_npc__DOT__imm)
                                          : (4ULL + vlSelf->ysyx_22050078_npc__DOT__pc)))),64);
<<<<<<< HEAD
        tracep->fullBit(oldp+212,(vlSelf->clk));
        tracep->fullBit(oldp+213,(vlSelf->rst_n));
        tracep->fullIData(oldp+214,(5U),32);
        tracep->fullIData(oldp+215,(0x40U),32);
        tracep->fullIData(oldp+216,(0x20U),32);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__R_imm),64);
        tracep->fullIData(oldp+219,(4U),32);
        tracep->fullIData(oldp+220,(2U),32);
        tracep->fullQData(oldp+221,(0ULL),64);
        tracep->fullIData(oldp+223,(1U),32);
        tracep->fullIData(oldp+224,(0x42U),32);
        tracep->fullIData(oldp+225,(4U),32);
        tracep->fullIData(oldp+226,(0x88U),32);
        tracep->fullIData(oldp+227,(0U),32);
        tracep->fullBit(oldp+228,(1U));
        tracep->fullQData(oldp+229,(0x80000000ULL),64);
=======
        tracep->fullIData(oldp+212,(5U),32);
        tracep->fullIData(oldp+213,(0x40U),32);
        tracep->fullIData(oldp+214,(0x20U),32);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__R_imm),64);
        tracep->fullIData(oldp+217,(4U),32);
        tracep->fullIData(oldp+218,(2U),32);
        tracep->fullQData(oldp+219,(0ULL),64);
        tracep->fullIData(oldp+221,(1U),32);
        tracep->fullIData(oldp+222,(0x42U),32);
        tracep->fullIData(oldp+223,(4U),32);
        tracep->fullIData(oldp+224,(0x88U),32);
        tracep->fullIData(oldp+225,(0U),32);
        tracep->fullBit(oldp+226,(1U));
        tracep->fullQData(oldp+227,(0x80000000ULL),64);
>>>>>>> test
    }
}
