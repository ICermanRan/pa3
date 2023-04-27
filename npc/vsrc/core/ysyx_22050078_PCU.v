// /***********************
// author:ran
// description:pc寄存器
// *************************/
// `include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
// module ysyx_22050078_PCU(
//   input                  clk,
//   input                  rst_n,
  
//   //from IDU
//   input                  i_brch,//B-type
//   input                  i_jal, //J-type
//   input                  i_jalr,//I-jalr
//   input [`CPU_WIDTH-1:0] i_imm,
  
//   //from EXU
//   input                  i_zero,//用于判断EXU的计算结果是否为0
//                                 //若为0，则o_zero = 1;若不为0，则o_zero = 0

//   //from regfile
//   input [`CPU_WIDTH-1:0] i_rs1,
  
//   output[`CPU_WIDTH-1:0] o_pc,
//   output[`CPU_WIDTH-1:0] o_dnpc
// );

//   wire [`CPU_WIDTH-1:0] pc_next;

//   //beq:if src1 - src2 == 0 ——> ~i_zero = 1, pc_next = o_pc + i_imm
//       //if src1 - src2 != 0 ——> ~i_zero = 0, pc_next = o_pc + 4
//   //bne:if src1 - src2 == 0 ——> ~i_zero = 0, pc_next = o_pc + 4
//       //if src1 - src2 != 0 ——> ~i_zero = 1, pc_next = o_pc + i_imm
//   //blt:if src1 >= src2     ——> ~i_zero = 0, pc_next = o_pc + 4
//       //if src1 < src2      ——> ~i_zero = 1, pc_next = o_pc + i_imm 
//   //bge:if src1 >= src2     ——> ~i_zero = 1, pc_next = o_pc + i_imm 
//       //if src1 < src2      ——> ~i_zero = 0, pc_next = o_pc + 4
//  //bltu:if src1 >= src2     ——> ~i_zero = 0, pc_next = o_pc + 4
//       //if src1 < src2      ——> ~i_zero = 1, pc_next = o_pc + i_imm 
//  //bgeu:if src1 >= src2     ——> ~i_zero = 1, pc_next = o_pc + i_imm 
//       //if src1 < src2      ——> ~i_zero = 0, pc_next = o_pc + 4
//   assign pc_next = (i_brch && ~i_zero || i_jal) ? (o_pc + i_imm) : (i_jalr ? (i_rs1 + i_imm) : (o_pc + 4) );
//   assign o_dnpc  = pc_next;

//   stdreg #(
//     .WIDTH     (`CPU_WIDTH),
//     .RESET_VAL (64'h80000000)
//   )u_stdreg(
//     .clk   (clk),
//     .rst_n (rst_n),
//     .i_wen (1),
//     .i_din (pc_next),
//     .o_dout(o_pc)
//   );




// endmodule
