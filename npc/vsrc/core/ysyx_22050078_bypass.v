`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"

module ysyx_22050078_bypass (
  // 1. control signals:
  input                            i_clk            ,
  
  // 2. from IDU/EXU/LSU/WBU to generate rs1_data/rs2_data for idu:
  //from IDU
  input         [`REG_ADDRW-1:0]   i_idu_rs1_addr ,
  input         [`REG_ADDRW-1:0]   i_idu_rs2_addr ,
  input                            i_idu_sten    ,

  //from EXU
  input                            i_exu_lden    ,
  input                            i_exu_rdwen    ,
  input         [`REG_ADDRW-1:0]   i_exu_rd_addr  ,
  input         [`CPU_WIDTH-1:0]   i_exu_exres    ,

  //from LSU
  input                            i_lsu_lden    ,
  input                            i_lsu_rdwen    ,
  input         [`REG_ADDRW-1:0]   i_lsu_rd_addr  ,
  input         [`CPU_WIDTH-1:0]   i_lsu_lsres    ,  
  input         [`CPU_WIDTH-1:0]   i_lsu_exres    ,

  //from WBU
  input                            i_wbu_rdwen    ,
  input         [`REG_ADDRW-1:0]   i_wbu_rd_addr  ,  
  input         [`CPU_WIDTH-1:0]   i_wbu_rd_data  ,

  //to pipe_ID_EX、BRU
  output reg    [`CPU_WIDTH-1:0]   o_idu_rs1_data ,
  output reg    [`CPU_WIDTH-1:0]   o_idu_rs2_data ,

  //to BRU
  output wire                      o_pc_wen       ,

  //to pipe_IF_ID
  output wire                      o_ifid_wen    ,

  //to pipe_ID_EX
  output                           o_idex_bubble ,

  // 3. from id/ex pipe reg & lsu out to generate regst for ex/ls pipe reg in:
  //from pipe_ID_EX
  input         [`CPU_WIDTH-1:0]   i_exu_rs2     ,  // from id/ex pipe reg out.

  //to pipe_ID_EX
  output wire                      o_idu_ldstbp  ,  // (load+store) bypass, to id/ex in.
  
  //from pipe_ID_EX
  input                            i_exu_ldstbp  ,  // (load+store) bypass, from id/ex out. one cycle after o_idu_ldstbp.

  //to pipe_EX_LS
  output wire   [`CPU_WIDTH-1:0]   o_exu_rs2     ,  // to ex/ls pipe reg in , use for lsu in next cycle.


  // 3. for sim:
  output wire                      s_a0zero 

);

  // 1. from exu/lsu/wbu to generate rs1/rs2 for idu: /////////////////////////////////////////////////////

  reg [`CPU_WIDTH-1:0] reg_rs1,reg_rs2;

  ysyx_22050078_regfile u_regfile(
    .i_clk        (i_clk           ),
    .i_wen      (i_wbu_rdwen   ),
    .i_waddr    (i_wbu_rd_addr ),
    .i_wdata    (i_wbu_rd_data ),
    .i_rs1_addr (i_idu_rs1_addr),
    .i_rs2_addr (i_idu_rs2_addr),
    .o_rs1_data (reg_rs1       ),
    .o_rs2_data (reg_rs2       ),
    .s_a0zero   (s_a0zero      )
  );


  always @(*) begin //存在优先级
    if(!i_exu_lden && i_exu_rdwen && (i_exu_rd_addr == i_idu_rs1_addr)) begin
      o_idu_rs1_data = i_exu_exres;
    end
    else if(i_lsu_rdwen && (i_lsu_rd_addr == i_idu_rs1_addr)) begin
      o_idu_rs1_data = i_lsu_lden ? i_lsu_lsres : i_lsu_exres;
    end
    else if(i_wbu_rdwen && (i_wbu_rd_addr == i_idu_rs1_addr)) begin
      o_idu_rs1_data = i_wbu_rd_data;
    end
    else begin
      o_idu_rs1_data = reg_rs1;
    end

  end

  always @(*) begin //存在优先级
    if(!i_exu_lden && i_exu_rdwen && (i_exu_rd_addr == i_idu_rs2_addr)) begin
      o_idu_rs2_data = i_exu_exres;
    end
    else if(i_lsu_rdwen && (i_lsu_rd_addr == i_idu_rs2_addr)) begin
      o_idu_rs2_data = i_lsu_lden ? i_lsu_lsres : i_lsu_exres;
    end
    else if(i_wbu_rdwen && (i_wbu_rd_addr == i_idu_rs2_addr)) begin
      o_idu_rs2_data = i_wbu_rd_data;
    end
    else begin
      o_idu_rs2_data = reg_rs2;
    end
  end

  assign o_idex_bubble = i_exu_lden && i_exu_rdwen && ( i_exu_rd_addr == i_idu_rs1_addr || i_exu_rd_addr == i_idu_rs2_addr ) && !o_idu_ldstbp;
  assign o_pc_wen      = ~ o_idex_bubble;//ld+alu的数据冒险对ID/EX流水线寄存器插入一个nop,同时关闭PC,防止变化
  assign o_ifid_wen    = ~ o_idex_bubble;//ld+alu的数据冒险对ID/EX流水线寄存器插入一个nop,同时关闭IF/ID流水线寄存器,防止变化

  // 2. from id/ex pipe reg & lsu out to generate regst for ex/ls pipe reg in:////////////////////////////////////
  assign o_idu_ldstbp  = i_exu_lden && i_exu_rdwen && (i_exu_rd_addr == i_idu_rs2_addr) && i_idu_sten;  //load + store, do not need bubble!
  assign o_exu_rs2     = i_exu_ldstbp ? i_lsu_lsres : i_exu_rs2;





endmodule

