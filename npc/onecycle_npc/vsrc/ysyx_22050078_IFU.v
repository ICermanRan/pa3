/***********************
author:ran
description:取指模块(因为用c++写指令存储器，所以这里的取指只关心pc)
*************************/
`include "vsrc/defines.v"
module ysyx_22050078_IFU #(parameter ADDR_WIDTH = 64, INST_WIDTH = 32)
(
    //from pc
    input [ADDR_WIDTH - 1:0] pc,

    //from inst_memory
    input [INST_WIDTH - 1:0] inst_in,   //指令存储器->IFU,用于取到指令

    //to IDU
    output [INST_WIDTH - 1:0] inst_out, //IFU->IDU
    output [ADDR_WIDTH - 1:0] pc_IFU2IDU,
    
    //to inst_memory
    output [ADDR_WIDTH - 1:0] pc_IFU2mem//IFU->inst_memory,

);

    assign pc_IFU2mem = pc;
    assign pc_IFU2IDU   = pc;
    assign inst_out = inst_in;




endmodule
