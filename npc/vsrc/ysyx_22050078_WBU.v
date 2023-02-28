/***********************
author:ran
description:回写模块
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"
module ysyx_22050078_WBU(
  //from EXU
  input [`CPU_WIDTH-1:0] i_exu_res,
  
  //from LSU(要存入x[rd]的内容)
  input [`CPU_WIDTH-1:0] i_lsu_res,

  //from IDU,等于~lsu_opt[0]
  input                  i_load_en,
  
  //to regfile
  output[`CPU_WIDTH-1:0] o_rd       

);

  //i_load_en = ~lsu_opt[0]
  //i_load_en = 1，inst type = I_LOAD,表示存入x[rd]的是来自LSU的数据(从内存中读取的)
  //i_load_en = 0，inst type != I_LOAD or S-type,表示存入x[rd]的是来自EXU的数据(计算出来的)
  assign o_rd = i_load_en ? i_lsu_res : i_exu_res;










endmodule
