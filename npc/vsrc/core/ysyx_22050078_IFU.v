/***********************
author:ran
description:取指模块(因为用c++写指令存储器，所以这里的取指只关心pc)
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_IFU 
(
    input en,
    input clk,

    //from PCU
    input  [`CPU_WIDTH - 1:0]   i_pc,
    input  [`CPU_WIDTH - 1:0]   i_dnpc,

    input                       rst_n,

    //to IDU
    output [`INST_WIDTH - 1:0]  inst_out  //IFU->IDU
   

);
     //from inst_memory
    wire [`CPU_WIDTH - 1:0] inst;   //指令存储器->IFU,用于取到指令

    import "DPI-C" function void rtl_pmem_read(input longint raddr, output longint rdata, input bit ren);



    always @(*) begin
        // $display("i_pc = %h", i_pc);
        rtl_pmem_read(i_pc, inst, rst_n);
     end

    // always @(posedge clk) begin
    //   $display("IFU触发");
    //   $display("i_pc = %h", i_pc);
    //   $display("inst_out = %h", inst_out);
    //   rtl_pmem_read(i_pc, inst, rst_n);
    //   diff_read_pc(i_pc);
    //  end

    //  always_latch @(clk) begin
    //   //  $display("IFU触发");
    //   if(!clk) begin
    //     diff_read_pc(i_pc);
    //     rtl_pmem_read(i_pc, inst, rst_n);
    //    end
    // end

    // always @(*) begin
    //   $display("inst = %h", inst[31:0]);
    //   $display("pc = %h\n", i_pc);
      
    // end

    //保留低32位作为指令输出
    assign inst_out = inst[`INST_WIDTH - 1:0];
 





endmodule
