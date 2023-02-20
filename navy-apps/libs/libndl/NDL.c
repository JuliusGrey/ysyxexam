#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <time.h>
#include <sys/time.h>

// #include <sys/types.h>
// #include <sys/stat.h>
#include <fcntl.h>




static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

uint32_t NDL_GetTicks() {
  struct timeval tv_end;
  gettimeofday(&tv_end,NULL);
  // printf("come to here\n");
  return (tv_end.tv_usec/1000 + tv_end.tv_sec*1000)& 0x7fffffff;
  // return 0 ;
}

int NDL_PollEvent(char *buf, int len) {
  // printf("evtdev is %d\n",evtdev);
  int rd = read(evtdev,buf,len);
  // printf("eve is %s\n", buf);
  return rd >0 ;
  // return 0;
}

// void NDL_OpenCanvas(int *w, int *h) {
//   if (getenv("NWM_APP")) {
//     // printf("come to here!!!!!!\n");
//     int fbctl = 4;
//     fbdev = 5;
//     screen_w = *w; screen_h = *h;
//     char buf[64];
//     int len = sprintf(buf, "%d %d", screen_w, screen_h);
//     // let NWM resize the window and create the frame buffer
//     write(fbctl, buf, len);
//     while (1) {
//       // 3 = evtdev
//       int nread = read(3, buf, sizeof(buf) - 1);
//       if (nread <= 0) continue;
//       buf[nread] = '\0';
//       if (strcmp(buf, "mmap ok") == 0) break;
//     }
//     close(fbctl);
//   }else{

//     if(*w == 0 && *h == 0){ 
//       int dispinfo = open("/proc/dispinfo",2);
//         char info[50];
//         int rd = read(dispinfo,info,30);



//         int width = 0;
//         int hight = 0;
//         int index = 0;
//         int w_index = 1;
//         int h_index = 2;
//         for(int i = 0; info[i] != '\0'; i++){
//           if(info[i] == ':') index++;
//           if(index  == w_index && info[i] >= '0'&& info[i] <= '9'){
//             width *=10;
//             width += info[i]  - '0';
//           }else if(index  == h_index && info[i] >= '0'&& info[i] <= '9'){
//             hight *=10;
//             hight += info[i]  - '0';
//           }

//         }
//         screen_w= width;
//         screen_h = hight;
//         *w = width;
//         *h = hight;

//     }else{
//     screen_w = *w; screen_h = *h;}
//   }
// }
void NDL_OpenCanvas(int *w, int *h)
{
  // if (getenv("NWM_APP"))
  // {
  //   int fbctl = 4;
  //   fbdev = 5;
  //   screen_w = *w;
  //   screen_h = *h;
  //   char buf[64];
  //   int len = sprintf(buf, "%d %d", screen_w, screen_h);
  //   // let NWM resize the window and create the frame buffer
  //   write(fbctl, buf, len);
  //   while (1)
  //   {
  //     // 3 = evtdev
  //     int nread = read(3, buf, sizeof(buf) - 1);
  //     if (nread <= 0)
  //       continue;
  //     buf[nread] = '\0';
  //     if (strcmp(buf, "mmap ok") == 0)
  //       break;
  //   }
  //   close(fbctl);
  // }

  int fd = open("/proc/dispinfo", 0, 0);
  if (fd != -1)
  {
    char buf[50];
    read(fd, buf, sizeof(buf));
    sscanf(buf, "WIDTH:%d\n, HEIGHT:%d\n", &screen_w, &screen_h);
    //assert(*w <= screen_w && *h <= screen_h); // 画布大小不能超过屏幕大小
    if (*w == 0 && *h == 0)
    {
      *w = screen_w;
      *h = screen_h;
    }
  }
  else
  {
    printf("open /proc/dispinfo error\n");
    return;
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h)
{
  int fd = open("/dev/fb", 0, 0);
  if (fd != -1)
  {
#if defined(__ISA_NATIVE__)
    // 一次只写一行，要写行数次，支持native
    for (int j = 0; j < h; j++)
    {
      lseek(fd, ((y + j) * screen_w + x) * 4, SEEK_SET);
      write(fd, pixels + w * j, 4 * w);
    }
#else
   //定义offset为绘制区域xy的位置，借助len来传入区域高度和宽度，通过fb_write将其解析并传入AM_GPU_FBDRAW_T中，即可实现一次调用绘制整个矩形区域
    lseek(fd, x + y*screen_w, SEEK_SET);
     write(fd, pixels, ((size_t)w << 32) | ((size_t)h & 0x00000000FFFFFFFF)); // len的高32位放指示绘制区域的宽，len的低32位放它的高
#endif
  }
  else
  {
    printf("open /dev/fb error\n");
    return;
  }
}


// void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {

//   int screen_x = 0;
//   int screen_y = 0;



// //
//       int dispinfo = open("/proc/dispinfo",2);
//     char info[50];
//     int rd = read(dispinfo,info,30);



//     int width = 0;
//     int hight = 0;
//     int index = 0;
//     int w_index = 1;
//     int h_index = 2;
//     for(int i = 0; info[i] != '\0'; i++){
//       if(info[i] == ':') index++;
//       if(index  == w_index && info[i] >= '0'&& info[i] <= '9'){
//         width *=10;
//         width += info[i]  - '0';
//       }else if(index  == h_index && info[i] >= '0'&& info[i] <= '9'){
//         hight *=10;
//         hight += info[i]  - '0';
//       }

//     }
// //
//    int h_true,w_true;
//   if(h == 0) h_true = screen_h; else h_true =  h;
//   if(w == 0) w_true = screen_w; else w_true =  w;


//  // 
//   for( int i = 0; i < h_true ; i++){
//     int x_true = x + screen_x;
//     int y_true = y + screen_y;
//     int offset = ((y_true + i)*width + x_true )*4;
//     lseek(fbdev,offset,0);
//     write(fbdev,pixels + i*w_true,w_true*4);
//   }




//   //     int dispinfo = open("/proc/dispinfo",2);
//   //   char info[50];
//   //   int rd = read(dispinfo,info,30);
//   //   int width = 0;
//   //   int hight = 0;
//   //   int index = 0;
//   //   int w_index = 1;
//   //   int h_index = 2;
//   //   for(int i = 0; info[i] != '\0'; i++){
//   //     if(info[i] == ':') index++;
//   //     if(index  == w_index && info[i] >= '0'&& info[i] <= '9'){
//   //       width *=10;
//   //       width += info[i]  - '0';
//   //     }else if(index  == h_index && info[i] >= '0'&& info[i] <= '9'){
//   //       hight *=10;
//   //       hight += info[i]  - '0';
//   //     }

//   //   }

//   //  int h_true,w_true;
//   // if(h == 0) h_true = hight; else h_true =  h;
//   // if(w == 0) w_true = width; else w_true =  w;
//   // for( int i = 0; i < 299 ; i++){
//   //   int offset = ((y + i)*width + x )*4;
//   //   lseek(fbdev,offset,0);
//   //   write(fbdev,pixels + i*w_true,w_true*4);
//   // }

// }

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  evtdev = open("/dev/events",2);
  fbdev = open("/dev/fb",2);
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
