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
        tracep->declBit(c+434,"i_clk", false,-1);
        tracep->declBit(c+435,"i_rst_n", false,-1);
        tracep->declBit(c+434,"ysyx_22050078_npc i_clk", false,-1);
        tracep->declBit(c+435,"ysyx_22050078_npc i_rst_n", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc rst_n_sync", false,-1);
        tracep->declQuad(c+66,"ysyx_22050078_npc pc", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22050078_npc pc_wen", false,-1);
        tracep->declBit(c+68,"ysyx_22050078_npc ifid_wen", false,-1);
        tracep->declBit(c+69,"ysyx_22050078_npc ifid_bubble", false,-1);
        tracep->declBit(c+70,"ysyx_22050078_npc idex_bubble", false,-1);
        tracep->declBit(c+71,"ysyx_22050078_npc idu_ldstbp", false,-1);
        tracep->declBit(c+72,"ysyx_22050078_npc exu_ldstbp", false,-1);
        tracep->declBus(c+73,"ysyx_22050078_npc s_id_err", false,-1, 2,0);
        tracep->declBit(c+1,"ysyx_22050078_npc s_a0zero", false,-1);
        tracep->declQuad(c+74,"ysyx_22050078_npc s_idu_diffpc", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22050078_npc s_exu_diffpc", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22050078_npc s_lsu_diffpc", false,-1, 63,0);
        tracep->declQuad(c+80,"ysyx_22050078_npc s_wbu_diffpc", false,-1, 63,0);
        tracep->declQuad(c+66,"ysyx_22050078_npc ifu_pc", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22050078_npc ifu_pc_r", false,-1, 63,0);
        tracep->declBus(c+426,"ysyx_22050078_npc ifu_ins", false,-1, 31,0);
        tracep->declBus(c+84,"ysyx_22050078_npc ifu_ins_r", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_22050078_npc idu_rs1id", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_22050078_npc idu_rs2id", false,-1, 4,0);
        tracep->declBus(c+87,"ysyx_22050078_npc idu_rdid", false,-1, 4,0);
        tracep->declBus(c+88,"ysyx_22050078_npc idu_rdid_r", false,-1, 4,0);
        tracep->declBit(c+89,"ysyx_22050078_npc idu_rdwen", false,-1);
        tracep->declBit(c+90,"ysyx_22050078_npc idu_rdwen_r", false,-1);
        tracep->declQuad(c+91,"ysyx_22050078_npc idu_imm", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22050078_npc idu_imm_r", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22050078_npc idu_rs1", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22050078_npc idu_rs1_r", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22050078_npc idu_rs2", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22050078_npc idu_rs2_r", false,-1, 63,0);
        tracep->declBus(c+103,"ysyx_22050078_npc idu_src_sel", false,-1, 1,0);
        tracep->declBus(c+104,"ysyx_22050078_npc idu_src_sel_r", false,-1, 1,0);
        tracep->declBus(c+105,"ysyx_22050078_npc idu_exopt", false,-1, 5,0);
        tracep->declBus(c+106,"ysyx_22050078_npc idu_exopt_r", false,-1, 5,0);
        tracep->declBus(c+107,"ysyx_22050078_npc idu_lsfunc3", false,-1, 2,0);
        tracep->declBus(c+108,"ysyx_22050078_npc idu_lsfunc3_r", false,-1, 2,0);
        tracep->declBit(c+109,"ysyx_22050078_npc idu_lden", false,-1);
        tracep->declBit(c+110,"ysyx_22050078_npc idu_lden_r", false,-1);
        tracep->declBit(c+111,"ysyx_22050078_npc idu_sten", false,-1);
        tracep->declBit(c+112,"ysyx_22050078_npc idu_sten_r", false,-1);
        tracep->declQuad(c+82,"ysyx_22050078_npc idu_pc", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22050078_npc idu_pc_r", false,-1, 63,0);
        tracep->declBit(c+115,"ysyx_22050078_npc idu_jal", false,-1);
        tracep->declBit(c+116,"ysyx_22050078_npc idu_jalr", false,-1);
        tracep->declBit(c+117,"ysyx_22050078_npc idu_brch", false,-1);
        tracep->declBus(c+107,"ysyx_22050078_npc idu_bfun3", false,-1, 2,0);
        tracep->declQuad(c+118,"ysyx_22050078_npc exu_exres", false,-1, 63,0);
        tracep->declQuad(c+120,"ysyx_22050078_npc exu_exres_r", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22050078_npc exu_rs2", false,-1, 63,0);
        tracep->declQuad(c+122,"ysyx_22050078_npc exu_rs2_bp", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22050078_npc exu_rs2_r", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050078_npc exu_rdid", false,-1, 4,0);
        tracep->declBus(c+126,"ysyx_22050078_npc exu_rdid_r", false,-1, 4,0);
        tracep->declBit(c+90,"ysyx_22050078_npc exu_rdwen", false,-1);
        tracep->declBit(c+127,"ysyx_22050078_npc exu_rdwen_r", false,-1);
        tracep->declBus(c+108,"ysyx_22050078_npc exu_lsfunc3", false,-1, 2,0);
        tracep->declBus(c+128,"ysyx_22050078_npc exu_lsfunc3_r", false,-1, 2,0);
        tracep->declBit(c+110,"ysyx_22050078_npc exu_lden", false,-1);
        tracep->declBit(c+129,"ysyx_22050078_npc exu_lden_r", false,-1);
        tracep->declBit(c+112,"ysyx_22050078_npc exu_sten", false,-1);
        tracep->declBit(c+130,"ysyx_22050078_npc exu_sten_r", false,-1);
        tracep->declQuad(c+120,"ysyx_22050078_npc lsu_exres", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22050078_npc lsu_exres_r", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22050078_npc lsu_lsres", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22050078_npc lsu_lsres_r", false,-1, 63,0);
        tracep->declBit(c+129,"ysyx_22050078_npc lsu_lden", false,-1);
        tracep->declBit(c+137,"ysyx_22050078_npc lsu_lden_r", false,-1);
        tracep->declBus(c+126,"ysyx_22050078_npc lsu_rdid", false,-1, 4,0);
        tracep->declBus(c+138,"ysyx_22050078_npc lsu_rdid_r", false,-1, 4,0);
        tracep->declBit(c+127,"ysyx_22050078_npc lsu_rdwen", false,-1);
        tracep->declBit(c+139,"ysyx_22050078_npc lsu_rdwen_r", false,-1);
        tracep->declQuad(c+140,"ysyx_22050078_npc wbu_rd", false,-1, 63,0);
        tracep->declBus(c+138,"ysyx_22050078_npc wbu_rdid", false,-1, 4,0);
        tracep->declBit(c+139,"ysyx_22050078_npc wbu_rdwen", false,-1);
        tracep->declQuad(c+427,"ysyx_22050078_npc s_wbu_inst", false,-1, 63,0);
        tracep->declBus(c+429,"ysyx_22050078_npc check_inst", false,-1, 31,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_stl_rst i_clk", false,-1);
        tracep->declBit(c+435,"ysyx_22050078_npc u_stl_rst i_rst_n", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_stl_rst o_rst_n_sync", false,-1);
        tracep->declBit(c+437,"ysyx_22050078_npc u_stl_rst rst_n_r1", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_stl_rst rst_n_r2", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_IFU i_rst_n", false,-1);
        tracep->declQuad(c+66,"ysyx_22050078_npc u_IFU i_pc", false,-1, 63,0);
        tracep->declBus(c+426,"ysyx_22050078_npc u_IFU o_ins", false,-1, 31,0);
        tracep->declQuad(c+430,"ysyx_22050078_npc u_IFU ins", false,-1, 63,0);
        tracep->declQuad(c+432,"ysyx_22050078_npc u_IFU inst_trans", false,-1, 63,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_pipe_IF_ID i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_pipe_IF_ID i_rst_n", false,-1);
        tracep->declBit(c+68,"ysyx_22050078_npc u_pipe_IF_ID i_wen", false,-1);
        tracep->declBit(c+69,"ysyx_22050078_npc u_pipe_IF_ID i_bubble", false,-1);
        tracep->declBus(c+426,"ysyx_22050078_npc u_pipe_IF_ID i_ifu_ins", false,-1, 31,0);
        tracep->declQuad(c+66,"ysyx_22050078_npc u_pipe_IF_ID i_ifu_pc", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_22050078_npc u_pipe_IF_ID o_idu_ins", false,-1, 31,0);
        tracep->declQuad(c+82,"ysyx_22050078_npc u_pipe_IF_ID o_idu_pc", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22050078_npc u_pipe_IF_ID s_idu_diffpc", false,-1, 63,0);
        tracep->declQuad(c+66,"ysyx_22050078_npc u_pipe_IF_ID t_ifu_pc", false,-1, 63,0);
        tracep->declBus(c+420,"ysyx_22050078_npc u_pipe_IF_ID t_ifu_ins", false,-1, 31,0);
        tracep->declQuad(c+142,"ysyx_22050078_npc u_pipe_IF_ID t_ifu_diffpc", false,-1, 63,0);
        tracep->declBus(c+442,"ysyx_22050078_npc u_pipe_IF_ID if_id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+443,"ysyx_22050078_npc u_pipe_IF_ID if_id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_pipe_IF_ID if_id_reg i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_pipe_IF_ID if_id_reg i_rst_n", false,-1);
        tracep->declBit(c+68,"ysyx_22050078_npc u_pipe_IF_ID if_id_reg i_wen", false,-1);
        tracep->declArray(c+421,"ysyx_22050078_npc u_pipe_IF_ID if_id_reg i_din", false,-1, 159,0);
        tracep->declArray(c+144,"ysyx_22050078_npc u_pipe_IF_ID if_id_reg o_dout", false,-1, 159,0);
        tracep->declBus(c+84,"ysyx_22050078_npc u_IDU i_ins", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_22050078_npc u_IDU o_rs1id", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_22050078_npc u_IDU o_rs2id", false,-1, 4,0);
        tracep->declBus(c+87,"ysyx_22050078_npc u_IDU o_rdid", false,-1, 4,0);
        tracep->declBit(c+89,"ysyx_22050078_npc u_IDU o_rdwen", false,-1);
        tracep->declQuad(c+91,"ysyx_22050078_npc u_IDU o_imm", false,-1, 63,0);
        tracep->declBus(c+103,"ysyx_22050078_npc u_IDU o_src_sel", false,-1, 1,0);
        tracep->declBus(c+105,"ysyx_22050078_npc u_IDU o_exopt", false,-1, 5,0);
        tracep->declBus(c+107,"ysyx_22050078_npc u_IDU o_lsu_func3", false,-1, 2,0);
        tracep->declBit(c+109,"ysyx_22050078_npc u_IDU o_lsu_lden", false,-1);
        tracep->declBit(c+111,"ysyx_22050078_npc u_IDU o_lsu_sten", false,-1);
        tracep->declBit(c+115,"ysyx_22050078_npc u_IDU o_jal", false,-1);
        tracep->declBit(c+116,"ysyx_22050078_npc u_IDU o_jalr", false,-1);
        tracep->declBit(c+117,"ysyx_22050078_npc u_IDU o_brch", false,-1);
        tracep->declBus(c+107,"ysyx_22050078_npc u_IDU o_bfun3", false,-1, 2,0);
        tracep->declBus(c+73,"ysyx_22050078_npc u_IDU s_id_err", false,-1, 2,0);
        tracep->declBus(c+149,"ysyx_22050078_npc u_IDU func7", false,-1, 6,0);
        tracep->declBus(c+107,"ysyx_22050078_npc u_IDU func3", false,-1, 2,0);
        tracep->declBus(c+150,"ysyx_22050078_npc u_IDU rs1_addr", false,-1, 4,0);
        tracep->declBus(c+151,"ysyx_22050078_npc u_IDU rs2_addr", false,-1, 4,0);
        tracep->declBus(c+152,"ysyx_22050078_npc u_IDU rd_addr", false,-1, 4,0);
        tracep->declBus(c+153,"ysyx_22050078_npc u_IDU opcode", false,-1, 6,0);
        tracep->declQuad(c+154,"ysyx_22050078_npc u_IDU I_imm", false,-1, 63,0);
        tracep->declQuad(c+156,"ysyx_22050078_npc u_IDU U_imm", false,-1, 63,0);
        tracep->declQuad(c+158,"ysyx_22050078_npc u_IDU S_imm", false,-1, 63,0);
        tracep->declQuad(c+160,"ysyx_22050078_npc u_IDU J_imm", false,-1, 63,0);
        tracep->declQuad(c+444,"ysyx_22050078_npc u_IDU R_imm", false,-1, 63,0);
        tracep->declQuad(c+162,"ysyx_22050078_npc u_IDU B_imm", false,-1, 63,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_pipe_id_ex i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_pipe_id_ex i_rst_n", false,-1);
        tracep->declBit(c+70,"ysyx_22050078_npc u_pipe_id_ex i_bubble", false,-1);
        tracep->declQuad(c+91,"ysyx_22050078_npc u_pipe_id_ex i_idu_imm", false,-1, 63,0);
        tracep->declBus(c+87,"ysyx_22050078_npc u_pipe_id_ex i_idu_rd_addr", false,-1, 4,0);
        tracep->declBit(c+89,"ysyx_22050078_npc u_pipe_id_ex i_idu_rdwen", false,-1);
        tracep->declBus(c+103,"ysyx_22050078_npc u_pipe_id_ex i_idu_src_sel", false,-1, 1,0);
        tracep->declBus(c+105,"ysyx_22050078_npc u_pipe_id_ex i_idu_exopt", false,-1, 5,0);
        tracep->declBus(c+107,"ysyx_22050078_npc u_pipe_id_ex i_idu_func3", false,-1, 2,0);
        tracep->declBit(c+109,"ysyx_22050078_npc u_pipe_id_ex i_idu_lden", false,-1);
        tracep->declBit(c+111,"ysyx_22050078_npc u_pipe_id_ex i_idu_sten", false,-1);
        tracep->declQuad(c+95,"ysyx_22050078_npc u_pipe_id_ex i_idu_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22050078_npc u_pipe_id_ex i_idu_rs2_data", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22050078_npc u_pipe_id_ex i_idu_ldstbp", false,-1);
        tracep->declQuad(c+82,"ysyx_22050078_npc u_pipe_id_ex i_idu_pc", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22050078_npc u_pipe_id_ex s_idu_diffpc", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22050078_npc u_pipe_id_ex o_exu_pc", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22050078_npc u_pipe_id_ex o_exu_imm", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22050078_npc u_pipe_id_ex o_exu_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22050078_npc u_pipe_id_ex o_exu_rs2_data", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22050078_npc u_pipe_id_ex o_exu_src_sel", false,-1, 1,0);
        tracep->declBus(c+106,"ysyx_22050078_npc u_pipe_id_ex o_exu_exopt", false,-1, 5,0);
        tracep->declBus(c+88,"ysyx_22050078_npc u_pipe_id_ex o_exu_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"ysyx_22050078_npc u_pipe_id_ex o_exu_rdwen", false,-1);
        tracep->declBus(c+108,"ysyx_22050078_npc u_pipe_id_ex o_exu_func3", false,-1, 2,0);
        tracep->declBit(c+110,"ysyx_22050078_npc u_pipe_id_ex o_exu_lden", false,-1);
        tracep->declBit(c+112,"ysyx_22050078_npc u_pipe_id_ex o_exu_sten", false,-1);
        tracep->declQuad(c+76,"ysyx_22050078_npc u_pipe_id_ex s_exu_diffpc", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22050078_npc u_pipe_id_ex o_exu_ldstbp", false,-1);
        tracep->declQuad(c+164,"ysyx_22050078_npc u_pipe_id_ex t_idu_imm", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx_22050078_npc u_pipe_id_ex t_idu_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+168,"ysyx_22050078_npc u_pipe_id_ex t_idu_rs2_data", false,-1, 63,0);
        tracep->declBus(c+170,"ysyx_22050078_npc u_pipe_id_ex t_idu_rd_addr", false,-1, 4,0);
        tracep->declBit(c+171,"ysyx_22050078_npc u_pipe_id_ex t_idu_rdwen", false,-1);
        tracep->declBus(c+172,"ysyx_22050078_npc u_pipe_id_ex t_idu_src_sel", false,-1, 1,0);
        tracep->declBus(c+173,"ysyx_22050078_npc u_pipe_id_ex t_idu_exopt", false,-1, 5,0);
        tracep->declBus(c+107,"ysyx_22050078_npc u_pipe_id_ex t_idu_func3", false,-1, 2,0);
        tracep->declBit(c+174,"ysyx_22050078_npc u_pipe_id_ex t_idu_ld_en", false,-1);
        tracep->declBit(c+175,"ysyx_22050078_npc u_pipe_id_ex t_idu_st_en", false,-1);
        tracep->declBit(c+176,"ysyx_22050078_npc u_pipe_id_ex t_idu_ldstbp", false,-1);
        tracep->declQuad(c+82,"ysyx_22050078_npc u_pipe_id_ex t_idu_pc", false,-1, 63,0);
        tracep->declQuad(c+177,"ysyx_22050078_npc u_pipe_id_ex t_idu_diffpc", false,-1, 63,0);
        tracep->declBus(c+446,"ysyx_22050078_npc u_pipe_id_ex id_ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+443,"ysyx_22050078_npc u_pipe_id_ex id_ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_pipe_id_ex id_ex_reg i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_pipe_id_ex id_ex_reg i_rst_n", false,-1);
        tracep->declBit(c+447,"ysyx_22050078_npc u_pipe_id_ex id_ex_reg i_wen", false,-1);
        tracep->declArray(c+179,"ysyx_22050078_npc u_pipe_id_ex id_ex_reg i_din", false,-1, 339,0);
        tracep->declArray(c+190,"ysyx_22050078_npc u_pipe_id_ex id_ex_reg o_dout", false,-1, 339,0);
        tracep->declQuad(c+113,"ysyx_22050078_npc u_EXU i_pc", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22050078_npc u_EXU i_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22050078_npc u_EXU i_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22050078_npc u_EXU i_imm", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22050078_npc u_EXU i_src_sel", false,-1, 1,0);
        tracep->declBus(c+106,"ysyx_22050078_npc u_EXU i_exopt", false,-1, 5,0);
        tracep->declQuad(c+118,"ysyx_22050078_npc u_EXU o_exu_res", false,-1, 63,0);
        tracep->declQuad(c+201,"ysyx_22050078_npc u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+203,"ysyx_22050078_npc u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+205,"ysyx_22050078_npc u_EXU exu_res_trans", false,-1, 63,0);
        tracep->declBus(c+448,"ysyx_22050078_npc u_EXU mux_src1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+449,"ysyx_22050078_npc u_EXU mux_src1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22050078_npc u_EXU mux_src1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+201,"ysyx_22050078_npc u_EXU mux_src1 out", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22050078_npc u_EXU mux_src1 key", false,-1, 1,0);
        tracep->declQuad(c+451,"ysyx_22050078_npc u_EXU mux_src1 default_out", false,-1, 63,0);
        tracep->declArray(c+207,"ysyx_22050078_npc u_EXU mux_src1 lut", false,-1, 263,0);
        tracep->declBus(c+448,"ysyx_22050078_npc u_EXU mux_src1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+449,"ysyx_22050078_npc u_EXU mux_src1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22050078_npc u_EXU mux_src1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+453,"ysyx_22050078_npc u_EXU mux_src1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+201,"ysyx_22050078_npc u_EXU mux_src1 i0 out", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22050078_npc u_EXU mux_src1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+451,"ysyx_22050078_npc u_EXU mux_src1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+207,"ysyx_22050078_npc u_EXU mux_src1 i0 lut", false,-1, 263,0);
        tracep->declBus(c+454,"ysyx_22050078_npc u_EXU mux_src1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+216+i*3,"ysyx_22050078_npc u_EXU mux_src1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+228+i*1,"ysyx_22050078_npc u_EXU mux_src1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+232+i*2,"ysyx_22050078_npc u_EXU mux_src1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+240,"ysyx_22050078_npc u_EXU mux_src1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+242,"ysyx_22050078_npc u_EXU mux_src1 i0 hit", false,-1);
        tracep->declBus(c+455,"ysyx_22050078_npc u_EXU mux_src1 i0 i", false,-1, 31,0);
        tracep->declBus(c+448,"ysyx_22050078_npc u_EXU mux_src2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+449,"ysyx_22050078_npc u_EXU mux_src2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22050078_npc u_EXU mux_src2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+203,"ysyx_22050078_npc u_EXU mux_src2 out", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22050078_npc u_EXU mux_src2 key", false,-1, 1,0);
        tracep->declQuad(c+451,"ysyx_22050078_npc u_EXU mux_src2 default_out", false,-1, 63,0);
        tracep->declArray(c+243,"ysyx_22050078_npc u_EXU mux_src2 lut", false,-1, 263,0);
        tracep->declBus(c+448,"ysyx_22050078_npc u_EXU mux_src2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+449,"ysyx_22050078_npc u_EXU mux_src2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22050078_npc u_EXU mux_src2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+453,"ysyx_22050078_npc u_EXU mux_src2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+203,"ysyx_22050078_npc u_EXU mux_src2 i0 out", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22050078_npc u_EXU mux_src2 i0 key", false,-1, 1,0);
        tracep->declQuad(c+451,"ysyx_22050078_npc u_EXU mux_src2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+243,"ysyx_22050078_npc u_EXU mux_src2 i0 lut", false,-1, 263,0);
        tracep->declBus(c+454,"ysyx_22050078_npc u_EXU mux_src2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+252+i*3,"ysyx_22050078_npc u_EXU mux_src2 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+264+i*1,"ysyx_22050078_npc u_EXU mux_src2 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+268+i*2,"ysyx_22050078_npc u_EXU mux_src2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+276,"ysyx_22050078_npc u_EXU mux_src2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+278,"ysyx_22050078_npc u_EXU mux_src2 i0 hit", false,-1);
        tracep->declBus(c+455,"ysyx_22050078_npc u_EXU mux_src2 i0 i", false,-1, 31,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_pipe_ex_ls i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_pipe_ex_ls i_rst_n", false,-1);
        tracep->declQuad(c+118,"ysyx_22050078_npc u_pipe_ex_ls i_exu_exres", false,-1, 63,0);
        tracep->declQuad(c+122,"ysyx_22050078_npc u_pipe_ex_ls i_exu_rs2_data", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050078_npc u_pipe_ex_ls i_exu_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"ysyx_22050078_npc u_pipe_ex_ls i_exu_rdwen", false,-1);
        tracep->declBus(c+108,"ysyx_22050078_npc u_pipe_ex_ls i_exu_func3", false,-1, 2,0);
        tracep->declBit(c+110,"ysyx_22050078_npc u_pipe_ex_ls i_exu_lden", false,-1);
        tracep->declBit(c+112,"ysyx_22050078_npc u_pipe_ex_ls i_exu_sten", false,-1);
        tracep->declQuad(c+76,"ysyx_22050078_npc u_pipe_ex_ls s_exu_diffpc", false,-1, 63,0);
        tracep->declQuad(c+120,"ysyx_22050078_npc u_pipe_ex_ls o_lsu_exres", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22050078_npc u_pipe_ex_ls o_lsu_rs2_data", false,-1, 63,0);
        tracep->declBit(c+129,"ysyx_22050078_npc u_pipe_ex_ls o_lsu_lden", false,-1);
        tracep->declBit(c+130,"ysyx_22050078_npc u_pipe_ex_ls o_lsu_sten", false,-1);
        tracep->declBus(c+128,"ysyx_22050078_npc u_pipe_ex_ls o_lsu_func3", false,-1, 2,0);
        tracep->declBus(c+126,"ysyx_22050078_npc u_pipe_ex_ls o_lsu_rd_addr", false,-1, 4,0);
        tracep->declBit(c+127,"ysyx_22050078_npc u_pipe_ex_ls o_lsu_rdwen", false,-1);
        tracep->declQuad(c+78,"ysyx_22050078_npc u_pipe_ex_ls s_lsu_diffpc", false,-1, 63,0);
        tracep->declBus(c+456,"ysyx_22050078_npc u_pipe_ex_ls ex_ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+443,"ysyx_22050078_npc u_pipe_ex_ls ex_ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_pipe_ex_ls ex_ls_reg i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_pipe_ex_ls ex_ls_reg i_rst_n", false,-1);
        tracep->declBit(c+447,"ysyx_22050078_npc u_pipe_ex_ls ex_ls_reg i_wen", false,-1);
        tracep->declArray(c+279,"ysyx_22050078_npc u_pipe_ex_ls ex_ls_reg i_din", false,-1, 202,0);
        tracep->declArray(c+286,"ysyx_22050078_npc u_pipe_ex_ls ex_ls_reg o_dout", false,-1, 202,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_LSU i_clk", false,-1);
        tracep->declBus(c+128,"ysyx_22050078_npc u_LSU i_lsfunc3", false,-1, 2,0);
        tracep->declQuad(c+120,"ysyx_22050078_npc u_LSU i_addr", false,-1, 63,0);
        tracep->declBit(c+129,"ysyx_22050078_npc u_LSU i_lden", false,-1);
        tracep->declBit(c+130,"ysyx_22050078_npc u_LSU i_sten", false,-1);
        tracep->declQuad(c+124,"ysyx_22050078_npc u_LSU i_regst", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22050078_npc u_LSU o_regld", false,-1, 63,0);
        tracep->declBit(c+129,"ysyx_22050078_npc u_LSU ren", false,-1);
        tracep->declQuad(c+120,"ysyx_22050078_npc u_LSU raddr", false,-1, 63,0);
        tracep->declQuad(c+293,"ysyx_22050078_npc u_LSU rdata", false,-1, 63,0);
        tracep->declBus(c+295,"ysyx_22050078_npc u_LSU wmask", false,-1, 7,0);
        tracep->declQuad(c+120,"ysyx_22050078_npc u_LSU waddr", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22050078_npc u_LSU wdata", false,-1, 63,0);
        tracep->declBus(c+457,"ysyx_22050078_npc u_LSU mux_rdata NR_KEY", false,-1, 31,0);
        tracep->declBus(c+458,"ysyx_22050078_npc u_LSU mux_rdata KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22050078_npc u_LSU mux_rdata DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+133,"ysyx_22050078_npc u_LSU mux_rdata out", false,-1, 63,0);
        tracep->declBus(c+128,"ysyx_22050078_npc u_LSU mux_rdata key", false,-1, 2,0);
        tracep->declQuad(c+451,"ysyx_22050078_npc u_LSU mux_rdata default_out", false,-1, 63,0);
        tracep->declArray(c+296,"ysyx_22050078_npc u_LSU mux_rdata lut", false,-1, 468,0);
        tracep->declBus(c+457,"ysyx_22050078_npc u_LSU mux_rdata i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+458,"ysyx_22050078_npc u_LSU mux_rdata i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22050078_npc u_LSU mux_rdata i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+453,"ysyx_22050078_npc u_LSU mux_rdata i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+133,"ysyx_22050078_npc u_LSU mux_rdata i0 out", false,-1, 63,0);
        tracep->declBus(c+128,"ysyx_22050078_npc u_LSU mux_rdata i0 key", false,-1, 2,0);
        tracep->declQuad(c+451,"ysyx_22050078_npc u_LSU mux_rdata i0 default_out", false,-1, 63,0);
        tracep->declArray(c+296,"ysyx_22050078_npc u_LSU mux_rdata i0 lut", false,-1, 468,0);
        tracep->declBus(c+459,"ysyx_22050078_npc u_LSU mux_rdata i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+311+i*3,"ysyx_22050078_npc u_LSU mux_rdata i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+332+i*1,"ysyx_22050078_npc u_LSU mux_rdata i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+339+i*2,"ysyx_22050078_npc u_LSU mux_rdata i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+353,"ysyx_22050078_npc u_LSU mux_rdata i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+355,"ysyx_22050078_npc u_LSU mux_rdata i0 hit", false,-1);
        tracep->declBus(c+460,"ysyx_22050078_npc u_LSU mux_rdata i0 i", false,-1, 31,0);
        tracep->declBus(c+448,"ysyx_22050078_npc u_LSU mux_wmask NR_KEY", false,-1, 31,0);
        tracep->declBus(c+458,"ysyx_22050078_npc u_LSU mux_wmask KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+461,"ysyx_22050078_npc u_LSU mux_wmask DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050078_npc u_LSU mux_wmask out", false,-1, 7,0);
        tracep->declBus(c+128,"ysyx_22050078_npc u_LSU mux_wmask key", false,-1, 2,0);
        tracep->declBus(c+462,"ysyx_22050078_npc u_LSU mux_wmask default_out", false,-1, 7,0);
        tracep->declQuad(c+356,"ysyx_22050078_npc u_LSU mux_wmask lut", false,-1, 43,0);
        tracep->declBus(c+448,"ysyx_22050078_npc u_LSU mux_wmask i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+458,"ysyx_22050078_npc u_LSU mux_wmask i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+461,"ysyx_22050078_npc u_LSU mux_wmask i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+453,"ysyx_22050078_npc u_LSU mux_wmask i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050078_npc u_LSU mux_wmask i0 out", false,-1, 7,0);
        tracep->declBus(c+128,"ysyx_22050078_npc u_LSU mux_wmask i0 key", false,-1, 2,0);
        tracep->declBus(c+462,"ysyx_22050078_npc u_LSU mux_wmask i0 default_out", false,-1, 7,0);
        tracep->declQuad(c+356,"ysyx_22050078_npc u_LSU mux_wmask i0 lut", false,-1, 43,0);
        tracep->declBus(c+463,"ysyx_22050078_npc u_LSU mux_wmask i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+358+i*1,"ysyx_22050078_npc u_LSU mux_wmask i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+362+i*1,"ysyx_22050078_npc u_LSU mux_wmask i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+366+i*1,"ysyx_22050078_npc u_LSU mux_wmask i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+370,"ysyx_22050078_npc u_LSU mux_wmask i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+371,"ysyx_22050078_npc u_LSU mux_wmask i0 hit", false,-1);
        tracep->declBus(c+455,"ysyx_22050078_npc u_LSU mux_wmask i0 i", false,-1, 31,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_pipe_ls_wb i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_pipe_ls_wb i_rst_n", false,-1);
        tracep->declQuad(c+133,"ysyx_22050078_npc u_pipe_ls_wb i_lsu_lsres", false,-1, 63,0);
        tracep->declQuad(c+120,"ysyx_22050078_npc u_pipe_ls_wb i_lsu_exres", false,-1, 63,0);
        tracep->declBus(c+126,"ysyx_22050078_npc u_pipe_ls_wb i_lsu_rd_addr", false,-1, 4,0);
        tracep->declBit(c+127,"ysyx_22050078_npc u_pipe_ls_wb i_lsu_rdwen", false,-1);
        tracep->declBit(c+129,"ysyx_22050078_npc u_pipe_ls_wb i_lsu_lden", false,-1);
        tracep->declQuad(c+78,"ysyx_22050078_npc u_pipe_ls_wb s_lsu_diffpc", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22050078_npc u_pipe_ls_wb o_wbu_exres", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22050078_npc u_pipe_ls_wb o_wbu_lsres", false,-1, 63,0);
        tracep->declBus(c+138,"ysyx_22050078_npc u_pipe_ls_wb o_wbu_rd_addr", false,-1, 4,0);
        tracep->declBit(c+139,"ysyx_22050078_npc u_pipe_ls_wb o_wbu_rdwen", false,-1);
        tracep->declBit(c+137,"ysyx_22050078_npc u_pipe_ls_wb o_wbu_lden", false,-1);
        tracep->declQuad(c+80,"ysyx_22050078_npc u_pipe_ls_wb s_wbu_diffpc", false,-1, 63,0);
        tracep->declBus(c+464,"ysyx_22050078_npc u_pipe_ls_wb ls_wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+443,"ysyx_22050078_npc u_pipe_ls_wb ls_wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_pipe_ls_wb ls_wb_reg i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_pipe_ls_wb ls_wb_reg i_rst_n", false,-1);
        tracep->declBit(c+447,"ysyx_22050078_npc u_pipe_ls_wb ls_wb_reg i_wen", false,-1);
        tracep->declArray(c+372,"ysyx_22050078_npc u_pipe_ls_wb ls_wb_reg i_din", false,-1, 198,0);
        tracep->declArray(c+379,"ysyx_22050078_npc u_pipe_ls_wb ls_wb_reg o_dout", false,-1, 198,0);
        tracep->declQuad(c+131,"ysyx_22050078_npc u_WBU i_exu_res", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22050078_npc u_WBU i_lsu_res", false,-1, 63,0);
        tracep->declBit(c+137,"ysyx_22050078_npc u_WBU i_load_en", false,-1);
        tracep->declQuad(c+140,"ysyx_22050078_npc u_WBU o_rd", false,-1, 63,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_bypass i_clk", false,-1);
        tracep->declBus(c+85,"ysyx_22050078_npc u_bypass i_idu_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_22050078_npc u_bypass i_idu_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+111,"ysyx_22050078_npc u_bypass i_idu_sten", false,-1);
        tracep->declBit(c+110,"ysyx_22050078_npc u_bypass i_exu_lden", false,-1);
        tracep->declBit(c+90,"ysyx_22050078_npc u_bypass i_exu_rdwen", false,-1);
        tracep->declBus(c+88,"ysyx_22050078_npc u_bypass i_exu_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+118,"ysyx_22050078_npc u_bypass i_exu_exres", false,-1, 63,0);
        tracep->declBit(c+129,"ysyx_22050078_npc u_bypass i_lsu_lden", false,-1);
        tracep->declBit(c+127,"ysyx_22050078_npc u_bypass i_lsu_rdwen", false,-1);
        tracep->declBus(c+126,"ysyx_22050078_npc u_bypass i_lsu_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+133,"ysyx_22050078_npc u_bypass i_lsu_lsres", false,-1, 63,0);
        tracep->declQuad(c+120,"ysyx_22050078_npc u_bypass i_lsu_exres", false,-1, 63,0);
        tracep->declBit(c+139,"ysyx_22050078_npc u_bypass i_wbu_rdwen", false,-1);
        tracep->declBus(c+138,"ysyx_22050078_npc u_bypass i_wbu_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+140,"ysyx_22050078_npc u_bypass i_wbu_rd_data", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22050078_npc u_bypass o_idu_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22050078_npc u_bypass o_idu_rs2_data", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22050078_npc u_bypass o_pc_wen", false,-1);
        tracep->declBit(c+68,"ysyx_22050078_npc u_bypass o_ifid_wen", false,-1);
        tracep->declBit(c+70,"ysyx_22050078_npc u_bypass o_idex_bubble", false,-1);
        tracep->declQuad(c+101,"ysyx_22050078_npc u_bypass i_exu_rs2", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22050078_npc u_bypass o_idu_ldstbp", false,-1);
        tracep->declBit(c+72,"ysyx_22050078_npc u_bypass i_exu_ldstbp", false,-1);
        tracep->declQuad(c+122,"ysyx_22050078_npc u_bypass o_exu_rs2", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050078_npc u_bypass s_a0zero", false,-1);
        tracep->declQuad(c+438,"ysyx_22050078_npc u_bypass reg_rs1", false,-1, 63,0);
        tracep->declQuad(c+440,"ysyx_22050078_npc u_bypass reg_rs2", false,-1, 63,0);
        tracep->declBus(c+465,"ysyx_22050078_npc u_bypass u_regfile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22050078_npc u_bypass u_regfile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_bypass u_regfile i_clk", false,-1);
        tracep->declBit(c+139,"ysyx_22050078_npc u_bypass u_regfile i_wen", false,-1);
        tracep->declBus(c+138,"ysyx_22050078_npc u_bypass u_regfile i_waddr", false,-1, 4,0);
        tracep->declQuad(c+140,"ysyx_22050078_npc u_bypass u_regfile i_wdata", false,-1, 63,0);
        tracep->declBus(c+85,"ysyx_22050078_npc u_bypass u_regfile i_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_22050078_npc u_bypass u_regfile i_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+438,"ysyx_22050078_npc u_bypass u_regfile o_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+440,"ysyx_22050078_npc u_bypass u_regfile o_rs2_data", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050078_npc u_bypass u_regfile s_a0zero", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+2+i*2,"ysyx_22050078_npc u_bypass u_regfile regs", true,(i+0), 63,0);}}
        tracep->declBit(c+434,"ysyx_22050078_npc u_BRU i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_BRU i_rst_n", false,-1);
        tracep->declBit(c+68,"ysyx_22050078_npc u_BRU i_pcwen", false,-1);
        tracep->declQuad(c+95,"ysyx_22050078_npc u_BRU i_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22050078_npc u_BRU i_rs2_data", false,-1, 63,0);
        tracep->declBit(c+117,"ysyx_22050078_npc u_BRU i_brch", false,-1);
        tracep->declBit(c+115,"ysyx_22050078_npc u_BRU i_jal", false,-1);
        tracep->declBit(c+116,"ysyx_22050078_npc u_BRU i_jalr", false,-1);
        tracep->declBus(c+107,"ysyx_22050078_npc u_BRU i_bfunc3", false,-1, 2,0);
        tracep->declQuad(c+91,"ysyx_22050078_npc u_BRU i_imm", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22050078_npc u_BRU i_prepc", false,-1, 63,0);
        tracep->declQuad(c+66,"ysyx_22050078_npc u_BRU o_pc", false,-1, 63,0);
        tracep->declBit(c+69,"ysyx_22050078_npc u_BRU o_if2id_bubble", false,-1);
        tracep->declBit(c+386,"ysyx_22050078_npc u_BRU branch", false,-1);
        tracep->declBit(c+69,"ysyx_22050078_npc u_BRU jump", false,-1);
        tracep->declBit(c+387,"ysyx_22050078_npc u_BRU supersub_resbit", false,-1);
        tracep->declQuad(c+388,"ysyx_22050078_npc u_BRU sub_res", false,-1, 63,0);
        tracep->declArray(c+390,"ysyx_22050078_npc u_BRU unsignal_subres", false,-1, 64,0);
        tracep->declQuad(c+393,"ysyx_22050078_npc u_BRU seq_pc", false,-1, 63,0);
        tracep->declQuad(c+395,"ysyx_22050078_npc u_BRU jump_pc", false,-1, 63,0);
        tracep->declQuad(c+397,"ysyx_22050078_npc u_BRU next_pc", false,-1, 63,0);
        tracep->declBus(c+466,"ysyx_22050078_npc u_BRU mux_branch NR_KEY", false,-1, 31,0);
        tracep->declBus(c+458,"ysyx_22050078_npc u_BRU mux_branch KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+453,"ysyx_22050078_npc u_BRU mux_branch DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+386,"ysyx_22050078_npc u_BRU mux_branch out", false,-1, 0,0);
        tracep->declBus(c+107,"ysyx_22050078_npc u_BRU mux_branch key", false,-1, 2,0);
        tracep->declBus(c+467,"ysyx_22050078_npc u_BRU mux_branch default_out", false,-1, 0,0);
        tracep->declBus(c+399,"ysyx_22050078_npc u_BRU mux_branch lut", false,-1, 23,0);
        tracep->declBus(c+466,"ysyx_22050078_npc u_BRU mux_branch i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+458,"ysyx_22050078_npc u_BRU mux_branch i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+453,"ysyx_22050078_npc u_BRU mux_branch i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+453,"ysyx_22050078_npc u_BRU mux_branch i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+386,"ysyx_22050078_npc u_BRU mux_branch i0 out", false,-1, 0,0);
        tracep->declBus(c+107,"ysyx_22050078_npc u_BRU mux_branch i0 key", false,-1, 2,0);
        tracep->declBus(c+467,"ysyx_22050078_npc u_BRU mux_branch i0 default_out", false,-1, 0,0);
        tracep->declBus(c+399,"ysyx_22050078_npc u_BRU mux_branch i0 lut", false,-1, 23,0);
        tracep->declBus(c+448,"ysyx_22050078_npc u_BRU mux_branch i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+400+i*1,"ysyx_22050078_npc u_BRU mux_branch i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+406+i*1,"ysyx_22050078_npc u_BRU mux_branch i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+412+i*1,"ysyx_22050078_npc u_BRU mux_branch i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+418,"ysyx_22050078_npc u_BRU mux_branch i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+419,"ysyx_22050078_npc u_BRU mux_branch i0 hit", false,-1);
        tracep->declBus(c+468,"ysyx_22050078_npc u_BRU mux_branch i0 i", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22050078_npc u_BRU u_stdreg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+469,"ysyx_22050078_npc u_BRU u_stdreg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+434,"ysyx_22050078_npc u_BRU u_stdreg i_clk", false,-1);
        tracep->declBit(c+436,"ysyx_22050078_npc u_BRU u_stdreg i_rst_n", false,-1);
        tracep->declBit(c+68,"ysyx_22050078_npc u_BRU u_stdreg i_wen", false,-1);
        tracep->declQuad(c+397,"ysyx_22050078_npc u_BRU u_stdreg i_din", false,-1, 63,0);
        tracep->declQuad(c+66,"ysyx_22050078_npc u_BRU u_stdreg o_dout", false,-1, 63,0);
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
    VlWide<11>/*351:0*/ __Vtemp365;
    VlWide<7>/*223:0*/ __Vtemp372;
    VlWide<7>/*223:0*/ __Vtemp377;
    VlWide<3>/*95:0*/ __Vtemp379;
    VlWide<3>/*95:0*/ __Vtemp380;
    VlWide<3>/*95:0*/ __Vtemp381;
    VlWide<3>/*95:0*/ __Vtemp384;
    VlWide<3>/*95:0*/ __Vtemp385;
    VlWide<3>/*95:0*/ __Vtemp386;
    VlWide<3>/*95:0*/ __Vtemp387;
    VlWide<5>/*159:0*/ __Vtemp389;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)((0U 
                                                  != 
                                                  vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                                  [0xaU]))))));
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs[31]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22050078_npc__DOT__pc),64);
        tracep->fullBit(oldp+68,((1U & (~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)))));
        tracep->fullBit(oldp+69,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump));
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22050078_npc__DOT__idex_bubble));
        tracep->fullBit(oldp+71,(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp));
        tracep->fullBit(oldp+72,((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])));
        tracep->fullCData(oldp+73,(vlSelf->ysyx_22050078_npc__DOT__s_id_err),3);
        tracep->fullQData(oldp+74,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+76,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+78,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+80,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+82,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U])))),64);
        tracep->fullIData(oldp+84,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]),32);
        tracep->fullCData(oldp+85,(vlSelf->ysyx_22050078_npc__DOT__idu_rs1id),5);
        tracep->fullCData(oldp+86,(vlSelf->ysyx_22050078_npc__DOT__idu_rs2id),5);
        tracep->fullCData(oldp+87,(vlSelf->ysyx_22050078_npc__DOT__idu_rdid),5);
        tracep->fullCData(oldp+88,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+89,(vlSelf->ysyx_22050078_npc__DOT__idu_rdwen));
        tracep->fullBit(oldp+90,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                        >> 0xeU))));
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22050078_npc__DOT__idu_imm),64);
        tracep->fullQData(oldp+93,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0xaU])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[9U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                                     >> 0x14U)))),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050078_npc__DOT__idu_rs1),64);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[8U])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[7U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                                     >> 0x14U)))),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22050078_npc__DOT__idu_rs2),64);
        tracep->fullQData(oldp+101,((((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                      >> 0x14U)))),64);
        tracep->fullCData(oldp+103,(vlSelf->ysyx_22050078_npc__DOT__idu_src_sel),2);
        tracep->fullCData(oldp+104,((3U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                           >> 0xcU))),2);
        tracep->fullCData(oldp+105,(vlSelf->ysyx_22050078_npc__DOT__idu_exopt),6);
        tracep->fullCData(oldp+106,((0x3fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                              >> 6U))),6);
        tracep->fullCData(oldp+107,((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+108,((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                           >> 3U))),3);
        tracep->fullBit(oldp+109,((3U == (0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))));
        tracep->fullBit(oldp+110,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                         >> 2U))));
        tracep->fullBit(oldp+111,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))));
        tracep->fullBit(oldp+112,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                         >> 1U))));
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[2U])))),64);
        tracep->fullBit(oldp+115,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))));
        tracep->fullBit(oldp+116,((0x67U == (0x7fU 
                                             & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))));
        tracep->fullBit(oldp+117,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))));
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22050078_npc__DOT__exu_exres),64);
        tracep->fullQData(oldp+120,((((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+122,(((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                      ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                      : (((QData)((IData)(
                                                          vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                               >> 0x14U))))),64);
        tracep->fullQData(oldp+124,((((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[3U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])) 
                                                      >> 0xbU)))),64);
        tracep->fullCData(oldp+126,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+127,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+128,((7U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+129,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+130,((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U])));
        tracep->fullQData(oldp+131,((((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[6U])) 
                                      << 0x39U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[5U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U])) 
                                                      >> 7U)))),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22050078_npc__DOT__lsu_lsres),64);
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[4U])) 
                                      << 0x39U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[3U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U])) 
                                                      >> 7U)))),64);
        tracep->fullBit(oldp+137,((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U])));
        tracep->fullCData(oldp+138,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                              >> 2U))),5);
        tracep->fullBit(oldp+139,((1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout[2U] 
                                         >> 1U))));
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22050078_npc__DOT__wbu_rd),64);
        tracep->fullQData(oldp+142,(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                      ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__pc)),64);
        tracep->fullWData(oldp+144,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout),160);
        tracep->fullCData(oldp+149,((vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+150,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+151,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+152,((0x1fU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                              >> 7U))),5);
        tracep->fullCData(oldp+153,((0x7fU & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])),7);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__I_imm),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__U_imm),64);
        tracep->fullQData(oldp+158,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+160,((((- (QData)((IData)(
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
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+162,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
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
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+164,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm)),64);
        tracep->fullQData(oldp+166,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_rs1)),64);
        tracep->fullQData(oldp+168,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_rs2)),64);
        tracep->fullCData(oldp+170,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 0U : (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rdid))),5);
        tracep->fullBit(oldp+171,(((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rdwen))));
        tracep->fullCData(oldp+172,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 1U : (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_src_sel))),2);
        tracep->fullCData(oldp+173,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 1U : (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_exopt))),6);
        tracep->fullBit(oldp+174,(((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                   & (3U == (0x7fU 
                                             & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])))));
        tracep->fullBit(oldp+175,(((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                   & (0x23U == (0x7fU 
                                                & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U])))));
        tracep->fullBit(oldp+176,(((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                   & (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp))));
        tracep->fullQData(oldp+177,(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 1ULL : (((QData)((IData)(
                                                                 vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[0U]))))),64);
        __Vtemp365[0U] = (IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                   ? 1ULL : (((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[0U])))));
        __Vtemp365[1U] = (IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                    ? 1ULL : (((QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[0U])))) 
                                  >> 0x20U));
        __Vtemp365[2U] = (IData)((((QData)((IData)(
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U]))));
        __Vtemp365[3U] = (IData)(((((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U]))) 
                                  >> 0x20U));
        __Vtemp365[4U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                     ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_rs2)) 
                           << 0x14U) | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                           ? 0U : (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rdid)) 
                                         << 0xfU) | 
                                        ((((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                           & (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_rdwen)) 
                                          << 0xeU) 
                                         | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                               ? 1U
                                               : (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_src_sel)) 
                                             << 0xcU) 
                                            | ((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                  ? 1U
                                                  : (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_exopt)) 
                                                << 6U) 
                                               | ((0x38U 
                                                   & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U] 
                                                      >> 9U)) 
                                                  | ((((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                       & (3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                          & (0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))) 
                                                         << 1U) 
                                                        | ((~ (IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)) 
                                                           & (IData)(vlSelf->ysyx_22050078_npc__DOT__idu_ldstbp))))))))));
        __Vtemp365[5U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                     ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_rs2)) 
                           >> 0xcU) | ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22050078_npc__DOT__idu_rs2) 
                                                >> 0x20U)) 
                                       << 0x14U));
        __Vtemp365[6U] = (((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_rs2) 
                                    >> 0x20U)) >> 0xcU) 
                          | ((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                       ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_rs1)) 
                             << 0x14U));
        __Vtemp365[7U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                     ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_rs1)) 
                           >> 0xcU) | ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22050078_npc__DOT__idu_rs1) 
                                                >> 0x20U)) 
                                       << 0x14U));
        __Vtemp365[8U] = (((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                      ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_rs1) 
                                    >> 0x20U)) >> 0xcU) 
                          | ((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                       ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm)) 
                             << 0x14U));
        __Vtemp365[9U] = (((IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                     ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm)) 
                           >> 0xcU) | ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22050078_npc__DOT__idu_imm) 
                                                >> 0x20U)) 
                                       << 0x14U));
        __Vtemp365[0xaU] = ((IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__idex_bubble)
                                       ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__idu_imm) 
                                     >> 0x20U)) >> 0xcU);
        tracep->fullWData(oldp+179,(__Vtemp365),340);
        tracep->fullWData(oldp+190,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout),340);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src1),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__src2),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__exu_res_trans),64);
        tracep->fullWData(oldp+207,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src1____pinNumber4),264);
        tracep->fullWData(oldp+216,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+219,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+222,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+225,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+228,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+229,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+230,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+231,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+242,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+243,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT____Vcellinp__mux_src2____pinNumber4),264);
        tracep->fullWData(oldp+252,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+255,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+258,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+261,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+264,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+265,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+266,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+267,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+278,(vlSelf->ysyx_22050078_npc__DOT__u_EXU__DOT__mux_src2__DOT__i0__DOT__hit));
        __Vtemp372[0U] = (IData)((((QData)((IData)(
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U]))));
        __Vtemp372[1U] = (IData)(((((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[0U]))) 
                                  >> 0x20U));
        __Vtemp372[2U] = (((IData)(((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                     ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                     : (((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                              >> 0x14U))))) 
                           << 0xbU) | ((0x7c0U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
                                                  >> 9U)) 
                                       | ((0x20U & 
                                           (vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U] 
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
        __Vtemp372[3U] = (((IData)(((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                     ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                     : (((QData)((IData)(
                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                              >> 0x14U))))) 
                           >> 0x15U) | ((IData)((((1U 
                                                   & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
                                                   ? vlSelf->ysyx_22050078_npc__DOT__lsu_lsres
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[6U])) 
                                                    << 0x2cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[5U])) 
                                                       << 0xcU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])) 
                                                         >> 0x14U)))) 
                                                 >> 0x20U)) 
                                        << 0xbU));
        __Vtemp372[4U] = (((IData)((((1U & vlSelf->ysyx_22050078_npc__DOT__u_pipe_id_ex__DOT____Vcellout__id_ex_reg__o_dout[4U])
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
                                    >> 0x20U)) >> 0x15U) 
                          | ((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                             << 0xbU));
        __Vtemp372[5U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__exu_exres) 
                           >> 0x15U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                                 >> 0x20U)) 
                                        << 0xbU));
        __Vtemp372[6U] = ((IData)((vlSelf->ysyx_22050078_npc__DOT__exu_exres 
                                   >> 0x20U)) >> 0x15U);
        tracep->fullWData(oldp+279,(__Vtemp372),203);
        tracep->fullWData(oldp+286,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout),203);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__rdata),64);
        tracep->fullCData(oldp+295,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__wmask),8);
        tracep->fullWData(oldp+296,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_rdata____pinNumber4),469);
        tracep->fullWData(oldp+311,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+314,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+317,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+320,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+323,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+326,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+329,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+332,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+333,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+334,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+335,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+336,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+337,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+338,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__key_list[6]),3);
        tracep->fullQData(oldp+339,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+343,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+345,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+347,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+355,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_rdata__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+356,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT____Vcellinp__mux_wmask____pinNumber4),44);
        tracep->fullSData(oldp+358,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+359,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+360,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+361,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullCData(oldp+362,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+363,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+364,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+365,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+366,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+367,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+368,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+369,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+370,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+371,(vlSelf->ysyx_22050078_npc__DOT__u_LSU__DOT__mux_wmask__DOT__i0__DOT__hit));
        __Vtemp377[0U] = (IData)((((QData)((IData)(
                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U]))));
        __Vtemp377[1U] = (IData)(((((QData)((IData)(
                                                    vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[0U]))) 
                                  >> 0x20U));
        __Vtemp377[2U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_lsres) 
                           << 7U) | ((0x7cU & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                               >> 4U)) 
                                     | ((2U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                               >> 4U)) 
                                        | (1U & (vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[2U] 
                                                 >> 1U)))));
        __Vtemp377[3U] = (((IData)(vlSelf->ysyx_22050078_npc__DOT__lsu_lsres) 
                           >> 0x19U) | ((IData)((vlSelf->ysyx_22050078_npc__DOT__lsu_lsres 
                                                 >> 0x20U)) 
                                        << 7U));
        __Vtemp377[4U] = (((IData)((vlSelf->ysyx_22050078_npc__DOT__lsu_lsres 
                                    >> 0x20U)) >> 0x19U) 
                          | ((IData)((((QData)((IData)(
                                                       vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                       << 0x35U) | 
                                      (((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                        << 0x15U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                        >> 0xbU)))) 
                             << 7U));
        __Vtemp377[5U] = (((IData)((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                     >> 0xbU)))) 
                           >> 0x19U) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                      << 0x15U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                        >> 0xbU))) 
                                                 >> 0x20U)) 
                                        << 7U));
        __Vtemp377[6U] = ((IData)(((((QData)((IData)(
                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[6U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[5U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22050078_npc__DOT__u_pipe_ex_ls__DOT____Vcellout__ex_ls_reg__o_dout[4U])) 
                                                     >> 0xbU))) 
                                   >> 0x20U)) >> 0x19U);
        tracep->fullWData(oldp+372,(__Vtemp377),199);
        tracep->fullWData(oldp+379,(vlSelf->ysyx_22050078_npc__DOT__u_pipe_ls_wb__DOT____Vcellout__ls_wb_reg__o_dout),199);
        tracep->fullBit(oldp+386,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__branch));
        VL_EXTEND_WQ(65,64, __Vtemp379, vlSelf->ysyx_22050078_npc__DOT__idu_rs1);
        VL_EXTEND_WQ(65,64, __Vtemp380, vlSelf->ysyx_22050078_npc__DOT__idu_rs2);
        VL_SUB_W(3, __Vtemp381, __Vtemp379, __Vtemp380);
        tracep->fullBit(oldp+387,((1U & __Vtemp381[2U])));
        tracep->fullQData(oldp+388,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__sub_res),64);
        VL_EXTEND_WQ(65,64, __Vtemp384, vlSelf->ysyx_22050078_npc__DOT__idu_rs1);
        VL_EXTEND_WQ(65,64, __Vtemp385, vlSelf->ysyx_22050078_npc__DOT__idu_rs2);
        VL_SUB_W(3, __Vtemp386, __Vtemp384, __Vtemp385);
        __Vtemp387[0U] = __Vtemp386[0U];
        __Vtemp387[1U] = __Vtemp386[1U];
        __Vtemp387[2U] = (1U & __Vtemp386[2U]);
        tracep->fullWData(oldp+390,(__Vtemp387),65);
        tracep->fullQData(oldp+393,((4ULL + vlSelf->ysyx_22050078_npc__DOT__pc)),64);
        tracep->fullQData(oldp+395,(((0x67U == (0x7fU 
                                                & vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))
                                      ? (vlSelf->ysyx_22050078_npc__DOT__idu_rs1 
                                         + vlSelf->ysyx_22050078_npc__DOT__idu_imm)
                                      : ((((QData)((IData)(
                                                           vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U]))) 
                                         + vlSelf->ysyx_22050078_npc__DOT__idu_imm))),64);
        tracep->fullQData(oldp+397,(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                      ? ((0x67U == 
                                          (0x7fU & 
                                           vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[4U]))
                                          ? (vlSelf->ysyx_22050078_npc__DOT__idu_rs1 
                                             + vlSelf->ysyx_22050078_npc__DOT__idu_imm)
                                          : ((((QData)((IData)(
                                                               vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22050078_npc__DOT__u_pipe_IF_ID__DOT____Vcellout__if_id_reg__o_dout[2U]))) 
                                             + vlSelf->ysyx_22050078_npc__DOT__idu_imm))
                                      : (4ULL + vlSelf->ysyx_22050078_npc__DOT__pc))),64);
        tracep->fullIData(oldp+399,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT____Vcellinp__mux_branch____pinNumber4),24);
        tracep->fullCData(oldp+400,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+401,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+402,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+403,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+404,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[4]),4);
        tracep->fullCData(oldp+405,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__pair_list[5]),4);
        tracep->fullCData(oldp+406,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+407,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+408,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+409,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+410,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+411,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__key_list[5]),3);
        tracep->fullBit(oldp+412,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+413,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+414,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+415,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+416,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+417,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+418,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+419,(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__mux_branch__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+420,(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                      ? 0x13U : (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__ins))),32);
        __Vtemp389[0U] = (IData)(((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                   ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__pc));
        __Vtemp389[1U] = (IData)((((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                                    ? 0ULL : vlSelf->ysyx_22050078_npc__DOT__pc) 
                                  >> 0x20U));
        __Vtemp389[2U] = (IData)(vlSelf->ysyx_22050078_npc__DOT__pc);
        __Vtemp389[3U] = (IData)((vlSelf->ysyx_22050078_npc__DOT__pc 
                                  >> 0x20U));
        __Vtemp389[4U] = ((IData)(vlSelf->ysyx_22050078_npc__DOT__u_BRU__DOT__jump)
                           ? 0x13U : (IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__ins));
        tracep->fullWData(oldp+421,(__Vtemp389),160);
        tracep->fullIData(oldp+426,((IData)(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__ins)),32);
        tracep->fullQData(oldp+427,(vlSelf->ysyx_22050078_npc__DOT__s_wbu_inst),64);
        tracep->fullIData(oldp+429,((IData)(vlSelf->ysyx_22050078_npc__DOT__s_wbu_inst)),32);
        tracep->fullQData(oldp+430,(vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__ins),64);
        tracep->fullQData(oldp+432,((0xffffffffULL 
                                     & vlSelf->ysyx_22050078_npc__DOT__u_IFU__DOT__ins)),64);
        tracep->fullBit(oldp+434,(vlSelf->i_clk));
        tracep->fullBit(oldp+435,(vlSelf->i_rst_n));
        tracep->fullBit(oldp+436,(vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r2));
        tracep->fullBit(oldp+437,(vlSelf->ysyx_22050078_npc__DOT__u_stl_rst__DOT__rst_n_r1));
        tracep->fullQData(oldp+438,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                    [vlSelf->ysyx_22050078_npc__DOT__idu_rs1id]),64);
        tracep->fullQData(oldp+440,(vlSelf->ysyx_22050078_npc__DOT__u_bypass__DOT__u_regfile__DOT__regs
                                    [vlSelf->ysyx_22050078_npc__DOT__idu_rs2id]),64);
        tracep->fullIData(oldp+442,(0xa0U),32);
        tracep->fullIData(oldp+443,(0U),32);
        tracep->fullQData(oldp+444,(vlSelf->ysyx_22050078_npc__DOT__u_IDU__DOT__R_imm),64);
        tracep->fullIData(oldp+446,(0x154U),32);
        tracep->fullBit(oldp+447,(1U));
        tracep->fullIData(oldp+448,(4U),32);
        tracep->fullIData(oldp+449,(2U),32);
        tracep->fullIData(oldp+450,(0x40U),32);
        tracep->fullQData(oldp+451,(0ULL),64);
        tracep->fullIData(oldp+453,(1U),32);
        tracep->fullIData(oldp+454,(0x42U),32);
        tracep->fullIData(oldp+455,(4U),32);
        tracep->fullIData(oldp+456,(0xcbU),32);
        tracep->fullIData(oldp+457,(7U),32);
        tracep->fullIData(oldp+458,(3U),32);
        tracep->fullIData(oldp+459,(0x43U),32);
        tracep->fullIData(oldp+460,(7U),32);
        tracep->fullIData(oldp+461,(8U),32);
        tracep->fullCData(oldp+462,(0U),8);
        tracep->fullIData(oldp+463,(0xbU),32);
        tracep->fullIData(oldp+464,(0xc7U),32);
        tracep->fullIData(oldp+465,(5U),32);
        tracep->fullIData(oldp+466,(6U),32);
        tracep->fullBit(oldp+467,(0U));
        tracep->fullIData(oldp+468,(6U),32);
        tracep->fullQData(oldp+469,(0x80000000ULL),64);
    }
}
