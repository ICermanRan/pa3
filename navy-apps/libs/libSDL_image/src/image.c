#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  printf("filename = %s\n", filename);
  FILE* fp = fopen(filename, "r");
  assert(fp);

  //获取文件大小的思路:使用fseek将文件指针移动到文件末尾，
    //然后使用ftell获取文件指针相对于文件头的偏移即可得到文件的大小
  fseek(fp, 0, SEEK_END);//移动文件指针到文件末尾
  long size = ftell(fp);//获取此时偏移值，即文件大小size
  char *buf = malloc(size);//申请一段大小为size的内存区间buf
  fseek(fp, 0, SEEK_SET);
  fread(buf, 1, size, fp);//读取了 size 个大小为 1 的元素到缓冲区 buf 中。
  
  SDL_Surface* surface = STBIMG_LoadFromMemory(buf, size);
  assert(surface);

  fclose(fp);
  free(buf);
  return surface;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
