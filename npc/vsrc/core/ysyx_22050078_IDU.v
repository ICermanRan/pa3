/***********************
author:ran
description:译码模块
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"
module ysyx_22050078_IDU (
    //from IFU
    input [`INST_WIDTH - 1:0]          i_ins,          //32位指令
    
    //to regfile
    //to bypass,for get the regs'value
    output reg  [`REG_ADDRW - 1:0]     o_rs1id,           //源寄存器1(地址)
    output reg  [`REG_ADDRW - 1:0]     o_rs2id,           //源寄存器2(地址)
    
    //to pipe_ID_EX
    output reg  [`REG_ADDRW - 1:0]     o_rdid,            //目标寄存器(地址)
    output reg                         o_rdwen,
    output reg  [`CPU_WIDTH - 1:0]     o_imm,           //符号扩展后的32位立即数
    output reg  [`EXU_SEL_WIDTH - 1:0] o_src_sel,//o_src_sel
    output reg  [`EXU_OPT_WIDTH - 1:0] o_exopt,//o_exopt

    //to LSU
    // output reg  [`LSU_OPT_WIDTH-1:0]   o_lsu_opt, 
    output wire [2:0]                  o_lsu_func3,    
    output wire                        o_lsu_lden,//load使能
    output wire                        o_lsu_sten,//store使能,alsot to bypass
    
    //to BRU  
    output wire                        o_jal,
    output wire                        o_jalr,
    output wire                        o_brch,
    output wire [2:0]                  o_bfun3,
    
    //to simulation
    //for sim. bit0:opc_err, bit1:func3_err, bit2:func7_err
    output reg [2:0]                   s_id_err
);

    // output [`INST_WIDTH - 1:0] inst_out,          //32位指令 
    wire [6:0] func7;
    wire [2:0] func3;   
    wire [4:0] rs1_addr;
    wire [4:0] rs2_addr;
    wire [4:0] rd_addr;
    wire [6:0] opcode;                       //7位操作码

    

//对指令inst译码，赋给不同的操作数
// ebreak、ecall are not supported now.ebreak will cause system finish.
    assign func7    = i_ins[31:25];
    assign rs2_addr = i_ins[24:20];
    assign rs1_addr = i_ins[19:15];
    assign func3    = i_ins[14:12];
    assign rd_addr  = i_ins[11: 7];
    assign opcode   = i_ins[ 6: 0];

    wire [`CPU_WIDTH - 1:0] I_imm;
    wire [`CPU_WIDTH - 1:0] U_imm;
    wire [`CPU_WIDTH - 1:0] S_imm;
    wire [`CPU_WIDTH - 1:0] J_imm;
    wire [`CPU_WIDTH - 1:0] R_imm;
    wire [`CPU_WIDTH - 1:0] B_imm;


//把指令及指令地址传给EXU 
    // assign inst_out = i_ins;
    //assign inst_addr_out = inst_addr_in;


 //不同指令类型的立即数产生(要实现符号位扩展,这里是扩展到64位)
    assign I_imm = { {52{i_ins[31]}}, i_ins[31:20] };//符号位扩展
    assign U_imm = { {32{i_ins[31]}}, i_ins[31:12], {12{1'b0}} };
    assign J_imm = { {43{i_ins[31]}}, i_ins[31], i_ins[19:12], i_ins[20], i_ins[30:21], 1'b0};
    assign B_imm = { {51{i_ins[31]}}, i_ins[31], i_ins[7], i_ins[30:25], i_ins[11:8], 1'b0};
    assign S_imm = { {52{i_ins[31]}}, i_ins[31:25], i_ins[11:7]};


  //1.reg info, imm info:  ///////////////////////////////////////////////////////////////////////////
  //src1、src2的来源
    always@(*) begin
      o_imm      = 64'b0;
      o_rs1id = 5'b0;
      o_rs2id = 5'b0;
      o_rdid  = 5'b0;
      o_rdwen   = 1'b0;
        case(opcode)
          `ysyx_22050078_INST_TYPE_R:       begin o_rs1id = rs1_addr;  o_rs2id = rs2_addr;  o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = 64'b0;  end
          `ysyx_22050078_INST_TYPE_R_W:     begin o_rs1id = rs1_addr;  o_rs2id = rs2_addr;  o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = 64'b0;  end
          `ysyx_22050078_INST_TYPE_S:       begin o_rs1id = rs1_addr;  o_rs2id = rs2_addr;                                             o_imm = S_imm;  end
          `ysyx_22050078_INST_TYPE_B:       begin o_rs1id = rs1_addr;  o_rs2id = rs2_addr;                                             o_imm = B_imm;  end
          `ysyx_22050078_INST_TYPE_I:       begin o_rs1id = rs1_addr;                          o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = I_imm;  end
          `ysyx_22050078_INST_TYPE_I_W:     begin o_rs1id = rs1_addr;                          o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = I_imm;  end
          `ysyx_22050078_INST_TYPE_I_LOAD:  begin o_rs1id = rs1_addr;                          o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = I_imm;  end
          `ysyx_22050078_INST_TYPE_I_JALR:  begin o_rs1id = rs1_addr;                          o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = I_imm;  end
          `ysyx_22050078_INST_TYPE_I_EBREAK:begin o_rs1id = rs1_addr;                          o_rdid  = rd_addr;                      o_imm = I_imm;  end
          `ysyx_22050078_INST_TYPE_U_LUI:   begin o_rs1id = 5'b0;                              o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = U_imm;  end
          `ysyx_22050078_INST_TYPE_U_AUIPC: begin                                                 o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = U_imm;  end
          `ysyx_22050078_INST_TYPE_J:       begin                                                 o_rdid  = rd_addr;  o_rdwen   = 1'b1;  o_imm = J_imm;  end
          default: ;
        endcase
         if(o_rdid  == `REG_ADDRW'b0) o_rdwen = 1'b0;  // x[0] can not be written.
    end

  //2.exu info:  /////////////////////////////////////////////////////////////////////////////////////
  always @(*) begin
    o_exopt     = `EXU_ADD;
    o_src_sel     = `EXU_SEL_RS1_IMM;
    s_id_err      = 3'b0;
      case(opcode)
        `ysyx_22050078_INST_TYPE_I_EBREAK:
        // no use, dirct break.
          begin
            
          end

        `ysyx_22050078_INST_TYPE_S:
        //M[rs1+imm] = rs2  
          begin
            o_exopt     = `EXU_ADD;
            o_src_sel   = `EXU_SEL_RS1_IMM;
          end


        `ysyx_22050078_INST_TYPE_I_LOAD:
        // x[rd] = M[rs1+imm]
          begin
            o_exopt     = `EXU_ADD;
            o_src_sel   = `EXU_SEL_RS1_IMM;
          end

        `ysyx_22050078_INST_TYPE_I_JALR:
        // x[rd] = PC+4
        // new pc = (rs1+imm) & (~1)
          begin
            o_exopt       = `EXU_ADD;
            o_src_sel     = `EXU_SEL_PC_4;
          end

        `ysyx_22050078_INST_TYPE_J:
        // x[rd] = PC+4 
        // new pc = (rs1+imm) 
          begin
            o_exopt       = `EXU_ADD;
            o_src_sel     = `EXU_SEL_PC_4;
          end

        `ysyx_22050078_INST_TYPE_U_AUIPC:
        // x[rd] = pc + imm
          begin
            o_exopt       = `EXU_ADD;
            o_src_sel     = `EXU_SEL_PC_IMM;
          end

        `ysyx_22050078_INST_TYPE_U_LUI:
        // x[rd] = x1(5'b0) + imm
          begin
            o_exopt       = `EXU_ADD;
            o_src_sel     = `EXU_SEL_RS1_IMM;
          end

        //B-type will change pc,so IDU just identify B-type opcode
        `ysyx_22050078_INST_TYPE_B://B type for beq/bne/bge/blt/bgeu
          begin
            // o_src_sel  = `EXU_SEL_RS1_RS2;
            // case(func3)
            //   `FUNC3_BEQ:           o_exopt = `EXU_BEQ;//beq
            //   `FUNC3_BNE:           o_exopt = `EXU_BNE;//bne
            //   `FUNC3_BLT:           o_exopt = `EXU_BLT;//blt
            //   `FUNC3_BGE:           o_exopt = `EXU_BGE;//bge
            //   `FUNC3_BLTU:          o_exopt = `EXU_BLTU;//bltu
            //   `FUNC3_BGEU:          o_exopt = `EXU_BGEU;//bgeu
            //   default:              s_id_err[1] = 1'b1; //func3_err
            // endcase
          end 

        `ysyx_22050078_INST_TYPE_I://I type for addi/slli/srli/srai/xori/ori/andi/slti
          begin
            o_src_sel  = `EXU_SEL_RS1_IMM;
            case(func3)
              `FUNC3_ADDI:          o_exopt = `EXU_ADD;//addi
              `FUNC3_SLLI:          o_exopt = `EXU_SLL;//slli
              `FUNC3_SRLI_SRAI:  
                case(func7[6:1]) 
                  6'b000000:        o_exopt = `EXU_SRL;//srli
                  6'b010000:        o_exopt = `EXU_SRA;//srai
                  default:          s_id_err[2]  = 1'b1;
                endcase
              `FUNC3_XORI:          o_exopt = `EXU_XOR;//xori
              `FUNC3_ORI:           o_exopt = `EXU_OR; //ori
              `FUNC3_ANDI:          o_exopt = `EXU_AND;//andi
              `FUNC3_SLTI:          o_exopt = `EXU_SLT;//slti
              `FUNC3_SLTIU:         o_exopt = `EXU_SLTU;//sltiu
              default:              s_id_err[1] = 1'b1; //func3_err
            endcase
          end

        `ysyx_22050078_INST_TYPE_I_W://I type for addiw/slliw/srliw/sraiw
          begin
            o_src_sel  = `EXU_SEL_RS1_IMM;
            case(func3)
              `FUNC3_ADDIW:         o_exopt = `EXU_ADDW;//addiw
              `FUNC3_SLLIW:         o_exopt = `EXU_SLLW;//slliw
              `FUNC3_SRLIW_SRAIW:
                case(func7)
                  7'b0000000:       o_exopt = `EXU_SRLW;//srliw
                  7'b0100000:       o_exopt = `EXU_SRAW;//sraiw
                  default:          s_id_err[2] = 1'b1;   //func7_err;
                endcase  
              default:              s_id_err[1] = 1'b1; //func3_err;   
            endcase 
          end

        `ysyx_22050078_INST_TYPE_R://R type for add/sub/sll/srl/sra/mul/mulh/mulhsu/mulhu/div/divu/rem/remu
          begin
            o_src_sel = `EXU_SEL_RS1_RS2;
            case(func3)
              `FUNC3_ADD_SUB_MUL://3'b000
                case(func7)
                  7'b0000000:o_exopt = `EXU_ADD;//add
                  7'b0100000:o_exopt = `EXU_SUB;//sub
                  7'b0000001:o_exopt = `EXU_MUL;//mul
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_SRL_SRA_DIVU://3'b101
                case(func7)
                  7'b0000000:o_exopt = `EXU_SRL;//srl
                  7'b0100000:o_exopt = `EXU_SRA;//sra
                  7'b0000001:o_exopt = `EXU_DIVU;//divu
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_SLL_MULH://3'b001
                case(func7)
                  7'b0000000:o_exopt = `EXU_SLL;//sll
                  7'b0000001:o_exopt = `EXU_MULH;//mulh
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_XOR_DIV://3'b100
                case(func7)
                  7'b0000000:o_exopt = `EXU_XOR;//xor
                  7'b0000001:o_exopt = `EXU_DIV;//div
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_OR_REM://3'b110
                case(func7)
                  7'b0000000:o_exopt = `EXU_OR;//or
                  7'b0000001:o_exopt = `EXU_REM;//rem
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_AND_REMU://3'b111
                case(func7)
                  7'b0000000:o_exopt = `EXU_AND;//and
                  7'b0000001:o_exopt = `EXU_REMU;//remu
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_SLT_MULHSU://3'b010
                case(func7)
                  7'b0000000:o_exopt = `EXU_SLT;//slt
                  7'b0000001:o_exopt = `EXU_MULHSU;//mulhsu
                  default:   s_id_err[2] = 1'b1;
                endcase

              `FUNC3_SLTU_MULHU://3'b011
                case(func7)
                  7'b0000000:o_exopt = `EXU_SLTU;//sltu
                  7'b0000001:o_exopt = `EXU_MULHU;//mulhu
                  default:   s_id_err[2] = 1'b1;
                endcase

              default:      s_id_err[1] = 1'b1; //func3_err
            endcase
          end
       
        `ysyx_22050078_INST_TYPE_R_W://R-W type for addw/subw/sllw/srlw/sraw/mulw/divw/divuw/remw/remuw 
          begin
            o_src_sel = `EXU_SEL_RS1_RS2;
            case(func3)
              `FUNC3_ADDW_SUBW_MULW://3'b000
                case(func7)
                  7'b0000000:o_exopt = `EXU_ADDW;//addw
                  7'b0100000:o_exopt = `EXU_SUBW;//subw 
                  7'b0000001:o_exopt = `EXU_MULW;//mulw
                  default:s_id_err[2] = 1'b1; 
                endcase

              `FUNC3_SRLW_SRAW_DIVUW://3b'101
                case(func7)
                  7'b0000000:o_exopt = `EXU_SRLW;//srlw
                  7'b0100000:o_exopt = `EXU_SRAW;//sraw 
                  7'b0000001:o_exopt = `EXU_DIVUW;//divuw
                  default:s_id_err[2] = 1'b1; 
                endcase

              `FUNC3_DIVW://3'b100  
                          o_exopt = `EXU_DIVW;//divw
              `FUNC3_REMW://3'b110   
                          o_exopt = `EXU_REMW;//remw
              `FUNC3_REMUW://3'b111   
                          o_exopt = `EXU_REMUW;//remuw
              `FUNC3_SLLW://3'b001   
                          o_exopt = `EXU_SLLW; //sllw
              default:    s_id_err[1] = 1'b1; //func3_err
            endcase
          end
        default:  s_id_err[0] = 1'b1; //opc_err
      endcase
  end

  // 3.lsu:  /////////////////////////////////////////////////////////////////////////////////////////
  // always @(*) begin
  //   case(opcode)
  //     `ysyx_22050078_INST_TYPE_I_LOAD: o_lsu_opt = {func3, 1'b0};
  //     `ysyx_22050078_INST_TYPE_S:      o_lsu_opt = {func3, 1'b1};
  //     default:                         o_lsu_opt = `LSU_NOP;
  //   endcase
    
  // end
  assign o_lsu_func3 = func3;
  assign o_lsu_lden = (opcode == `ysyx_22050078_INST_TYPE_I_LOAD) ? 1'b1 : 1'b0;
  assign o_lsu_sten = (opcode == `ysyx_22050078_INST_TYPE_S) ? 1'b1 : 1'b0;

  // 4.pcu: branch,o_jal,o_jalr.  ////////////////////////////////////////////////////////////////////
  assign o_jal  = (opcode == `ysyx_22050078_INST_TYPE_J) ? 1'b1 : 1'b0;
  assign o_jalr  = (opcode == `ysyx_22050078_INST_TYPE_I_JALR) ? 1'b1 : 1'b0;
  assign o_brch = (opcode == `ysyx_22050078_INST_TYPE_B) ? 1'b1 : 1'b0;
  assign o_bfun3 = func3;


  import "DPI-C" function void sdb_read_inst(input int rtl_inst);
  always @(*) begin
    sdb_read_inst(i_ins);
  end


endmodule



// `include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.sv"
// module ysyx_22050078_IDU(
//   input        [`INS_WIDTH-1:0]     i_ins         ,
//   output logic [`REG_ADDRW-1:0]     o_rs1id       , //for reg.
//   output logic [`REG_ADDRW-1:0]     o_rs2id       , //for reg.
//   output logic [`REG_ADDRW-1:0]     o_rdid        , //for reg.
//   output logic                      o_rdwen       , //for reg.
//   output logic [`CPU_WIDTH-1:0]     o_imm         , //for exu.
//   output logic [`EXU_SEL_WIDTH-1:0] o_src_sel     , //for exu.
//   output logic [`EXU_OPT_WIDTH-1:0] o_exopt       , //for exu.
//   output logic [2:0]                o_lsu_func3   , //for lsu.
//   output logic                      o_lsu_lden    , //for lsu.
//   output logic                      o_lsu_sten    , //for lsu.  
//   output logic                      o_jal         , //for pcu.
//   output logic                      o_jalr        , //for pcu.
//   output logic                      o_brch        , //for pcu.
//   output logic [2:0]                o_bfun3       , //for pcu.
//   output logic [2:0]                s_id_err        //for sim. bit0:opc_err, bit1:func3_err, bit2:func7_err
// );

//   // ebreak & ecall are not supperted now. ebreak will cause system finish.
//   wire [6:0] func7  = i_ins[31:25];
//   wire [4:0] rs2id  = i_ins[24:20];
//   wire [4:0] rs1id  = i_ins[19:15];
//   wire [2:0] func3  = i_ins[14:12];
//   wire [4:0] rdid   = i_ins[11: 7];
//   wire [6:0] opcode = i_ins[ 6: 0];

//   //1.reg info, imm info:  ///////////////////////////////////////////////////////////////////////////
//   always@(*)begin
//     o_imm   = `CPU_WIDTH'b0;
//     o_rs1id = `REG_ADDRW'b0;
//     o_rs2id = `REG_ADDRW'b0;
//     o_rdid  = `REG_ADDRW'b0;
//     o_rdwen = 1'b0;
//     case(opcode) 
//       `TYPE_R:        begin o_rs2id = rs2id;  o_rs1id = rs1id;  o_rdid = rdid;  o_rdwen = 1'b1; o_imm = `CPU_WIDTH'b0;                                              end
//       `TYPE_R_W:      begin o_rs2id = rs2id;  o_rs1id = rs1id;  o_rdid = rdid;  o_rdwen = 1'b1; o_imm = `CPU_WIDTH'b0;                                              end
//       `TYPE_S:        begin o_rs2id = rs2id;  o_rs1id = rs1id;                                  o_imm = {{52{i_ins[31]}},i_ins[31:25],i_ins[11:7]};                 end
//       `TYPE_B:        begin o_rs2id = rs2id;  o_rs1id = rs1id;                                  o_imm = {{52{i_ins[31]}},i_ins[7],i_ins[30:25],i_ins[11:8],1'b0};   end
//       `TYPE_I:        begin                   o_rs1id = rs1id;  o_rdid = rdid;  o_rdwen = 1'b1; o_imm = {{52{i_ins[31]}},i_ins[31:20]};                             end
//       `TYPE_I_W:      begin                   o_rs1id = rs1id;  o_rdid = rdid;  o_rdwen = 1'b1; o_imm = {{52{i_ins[31]}},i_ins[31:20]};                             end
//       `TYPE_I_LOAD:   begin                   o_rs1id = rs1id;  o_rdid = rdid;  o_rdwen = 1'b1; o_imm = {{52{i_ins[31]}},i_ins[31:20]};                             end
//       `TYPE_I_JALR:   begin                   o_rs1id = rs1id;  o_rdid = rdid;  o_rdwen = 1'b1; o_imm = {{52{i_ins[31]}},i_ins[31:20]};                             end
//       `TYPE_I_EBRK:   begin                   o_rs1id = rs1id;  o_rdid = rdid;                  o_imm = {{52{i_ins[31]}},i_ins[31:20]};                             end
//       `TYPE_U_LUI:    begin                   o_rs1id = 0  ;    o_rdid = rdid;  o_rdwen = 1'b1; o_imm = {{32{i_ins[31]}},i_ins[31:12],12'b0};                       end //LUI: rdid = x0 + imm;
//       `TYPE_U_AUIPC:  begin                                     o_rdid = rdid;  o_rdwen = 1'b1; o_imm = {{32{i_ins[31]}},i_ins[31:12],12'b0};                       end
//       `TYPE_J:        begin                                     o_rdid = rdid;  o_rdwen = 1'b1; o_imm = {{44{i_ins[31]}},i_ins[19:12],i_ins[20],i_ins[30:21],1'b0}; end
//       default: ;
//     endcase
//     if(o_rdid  == `REG_ADDRW'b0) o_rdwen = 1'b0;  // x[0] can not be written.
//   end

//   //2.exu info:  /////////////////////////////////////////////////////////////////////////////////////
//   always @(*) begin
//     o_exopt     = `EXU_ADD;
//     o_src_sel = `EXU_SEL_IMM;
//     s_id_err        = 3'b0;
//     case (opcode)
//       `TYPE_S:        begin o_exopt = `EXU_ADD;  o_src_sel = `EXU_SEL_IMM; end // M[rs1+imm] = rs2
//       `TYPE_I_EBRK:   begin                                                end // no use, dirct break.
//       `TYPE_I_LOAD:   begin o_exopt = `EXU_ADD;  o_src_sel = `EXU_SEL_IMM; end // rdid = M[rs1+imm]
//       `TYPE_I_JALR:   begin o_exopt = `EXU_ADD;  o_src_sel = `EXU_SEL_PC4; end // rdid = PC+4
//       `TYPE_J:        begin o_exopt = `EXU_ADD;  o_src_sel = `EXU_SEL_PC4; end // rdid = PC+4
//       `TYPE_U_LUI:    begin o_exopt = `EXU_ADD;  o_src_sel = `EXU_SEL_IMM; end // rdid = x0 + imm
//       `TYPE_U_AUIPC:  begin o_exopt = `EXU_ADD;  o_src_sel = `EXU_SEL_PCI; end // rdid = pc + imm
//       `TYPE_B:        begin                                                end // no use for exu, idu return. nop for type_b.
//       `TYPE_I:
//         begin
//           o_src_sel = `EXU_SEL_IMM;
//           case (func3)
//             `FUNC3_ADD_SUB_MUL:   o_exopt = `EXU_ADD; 
//             `FUNC3_SLL_MULH:      o_exopt = `EXU_SLL;
//             `FUNC3_SRL_SRA_DIVU:  case (func7[6:1]) 6'b000000: o_exopt = `EXU_SRL; 6'b010000:o_exopt = `EXU_SRA; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_XOR_DIV:       o_exopt = `EXU_XOR;
//             `FUNC3_OR_REM:        o_exopt = `EXU_OR ;
//             `FUNC3_AND_REMU:      o_exopt = `EXU_AND;
//             `FUNC3_SLT_MULHSU:    o_exopt = `EXU_SLT;
//             `FUNC3_SLTU_MULHU:    o_exopt = `EXU_SLTU;
//             default:              s_id_err[1] = 1'b1; //func3_err
//           endcase
//         end
//       `TYPE_I_W:
//         begin
//           o_src_sel = `EXU_SEL_IMM;
//           case (func3)
//             `FUNC3_ADD_SUB_MUL:   o_exopt = `EXU_ADDW;
//             `FUNC3_SLL_MULH:      o_exopt = `EXU_SLLW;
//             `FUNC3_SRL_SRA_DIVU:  case (func7) 7'b0000000:o_exopt = `EXU_SRLW; 7'b0100000: o_exopt = `EXU_SRAW;  default:s_id_err[2] = 1'b1; endcase
//             default:              s_id_err[1] = 1'b1; //func3_err
//           endcase
//         end
//       `TYPE_R:
//         begin
//           o_src_sel = `EXU_SEL_REG;
//           case (func3)
//             `FUNC3_ADD_SUB_MUL:  case (func7) 7'b0000000:o_exopt = `EXU_ADD ; 7'b0000001: o_exopt = `EXU_MUL   ; 7'b0100000: o_exopt = `EXU_SUB; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_SRL_SRA_DIVU: case (func7) 7'b0000000:o_exopt = `EXU_SRL ; 7'b0000001: o_exopt = `EXU_DIVU  ; 7'b0100000: o_exopt = `EXU_SRA; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_SLL_MULH:     case (func7) 7'b0000000:o_exopt = `EXU_SLL ; 7'b0000001: o_exopt = `EXU_MULH  ; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_XOR_DIV:      case (func7) 7'b0000000:o_exopt = `EXU_XOR ; 7'b0000001: o_exopt = `EXU_DIV   ; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_OR_REM:       case (func7) 7'b0000000:o_exopt = `EXU_OR  ; 7'b0000001: o_exopt = `EXU_REM   ; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_AND_REMU:     case (func7) 7'b0000000:o_exopt = `EXU_AND ; 7'b0000001: o_exopt = `EXU_REMU  ; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_SLT_MULHSU:   case (func7) 7'b0000000:o_exopt = `EXU_SLT ; 7'b0000001: o_exopt = `EXU_MULHSU; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_SLTU_MULHU:   case (func7) 7'b0000000:o_exopt = `EXU_SLTU; 7'b0000001: o_exopt = `EXU_MULHU ; default:s_id_err[2] = 1'b1; endcase
//             default:              s_id_err[1] = 1'b1; //func3_err
//           endcase
//         end
//       `TYPE_R_W:
//         begin
//           o_src_sel = `EXU_SEL_REG;
//           case (func3)
//             `FUNC3_ADD_SUB_MUL:   case (func7) 7'b0000000:o_exopt = `EXU_ADDW; 7'b0100000: o_exopt = `EXU_SUBW; 7'b0000001: o_exopt = `EXU_MULW ; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_SRL_SRA_DIVU:  case (func7) 7'b0000000:o_exopt = `EXU_SRLW; 7'b0100000: o_exopt = `EXU_SRAW; 7'b0000001: o_exopt = `EXU_DIVUW; default:s_id_err[2] = 1'b1; endcase
//             `FUNC3_XOR_DIV:       o_exopt  = `EXU_DIVW;
//             `FUNC3_OR_REM:        o_exopt  = `EXU_REMW;
//             `FUNC3_AND_REMU:      o_exopt  = `EXU_REMUW;
//             `FUNC3_SLL_MULH:      o_exopt  = `EXU_SLLW;
//             default:              s_id_err[1] = 1'b1; //func3_err
//           endcase
//         end
//       default:  s_id_err[0] = 1'b1; //opc_err
//     endcase
//   end

//   // 3.lsu:  /////////////////////////////////////////////////////////////////////////////////////////
//   assign o_lsu_func3 = func3;
//   assign o_lsu_lden = (opcode == `TYPE_I_LOAD) ? 1'b1 : 1'b0;
//   assign o_lsu_sten = (opcode == `TYPE_S)      ? 1'b1 : 1'b0;

//   // 4.bru: o_jump, o_jalr.  ////////////////////////////////////////////////////////////////////
//   assign o_jal  = (opcode == `TYPE_J)? 1:0;
//   assign o_jalr = (opcode == `TYPE_I_JALR)? 1:0;
//   assign o_brch = (opcode == `TYPE_B)? 1:0;
//   assign o_bfun3 = func3;

// endmodule
