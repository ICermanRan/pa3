#include "include/include.h"
#include "include/debug.h"

#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}
uint64_t *npc_reg = NULL;
uint64_t npc_pc;

uint64_t nemu_reg [32];
uint64_t nemu_pc;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

bool checkregs(regfile *ref_r, regfile *dut)
{
  bool res = true;
  for(int i = 0; i < 32; i++)
  {
    nemu_reg[i] = ref_r->x[i];
    // printf("nemu_reg[%d] = %lx\n", i, nemu_reg[i]);
    if(ref_r->x[i] != dut->x[i])
    {
      // printf("Difftest: error at nextpc = 0x%lx\n", dut->pc);
      Log_red("Difftest: error at nextpc = 0x%lx\n", dut->pc);
      Log_red("reg '%s' is different: ref(nemu) = 0x%lx, dut(npc) = 0x%lx\n", regs[i], ref_r->x[i], dut->x[i]);
      res = false;
    }
  }

  nemu_pc = ref_r->pc;
  if(ref_r->pc != dut->pc)
  {
    Log_red("difftest error: ");
    Log_red("next reg pc is diff: ref = 0x%lx, dut = 0x%lx\n", ref_r->pc, dut->pc);
    res = false;
  }

  return res;
}

void reg_display() 
{

  printf("npc pc = 0x%lx\n", npc_pc);
  for(int i = 0; i < 32; i = i+2)
  {
	// printf("reg %d: %s ,value = %ld or 0x%lx\n", i, temp, cpu.gpr[i], cpu.gpr[i]);
  printf("reg[%3d] \t%-3s = 0x%10lx or %10ld |", i, regs[i], npc_reg[i], npc_reg[i]);
  printf("reg[%3d] \t%-3s = 0x%10lx or %10ld \n", i+1, regs[i+1], npc_reg[i+1], npc_reg[i+1]);

  }
}

void nemu_reg_display()
{
  printf("nemu pc = 0x%lx\n", nemu_pc);
  for(int i = 0; i < 32; i = i+2)
  {
  printf("nemu_reg[%3d] \t%-3s = 0x%10lx or %10ld |", i, regs[i], nemu_reg[i], nemu_reg[i]);
  printf("nemu_reg[%3d] \t%-3s = 0x%10lx or %10ld \n", i+1, regs[i+1], nemu_reg[i+1], nemu_reg[i+1]);
  }
  printf("---------------------------------------------------------------------------------------------------------------\n");
}

regfile pack_dut_regfile(uint64_t *dut_reg, uint64_t pc)
{
  
  // printf("成功进入pack_dut_regfile\n");
  regfile dut;
  for(int i = 0; i < 32; i++)
  {
    dut.x[i] = dut_reg[i];
  }
  
  dut.pc = pc;//dut.pc = 0x80000000
  return dut;

}

static int find_string(const char *strs[], const char *str, int len)
{
    int i = 0;
    while(i < len + 1){
        if(strcmp(*strs, str) == 0){
            break;
        }
        i++;
        strs++;
    }
    if(i == len + 1){
        return -1;
    }
    return i;
}

word_t isa_reg_str2val(const char *s, bool *success) {
  int len,j;
  GET_ARRAY_LEN(regs,len);
  j = find_string(regs, s, len);
  // printf("j = %d\n", j);
  word_t reg_value;

  if(j == 33)
    reg_value = npc_pc;
  else
    reg_value = npc_reg[j];
  
  return reg_value;
}

