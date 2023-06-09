#ifndef __ITRACE_H__
#define __ITRACE_H__
#include <stdint.h>
#include <stdio.h>
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void show_iringbuf();
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_disasm(const char *triple);
void itrace(uint32_t pc, uint32_t inst);

#endif