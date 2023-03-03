// cpu width define:
`define CPU_WIDTH 64
`define INST_WIDTH 32
`define REG_ADDRW  5
`define ADDR_WIDTH 5


//reg0:value and rst
`define     ysyx_22050078_pc_rst          64'h0000_0000_8000_0000   //0x80000000
`define		  ysyx_22050078_zero_word		    64'h0


/* opcode -> ins type: */
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
`define  ysyx_22050078_INST_TYPE_B        7'b1100011  //B type for beq/bne/bge/blt/bgeu

//U-type inst
`define  ysyx_22050078_INST_TYPE_U_AUIPC  7'b0010111  //U type for auipc
`define  ysyx_22050078_INST_TYPE_U_LUI    7'b0110111  //U type for lui

//J-type inst
`define  ysyx_22050078_INST_TYPE_J        7'b1101111  //J type for jal

//S-type inst
`define  ysyx_22050078_INST_TYPE_S        7'b0100011  //S type 

/********************************************************************/

// EXU source selection:
`define EXU_SEL_WIDTH   2
//`define EXU_SEL_REG     2'b00
//`define EXU_SEL_IMM 2'b01
// `define EXU_SEL_PC4     2'b10
//`define EXU_SEL_PCI     2'b11
`define EXU_SEL_RS1_RS2 2'b00
`define EXU_SEL_RS1_IMM 2'b01
`define EXU_SEL_PC_4    2'b10
`define EXU_SEL_PC_IMM  2'b11

// EXU opreator:
`define EXU_OPT_WIDTH   6
`define EXU_ADD         6'h1
`define EXU_SUB         6'h2
`define EXU_ADDW        6'h3
`define EXU_SUBW        6'h4
`define EXU_AND         6'h5
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
`define EXU_REMUW       6'h26
`define EXU_SLT         6'h27
`define EXU_SLTU        6'h28
`define EXU_BEQ         6'h29
`define EXU_BNE         6'h30
`define EXU_BLT         6'h31
`define EXU_BGE         6'h32
`define EXU_BLTU        6'h33
`define EXU_BGEU        6'h34



//  ALU opreator:
`define ALU_ADD         6'h1
`define ALU_SUB         6'h2  //use for sub,slt,beq,bne,blt,bge
`define ALU_ADDW        6'h3
`define ALU_SUBW        6'h4
`define ALU_AND         6'h5
`define ALU_OR          6'h6
`define ALU_XOR         6'h7
`define ALU_SLL         6'h8
`define ALU_SRL         6'h9
`define ALU_SRA         6'h10
`define ALU_SLLW        6'h11
`define ALU_SRLW        6'h12
`define ALU_SRAW        6'h13
`define ALU_MUL         6'h14
`define ALU_MULH        6'h15
`define ALU_MULHSU      6'h16
`define ALU_MULHU       6'h17
`define ALU_DIV         6'h18
`define ALU_DIVU        6'h19
`define ALU_REM         6'h20
`define ALU_REMU        6'h21
`define ALU_MULW        6'h22
`define ALU_DIVW        6'h23
`define ALU_DIVUW       6'h24
`define ALU_REMW        6'h25


`define ALU_SUBU        6'h35

//  LSU selection:
`define LSU_OPT_WIDTH   4
`define LSU_LB          4'b0000    // 000 for FUNC3_LB_SB, 0 for load
`define LSU_LH          4'b0010    // 001 for FUNC3_LH_SH, 0 for load
`define LSU_LW          4'b0100    // 010 for FUNC3_LW_SW, 0 for load
`define LSU_LD          4'b0110    // 011 for FUNC3_LD_SD, 0 for load
`define LSU_LBU         4'b1000    // 100 for FUNC3_LBU,   0 for load
`define LSU_LHU         4'b1010    // 101 for FUNC3_LHU,   0 for load
`define LSU_LWU         4'b1100    // 110 for FUNC3_LWU,   0 for load
`define LSU_SB          4'b0001    // 000 for FUNC3_LB_SB, 1 for store
`define LSU_SH          4'b0011    // 001 for FUNC3_LH_SH, 1 for store
`define LSU_SW          4'b0101    // 010 for FUNC3_LW_SW, 1 for store
`define LSU_SD          4'b0111    // 011 for FUNC3_LD_SD, 1 for store
`define LSU_NOP         4'b1111    //1111 for nop!! "lowest bit = 0" <=> "this is an load ins"



//func3
`define FUNC3_ADDI              3'b000        //ADDI
`define FUNC3_ADDIW             3'b000        //ADDIW  
`define FUNC3_ADD_SUB_MUL       3'b000        //ADD SUB MUL
`define FUNC3_ADDW_SUBW_MULW    3'b000        //ADDW SUBW MULW
`define FUNC3_SUB_MUL           3'b000        //SUB MUL
`define FUNC3_ADDW              3'b000        //ADDW
`define FUNC3_BEQ               3'b000        //BEQ   

`define FUNC3_SLL_MULH          3'b001        //SLL MULH 
`define FUNC3_SLLI              3'b001        //SLLI
`define FUNC3_SLLIW             3'b001        //SLLIW
`define FUNC3_SLLW              3'b001        //SLLW
`define FUNC3_BNE               3'b001        //BNE

`define FUNC3_SLTI              3'b010        //SLTI
`define FUNC3_SLT_MULHSU        3'b010        //SLT MULHSU
`define FUNC3_SLTU_MULHU        3'b011        //STLU MULHU
`define FUNC3_SLTIU             3'b011        //SLTIU
`define FUNC3_XOR_DIV           3'b100        //XOR DIV DIVW
`define FUNC3_XORI              3'b100        //XORI 
`define FUNC3_DIVW              3'b100        //DIVW
`define FUNC3_BLT               3'b100        //BLT

`define FUNC3_SRLI_SRAI         3'b101        //SRLI SRAI
`define FUNC3_SRL_SRA_DIVU      3'b101        //SRL SRA  DIVU 
`define FUNC3_SRLIW_SRAIW       3'b101        //SRLIW SRAIW
`define FUNC3_SRLW_SRAW_DIVUW   3'b101        //SRLW SRAW DIVUW
`define FUNC3_BGE               3'b101        //BGE

`define FUNC3_OR_REM            3'b110        //OR  REM 
`define FUNC3_ORI               3'b110        //ORI
`define FUNC3_REMW              3'b110        //REMW
`define FUNC3_BLTU              3'b110        //BLTU

`define FUNC3_ANDI              3'b111        //ANDI
`define FUNC3_AND_REMU          3'b111        //AND  REMU 
`define FUNC3_REMUW             3'b111        //REMUW
`define FUNC3_BGEU              3'b111        //BGEU
