#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
//size_t ramdisk_read(void *buf, size_t offset, size_t len) ;

size_t fs_lseek(int fd, size_t offset, int whence);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_read(int fd, void *buf, size_t len);
int fs_open(const char *pathname, int flags, int mode);

static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  Log("loader %s",filename);
  Elf_Ehdr ehdr;
  Elf_Phdr phdr; 
  int fp = fs_open(filename,0,0);
  Log("fp :%d",fp);
  fs_read(fp,&ehdr,sizeof(Elf_Ehdr));
  for(int i =0;i<ehdr.e_phnum;i++){
    fs_lseek(fp,ehdr.e_phoff+sizeof(Elf_Phdr)*i,0);
    //  0 express from zero offset
    fs_read(fp,&phdr,sizeof(Elf_Phdr));
    if(phdr.p_type==PT_LOAD){
      fs_lseek(fp,phdr.p_offset,0);
      fs_read(fp,(void *)phdr.p_vaddr,phdr.p_filesz);
      //fs_lseek(fp,phdr.p_filesz,0);
      //ramdisk_read(&phdr, ehdr.e_phoff+i*sizeof(Elf_Phdr), sizeof(Elf_Phdr));
      //printf("phdr.p_vaddr:%d\n",phdr.p_filesz);
      //ramdisk_read((void *)phdr.p_vaddr,phdr.p_offset,phdr.p_memsz);
      for(long long int j = phdr.p_filesz;j<phdr.p_memsz;j++){
        *(char *)(j+phdr.p_vaddr) = 0; 
      }
    }
  }
  /*
  Elf_Ehdr ehdr;
  Elf_Phdr phdr; 
  //printf("lixinbao\n");
  ramdisk_read(&ehdr, 0, sizeof(Elf_Ehdr));
  for(int i =0;i<ehdr.e_phnum;i++){
    ramdisk_read(&phdr, ehdr.e_phoff+i*sizeof(Elf_Phdr), sizeof(Elf_Phdr));
    //printf("phdr.p_vaddr:%d\n",phdr.p_filesz);
    ramdisk_read((void *)phdr.p_vaddr,phdr.p_offset,phdr.p_memsz);
    for(long long int j = phdr.p_filesz;j<phdr.p_memsz;j++){
      *(char *)(j+phdr.p_vaddr) = 0; 
    }
  }*/
  Log("loader %s down",filename);
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %d", entry);
  ((void(*)())entry) ();
}

