`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_pipe_if_id (
  //control signals:
  input                       clk         ,
  input                       rst_n       ,
  input                       i_wen       ,
  input                       i_bubble    ,

  //from IFU
  input   [`INST_WIDTH - 1:0] i_ifu_inst  ,
  input   [`CPU_WIDTH - 1:0]  i_ifu_pc    ,


  //to IDU
  output  [`INST_WIDTH - 1:0] o_pipe_ifid2idu_inst,
  output  [`CPU_WIDTH - 1:0]  o_pipe_ifid2pipe_idex_pc  ,
  output  [`CPU_WIDTH - 1:0]  s_idu_diffpc
);  

  wire [`CPU_WIDTH - 1:0]  temp_ifu_pc;
  wire [`INST_WIDTH - 1:0] temp_ifu_inst;
  wire [`CPU_WIDTH - 1:0]  temp_ifu_diffpc;

  assign temp_ifu_pc      = i_ifu_pc;
  assign temp_ifu_inst    = i_bubble ? `INST_WIDTH'h13 : i_ifu_inst; //0x13 == ADDI x0,x0,0 == nop.
  assign temp_ifu_diffpc  = i_bubble ? `CPU_WIDTH'b0   : i_ifu_pc;

  stl_reg #(
    .WIDTH      (2*`CPU_WIDTH+`INST_WIDTH),
    .RESET_VAL  (0                       )
  ) if_rd_reg(
    .clk        (clk                     ),
    .rst_n      (rst_n                   ),
    .i_wen      (i_wen                   ),
    .i_din      ({temp_ifu_inst, temp_ifu_pc, temp_ifu_diffpc}),
    .o_dout     ({o_pipe_ifid2idu_inst, o_pipe_ifid2pipe_idex_pc, s_idu_diffpc})
  );



endmodule
