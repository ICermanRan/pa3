/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

static int unsigned_compare(uint64_t num1, uint64_t num2);

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J, TYPE_R,
  TYPE_B// none
};  //定义指令type

/*
 这里的*src1表示对指针变量src1的解引用(此src与译码函数里的src不是一个东西)  
 两者的关系是*src1 == *(&src1) == src1(这里是译码函数中的变量)
 所以，下面的宏里，rs表示寄存器编号，宏R表示对应编号寄存器里的值赋给了译码函数中的变量
*/
#define src1R() do { *src1 = R(rs1); } while (0)  //*src1 = cpu.gpr(rs1)
#define src2R() do { *src2 = R(rs2); } while (0)  //*src2 = cpu.gpr(rs2)

/*符号位扩展均扩展为64位，最后返回的结果都是以补码形式看值，因为抽取的立即数在符号位扩展时的扩展规则是不同的(详见宏内)*/
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)            //先12位立即数，再扩展为64位
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)      //先抽取20位立即数，再扩展为64位，再左移12位
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = SEXT( (((BITS(i, 31, 31) << 8 | BITS(i, 19, 12)) << 1 | BITS(i, 20, 20)) << 10 | BITS(i, 30, 21)) << 1, 21); } while(0)
#define immB() do { *imm = SEXT( (((BITS(i, 31, 31) << 1 | BITS(i, 7, 7)) << 6 | BITS(i, 30, 25)) << 4 | BITS(i, 11, 8)) << 1, 13); } while(0)
// #define immB() do { *imm = SEXT( (( BITS(i, 31, 31) << 1 | 1 )) << 1 | 1, 3); } while(0)
// #define immJ() do { *imm = SEXT( (((BITS(i, 31, 31) << 8 | BITS(i, 19, 12)) << 1 | BITS(i, 20, 20)) << 10 | BITS(i, 30, 21)) ,21 ); } while(0)
/*宏BITS 用于位抽取； 宏SEXT 用于符号位扩展*/


