#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>

#define WIDTH  400
#define HEIGHT 300

int main() {
  NDL_Init(0);
  int w, h;//图片长宽
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  assert(bmp);
  printf("BMP图片 *w = %d, *h = %d\n", w, h);
  NDL_OpenCanvas(&w, &h);
  NDL_DrawRect(bmp, 0, 0, w, h);
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
