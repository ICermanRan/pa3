/***********************
author:ran
description:回写模块
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_WBU(
  //from pipe_LS_WB
  input [`CPU_WIDTH-1:0] i_exu_res,
  
  //from pipe_LS_WB(要存入x[rd]的内容)
  input [`CPU_WIDTH-1:0] i_lsu_res,

  //from pipe_LS_WB
  input                  i_load_en,
  
  //to bypass
  output wire [`CPU_WIDTH-1:0] o_rd       

);

  //i_load_en = ~lsu_opt[0]
  //i_load_en = 1，inst type = I_LOAD,表示存入x[rd]的是来自LSU的数据(从内存中读取的)
  //i_load_en = 0，inst type != I_LOAD or S-type,表示存入x[rd]的是来自EXU的数据(计算出来的)
  assign o_rd = i_load_en ? i_lsu_res : i_exu_res;

endmodule


// `include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.sv"
// module ysyx_22050078_WBU (
//   input         [`CPU_WIDTH-1:0]  i_exu_res,
//   input         [`CPU_WIDTH-1:0]  i_lsu_res,
//   input                           i_ldflag,
//   output logic  [`CPU_WIDTH-1:0]  o_rd     
// );
  
//   assign o_rd = i_ldflag ? i_lsu_res : i_exu_res;
    
// endmodule
