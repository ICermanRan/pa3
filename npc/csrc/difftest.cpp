#include "include.h"
#include "debug.h"
#include <stdbool.h>
#include <dlfcn.h> // 显式加载需要用到的头文件



extern uint64_t *npc_reg;
extern uint64_t npc_pc;//extern表明这两个变量其实是定义在reg.cpp,在此处引用
// uint64_t *dut_reg = npc_reg;
uint64_t dut_pc = npc_pc;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

#ifdef  DIFFTEST_ON

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void difftest_skip_ref() {
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

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
  // Log("assert(ref_so_file != NULL) 成功!");

  void *handle;
  //dlopen:打开一个动态链接库,用来加载库中的符号,并把它装入内存
  //按指定的模式打开指定的动态连接库文件，并返回一个句柄给调用进程
  //返回值: 打开错误返回NULL；成功，返回库引用 
  //编译时候要加入 -ldl (指定dl库)
  handle = dlopen(ref_so_file, RTLD_LAZY);//RTLD_LAZY 暂缓决定，等有需要时再解出符号 
  assert(handle);

  //当库被装入后，可以把 dlopen() 返回的句柄作为给 dlsym() 的第一个参数，以获得符号在库中的地址。
  //使用这个地址，就可以获得库中特定函数的指针，并且调用装载库中的相应函数。

  //void* dlsym(void* handle,const char* symbol)
  //handle是由dlopen打开动态链接库后返回的指针，symbol就是要求获取的函数的名称
  //dlsym函数的功能:
  //根据动态链接库操作句柄(handle)与符号(symbol),返回值是这个符号加载到内存中的地址
  //通常用于获取函数符号地址，使用dlsym不但可以获取函数地址，也可以获取变量地址
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
  // Log("The result of every instruction will be compared with %s. "
  //     "This will help you a lot for debugging, but also significantly reduce the performance. "
  //     "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init();
  ref_difftest_memcpy(PMEM_START, guest_to_host(PMEM_START), img_size, DIFFTEST_TO_REF);//从npc的memory起始地址，逐个字节把内容拷贝到nemu的起始地址PMEM_START
  
  // printf("调用pack_dut_regfile\n");
  //  for(int i = 0; i < 32; i++)
  // {
  //   printf("dut_reg[%d] = %lx\n", i, dut_reg[i]);
  // }
  // printf("npc_pc = %lx\n", npc_pc);
  regfile dut = pack_dut_regfile(npc_reg, npc_pc);//创造一个regfile结构体变量dut，其寄存器值为RTL npc的寄存器值，pc值为80000000
  ref_difftest_regcpy(&dut, DIFFTEST_TO_REF);
}

bool difftest_check()
{
  regfile ref, dut;
  ref_difftest_regcpy(&ref, DIFFTEST_TO_DUT);
  // dut = pack_dut_regfile(dut_reg, dut_pc);
  dut = pack_dut_regfile(npc_reg, npc_pc);
  //将npc和nemu的寄存器值和pc值进行比较,相同返回1,有不同则返回0
  return checkregs(&ref, &dut);
}

/*实现逐条指令执行后的状态对比*/
//会在cpu_exec()的主循环中被调用, 在NPC中执行完一条指令后,
//就在difftest_step()中让REF(NEMU)执行相同的指令, 然后读出REF中的寄存器, 并进行对比
void difftest_step()
{
  // CPU_state ref_f;

  // if(is_skip_ref)
  // {

  // }
  ref_difftest_exec(1);
}


#endif

