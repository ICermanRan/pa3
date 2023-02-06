// cpu width define:
`define CPU_WIDTH 64
`define INST_WIDTH 32
`define REG_ADDRW  5
`define ADDR_WIDTH 5


//reg0:value and rst
`define     ysyx_22050078_pc_rst          64'h0000_0000_8000_0000   //0x80000000
`define		  ysyx_22050078_zero_word		    64'h0



//I-type inst
`define  ysyx_22050078_INST_TYPE_I        7'b0010011  //I type for addi/slli/srli/srai/xori/ori/andi
`define  ysyx_22050078_INST_TYPE_I_W      7'b0011011  //I type for addiw/slliw/srliw/sraiw
`define  ysyx_22050078_INST_TYPE_I_LOAD   7'b0000011  //I type for lb/lh/lw/lbu/lhu
`define  ysyx_22050078_INST_TYPE_I_JALR   7'b1100111  //I type for jalr
`define  ysyx_22050078_INST_TYPE_I_EBREAK 7'b1110011  //I type for ecall/ebreak

//R-type inst
`define  ysyx_22050078_INST_TYPE_R        7'b0110011  //R type for add/sub/sll/srl/sra/mul/mulh/mulhsu/mulhu/div/divu/rem/remu
`define  ysyx_22050078_INST_TYPE_R_W      7'b0111011  //R type for addw/subw/sllw/srlw/sraw/mulw/divw/divuw/remw/remuw 

//B-type inst
`define  ysyx_22050078_INST_TYPE_B        7'b1100011  //B type

//U-type inst
`define  ysyx_22050078_INST_TYPE_U_AUIPC  7'b0010111  //U type for auipc
`define  ysyx_22050078_INST_TYPE_U_LUI    7'b0110111  //U type for lui

//J-type inst
`define  ysyx_22050078_INST_TYPE_J        7'b1101111  //J type for jal

// EXU source selection:
`define EXU_SEL_WIDTH   2
`define EXU_SEL_REG     2'b00
`define EXU_SEL_IMM     2'b01
`define EXU_SEL_PC4     2'b10
`define EXU_SEL_PCI     2'b11

// EXU opreator:
`define EXU_OPT_WIDTH   6
`define EXU_ADD         6'h1
`define EXU_SUB         6'h2
`define EXU_ADDW        6'h3
`define EXU_SUBW        6'h4
`define EXU_AND         6'h6
`define EXU_OR          6'h6
`define EXU_XOR         6'h7
`define EXU_SLL         6'h8
`define EXU_SRL         6'h9
`define EXU_SRA         6'h10
`define EXU_SLLW        6'h11
`define EXU_SRLW        6'h12
`define EXU_SRAW        6'h13
`define EXU_MUL         6'h14
`define EXU_MULH        6'h15
`define EXU_MULHSU      6'h16
`define EXU_MULHU       6'h17
`define EXU_DIV         6'h18
`define EXU_DIVU        6'h19
`define EXU_REM         6'h20
`define EXU_REMU        6'h21
`define EXU_MULW        6'h22
`define EXU_DIVW        6'h23
`define EXU_DIVUW       6'h24
`define EXU_REMW        6'h25
`define EXU_SLT         6'h27
`define EXU_SLTU        6'h28






//  LSU selection:
`define LSU_OPT_WIDTH   4
`define LSU_NOP         `LSU_OPT_WIDTH'b1111    //1111 for nop!! "lowest bit = 0" <=> "this is an load ins"



//func3
`define FUNC3_ADDI_ADDIW        3'b000        //ADDI ADDIW 
`define FUNC3_ADD_SUB_MUL       3'b000        //ADD SUB MUL
`define FUNC3_ADDW_SUBW_MULW    3'b000        //ADDW SUBW MULW
`define FUNC3_SUB_MUL           3'b000        //SUB MUL
`define FUNC3_ADDW              3'b000        //ADDW             
`define FUNC3_SLL_MULH          3'b001        //SLL MULH SLLI  
`define FUNC3_SLLIW             3'b001        //SLLIW
`define FUNC3_SLLW              3'b001        //SLLW
`define FUNC3_SLTI              3'b010        //SLTI
`define FUNC3_SLT_MULHSU        3'b010        //SLT MULHSU
`define FUNC3_SLTU_MULHU        3'b011        //STLU STLUI MULHU
`define FUNC3_XOR_DIV           3'b100        //XOR XORI DIV DIVW
`define FUNC3_XORI              3'b100        //XORI 
`define FUNC3_DIVW              3'b100        //DIVW
`define FUNC3_SRL_SRA_DIVU      3'b101        //SRL SRLI SRA SRAI  DIVU 
`define FUNC3_SRLIW_SRAIW       3'b101        //SRLIW SRAIW
`define FUNC3_SRLW_SRAW_DIVUW   3'b101        //SRLW SRAW DIVUW
`define FUNC3_OR_REM            3'b110        //OR  REM REMW
`define FUNC3_ORI               3'b110        //ORI
`define FUNC3_REMW              3'b110        //REMW
`define FUNC3_ANDI              3'b111        //ANDI
`define FUNC3_AND_REMU          3'b111        //AND  REMU 
`define FUNC3_REMUW             3'b111        //REMUW