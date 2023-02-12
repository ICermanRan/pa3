/***********************
author:ran
description:回写模块
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"
module ysyx_22050078_WBU(
  input [`CPU_WIDTH-1:0] i_exu_res,
  input [`CPU_WIDTH-1:0] i_lsu_res,

  //from IDU,等于~lsu_opt[0]
  input                  i_load_en,
  output[`CPU_WIDTH-1:0] o_rd       

);

  assign o_rd = i_load_en ? i_lsu_res : i_exu_res;










endmodule
