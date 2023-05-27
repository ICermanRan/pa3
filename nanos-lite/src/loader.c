#include <proc.h>
#include <elf.h>
#include <stdio.h>
// #include "fs.h"

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

// see /usr/include/elf.h to get the right type
#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_386  
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE EM_MIPS
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
# error Unsupported ISA
#endif


size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  // 1. read elf head:
  Elf64_Ehdr *elf_head = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  ramdisk_read(elf_head, 0, sizeof(Elf_Ehdr));//从磁盘中读取Elf64_Ehdr大小的字节内容到elf_head指针所指向的内存空间

    // 1.1 check magic number
        //首先，e_ident也是一个数组，所以elf_head->e_ident代表指向该数组的指针
        //通过 elf_head->e_ident，我们可以访问到标识符字段的值
        //(uint32_t *)elf_head->e_ident：这里使用类型转换将 elf_head->e_ident 强制转换为 uint32_t 类型的指针。因为要检验的魔数总共32位
        //*(uint32_t *)elf_head->e_ident：使用解引用运算符 *，将指针 (uint32_t *)elf_head->e_ident 所指向的内存中的值取出，得到标识符字段的值。
    // printf("e_ident = %x\n", *(uint32_t *)elf_head->e_ident);
    assert(*(uint32_t *)elf_head->e_ident == 0x464c457f);

    // 1.2 check ISA
        //e_machine是一个单纯的整数,通过查看elf可知，该值表示ELF文件的CPU平台属性
    // printf("e_machine = %x\n", elf_head->e_machine);
    // assert(elf_head->e_machine == EM_RISCV);
    assert(elf_head->e_machine == EXPECT_TYPE);

  // 2. read program headers, pro_head is a struct pointer:
  Elf64_Phdr *pro_head = (Elf_Phdr*)malloc(sizeof(Elf_Phdr)*elf_head->e_phnum);//malloc申请的空间大小为 sizeof(Elf64_Phdr) * elf_head->e_phnum,这个星号代表乘以
  // printf("sizeof(Elf_Phdr) * elf_head->e_phnum = %d\n", sizeof(Elf_Phdr) * elf_head->e_phnum);
  ramdisk_read(pro_head, elf_head->e_phoff, sizeof(Elf_Phdr) * elf_head->e_phnum);//从磁盘中读取sizeof(Elf64_Phdr) * elf_head->e_phnum大小的字节内容到pro_head指针所指向的内存空间
                                                                                  //其中，elf_head->e_phoff 用于定位到 program header table 在 ELF可执行文件 中的位置

  for(Elf_Phdr *p = pro_head; p < (pro_head + elf_head->e_phnum); p++) {
   
    if(p->p_type == PT_LOAD) {
      //load text/rodata/data segment into mem:
      // printf("p->p_vaddr = %ld\n", p->p_vaddr);
      // printf("p->p_offset = %ld, p->p_filesz = %ld\n", p->p_offset, p->p_filesz);
      ramdisk_read((void*)(p->p_vaddr), p->p_offset, p->p_filesz);

      // init bss segment(set to zero):对于 bss 段（未初始化数据段），使用 memset 函数将其内存空间初始化为零。
        //p->p_vaddr + p->p_filesz 表示 bss 段的起始地址
        //p->p_memsz - p->p_filesz 表示 bss 段的大小（总大小减去已加载的文件内容大小）
      memset((void *)(p->p_vaddr+p->p_filesz), 0, p->p_memsz - p->p_filesz);

    }
  }

  free(elf_head);
  free(pro_head);

  return elf_head->e_entry;


}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  // Log("Jump to entry = %p", entry);
  Log("Jump to entry = %p", (void *)entry);
  ((void(*)())entry) ();
}

