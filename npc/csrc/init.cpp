#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/include.h"
#include <getopt.h>

// static char *img_file = NULL;
// static char *diff_so_file = NULL;


// extern uint8_t pmem[PMEM_MSIZE];  // use for load_img


void npc_init(int argc, char *argv[])
{
  /* Perform some global initialization(执行一些全局初始化). */
  init_monitor(argc,argv);

  // init_device();
}


void engine_start() {
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
  /* Receive commands from user. */
  sdb_mainloop();
#endif
}

