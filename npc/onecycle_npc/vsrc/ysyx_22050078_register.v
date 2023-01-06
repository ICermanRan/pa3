/***********************
author:ran
description:32个寄存器：x0-x31
*************************/

`include "vsrc/defines.v"
module ysyx_22050078_register #(parameter ADDR_WIDTH = 5, DATA_WIDTH = 64) 
(
  input clk,
  input w_en,
  input [ADDR_WIDTH-1:0] rs1_addr,       //源寄存器1(地址)
  input [ADDR_WIDTH-1:0] rs2_addr,       //源寄存器2(地址)
  input [ADDR_WIDTH-1:0] rd,             //目标寄存器(地址)
  input [DATA_WIDTH-1:0] wr_data, 
  input [ADDR_WIDTH-1:0] wr_addr,

  output [DATA_WIDTH-1:0] rd_data1, //src1
  output [DATA_WIDTH-1:0] rd_data2  //src2
);
  reg [DATA_WIDTH-1:0] regs [31:0];   //32个32位的寄存器
  
  
//write(往某个寄存器内写数据)  
  always @(posedge clk) begin
   if (w_en) 
    regs[wr_addr] <= wr_data;
  end

//read(读对应寄存器里的值)
  assign rd_data1 = (rs1_addr == 5'd0) ? `ysyx_22050078_zero_word : regs[rs1_addr]; //地址为0则读$0
  assign rd_data2 = (rs2_addr == 5'd0) ? `ysyx_22050078_zero_word : regs[rs2_addr]; //地址为0则读$0

endmodule
