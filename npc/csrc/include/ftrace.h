#include "common.h"

#ifdef CONFIG_FTRACE
#include <elf.h>

typedef struct{
  char* name;
  uint64_t addr_start;
  uint64_t addr_end;
}function_info;
typedef MUXDEF(CONFIG_ISA64, Elf64_Ehdr, Elf32_Ehdr) Ehdr;
typedef MUXDEF(CONFIG_ISA64, Elf64_Shdr, Elf32_Shdr) Shdr; 
typedef MUXDEF(CONFIG_ISA64, Elf64_Sym, Elf32_Sym) Sym;

function_info* decode_elf(char* elf_file_name);
#endif


