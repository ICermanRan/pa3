#include "include.h"
#include "isa.h"
#include "itrace.h"
#include "ftrace.h"
#include "debug.h"
#include <getopt.h>


char *img_file = NULL;
char *ftrace_file = NULL;
static char *log_file = NULL;
static char *diff_so_file = NULL;

void init_device();
void init_log(const char *log_file);
static int parse_args(int argc, char *argv[]);
static long load_img();

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
  printf("Welcome to Ran's%s-npc!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_MAGENTA ANSI_BG_CYAN ));
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
    {"batch"    , no_argument      , NULL, 'b'},
    {"img"      , required_argument, NULL, 'i'},
    {"diff"     , required_argument, NULL, 'd'},
    {"log"      , required_argument, NULL, 'l'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:i:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'i': 
                {
                  img_file     = optarg;
                  printf("%s\n", ANSI_FMT("IMG加载成功!", ANSI_FG_RED)); 
                  break;
                }
      case 'd': 
                diff_so_file = optarg;
                printf("%s\n", ANSI_FMT("Difftest加载成功!", ANSI_FG_RED));
                break;
      case 'l': 
                {
                  log_file     = optarg; 
                  printf("%s\n", ANSI_FMT("Logfile加载成功!", ANSI_FG_RED));
                  break;//表示成功识别了给npc输入的--log参数，npc-log.txt记录Log宏输出的信息
                }
      case 'e':
               {
              //  printf("进入--elf\n");
               ftrace_file = optarg;
               #ifdef CONFIG_FTRACE
               char* elf_file;
               int img_name_size = strlen(ftrace_file);
              //  printf("img_name_size = %d\n", img_name_size);
               elf_file =(char*)malloc(img_name_size + 1);
               strcpy(elf_file, ftrace_file);
                elf_file[img_name_size-3] = 'e';
                elf_file[img_name_size-2] = 'l';
                elf_file[img_name_size-1] = 'f';
               // decode elf
               extern function_info* fc;    //修饰符extern用在变量或者函数的声明前，用来说明“此变量/函数是在别处定义的，要在此处引用
               fc = decode_elf(elf_file);
               printf("%s\n", ANSI_FMT("ELF加载成功!", ANSI_FG_RED));
               free(elf_file);
               // open ftrace log file
               extern char* ftrace_log;
               extern FILE* ftrace_fp;
               ftrace_fp = fopen(ftrace_log, "w");
               #endif
               break;
               }

      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-i,--img                load npc imge\n");
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=elf            read function symbols from elf (only when enable ftrace)\n");
        printf("\n");
        exit(0);
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

  // init device.
  // init_device();

  /* Load the image to memory. This will overwrite the built-in image. */
  // 加载命令行指定的镜像文件
  long img_size = load_img();

  #ifdef  DIFFTEST_ON
   /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size);
  #endif

  // /* Initialize the simple debugger. */
  init_sdb();

  // init_disasm() - 初始化LLVM提供的用于反汇编的库函数
  init_disasm("riscv64-pc-linux-gnu");

  // /* Display welcome message. */
  // // 输出欢迎信息以及trace的状态信息,还输出了编译的时间和日期
  welcome();


}