//进一步译码，根据传入的指令类型type来进行操作数的译码
//传入这个函数的 *src1、*src2已经是原来函数中变量的地址了，被保存在指针变量里
static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type) 
{
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);

  // printf("pc = %lx\n", s->pc);
  Log("rs1 = %d\n", rs1);
  Log("rs2 = %d\n", rs2);
  Log("*src1 = %lu\n", *src1);
  Log("*src2 = %lu\n", *src2);
  
  //decode_operand会首先统一对目的操作数进行寄存器操作数的译码
  //即调用*dest = rd, 不同的指令类型可以视情况使用dest
  *dest = rd;
  // printf("*dest = %d\n", *dest);

  //为了进一步实现操作数译码和指令译码的解耦, 我们对这些操作数的译码进行了抽象封装
  /*
    定义了src1R()和src2R()两个辅助宏, 用于寄存器的读取结果记录到相应的操作数变量中
    定义了immI、immU()、immS()等辅助宏, 用于从指令中抽取出立即数
  */
  switch (type)
  {
    case TYPE_I: src1R();          immI();  break; //printf("Itype imm = %ld\n",*imm); break;
    case TYPE_U:                   immU();  break; //printf("Utype imm = %ld\n",*imm); break;
    case TYPE_S: src1R(); src2R(); immS();  break; //printf("Stype imm = %ld\n",*imm); break;
    case TYPE_J:                   immJ();  printf("Jtype imm = %lx\n",*imm); break;
    case TYPE_R: src1R(); src2R();          break;
    case TYPE_B: src1R(); src2R(); immB();  printf("Btype imm = %lx\n",*imm); break;
  }
}
/*译码(ID)*/
static int decode_exec(Decode *s) {
  int dest = 0;
  unsigned int shamt = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

  printf("进入译码时的 pc = %0lx\n", s->pc);
  printf("进入译码时的 dnpc = %0lx\n", s->dnpc);

  vaddr_t t;//暂存jalr中原本的pc+4 = s->dnpc

//定义两个宏：INSTPAT_INST、INSTPAT_MATCH, 在INSTPAT这个宏的内容中调用，简化程序
#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
  /* dest:目的操作数  
    src1、src2:两个源操作数  src1 = cpu.gpr(rs1) src2 = cpu.gpr(rs2)
     imm:立即数 */               \
  __VA_ARGS__ ; \
}

  /*模式匹配*/

  /*在INSTPAT中，满足if语句，表示匹配到了某个指令的编码*/         
  /*通过INSTPAT_MATCH宏中，调用decode_operand()函数，得到操作对象*/  
  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + imm);                                                   //imm = 二进制指令[31:12],从20位扩展到32位，然后左移12位且最高位符号位imm[31]为1;
                                                                                                                                          //再与pc相加，写入寄存器x[rd]
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + imm, 8));                                             //从地址src1 + imm，读取8个字节的内容，然后写入指定寄存器x[rd]
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2)); 
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10)));                                                  // R(10) is $a0
              /*add more instructions*/
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);                                                   //把寄存器 x[rs2]的值和寄存器 x[rs1]的值相加，结果写入 x[rd]。忽略算术溢出。
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = imm + src1);                                                    //伪指令li的拓展指令之一、伪指令mv的拓展指令之一
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(imm + src1, 31, 0), 32));                             //把符号位扩展的立即数的值和 x[rs1]的值相加，将结果截断为 32 位，再进行符号位扩展，最后写入 x[rd]。  
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2, 31, 0), 32)); 
  // INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = imm & src1);                                                    //把符号位扩展的立即数的值和寄存器 x[rs1]的值进行位与，结果写入 x[rd]。
  // INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);                                                    //将寄存器 x[rs1]和寄存器 x[rs2]位与的结果写入 x[rd]。
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->dnpc, s->dnpc = s->pc + imm);                                //跳转指令，跳转地址 = 当前地址 + 处理后的imm;把顺序执行的地址存在寄存器x[1]
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, t = s->dnpc, s->dnpc = ((imm + src1) & ~1), R(dest) = t);
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + imm, 4), 32));                                   //从地址 x[rs1] + sext(offset)读取四个字节,对于 RV64I，读取的内容要进行符号位扩展，再写入 x[rd]
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + imm, 1) + SEXT(BITS(s->isa.inst.val, 6, 2), 5));      //从地址 x[rs1] + sign-extend(offset)读取一个字节，经零扩展后写入 x[rd]。
  // INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ imm);                                                   //将 x[rs1]和符号扩展的 immediate 按位异或，结果写入 x[rd]。
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);                                                   //把 x[rs1]减去 x[rs2]，结果写入 x[rd]。忽略算术溢出。
  // INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, BITS(src2, 7, 0)));                                                   //将 x[rs2]的最低有效字节存入内存地址 x[rs1]+sign-extend(offset)。
  // INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(BITS(src1, 31, 0) << BITS(src2, 4, 0), 64));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = unsigned_compare(src1,src2));                                   //将 x[rs1]和 x[rs2]中的数视为无符号数进行比较。如果 x[rs1]更小，向 x[rd]写入 1，否则写入0。
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = unsigned_compare(src1,imm));                                    //将 x[rs1]和符号扩展的 immediate 视为无符号数进行比较。如果 x[rs1]更小，向 x[rd]写入 1，否则写入0。
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, BITS(src2, 15, 0)));                                    //将 x[rs2]的最低两个有效字节存入内存地址 x[rs1]+sign-extend(offset)。
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, shamt = BITS(s->isa.inst.val, 25, 20), R(dest) = (sword_t)src1 >> shamt); //这里用了一个强制类型转换，在右移前把src1从无符号类型转为有符号类型，这样右移就会自动高位补符号位了                         
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if(src1 == src2) s->dnpc = s->pc + imm );                                 //若寄存器 x[rs1]和寄存器 x[rs2]的值相等，把 pc 的值设为当前值加上符号位扩展的偏移 offset。
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if(src1 != src2) s->dnpc = s->pc + imm );                                 //若寄存器 x[rs1]和寄存器 x[rs2]的值不相等，把 pc 的值设为当前值加上符号位扩展的偏移 offset。          
  // INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2); 
 
 
 
  // INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = imm);  
  // INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = (R(src1) << 6)); 

          
          //inv的规则, 表示"若前面所有的模式匹配规则都无法成功匹配, 则将该指令视为非法指令
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0
  

  printf("退出译码时的 pc = %0lx\n", s->pc);
  printf("退出译码时的 snpc = %0lx\n", s->snpc);
  printf("退出译码时的 dnpc = %0lx\n", s->dnpc);
  printf("退出译码时的 src1 = %0lx\n", src1);
  printf("退出译码时的 src2 = %0lx\n", src2);
  printf("退出译码时的 shamt = %d\n", shamt);
  printf("imm = %lx\n", imm);

  t = 0; //每个jalr的t不同，因此清0
  shamt = 0;//每个shamt不同，因此清0
  return 0;
}


/*取指(IF)*/
int isa_exec_once(Decode *s) {
  //函数inst_fetch()专门负责取指令的工作
  //传入s->snpc的地址
  s->isa.inst.val = inst_fetch(&s->snpc, 4);//调用inst_fetch，对内存进行一次访问
    
  //把指令记录到s->isa.inst.val中             //还会根据len来更新s->snpc, 从而让s->snpc指向下一条指令
 
  //进入decode_exec()函数，开始译码
  return decode_exec(s);
}

/*无符号数比较函数*/
static int unsigned_compare(uint64_t num1, uint64_t num2)
{
  int result;

  if(num1 < num2)
    result = 1;
  else  
    result = 0;

  return result;
}