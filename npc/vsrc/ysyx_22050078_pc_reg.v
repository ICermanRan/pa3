/***********************
author:ran
description:pc寄存器
*************************/

`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"

module ysyx_22050078_pc_reg(

    
);



always@(posedge clk) 
 begin
    if(rst)
        pc <= `ysyx_22050078_pc_rst;
    else
        pc <= pc + 64'd4;
   
 end






endmodule
