//reg0:value and rst
`define     ysyx_22050078_pc_rst          64'h0000_0000_8000_0000   //0x80000000
`define		ysyx_22050078_zero_word		64'h0

////停止 EBREAK指令被调试器所使用，用来将控制权传送回给调试环境
`define ysyx_22050078_INST_ebreak 32'h00100073

//I-type inst
`define  ysyx_22050078_INST_TYPE_I 7'b0010011
`define  ysyx_22050078_INSTfunc3_addi   3'b000
