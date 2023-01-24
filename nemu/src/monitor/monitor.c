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

#include <isa.h>
#include <memory/paddr.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);


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
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("👽😡🤡🥶😎😭😵🤤🥵😄🤣🥳💩🤖😱😴😀🥰😅😫\n");
  printf("For help, type \"help\"\n");
 

}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

#ifdef CONFIG_FTRACE
static char * elf_file = NULL; //通过makefile -e选项加载elf文件(根据在/am-kernels/tests/cpu-tests目录下，ALL = 指定哪个elf)
int tot_func_num=-1;
function_unit funcs[FUNC_NUM];
static char name_all[2048];
#define name_all_len (sizeof(name_all))


/********************检查head********************/
static bool check_elf(FILE * fp)
{

  //int fseek(FILE *stream, long int offset, int whence)
  //函数设置流stream的文件位置为给定的偏移 offset，参数 offset 意味着从给定的 whence 位置偏移的字节数
  //SEEK_SET	0	/* Seek from beginning of file.  */
  //SEEK_CUR	1	/* Seek from current position.  */
  //SEEK_END	2 /* Seek from end of file.  */
  
  fseek(fp, 0, SEEK_SET);/* 查找文件的开头 */
  Ehdr ehdr;//定义ELF文件头(描述整个文件的组织结构)
  
  //size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
  //函数从给定流 stream 读取数据到 ptr 所指向的数组中。
  /*
    ptr -- 这是指向带有最小尺寸 size*nmemb 字节的内存块的指针。
    size -- 这是要读取的每个元素的大小，以字节为单位。
    nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
    stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输入流。
  */
  int ret = fread(&ehdr, sizeof(Ehdr), 1, fp);//从fp读取数据存储到ehdr
  assert(ret == 1);//如果ret !=1,则终止程序
  
  //判断elf文件类型
  //e_ident前4个字节是ELF的Magic Number 
  //e_ident 字段前四位为文件标识，一般为“\x7fELF”，通过这四位，可以查看该文件是否为ELF文件
  if(ehdr.e_ident[0] != 0x7f || ehdr.e_ident[1] != 'E' || ehdr.e_ident[2] != 'L' || ehdr.e_ident[3] != 'F')
  {
    Log_red("Load a non-ELF file, error!");
    return 0;
  }

  //判断ELF文件是32位还是64位(肯定是64位)
  if(ehdr.e_ident[4] != MUXDEF(CONFIG_ISA64, ELFCLASS64, ELFCLASS32))
  {
    Log_red("Elf refers to not suppored ISA, elf is ignored");
    return 0;
  }

  //第6个字节指明了数据的编码方式
  //little endian：将低序字节存储在起始地址（低位编址）
  if(ehdr.e_ident[5] != ELFDATA2LSB)
  {
    Log_red("Not supported little edian, elf is ignored");
    return 0;
  }

  //ehdr.e_shoff表示section header table在文件中的 offset，如果这个 table 不存在，则值为0。
  if(ehdr.e_shoff == 0) 
  {
    Log_red("No Sections header table. Elf is ignored.");
    return 0;
  }

  //ehdr.e_shnum表示section header table中header的数目
  //如果文件没有section header table, e_shnum的值为0。
  //e_shentsize乘以e_shnum，就得到了整个section header table的大小。
  if(!ehdr.e_shnum) 
  {
    Log_red("Too many sections. Elf is ignored.");
    return 0;
  }

  return 1;
}


static void load_elf()
{
  if(!elf_file)
    return;
  
  Log_magenta("进入load_elf");

  //打开文件
  FILE * fp = fopen(elf_file, "rb");//rb:读方式打开一个二进制文件，不允许写数据，文件必须存在
  if(fp == NULL)
    {
      Log_red("Can not open '%s' ,treated as no elf file.",elf_file);
      return;
    }

  if(!check_elf(fp))  //初步检查elf文件是否有问题
    return;

  Ehdr ehdr;//定义ELF文件头(描述整个文件的组织结构)
  fseek(fp, 0, SEEK_SET);/*回到文件的开头*/
  int ret = fread(&ehdr, sizeof(Ehdr), 1, fp);//从fp读取数据存储到ehdr
  assert(ret == 1);//如果ret !=1,则终止程序

  Shdr shdr;//定义ELF文件节头(section header)
  tot_func_num = 0;
  int name_len = 0;

  //遍历
  printf("开始遍历，ehdr.e_shnum = %d\n", ehdr.e_shnum);
  for(int i = 0; i < ehdr.e_shnum; i++)
  {
    //e_shoff 字段表示节头表在文件中的偏移
    fseek(fp, (ehdr.e_shoff + i * ehdr.e_shentsize), SEEK_SET);//每次都重新定位指针位置
    ret = fread(&shdr, sizeof(Shdr), 1, fp);//根据指针所指地址读取数据放入shdr中
    assert(ret == 1);

    //sh_type, 4字节, 描述了section的类型 

    if(shdr.sh_type == SHT_STRTAB)  
    {
      //该类型包含一个字符串表
      fseek(fp, shdr.sh_offset, SEEK_SET);
      name_len = fread(name_all, 1, name_all_len, fp);//将字符串表内容存储在name_all数组
      printf("name_len = %d\n", name_len);
    }

    if(shdr.sh_type == SHT_SYMTAB)
    {
      //该类型包含了一个符号表。当前，一个ELF文件中只有一个符号表。
      Sym sym;//定义符号表变量
      for(int j = 0; j < shdr.sh_size; j += shdr.sh_entsize)
      {
        fseek(fp, shdr.sh_offset + j, SEEK_SET);
        ret = fread(&sym, sizeof(Sym), 1, fp);
        assert(ret == 1);

        if(sym.st_info == STT_FUNC)
        {
          if( (sym.st_name > name_len) || (tot_func_num == FUNC_NUM) ) 
            continue;//结束本次循环

          funcs[tot_func_num].name = sym.st_name + name_all;
          funcs[tot_func_num].st = sym.st_value;
          funcs[tot_func_num].ed = sym.st_value + sym.st_size;
          ++tot_func_num;
          printf("tot_func_num = %d\n", tot_func_num);
        }
      }
    }
  }

  fclose(fp);
  Log_magenta("ELF_file = %s loading ready!", elf_file);

} 
#endif

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"elf"      , required_argument, NULL, 'e'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e':
               #ifdef CONFIG_FTRACE
               elf_file = optarg; 
               #else
               printf("System do not support function trace unless it is enabled.\n");
               #endif
              break;

      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
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

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Open the elf file  */
  #ifdef CONFIG_FTRACE
  load_elf(elf_file);
  #endif
  
  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
