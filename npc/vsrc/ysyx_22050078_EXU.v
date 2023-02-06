/***********************
author:ran
description:执行模块
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"

module ysyx_22050078_EXU 
(
  input [`CPU_WIDTH-1:0]      pc,

  //from regs
  input [`CPU_WIDTH-1:0]      i_rs1_data,  //源寄存器1数据
  input [`CPU_WIDTH-1:0]      i_rs2_data,  //源寄存器2数据
    
  //from IDU
  input [`CPU_WIDTH-1:0]      i_imm,
  input [`EXU_SEL_WIDTH-1:0]  i_src_sel ,
  input [`EXU_OPT_WIDTH-1:0]  i_opt     ,

  //to LSU
  output reg [`CPU_WIDTH-1:0] o_exu_res ,
    
  //to PCU
  output reg                  o_zero
);

  reg [`CPU_WIDTH-1:0] src1,src2;

  
  // always@(*) begin
  //   case (i_src_sel)
  //     `EXU_SEL_REG: src1 = i_rs1_data;
  //     `EXU_SEL_IMM: src1 = i_rs1_data;
  //     `EXU_SEL_PC4: src1 = pc;
  //     `EXU_SEL_PCI: src1 = pc;
  //     default    :  src1 = 64'b0;
  //   endcase
  // end

  //          ^
  //          |
  //          |
  MuxKeyWithDefault #(4, `EXU_SEL_WIDTH, `CPU_WIDTH) mux_src1 (src1, i_src_sel, `CPU_WIDTH'b0, {
    `EXU_SEL_REG, i_rs1_data,
    `EXU_SEL_IMM, i_rs1_data,
    `EXU_SEL_PC4, pc,
    `EXU_SEL_PCI, pc
  });
         
  // always@(*) begin
  //   case (i_src_sel)
  //     `EXU_SEL_REG: src2 = i_rs2_data;
  //     `EXU_SEL_IMM: src2 = i_mm;
  //     `EXU_SEL_PC4: src2 = 64'h4;
  //     `EXU_SEL_PCI: src2 = imm;
  //     default    :  src2 = 64'b0;
  //   endcase
  // end

  //          ^
  //          |
  //          |
  MuxKeyWithDefault #(4, `EXU_SEL_WIDTH, `CPU_WIDTH) mux_src2 (src2, i_src_sel, `CPU_WIDTH'b0, {
    `EXU_SEL_REG, i_rs2_data,
    `EXU_SEL_IMM, i_imm,
    `EXU_SEL_PC4, `CPU_WIDTH'h4,
    `EXU_SEL_PCI, i_imm
});
  













endmodule
