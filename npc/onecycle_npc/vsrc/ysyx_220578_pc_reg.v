/***********************
author:ran
description:pc寄存器
*************************/

`include "vsrc/defines.v"

module ysyx_220578_pc_reg(
    input clk,
    input rst,
    //input [31:0] pc_new,
    output reg [64-1:0] pc
);

always@(posedge clk) 
 begin
    if(rst)
        pc <= `ysyx_220578_pc_rst;
    else
        pc <= pc + 64'd4;
   
 end






endmodule
