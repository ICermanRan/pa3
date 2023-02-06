/***********************
author:ran
description:译码模块
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"
module ysyx_22050078_IDU 
#(parameter  
            DATA_WIDTH = 64,  
            INSTADDR_WIDTH = 64, 
            PC_WIDTH = 64)
(
    //from IFU
    input [`INST_WIDTH - 1:0]         inst_in,          //32位指令
    
    //to regs
    output reg [`REG_ADDRW - 1:0]     o_rs1_addr,           //源寄存器1(地址)
    output reg [`REG_ADDRW - 1:0]     o_rs2_addr,           //源寄存器2(地址)
    output reg [`REG_ADDRW - 1:0]     o_rd_addr,            //目标寄存器(地址)
    output reg                        o_rd_wen,

    //to EXU
    output reg [`CPU_WIDTH - 1:0]     o_imm,           //符号扩展后的32位立即数
    output reg [`EXU_SEL_WIDTH - 1:0] o_exu_src_sel,
    output reg [`EXU_OPT_WIDTH - 1:0] o_exu_opt,

    //to LSU
    output reg [`LSU_OPT_WIDTH-1:0]   o_lsu_opt, 
   
    //to PCU
    output                            o_brch,
    output                            o_jal,
    output                            o_jalr,

    //to simulation
    //for sim. bit0:opc_err, bit1:func3_err, bit2:func7_err
    output reg [2:0]                  s_id_err
);

    // output [`INST_WIDTH - 1:0] inst_out,          //32位指令 
    wire [6:0] func7;
    wire [2:0] func3;   
    wire [4:0] rs1_addr;
    wire [4:0] rs2_addr;
    wire [4:0] rd_addr;
    wire [6:0] opcode;                       //7位操作码

    

//对指令inst译码，赋给不同的操作数
    assign func7    = inst_in[31:25];
    assign rs2_addr = inst_in[24:20];
    assign rs1_addr = inst_in[19:15];
    assign func3    = inst_in[14:12];
    assign rd_addr  = inst_in[11: 7];
    assign opcode   = inst_in[ 6: 0];

    wire [DATA_WIDTH - 1:0] I_imm;
    wire [DATA_WIDTH - 1:0] U_imm;
    wire [DATA_WIDTH - 1:0] S_imm;
    wire [DATA_WIDTH - 1:0] J_imm;
    wire [DATA_WIDTH - 1:0] R_imm;
    wire [DATA_WIDTH - 1:0] B_imm;


//把指令及指令地址传给EXU 
    assign inst_out = inst_in;
    //assign inst_addr_out = inst_addr_in;


 //不同指令类型的立即数产生(要实现符号位扩展,这里是扩展到64位)
    assign I_imm = { {52{inst_in[31]}}, inst_in[31:20] };//符号位扩展
    assign U_imm = { {32{inst_in[31]}}, inst_in[31:12], {12{1'b0}} };
    assign J_imm = { {43{inst_in[31]}}, inst_in[31], inst_in[19:12], inst_in[20], inst_in[30:21], 1'b0};
    assign B_imm = { {51{inst_in[31]}}, inst_in[31], inst_in[7], inst_in[30:25], inst_in[11:8], 1'b0};
    assign S_imm = { {52{inst_in[31]}}, inst_in[31:25], inst_in[11:7]};


    //1.reg info, imm info:  ///////////////////////////////////////////////////////////////////////////
    always@(*) begin
      o_imm      = 64'b0;
      o_rs1_addr = 5'b0;
      o_rs2_addr = 5'b0;
      o_rd_addr  = 5'b0;
      o_rd_wen   = 1'b0;
        case(opcode)
          `ysyx_22050078_INST_TYPE_R:
            begin
              o_rs1_addr = rs1_addr;
              o_rs2_addr = rs2_addr;
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = 64'b0;
            end

          `ysyx_22050078_INST_TYPE_R_W:
            begin
              o_rs1_addr = rs1_addr;
              o_rs2_addr = rs2_addr;
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = 64'b0;
            end

          `ysyx_22050078_INST_TYPE_I:
            begin
              o_rs1_addr = rs1_addr;
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = I_imm;
            end

          `ysyx_22050078_INST_TYPE_I_W:
            begin
              o_rs1_addr = rs1_addr;
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = I_imm;
            end

          `ysyx_22050078_INST_TYPE_I_LOAD:
            begin
              o_rs1_addr = rs1_addr;
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = I_imm;
            end
            
          `ysyx_22050078_INST_TYPE_I_JALR:
            begin
              o_rs1_addr = rs1_addr;
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = I_imm;
            end
          
          `ysyx_22050078_INST_TYPE_I_EBREAK:
            begin
              o_rs1_addr = rs1_addr;
              o_rd_addr  = rd_addr;
            end

          `ysyx_22050078_INST_TYPE_U_AUIPC:
            begin
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = U_imm;
            end

          `ysyx_22050078_INST_TYPE_U_LUI:
            begin
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = U_imm;
            end

          `ysyx_22050078_INST_TYPE_J:
            begin
              o_rd_addr  = rd_addr;
              o_rd_wen   = 1'b1;
              o_imm      = J_imm;
            end
            default: ;
        endcase

    end

  //2.alu info:  /////////////////////////////////////////////////////////////////////////////////////
  always @(*) begin
    o_exu_opt     = `EXU_ADD;
    o_exu_src_sel = `EXU_SEL_IMM;
    s_id_err      = 3'b0;
      case(opcode)
        `ysyx_22050078_INST_TYPE_I_EBREAK:
        // no use, dirct break.
          begin
            
          end

        `ysyx_22050078_INST_TYPE_I_LOAD:
        // x[rd] = M[rs1+imm]
          begin
            o_exu_opt     = `EXU_ADD;
            o_exu_src_sel = `EXU_SEL_IMM;
          end

        `ysyx_22050078_INST_TYPE_I_JALR:
        // x[rd] = PC+4
          begin
            o_exu_opt     = `EXU_ADD;
            o_exu_src_sel = `EXU_SEL_PC4;
          end

        `ysyx_22050078_INST_TYPE_J:
        // x[rd] = PC+4  
          begin
            o_exu_opt     = `EXU_ADD;
            o_exu_src_sel = `EXU_SEL_PC4;
          end

        `ysyx_22050078_INST_TYPE_U_AUIPC:
        // x[rd] = pc + imm
          begin
            o_exu_opt     = `EXU_ADD;
            o_exu_src_sel = `EXU_SEL_PCI;
          end

        `ysyx_22050078_INST_TYPE_U_LUI:
        // x[rd] = x0 + imm
          begin
            o_exu_opt     = `EXU_ADD;
            o_exu_src_sel = `EXU_SEL_IMM;
          end

        `ysyx_22050078_INST_TYPE_I:
          begin
            o_exu_src_sel = `EXU_SEL_IMM;
            case(func3)
              `FUNC3_ADDI_ADDIW:     o_exu_opt = `EXU_ADD;
              `FUNC3_SLLIW:          o_exu_opt = `EXU_SLL;
              `FUNC3_SRL_SRA_DIVU:  
                case(func7[6:1]) 
                  6'b000000:o_exu_opt    = `EXU_SRL;
                  6'b010000:o_exu_opt    = `EXU_SRA;
                  default:   s_id_err[2]  = 1'b1;
                endcase
              `FUNC3_XORI:          o_exu_opt = `EXU_XOR;
              `FUNC3_ORI:           o_exu_opt = `EXU_OR;
              `FUNC3_ANDI:          o_exu_opt = `EXU_AND;
              `FUNC3_SLTI:          o_exu_opt = `EXU_SLT;
              default:              s_id_err[1] = 1'b1; //func3_err
            endcase
          end

        `ysyx_22050078_INST_TYPE_I_W:
          begin
            o_exu_src_sel = `EXU_SEL_IMM;
            case(func3)
              `FUNC3_ADDW_SUBW_MULW:o_exu_opt = `EXU_ADDW;
              // `FUNC3_SLLW:          o_exu_opt = `EXU_SLLW;
              `FUNC3_SRLIW_SRAIW:
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_SRLW;
                  7'b0100000:o_exu_opt = `EXU_SRAW;
                  default:   s_id_err[2] = 1'b1;
                endcase  
              default:       s_id_err[1] = 1'b1; //func3_err;   
            endcase 
          end

        `ysyx_22050078_INST_TYPE_R:
          begin
            o_exu_src_sel = `EXU_SEL_REG;
            case(func3)
              `FUNC3_ADD_SUB_MUL:
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_ADD;
                  7'b0100000:o_exu_opt = `EXU_SUB;
                  7'b0000001:o_exu_opt = `EXU_MUL;
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_SRL_SRA_DIVU:
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_SRL;
                  7'b0100000:o_exu_opt = `EXU_SRA;
                  7'b0100001:o_exu_opt = `EXU_DIVU;
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_SLL_MULH:
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_SLL;
                  7'b0000000:o_exu_opt = `EXU_MULH;
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_XOR_DIV://100
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_XOR;
                  7'b0000001:o_exu_opt = `EXU_DIV;
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_OR_REM://110
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_OR;
                  7'b0000001:o_exu_opt = `EXU_REM;
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_AND_REMU://111
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_AND;
                  7'b0000001:o_exu_opt = `EXU_REMU;
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_SLT_MULHSU://010
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_SLT;
                  7'b0000001:o_exu_opt = `EXU_MULHSU;
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_SLTU_MULHU:
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_SLTU;
                  7'b0000001:o_exu_opt = `EXU_MULHU;
                  default:   s_id_err[2] = 1'b1;
                endcase
              default:      s_id_err[1] = 1'b1; //func3_err
            endcase
          end
       
        `ysyx_22050078_INST_TYPE_R_W:
          begin
            o_exu_src_sel = `EXU_SEL_REG;
            case(func3)
              `FUNC3_ADDW_SUBW_MULW:
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_ADDW;
                  7'b0100000:o_exu_opt = `EXU_SUBW; 
                  7'b0000001:o_exu_opt = `EXU_MULW;
                  default:s_id_err[2] = 1'b1; 
                endcase

              `FUNC3_SRLW_SRAW_DIVUW:
                case(func7)
                  7'b0000000:o_exu_opt = `EXU_SRLW;
                  7'b0100000:o_exu_opt = `EXU_SRAW; 
                  7'b0000001:o_exu_opt = `EXU_DIVUW;
                  default:s_id_err[2] = 1'b1; 
                endcase

              `FUNC3_DIVW:   o_exu_opt = `EXU_DIVW;
              `FUNC3_REMW:   o_exu_opt = `EXU_REMW; 
              `FUNC3_SLLW:   o_exu_opt = `EXU_SLLW; 
              default:       s_id_err[1] = 1'b1; //func3_err
            endcase
          end
        default:  s_id_err[0] = 1'b1; //opc_err
      endcase
  end

  // 3.lsu:  /////////////////////////////////////////////////////////////////////////////////////////
  always @(*) begin
    case(opcode)
      `ysyx_22050078_INST_TYPE_I_LOAD: o_lsu_opt = {func3, 1'b0};
      default:                         o_lsu_opt = `LSU_NOP;
    endcase
    
  end

  // 4.pcu: branch,o_jal,o_jalr.  ////////////////////////////////////////////////////////////////////
  assign o_brch = (opcode == `ysyx_22050078_INST_TYPE_B) ? 1:0;
  assign o_jal  = (opcode == `ysyx_22050078_INST_TYPE_J) ? 1:0;
  assign o_jalr  = (opcode == `ysyx_22050078_INST_TYPE_I_JALR) ? 1:0;

endmodule
