#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/include.h"
#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/isa.h"
#include <getopt.h>


char *img_file = NULL;
static char *log_file = NULL;
static char *diff_so_file = NULL;

// void init_log(const char *log_file);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  #ifdef CONFIG_TRACE
  Log("ITRACE: %s", MUXDEF(CONFIG_ITRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("MTRACE: %s", MUXDEF(CONFIG_MTRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("FTRACE: %s", MUXDEF(CONFIG_FTRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  // Log("DTRACE: %s", MUXDEF(CONFIG_ITRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  #endif
  // Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-npc!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("👽😡🤡🥶😎😭😵🤤🥵😄🤣🥳💩🤖😱😴😀🥰😅😫\n");
  printf("For help, type \"help\"\n");
}

extern uint8_t pmem[PMEM_MSIZE];  // use for load_img
static long load_img()
{
  if (img_file == NULL) {
    // Log("No image is given. Use the default build-in image.");
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL){
    printf("Can not open '%s'\n", img_file);
    assert(0); 
  }

  fseek(fp, 0, SEEK_END);// move cur to end.
  long size = ftell(fp);

  //printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);//从img_file中将数据转移到pmem
  assert(ret == 1);

  //for(uint32_t i=0;i<size;i=i+4)
  //  printf("0x%08x, 0x%08lx\n",PMEM_START+i,pmem_read(PMEM_START+i,4));

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"img"      , required_argument, NULL, 'i'},
    {"diff"     , required_argument, NULL, 'd'},
    {"log"      , required_argument, NULL, 'l'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-d:i:", table, NULL)) != -1) {
    switch (o) {
      case 'i': img_file     = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'l': log_file     = optarg; break;
    }
  }
  return 0;
}



void init_monitor(int argc, char *argv[])
{
  /* Parse arguments. */
  parse_args(argc, argv);

  /* Open the log file. */
  //init log.
  init_log(log_file);

  /* Load the image to memory. This will overwrite the built-in image. */
  // 加载命令行指定的镜像文件
  long img_size = load_img();

  // #ifdef  DIFFTEST_ON
  //  /* Initialize differential testing. */
  // difftest_init(diff_so_file, img_size);
  // #endif

  // /* Initialize the simple debugger. */
  init_sdb();

  // /* Display welcome message. */
  // // 输出欢迎信息以及trace的状态信息,还输出了编译的时间和日期
  welcome();

}