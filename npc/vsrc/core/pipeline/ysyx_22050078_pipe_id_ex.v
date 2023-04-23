`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_pipe_id_ex(
  // 1. contrl signals:
  input                           clk           ,
  input                           rst_n         ,
  input                           i_bubble      ,

  // 2. input signals from pre stage:
  //from IDU
  input   [`CPU_WIDTH-1:0]        i_idu_imm     , 
  input   [`REG_ADDRW-1:0]        i_idu_rd_addr , 
  input                           i_idu_rdwen   ,
  input   [`EXU_SEL_WIDTH - 1:0]  i_idu_src_sel ,
  input   [`EXU_OPT_WIDTH - 1:0]  i_idu_exopt   ,
  input   [2:0]                   i_idu_func3   , 
  input                           i_idu_ld_en   ,
  input                           i_idu_st_en   ,
       
  //from bypass
  input   [`CPU_WIDTH-1:0]        i_idu_rs1_data,
  input   [`CPU_WIDTH-1:0]        i_idu_rs2_data,
  input                           i_idu_ldstbp  ,
  
  //from pipe_IF_ID
  input   [`CPU_WIDTH-1:0]        i_idu_pc      ,
  input   [`CPU_WIDTH-1:0]        s_idu_diffpc  ,


  // 3. output signals for next stage:
  //to EXU
  output  [`CPU_WIDTH-1:0]        o_exu_pc      ,
  output  [`CPU_WIDTH-1:0]        o_exu_imm     ,
  output  [`CPU_WIDTH-1:0]        o_exu_rs1_data,
  output  [`CPU_WIDTH-1:0]        o_exu_rs2_data,//to EXU、bypass
  output  [`EXU_SEL_WIDTH - 1:0]  o_exu_src_sel ,
  output  [`EXU_OPT_WIDTH - 1:0]  o_exu_exopt   ,
  
  //to pipe_EX_LS
  output  [`REG_ADDRW-1:0]        o_exu_rd_addr ,
  output                          o_exu_rdwen   ,
  output  [2:0]                   o_exu_func3   ,
  output                          o_exu_ld_en   ,
  output                          o_exu_st_en   ,
  output  [`CPU_WIDTH-1:0]        s_exu_diffpc  , 
  //to bypass
  output                          o_exu_ldstbp  
  
);


  wire [`CPU_WIDTH-1:0]      t_idu_imm     ;
  wire [`CPU_WIDTH-1:0]      t_idu_rs1_data;
  wire [`CPU_WIDTH-1:0]      t_idu_rs2_data;
  wire [`REG_ADDRW-1:0]      t_idu_rd_addr ;
  wire                       t_idu_rdwen   ;
  wire [`EXU_SEL_WIDTH-1:0]  t_idu_src_sel ;
  wire [`EXU_OPT_WIDTH-1:0]  t_idu_exopt   ;
  wire [2:0]                 t_idu_func3   ;
  wire                       t_idu_ld_en   ;
  wire                       t_idu_st_en   ;
  wire                       t_idu_ldstbp  ;
  wire [`CPU_WIDTH-1:0]      t_idu_pc      ;
  wire [`CPU_WIDTH-1:0]      t_idu_diffpc  ;


  assign t_idu_pc       = i_idu_pc ;//CPU_WIDTH
  assign t_idu_imm      = i_bubble ? `CPU_WIDTH'b0     : i_idu_imm     ;
  assign t_idu_rs1_data = i_bubble ? `CPU_WIDTH'b0     : i_idu_rs1_data;
  assign t_idu_rs2_data = i_bubble ? `CPU_WIDTH'b0     : i_idu_rs2_data;
  assign t_idu_rd_addr  = i_bubble ? `REG_ADDRW'b0     : i_idu_rd_addr ;
  assign t_idu_rdwen    = i_bubble ? 1'b0              : i_idu_rdwen   ;
  assign t_idu_src_sel  = i_bubble ? `EXU_SEL_RS1_IMM  : i_idu_src_sel ;
  assign t_idu_exopt    = i_bubble ? `EXU_ADD          : i_idu_exopt   ;
  assign t_idu_func3    = i_idu_func3;//3bit
  assign t_idu_ld_en    = i_bubble ? 1'b0              : i_idu_ld_en   ;
  assign t_idu_st_en    = i_bubble ? 1'b0              : i_idu_st_en   ;
  assign t_idu_ldstbp   = i_bubble ? 1'b0              : i_idu_ldstbp  ;
  assign t_idu_diffpc   = i_bubble ? `CPU_WIDTH'b1     : s_idu_diffpc  ; // use for sim, data bubble diffpc == 1;


  stl_reg #(
    .WIDTH    (5*`CPU_WIDTH + `REG_ADDRW + 7 + `EXU_SEL_WIDTH + `EXU_OPT_WIDTH),
    .RESET_VAL(0)
  ) id_ex_reg(
    .clk      (clk),
    .rst_n    (rst_n),
    .i_wen    (1    ),
    .i_din    ({t_idu_imm, t_idu_rs1_data, t_idu_rs2_data, t_idu_rd_addr, t_idu_rdwen, t_idu_src_sel, t_idu_exopt, t_idu_func3, t_idu_ld_en, t_idu_st_en, t_idu_ldstbp, t_idu_pc, t_idu_diffpc}),
    .o_dout   ({o_exu_imm, o_exu_rs1_data, o_exu_rs2_data, o_exu_rd_addr, o_exu_rdwen, o_exu_src_sel, o_exu_exopt, o_exu_func3, o_exu_ld_en, o_exu_st_en, o_exu_ldstbp, o_exu_pc, s_exu_diffpc})
  );


endmodule
