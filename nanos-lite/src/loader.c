#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
// size_t ramdisk_read(void *buf, size_t offset, size_t len) ;
size_t get_ramdisk_size() ;
int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);


// static uintptr_t loader(PCB *pcb, const char *filename) {
//   //  int8_t test ;
//   // ramdisk_read(&test,0x430,1);
//   // printf("test is %d\n",test);
//   // TODO();
//   Elf_Ehdr elfhdr = {};
//   Elf_Phdr elfphdr = {};
//   ramdisk_read(&elfhdr , 0 ,get_ramdisk_size());
//   // printf("e_phoff is %d\n",elfhdr.e_phoff);
//   // printf("ramdisk_size is %d\n",get_ramdisk_size());

//   uint16_t i ;
//   for( i = 0; i<elfhdr.e_phnum;i++){
//     uint64_t phoff = elfhdr.e_phoff +elfhdr.e_phentsize*i;
//     ramdisk_read(&elfphdr , phoff,elfhdr.e_phentsize);
//     if(elfphdr.p_type == 0x01){
//       // printf("come to here!!!!!!");
//       ramdisk_read((void*)(elfphdr.p_vaddr ),elfphdr.p_offset,elfphdr.p_memsz);
//       memset((void*)(elfphdr.p_vaddr + elfphdr.p_filesz),0,(elfphdr.p_memsz - elfphdr.p_filesz));
//     }
//   }
//   // int8_t* test2 = (int8_t*) 0x0000000083000430;
//   // printf("test2 is %d\n",*test2);
//   return elfhdr.e_entry;
// }


static uintptr_t loader(PCB *pcb, const char *filename) {
  // printf("ramdisk_size is %d\n",get_ramdisk_size());
  Elf_Ehdr elfhdr = {};
  Elf_Phdr elfphdr = {};
  int file_flag = fs_open(filename,0,0);
  fs_read(file_flag,&elfhdr ,sizeof(elfhdr));

  // ramdisk_read(&elfhdr , 0 ,get_ramdisk_size());
  uint16_t i ;
  for( i = 0; i<elfhdr.e_phnum;i++){
    uint64_t phoff = elfhdr.e_phoff +elfhdr.e_phentsize*i;
    fs_lseek(file_flag,phoff,0);
    fs_read(file_flag,&elfphdr ,sizeof(elfphdr));
    // ramdisk_read(&elfphdr , phoff,elfhdr.e_phentsize);
    if(elfphdr.p_type == 0x01){
      fs_lseek(file_flag,elfphdr.p_offset,0);
      fs_read(file_flag,(void*)(elfphdr.p_vaddr ) ,elfphdr.p_memsz);
      // ramdisk_read((void*)(elfphdr.p_vaddr ),elfphdr.p_offset,elfphdr.p_memsz);
      memset((void*)(elfphdr.p_vaddr + elfphdr.p_filesz),0,(elfphdr.p_memsz - elfphdr.p_filesz));
    }
  }
  printf("ok\n");
  return elfhdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

