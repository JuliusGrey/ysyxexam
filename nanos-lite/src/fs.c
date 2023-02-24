#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t open_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_DEV_EVENT , FD_FB, FD_PROC_DISPINFO};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, 0, invalid_read, serial_write},
  [FD_DEV_EVENT]  = {"/dev/events", 0, 0, 0, events_read, invalid_write},
  [FD_FB]  = {"/dev/fb", 0, 0, 0, invalid_read, fb_write},
  [FD_PROC_DISPINFO]  = {"/proc/dispinfo", 0, 0, 0, dispinfo_read, invalid_write},
#include "files.h"
};
int talbe_index = sizeof(file_table)/sizeof(Finfo);
void init_fs() {
    int w = io_read(AM_GPU_CONFIG).width ;
  int h = io_read(AM_GPU_CONFIG).height;
  file_table[FD_FB].size = w*h*4;
  file_table[FD_FB].open_offset = 0;
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode){
  // int talbe_index = sizeof(file_table)/sizeof(Finfo);
  printf("file is %s\n",pathname);
  for( int i = 0; i <talbe_index ; i++){
    if(!strncmp(pathname ,file_table[i].name,strlen(pathname) - 1)){
      return i;
    }
  }
  
  assert(0);
}
size_t ramdisk_read(void *buf, size_t offset, size_t len) ;
size_t fs_read(int fd, void *buf, size_t len){
    assert(fd <= talbe_index);
    Finfo selectfile = file_table[fd];
    size_t base_offset = selectfile.open_offset + selectfile.disk_offset;
    if(selectfile.read == NULL){
      size_t ture_len;
      if(selectfile.open_offset + len <= selectfile.size){
        ture_len = len;
      }else {
        ture_len = selectfile.size - selectfile.open_offset;
      }
      file_table[fd].open_offset += ture_len;
      // printf("base_offset is %d\n",base_offset);
      // printf("ture_len is %d\n",ture_len);
      return ramdisk_read(buf,base_offset,ture_len);
    }else return selectfile.read(buf,base_offset,len);
}
int fs_close(int fd){
  if(fd <=2) return 0;
  file_table[fd].open_offset =0;
  return 0;
}
size_t fs_lseek(int fd, size_t offset, int whence){
  // printf("come to here!!!!!!\n");
  switch (whence)
  {
  case 0:file_table[fd].open_offset = offset;break;
  case 1:file_table[fd].open_offset += offset;break;
  case 2:file_table[fd].open_offset = file_table[fd].size +offset ;break;
  default: 
    break;
  }
  // if(fd == 4)
  // printf("open_offset is %d\n",file_table[fd].open_offset);
  return file_table[fd].open_offset ;
}


size_t fs_write(int fd, const void *buf, size_t len){
    assert(fd <= talbe_index);
    Finfo selectfile = file_table[fd];
    size_t base_offset = selectfile.open_offset + selectfile.disk_offset;
    if(selectfile.write == NULL){
      size_t ture_len;
      if(selectfile.open_offset + len <= selectfile.size){
        ture_len = len;
      }else {
        ture_len = selectfile.size - selectfile.open_offset;
      }
      file_table[fd].open_offset += ture_len;
      return ramdisk_write(buf,base_offset,ture_len);
    }else{
      return selectfile.write(buf,base_offset,len);
    }

}
    // int i = 0;
    //  char *buf_c = (char *)buf;
    // for(int k = 0; k <len; k++){
    //   if(buf_c[k] =='\0'){
    //     return i;
    //   }else{
    //     i++;
    //     putch(buf_c[k]);
    //   }
    // }
    // return i;
    // // }
  // else{
  //   assert(fd <= talbe_index);
  //   Finfo selectfile = file_table[fd];
  //   size_t ture_len;
  //   size_t base_offset = selectfile.open_offset + selectfile.disk_offset;
  //   if(selectfile.open_offset + len <= selectfile.size){
  //     ture_len = len;
  //   // return ramdisk_read(buf,selectfile.open_offset + selectfile.disk_offset,len);
  //    }else {
  //     ture_len = selectfile.size - selectfile.open_offset;
  //     // return ramdisk_read(buf,selectfile.open_offset + selectfile.disk_offset,selectfile.size - selectfile.open_offset );
  //   }
  //   file_table[fd].open_offset += ture_len;
  //   return ramdisk_write(buf,base_offset,ture_len);
  // }
  // switch (fd)
  // {
  // case 1:
  //   {int i = 0;
  //    char *buf_c = (char *)buf;
  //   for(int k = 0; k <count; k++){
  //     if(buf_c[k] =='\0'){
  //       return i;
  //     }else{
  //       i++;
  //       putch(buf_c[k]);
  //     }
  //   }
  //   return i;}
  //   break;
  // case 2:
  //   {int i = 0;
  //    char *buf_c = (char *)buf;
  //   for(int k = 0; k <count; k++){
  //     if(buf_c[k] =='\0'){
  //       return i;
  //     }else{
  //       i++;
  //       putch(buf_c[k]);
  //     }
  //   }
  //   return i;}
  //   break;
  
  // default:
  // return -1;
  //   break;
  // }
// }
