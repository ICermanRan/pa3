/***********************
author:ran
description:32个寄存器：x0-x31
*************************/

`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_regfile #(parameter ADDR_WIDTH = 5, DATA_WIDTH = 64) 
(
    input                           clk,
   
    //from bypass-logic
    input       [`CPU_WIDTH - 1:0]  i_wdata,    //可能是EXU的计算结果，也可能是LSU的取值结果
    input                           i_wen,      //from IDU-o_rd_wen
    input       [`REG_ADDRW - 1:0]  i_waddr,    //from IDU-o_rd_addr
    input       [`REG_ADDRW - 1:0]  i_rs1_addr, //源寄存器1(地址)
    input       [`REG_ADDRW - 1:0]  i_rs2_addr, //源寄存器2(地址)
    
    //to bypass-logic
    output wire [`CPU_WIDTH - 1:0]  o_rs1_data, //src1
    output wire [`CPU_WIDTH - 1:0]  o_rs2_data, //src2
    output                          s_a0zero //use for sim, good trap or bad trap.
);
  
  reg [`CPU_WIDTH-1:0] regs [31:0];   //32个32位的寄存器
  
  // assign regs[0] = `CPU_WIDTH'b0;
  
//write(往某个寄存器内写数据)  
  // always @(posedge clk) begin
  //   if (i_wen)
  //     begin 
  //       if(i_waddr == 5'b0)
  //         regs[i_waddr] <= 64'b0;
  //       else
  //         regs[i_waddr] <= i_wdata;
  //     end
  // end
  generate
    for(genvar i = 0; i < 32; i = i + 1) begin:regfile
      always @(posedge clk) begin
        if (i == 0) begin
          regs[i] <= `CPU_WIDTH'b0;
         end
        else if (i_wen && i_waddr == i) begin
          regs[i] <= i_wdata;
         end
      end  
    end

  endgenerate

//read(读对应寄存器里的值)
  // assign o_rs1_data = (rs1_addr == 5'd0) ? `ysyx_22050078_zero_word : regs[rs1_addr]; //地址为0则读$0
  // assign o_rs2_data = (rs2_addr == 5'd0) ? `ysyx_22050078_zero_word : regs[rs2_addr]; //地址为0则读$0
  assign o_rs1_data =  regs[i_rs1_addr]; 
  assign o_rs2_data =  regs[i_rs2_addr]; 


  //for sim:  ////////////////////////////////////////////////////////////////////////////////////////////
  // assign s_a0zero = (regs[10] == 64'd0 ) ? 1:0; // if x[10]/a0 is zero, o_a0zero == 1
  assign s_a0zero = ~|regs[10]; // if x[10]/a0 is zero, o_a0zero == 1

  //output是将C语言函数的输出调用到数字IC里面，数据方向是:C–>IC；
  //input是将数字IC的输入导入到C语言函数里面，数据方向是:IC—>C;
  import "DPI-C" function void set_reg_ptr(input logic [63:0] a []);
  initial set_reg_ptr(regs);

endmodule
