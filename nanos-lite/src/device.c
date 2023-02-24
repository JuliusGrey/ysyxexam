#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  // return 0;
    int i = 0;
     char *buf_c = (char *)buf;
    for(int k = 0; k <len; k++){
      if(buf_c[k] =='\0'){
        return i;
      }else{
        i++;
        putch(buf_c[k]);
      }
    }
    return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  // bool has_kbd  = io_read (AM_INPUT_CONFIG).present;
  //   if (has_kbd) {
  //   while (1) {
  //     AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  //     if (ev.keycode == AM_KEY_NONE) break;
  //     printf("Got  (kbd): %s (%d) %s\n", names[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");
  //   }
  // }


      // if(has_kbd) printf("there is input!!!!!!\n");
      AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
    //   while (1) {
    //     // printf("come to here\n");
    //   AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
    //   if (ev.keycode == AM_KEY_NONE) break;
    //   printf("Got  (kbd): %s (%d) %s\n", keyname[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");
    // }
    // return 0;
      int i = 0;
    //  char *buf_c = (char *)buf;
      if (ev.keycode == AM_KEY_NONE) return 0;
      else if (ev.keydown) {
        i = sprintf(buf, "kd %s\n", keyname[ev.keycode]);
    } else {
        i = sprintf(buf, "ku %s\n", keyname[ev.keycode]);
    }
      
      
      //  {
      //   if(ev.keydown){
      //   strncpy(buf_c, "kd ", 3);
      //   } else{
      //     strncpy(buf_c, "ku ", 3);
      //   }
      //   i = i + 3;
      //   strncpy(buf_c + 3, keyname[ev.keycode], strlen(keyname[ev.keycode]));
      //   i = i + strlen(keyname[ev.keycode]);
      //   *(buf_c + i) = '\n';
      //   i++;
      //   *(buf_c + i) = '\0';
        return i;
      // }
}



// void itoa2(unsigned int n, char * buf)
// {
//         int i;
        
//         if(n < 10)
//         {
//                 buf[0] = n + '0';
//                 buf[1] = '\n';
//                 buf[2] = '\0';
//                 return;
//         }
//         itoa2(n / 10, buf);

//         for(i=0; buf[i]!='\0'; i++);
        
//         buf[i] = (n % 10) + '0';
//         buf[i+1] = '\n';
//         buf[i+2] = '\0';
// }

void itoa_ (unsigned int n, char * buf)
{
        int i;
        
        if(n < 10)
        {
                buf[0] = n + '0';
                buf[1] = '\0';
                return;
        }
        itoa_ (n / 10, buf);

        for(i=0; buf[i]!='\0'; i++);
        
        buf[i] = (n % 10) + '0';
        
        buf[i+1] = '\0';
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  // struct kvp {
  // char key[15];
  // int value;
  // };
  // struct kvp *buf_kvp = buf;

  void itoa_ (unsigned int n, char * buf);
  char*buf_c = buf;
  int w = io_read(AM_GPU_CONFIG).width ;
  int h = io_read(AM_GPU_CONFIG).height;
  char buf_info[30];
  int indxe = 0;

  strncpy(buf_c + indxe, "WIDTH:", strlen("WIDTH:"));
  indxe += strlen("WIDTH:");

  itoa_ (w,buf_info);
  strncpy(buf_c + indxe, buf_info, strlen(buf_info));
  indxe += strlen(buf_info);

  *(buf_c + indxe) ='\n';
  indxe++;


  strncpy(buf_c + indxe, "HEIGHT:", strlen("HEIGHT:"));
  indxe += strlen("HEIGHT:");

  itoa_ (h,buf_info);
  strncpy(buf_c + indxe, buf_info, strlen(buf_info));
  indxe += strlen(buf_info);

  *(buf_c + indxe) ='\n';
  indxe++;

    *(buf_c + indxe) ='\0';
  indxe++;
  



  // strncpy((buf_kvp + 1)->key, "HEIGHT:", 7);
  // (buf_kvp + 1)-> value = h;

  // strncpy(buf + len_, "WIDTH  :  ", 10);
  // len_ += 10;
  // // strncpy(buf + len_, w, sizeof(int));
  // *(int *)(buf + len_) = w;
  // len_ += sizeof(int);
  // // strncpy(buf + len_, '\n', 1);
  // *(char *)(buf + len_) = '\n';
  // len_++;

  // strncpy((char*)buf + len_, "HEIGHT  :  ", 11);
  // len_ += 11;
  // // // strncpy(buf + len_, h, sizeof(int));
  // *(int *)(buf + len_) = h;
  // len_ += sizeof(int);
  // // // strncpy(buf + len_, '\n', 1);
  // *(char *)(buf + len_) = '\n';
  // len_++;
  // *(char *)(buf + len_) = '\0';
  // // strncpy(buf + len_, '\0', 1);
  // len_++;
  // // strncpy(buf , "the first line ,\n   the second line .\n\0:  ", sizeof("the first line ,\n   the second line .\n\0:  "));
  // printf("buf is %s!!!!!!",buf);
  return indxe;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  // int len_ = len/4;
  // uint32_t* buf_32 = (uint32_t*)buf;
  // int w = io_read(AM_GPU_CONFIG).width ;
  // for(int i = 0; i < len_; i ++ ){
  //   int offset_true = offset/4 + i;
  // int x = offset_true%w;
  // int y = offset_true/w;
  
  // io_write(AM_GPU_FBDRAW, x, y, buf_32 + i, 1, 1, false);}
  // io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
AM_GPU_CONFIG_T vga = io_read(AM_GPU_CONFIG);
AM_GPU_FBDRAW_T ctl;
ctl.pixels = (void*) buf;
ctl.sync= true;
#if defined(__ISA_NATIVE__)
ctl.x = (offset /4) %vga.width;
ctl.y = (offset /4) /vga.width;
ctl.w = len/4;
ctl.h = 1;
#else
ctl.x =offset  %vga.width;
ctl.y = offset   /vga.width;
ctl.w = len >>32;
ctl.h = len &0x00000000ffffffff;
#endif
io_write(AM_GPU_FBDRAW , ctl.x,ctl.y,ctl.pixels,ctl.w,ctl.h,ctl.sync);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
