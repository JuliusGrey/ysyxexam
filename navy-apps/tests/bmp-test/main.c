#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>

int main() {
  NDL_Init(0);
  int w, h;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  printf("w is %d\n", w);
  printf("h is %d\n", h);
  assert(bmp);
  NDL_OpenCanvas(&w, &h);
  // uint32_t* test = (int32_t*)bmp;
  // printf("test0 is %d\n",*(test+400));
  NDL_DrawRect(bmp, 0, 0, w, h);
  // printf("level here!!!!!!\n");
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
