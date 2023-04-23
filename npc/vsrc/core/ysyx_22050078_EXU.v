/***********************
author:ran
description:执行模块
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"

module ysyx_22050078_EXU 
(
  input                       clk,
  input [`CPU_WIDTH-1:0]      pc,

  //from pipe_ID_EX(regfile -> bypass_logic -> pipe_ID_EX)
  input [`CPU_WIDTH-1:0]      i_rs1_data,  //源寄存器1数据
  input [`CPU_WIDTH-1:0]      i_rs2_data,  //源寄存器2数据
    
  //from IDU
  input [`CPU_WIDTH-1:0]      i_imm,
  input [`EXU_SEL_WIDTH-1:0]  i_src_sel ,
  input [`EXU_OPT_WIDTH-1:0]  i_exopt     ,

  //to pipe_EX_LS
  output reg [`CPU_WIDTH-1:0] o_exu_res 
    
  //to PCU
  //现在B-type类型的指令计算结果由BRU完成，无需再进入EXU,所以这个output可以不用了
  // output  wire                o_zero
);

  reg [`CPU_WIDTH-1:0] src1,src2;

  
  // always@(*) begin
  //   case (i_src_sel)
  //     `EXU_SEL_RS1_RS2: src1 = i_rs1_data;
  //     `EXU_SEL_RS1_IMM: src1 = i_rs1_data;
  //     `EXU_SEL_PC_4: src1 = pc;
  //     `EXU_SEL_PC_IMM: src1 = pc;
  //     default    :  src1 = 64'b0;
  //   endcase
  // end

  //          ^
  //          |
  //          |
  MuxKeyWithDefault #(4, `EXU_SEL_WIDTH, `CPU_WIDTH) mux_src1 (src1, i_src_sel, `CPU_WIDTH'b0, {
    `EXU_SEL_RS1_RS2, i_rs1_data,
    `EXU_SEL_RS1_IMM, i_rs1_data,
    `EXU_SEL_PC_4   ,         pc,
    `EXU_SEL_PC_IMM ,         pc
  });
         
  // always@(*) begin
  //   case (i_src_sel)
  //     `EXU_SEL_RS1_RS2: src2 = i_rs2_data;
  //     `EXU_SEL_RS1_IMM: src2 = i_mm;
  //     `EXU_SEL_PC_4: src2 = 64'h4;
  //     `EXU_SEL_PC_IMM: src2 = imm;
  //     default    :  src2 = 64'b0;
  //   endcase
  // end

  //          ^
  //          |
  //          |
  MuxKeyWithDefault #(4, `EXU_SEL_WIDTH, `CPU_WIDTH) mux_src2 (src2, i_src_sel, `CPU_WIDTH'b0, {
    `EXU_SEL_RS1_RS2, i_rs2_data,
    `EXU_SEL_RS1_IMM,      i_imm,
    `EXU_SEL_PC_4,         64'h4,
    `EXU_SEL_PC_IMM,       i_imm
});
  

  // 请记住：硬件中不区分有符号和无符号，全部按照补码进行运算！
  // 所以 src1 - src2 得到是补码！
  // 如果src1和src2是有符号数，通过输出最高位就可以判断正负！
  //以”1-2“为例，两个有符号数分别转换为 [1]补+[-2]补，规定位数的计算结果的最高位为1则表示src1 < src2，规定位数的最高位为0则表示src1 > src2；
  // 如果src1和src2是无符号数，那么就在最高位补0，拓展为有符号数再减法，通过最高位判断正负！
  //放在verilog里，则是申明为无符号数，然后直接计算，计算结果取补码;比如 1-2的结果就是 -1的补码，规定位数的最高位为1表示src1 < src2，反之，为0表示src1 > src2
  /*ps:视为2的补码 == 转变为有符号数进行运算*/

  // 4.2 generate integer alu result: ////////////////////////////////////////////////////////////////////////////////////////



  reg [`CPU_WIDTH-1:0] exu_res_trans;

  always @(*) begin
    // if(!clk) begin
    o_exu_res = 64'b0;
    exu_res_trans = 64'b0;
    case(i_exopt)
      `EXU_ADD:   o_exu_res = src1 + src2;
      `EXU_SUB:   o_exu_res = src1 - src2;
      `EXU_ADDW:  begin o_exu_res[31:0] = src1[31:0] + src2[31:0]; o_exu_res = {{32{o_exu_res[31]}}, o_exu_res[31:0]};end
      `EXU_SUBW:  begin o_exu_res[31:0] = src1[31:0] - src2[31:0]; o_exu_res = {{32{o_exu_res[31]}}, o_exu_res[31:0]};end
      `EXU_AND:   o_exu_res = src1 & src2;
      `EXU_OR:    o_exu_res = src1 | src2;
      `EXU_XOR:   o_exu_res = src1 ^ src2;
      `EXU_SLL:   o_exu_res = src1 << src2[5:0];
      `EXU_SRL:   o_exu_res = src1 >> src2[5:0];
      `EXU_SRA:   o_exu_res = $signed(src1) >>> src2[5:0];//利用Verilog的内置函数$signed()，将被移位的操作数转为有符号数类型;然后再>>>表示算术右移，右移补充符号位
      `EXU_SLLW:  begin o_exu_res[31:0] = src1[31:0] << src2[4:0];  o_exu_res = {{32{o_exu_res[31]}},o_exu_res[31:0]};end
      `EXU_SRLW:  begin o_exu_res[31:0] = src1[31:0] >> src2[4:0];  o_exu_res = {{32{o_exu_res[31]}},o_exu_res[31:0]};end
      `EXU_SRAW:  begin o_exu_res = {{32{src1[31]}}, src1[31:0]} >> src2[4:0]; o_exu_res = {{32{o_exu_res[31]}}, o_exu_res[31:0]};end
      `EXU_MUL:   o_exu_res = src1 * src2;
      `EXU_MULH:  o_exu_res = ($signed(src1) * $signed(src2)) >> 64;
      // `EXU_MULHSU:begin exu_res_trans = ($signed(src1) * $unsigned(src2)) >> 64; o_exu_res = exu_res_trans[63:0]; end
      `EXU_MULHSU:o_exu_res = ($signed(src1) * $unsigned(src2)) >> 64;
      // `EXU_MULHU: begin exu_res_trans = {{1'b0, src1} * {1'b0, src2} >> 64}; o_exu_res = exu_res_trans[63:0]; end
      `EXU_MULHU: o_exu_res = ($unsigned(src1) * $unsigned(src2)) >> 64;
      `EXU_DIV:   o_exu_res = src1 / src2;
      // `EXU_DIVU:  begin exu_res_trans = {{1'b0, src1} / {1'b0, src2}}; o_exu_res = exu_res_trans[63:0]; end
      `EXU_DIVU:  o_exu_res = $unsigned(src1) / $unsigned(src2);
      `EXU_REM:   o_exu_res = $signed(src1) % $signed(src2);
      // `EXU_REMU:  begin exu_res_trans = {1'b0, src1} % {1'b0, src2}; o_exu_res = exu_res_trans[63:0]; end
      `EXU_REMU:  o_exu_res = $unsigned(src1) % $unsigned(src2);
      `EXU_MULW:  begin exu_res_trans = src1[31:0] * src2[31:0]; o_exu_res[31:0] = exu_res_trans[31:0]; o_exu_res = {{32{o_exu_res[31]}}, o_exu_res[31:0]}; end
      `EXU_DIVW:  begin o_exu_res[31:0] = {src1[31:0] / src2[31:0]}; o_exu_res = {{32{o_exu_res[31]}}, o_exu_res[31:0]}; end
      `EXU_DIVUW: begin exu_res_trans[31:0] = $unsigned(src1[31:0]) / $unsigned(src2[31:0]); o_exu_res[31:0] = exu_res_trans[31:0]; o_exu_res = {{32{o_exu_res[31]}}, o_exu_res[31:0]}; end
      `EXU_REMW:  begin o_exu_res[31:0] = {src1[31:0] % src2[31:0]}; o_exu_res = {{32{o_exu_res[31]}}, o_exu_res[31:0]}; end
      `EXU_REMUW: begin exu_res_trans[31:0] = $unsigned(src1[31:0]) % $unsigned(src2[31:0]); o_exu_res = {{32{exu_res_trans[31]}},exu_res_trans[31:0]}; end
      `EXU_SLT:   begin exu_res_trans = ($signed(src1) - $signed(src2)); o_exu_res = {63'b0, exu_res_trans[63]};   end//if src1 > src2, exu_res_trans[63] = 0; if src1 < src2, exu_res_trans[63] = 1;
      `EXU_SLTU:  begin exu_res_trans = $unsigned(src1) - $unsigned(src2); o_exu_res = {63'b0, exu_res_trans[63]}; end//if src1 > src2, exu_res_trans[63] = 0; if src1 < src2, exu_res_trans[63] = 1;
      
      //B-type中无需担忧相等的情况，有o_zero来判断
      // `EXU_BEQ:   begin exu_res_trans = src1 - src2; o_exu_res = {63'b0, ~(|exu_res_trans)};                       end//if src1 == src2,o_exu_res[0]  = 1; if src1 != src2, o_exu_res[0]  = 0;
      // `EXU_BNE:   begin exu_res_trans = src1 - src2; o_exu_res = {63'b0, (|exu_res_trans)};                        end//if src1 == src2,o_exu_res[0]  = 0; if src1 != src2, o_exu_res[0]  = 1;
      // `EXU_BLT:   begin exu_res_trans = $signed(src1) - $signed(src2); o_exu_res = {63'b0, exu_res_trans[63]};     end//if src1 >=src2, o_exu_res[0]  = 0; if src1 < src2,  o_exu_res[0]  = 1;
      // `EXU_BGE:   begin exu_res_trans = $signed(src1) - $signed(src2); o_exu_res = {63'b0, ~exu_res_trans[63]};    end//if src1 > src2, o_exu_res[0]  = 1; if src1 < src2,  o_exu_res[0]  = 0;
      // `EXU_BLTU:  begin exu_res_trans = $unsigned(src1) - $unsigned(src2); o_exu_res = {63'b0, exu_res_trans[63]}; end//if src1 > src2, o_exu_res[0]  = 0; if src1 < src2,  o_exu_res[0]  = 1;
      // `EXU_BGEU:  begin exu_res_trans = $unsigned(src1) - $unsigned(src2); o_exu_res = {63'b0, ~exu_res_trans[63]};end
      default: o_exu_res = `CPU_WIDTH'b0;
    endcase
    // end
  end





  // assign o_zero = ~(|o_exu_res);//用于判断EXU的计算结果是否为0
                                //若为0，则o_zero = 1;若不为0，则o_zero = 0





endmodule
