`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_pipe_ex_ls(
  // 1. control signals:
  input                        clk           ,
  input                        rst_n         ,
  // input                        i_bubble      ,
  
  // 2. input signals from pre stage:
  
  //from EXU
  input  [`CPU_WIDTH-1:0]      i_exu_res     ,

  //from bypass_logic
  input  [`CPU_WIDTH-1:0]      o_exu_rs2_data,

  //from pipe_ID_EX
  input  [`REG_ADDRW-1:0]      i_exu_rd_addr ,
  input                        i_exu_rdwen   ,
  input  [2:0]                 i_exu_func3   ,
  input                        i_exu_ld_en   ,
  input                        i_exu_st_en   ,
  input  [`CPU_WIDTH-1:0]      s_exu_diffpc  ,
  
  //to LSU
  output [`CPU_WIDTH-1:0]      o_lsu_rs2_data,
  output [`CPU_WIDTH-1:0]      o_lsu_exres   ,////also to pipe_LS_WB
  output                       o_lsu_ld_en   ,
  output                       o_lsu_st_en   ,
  output  [2:0]                o_lsu_func3   ,

  //to pipe_LS_WB
  output  [`REG_ADDRW-1:0]     o_lsu_rd_addr ,
  output                       o_lsu_rdwen   ,
  output  [`CPU_WIDTH-1:0]     s_lsu_diffpc  
  
);


  stl_reg #(
    .WIDTH    (3*`CPU_WIDTH + `REG_ADDRW + 6),
    .RESET_VAL(0)
  ) ex_ls_reg(
      .clk    (clk  ),  
      .rst_n  (rst_n),
      .i_wen  (1    ),
      .i_din  ({i_exu_res, o_exu_rs2_data, i_exu_rd_addr, i_exu_rdwen, i_exu_func3, i_exu_ld_en, i_exu_st_en, s_exu_diffpc}),
      .o_dout ({o_lsu_exres, o_lsu_rs2_data, o_lsu_rd_addr, o_lsu_rdwen, o_lsu_func3, o_lsu_ld_en, o_lsu_st_en, s_lsu_diffpc})

  );
  



endmodule
