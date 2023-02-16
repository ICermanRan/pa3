/***********************
author:ran
description:取指模块(因为用c++写指令存储器，所以这里的取指只关心pc)
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"
module ysyx_22050078_IFU 
(
    input clk,

    //from pc
    input  [`CPU_WIDTH - 1:0]   i_pc,

    input                       rst_n,

    //to IDU
    output [`INST_WIDTH - 1:0]  inst_out  //IFU->IDU
   

);
     //from inst_memory
    wire [`CPU_WIDTH - 1:0] inst;   //指令存储器->IFU,用于取到指令

    import "DPI-C" function void rtl_pmem_read(input longint raddr, output longint rdata, input bit ren);
    import "DPI-C" function void diff_read_pc(input longint rtl_pc);


    always @(*) begin
        rtl_pmem_read(i_pc, inst, rst_n);
        diff_read_pc(i_pc);
     end

    // always @(posedge clk) begin
    //   $display("inst = %h", inst[31:0]);
    //   $display("pc = %h\n", i_pc);
      
    // end

    //保留低32位作为指令输出
    assign inst_out = inst[`INST_WIDTH - 1:0];
 




endmodule
