`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_pipe_ls_wb(
  // 1. control signals:
  input                         clk         ,
  input                         rst_n       ,

  // 2. input signals from pre stage:
  
  //from EXU
  input   [`CPU_WIDTH-1:0]      i_lsu_lsres   ,
  //from pipe_EX_LS
  input   [`CPU_WIDTH-1:0]      i_lsu_exres   ,
  input   [`REG_ADDRW-1:0]      i_lsu_rdid    ,
  input                         i_lsu_rdwen   ,
  input                         i_lsu_lden    ,
  input   [`CPU_WIDTH-1:0]      s_lsu_diffpc  ,

  // 3. output signals for next stage:
  output  [`CPU_WIDTH-1:0]      o_wbu_exres   ,
  output  [`CPU_WIDTH-1:0]      o_wbu_lsres   ,
  output  [`REG_ADDRW-1:0]      o_wbu_rdid    ,
  output                        o_wbu_rdwen   ,
  output                        o_wbu_lden    ,
  output  [`CPU_WIDTH-1:0]      s_wbu_diffpc
);

  stl_reg #(
    .WIDTH      (3*`CPU_WIDTH+`REG_ADDRW+2),
    .RESET_VAL  (0       )
  ) ls_wb_reg(
  	.clk        (clk     ),
    .rst_n      (rst_n   ),
    .i_wen      (1       ),
    .i_din      ({i_lsu_exres, i_lsu_lsres, i_lsu_rdid, i_lsu_rdwen, i_lsu_lden, s_lsu_diffpc} ),
    .o_dout     ({o_wbu_exres, o_wbu_lsres, o_wbu_rdid, o_wbu_rdwen, o_wbu_lden, s_wbu_diffpc} )
  );



endmodule
