// /***********************
// author:ran
// description:取指模块(因为用c++写指令存储器，所以这里的取指只关心pc)
// *************************/
// `include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
// module ysyx_22050078_IFU 
// (
//     //from BRU
//     input  [`CPU_WIDTH - 1:0]   i_pc,
//     // input  [`CPU_WIDTH - 1:0]   i_dnpc,

//     input                       rst_n,

//     //to IDU
//     output [`INST_WIDTH - 1:0]  inst_out  //IFU->IDU
   

// );
//      //from inst_memory
//     wire [`CPU_WIDTH - 1:0] inst;   //指令存储器->IFU,用于取到指令
//     wire [`CPU_WIDTH - 1:0] inst_trans;

//     import "DPI-C" function void rtl_pmem_read(input longint raddr, output longint rdata, input bit ren);

//     always @(*) begin
//         $display("IFU pc = %x", i_pc);
//         // $display("IFU rst_n-ren = %h", rst_n);
//         rtl_pmem_read(i_pc, inst, rst_n);
//      end

//     //保留低32位作为指令输出
//     assign inst_trans = {inst & `CPU_WIDTH'h00000000FFFFFFFF};
//     assign inst_out   = inst_trans[`INST_WIDTH - 1:0];
   



// endmodule

`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_IFU (
  input                          i_rst_n,
  input        [`CPU_WIDTH-1:0]  i_pc   ,
  output wire [`INS_WIDTH-1:0]   o_ins   
);

  wire [`CPU_WIDTH-1:0] ins;
  wire [`CPU_WIDTH - 1:0] inst_trans;
  
  import "DPI-C" function void rtl_pmem_read (input longint raddr, output longint rdata, input bit ren);

  always @(*) begin
    // $display("i_pc = %h", i_pc);
    rtl_pmem_read (i_pc, ins, i_rst_n);
  end

  // assign o_ins = {ins & `CPU_WIDTH'h00000000FFFFFFFF}[`INS_WIDTH-1:0];

  assign inst_trans = {ins & `CPU_WIDTH'h00000000FFFFFFFF};
  assign o_ins      = inst_trans[`INS_WIDTH - 1:0];
endmodule
