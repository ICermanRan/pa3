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
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>
/*实现映射的管理*/

#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  // printf("size = %d\n", size);
  p_space += size;
  // printf("p_space = %x\n", p_space);
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

//map_read()和map_write()用于将地址addr映射到map所指示的目标空间, 并进行访问
//访问时, 可能会触发相应的回调函数, 对设备和目标空间的状态进行更新

//由于NEMU是单线程程序, 因此只能串行模拟整个计算机系统的工作, 每次进行I/O读写的时候, 才会调用设备提供的回调函数(callback). 
//基于这两个API, 我们就可以很容易实现端口映射I/O和内存映射I/O的模拟了.

word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);

  // #ifdef  CONFIG_DTRACE
  //   char device_name [16];
  //   //device_names:serial、keyboard
  //   strcpy(device_name, "keyboard");//这里是可以改的，根据自己想追踪的设备而定！
  //   int i = strcmp(device_name, map->name);
    
  //   if(i == 0)
  //     printf("Dtrace:Read %s, addr = %x, len = %d\n", map->name, addr, len);
  // #endif
  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  word_t ret = host_read(map->space + offset, len);
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);

  // if(addr >= 0xa0000100 && addr <=0xa0000107)
  // {
  //   printf("addr = %x, data = %ld, len = %d, name = %s\n", addr, data, len, map->name);
  // }

  #ifdef  CONFIG_DTRACE
    char device_name [16];
    //device_names:serial、keyboard
    strcpy(device_name, "keyboard");//这里是可以改的，根据自己想追踪的设备而定！
    int i = strcmp(device_name, map->name);
    
    if(i == 0)
      printf("Dtrace:Write %s, addr = %x, len = %d\n", map->name, addr, len);
  #endif

  paddr_t offset = addr - map->low;

  //  if(addr >= 0xa0000100 && addr <=0xa0000107)
  // {
  //   printf("map->space + offset = %x\n", map->space + offset);
  // }
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}

void spcae_free()
{
  free(io_space);
}