/***********************
LSU(Load Store Unit)
author:ran
description:I_LOAD(lb、lh、lw、ld、lbu、lhu、lwu)->从内存中读取指定地址的数据，经扩展后加载(load)到x[rd]
            S-type(sb、sh、sw、sd)->将src2的指定字节存入(store)内存指定地址
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"
module ysyx_22050078_LSU(
  input                       en,
  input                       clk,
  input                       rst_n,

  //from IDU
  input [`LSU_OPT_WIDTH-1:0]  i_opt,  //lsu i_opt. IDU:o_lsu_opt
  
  //from EXU
  input [`CPU_WIDTH-1:0]      i_addr,// mem i_addr. from exu result:o_exu_res.

  //from regfile src2
  input [`CPU_WIDTH-1:0]      i_regst,//for store:存入

  //to WBU-lsu_res
  output reg [`CPU_WIDTH-1:0] o_regld //for I_LOAD type(load:加载),将从内存读取到的数据加载到rd
);

/*********************I_LOAD type *********************/  
  wire ren = ~i_opt[0];//ren = 1:从内存中读取数据;ren = 0:从内存中读取到0
  wire [`CPU_WIDTH-1:0] raddr = i_addr;
  wire [`CPU_WIDTH-1:0] rdata;

  always @(*) begin
  //I_LOAD:先从内存读取数据
    case(i_opt)
      `LSU_LB: o_regld = {{56{rdata[ 7]}}, rdata[7:0]}; //从地址 x[rs1] + sign-extend(offset)读取一个字节，经符号位扩展后写入 x[rd]。
      `LSU_LH: o_regld = {{48{rdata[15]}}, rdata[15:0]};//从地址 x[rs1] + sign-extend(offset)读取两个字节，经符号位扩展后写入 x[rd]。
      `LSU_LW: o_regld = {{32{rdata[31]}}, rdata[31:0]};//从地址 x[rs1] + sign-extend(offset)读取四个字节，写入 x[rd]。对于 RV64I，结果要进行符号位扩展。
      `LSU_LD: o_regld = rdata;                         //从地址 x[rs1] + sign-extend(offset)读取八个字节，写入 x[rd]。
      `LSU_LBU:o_regld = {56'b0, rdata[7:0]};           //从地址 x[rs1] + sign-extend(offset)读取一个字节，经零扩展后写入 x[rd]。
      `LSU_LHU:o_regld = {48'b0, rdata[15:0]};          //从地址 x[rs1] + sign-extend(offset)读取两个字节，经零扩展后写入 x[rd]。
      `LSU_LWU:o_regld = {32'b0, rdata[31:0]};          //从地址 x[rs1] + sign-extend(offset)读取四个字节，零扩展后写入 x[rd]。
      default: o_regld = 64'b0;
    endcase
  end
/*******************************************************/ 

/************************S type*************************/ 
  reg [7:0] mask, wmask;
  wire [`CPU_WIDTH-1:0] waddr, wdata;
  //S-type:往内存中存入数据
  always @(*) begin
    case(i_opt)
      `LSU_SB:  mask = 8'b0000_0001;// 0000_0001, 1byte.
      `LSU_SH:  mask = 8'b0000_0011;// 0000_0011, 2byte.
      `LSU_SW:  mask = 8'b0000_1111;// 0000_1111, 4byte.
      `LSU_SD:  mask = 8'b1111_1111;// 1111_1111, 8byte.
      default:  mask = 8'b0;
    endcase
    
  end

  // Due to comb logic delay, there must use an reg!!
  // Think about this situation: if waddr and wdata is not ready, but write it to mem immediately. it's wrong! 

  stdreg #(
    .WIDTH     (2*`CPU_WIDTH + 8),  //because data_in = addr + src2 + mask
    .RESET_VAL (0)
  ) u_stdreg(
    .clk  (clk),
    .rst_n(rst_n),
    .i_wen(1),
    .i_din({i_addr,i_regst,mask}),
    .o_dout({waddr, wdata, wmask})
  );
/*******************************************************/ 

  //for sim:  ////////////////////////////////////////////////////////////////////////////////////////////

  import "DPI-C" function void rtl_pmem_read(input longint raddr, output longint rdata, input bit ren);
  import "DPI-C" function void rtl_pmem_write(input longint waddr, input longint wdata, input byte wmask);

  always @(*) begin
    // rtl_pmem_read(raddr, rdata, ren);
    rtl_pmem_write(waddr, wdata, wmask);    
  end

  // always_latch @(clk) begin
  //   // $display("LSU触发");
  //   if(!clk) begin
  //     rtl_pmem_read(raddr, rdata, ren);
  //     // rtl_pmem_write(waddr, wdata, wmask);  
  //   end
  // end

  always @(*) begin
      rtl_pmem_read(raddr, rdata, ren);    
  end

endmodule
