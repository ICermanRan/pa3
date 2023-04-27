/***********************
author:ran
description:32个寄存器：x0-x31
*************************/

`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_regfile #(parameter ADDR_WIDTH = 5, DATA_WIDTH = 64) 
(
    input                           i_clk,
   
    //from bypass-logic
    input                           i_wen,      //from IDU-o_rd_wen
    input       [`REG_ADDRW - 1:0]  i_waddr,    //from IDU-o_rd_addr
    input       [`CPU_WIDTH - 1:0]  i_wdata,    //可能是EXU的计算结果，也可能是LSU的取值结果
    input       [`REG_ADDRW - 1:0]  i_rs1_addr, //源寄存器1(地址)
    input       [`REG_ADDRW - 1:0]  i_rs2_addr, //源寄存器2(地址)
    
    //to bypass-logic
    output wire [`CPU_WIDTH - 1:0]  o_rs1_data, //src1
    output wire [`CPU_WIDTH - 1:0]  o_rs2_data, //src2
    output                          s_a0zero //use for sim, good trap or bad trap.
);
  
  reg [`CPU_WIDTH-1:0] regs [31:0];   //32个64位的寄存器
  
  // assign regs[0] = `CPU_WIDTH'b0;
  
//write(往某个寄存器内写数据)  
  // always @(posedge i_clk) begin
  //   if (i_wen)
  //     begin 
  //       if(i_waddr == 5'b0)
  //         regs[i_waddr] <= 64'b0;
  //       else
  //         regs[i_waddr] <= i_wdata;
  //     end
  // end
  generate
    for(genvar i = 1; i < 32; i = i + 1) begin:regfile
      always @(posedge i_clk) begin
        if (i_wen && i_waddr == i) begin
          regs[i] <= i_wdata;
         end
      end  
    end

  endgenerate

//read(读对应寄存器里的值)
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


// `include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.sv"
// module ysyx_22050078_regfile (
//   input                         i_clk   ,
//   input                         i_wen   ,
//   input        [`REG_ADDRW-1:0] i_waddr ,
//   input        [`CPU_WIDTH-1:0] i_wdata ,
//   input        [`REG_ADDRW-1:0] i_raddr1,
//   input        [`REG_ADDRW-1:0] i_raddr2,
//   output logic [`CPU_WIDTH-1:0] o_rdata1,
//   output logic [`CPU_WIDTH-1:0] o_rdata2,
//   output logic                  s_a0zero  //use for sim, good trap or bad trap.
// );

//   logic [`CPU_WIDTH-1:0] rf [`REG_COUNT-1:0];

//   assign rf[0] = `CPU_WIDTH'b0; // x[0] must be inital, and it can never be written.

//   generate                      // x[1]-x[31]:
//     for(genvar i=1; i<`REG_COUNT; i=i+1 )begin: regfile
//       always @(posedge i_clk) begin
//         if (i_wen && i_waddr == i) begin
//           rf[i] <= i_wdata;
//         end
//       end
//     end
//   endgenerate

//   assign o_rdata1 = rf[i_raddr1];
//   assign o_rdata2 = rf[i_raddr2];

//   //for sim:  ////////////////////////////////////////////////////////////////////////////////////////////
//   assign s_a0zero = ~|rf[10]; // if x[10]/a0 is zero, o_a0zero == 1
//   import "DPI-C" function void set_reg_ptr(input logic [63:0] a []);
//   initial set_reg_ptr(rf);

// endmodule
