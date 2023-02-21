#include "include.h"
#include "debug.h"
#include <stdbool.h>
#include <dlfcn.h> // 显式加载需要用到的头文件



extern uint64_t *npc_reg;
extern uint64_t npc_pc;//extern表明这两个变量其实是定义在reg.cpp,在此处引用
uint64_t *dut_reg = npc_reg;
uint64_t dut_pc = npc_pc;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

#ifdef  DIFFTEST_ON

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size) 
{
  //进行以下初始化工作
  // 打开传入的动态库文件ref_so_file.
  // 通过动态链接对动态库中的上述API符号进行符号解析和重定位, 返回它们的地址.
  // 对REF的DIffTest功能进行初始化, 具体行为因REF而异.
  // 将DUT的guest memory拷贝到REF中.
  // 将DUT的寄存器状态拷贝到REF中.

  //进行了上述初始化工作之后, DUT和REF就处于相同的状态了

  assert(ref_so_file != NULL);
  Log("assert(ref_so_file != NULL) 成功!");

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint64_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool dirction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t NO))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = (void (*)())dlsym(handle, "difftest_init");
  assert(ref_difftest_init);
  
  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init();
  ref_difftest_memcpy(PMEM_START, guest_to_host(PMEM_START), img_size, DIFFTEST_TO_REF);
  
  regfile dut = pack_dut_regfile(dut_reg, INST_START);//创造一个regfile结构体变量dut，其寄存器值为npc的寄存器值，pc值为80000000
  ref_difftest_regcpy(&dut, DIFFTEST_TO_REF);
}

bool difftest_check()
{
  regfile ref, dut;
  ref_difftest_regcpy(&ref, DIFFTEST_TO_DUT);
  dut = pack_dut_regfile(dut_reg, dut_pc);
  return checkregs(&ref, &dut);
}

void difftest_step()
{
  ref_difftest_exec(1);
}


#endif