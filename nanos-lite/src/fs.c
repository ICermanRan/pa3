#include <fs.h>

size_t serial_write(const void *buf, size_t offset, size_t len);


typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);


typedef struct {
  char *name;         //文件名，例如 /bin/hello
  size_t size;        //文件大小
  size_t disk_offset; //文件在ramdisk中的偏移
  ReadFn read;        //读函数指针，用于指向真正进行读的函数，并返回成功读的字节数
  WriteFn write;      //写函数指针，用于指向真正进行写的函数，并返回成功写的字节数
  size_t open_offset; //当前的文件偏移量，一直在变化
} Finfo;

//默认的文件描述符fd
enum {FD_STDIN, //标准输入stdin
      FD_STDOUT,//标准输出stdout
      FD_STDERR,//标准错误stderr 
      FD_FB
};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
//Finfo 结构体的初始化使用了一种特殊的语法，使用方括号和索引来指定数组中的元素。每个索引对应一个文件描述符fd。
    //值得注意的是，_attribute__((used)) 是一个编译器特定的属性（attribute），用于告知编译器确保file_table 数组在最终的可执行文件中被保留
    //即使在没有其他对该数组的引用的情况下。这样可以防止编译器在优化过程中将该数组识别为无用代码，并将其从最终的可执行文件中删除。
//文件记录表Finfo是一个数组，数组每个元素是由多个字段组成的结构体，这些字段包括文件名、大小以及读写操作的处理函数
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  //3个特殊的文件: stdin, stdout和stderr的占位表项,它们只是为了保证sfs和约定的标准输入输出的文件描述符保持一致, 
  //例如根据约定添加了三个占位表项之后,stdout的文件描述符fd是1, 文件记录表中的1号下标也就不会分配给其它的普通文件了.
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

#define TABLE_LEN (int)(sizeof(file_table) / sizeof(Finfo))

// size_t open_offset = 0;

/*fs_open:用于打开文件*/
int fs_open(const char*pathname, int flags, int mode) {
  int fd = -1;
  for(int i = 0; i < TABLE_LEN; i++) {
    // printf("pathname = %s\n", *pathname);
    if(strcmp(file_table[i].name, pathname) == 0) {//如果pathname所指向的字符串和file_table[i].name所指向的字符串 相同
      fd = i;
      file_table[i].open_offset = 0;//每个新打开的文件,其起始操作偏移量都为0，因为还没有对其中任何内容操作
      break;
    }
  }
  
  if(fd == -1) {
    assert(0);//fs_open()没有找到pathname所指示的文件"属于异常情况,should not reach here!
  }
  return fd;  
}

/*fs_close:由于sfs没有维护文件打开的状态, fs_close()可以直接返回0, 表示总是关闭成功*/
int fs_close(int fd) {
  file_table[fd].open_offset = 0;
  return 0;
}


/*fs_read:用于从文件中读取数据*/
size_t fs_read(int fd, void *buf, size_t len) {
  // if(fd == 0 || fd > 2) {
  //   if(file_table[fd].open_offset < 0) {
  //     Log_red("fs_read open_offset out of bound!fd=%d, name=%s, len=%d, open_offset=%d",fd,file_table[fd].name,len,file_table[fd].open_offset);
  //     assert(0);//处理open_offset < 0的情况
  //   }

  //   if(file_table[fd].open_offset >= file_table[fd].size) {//如果当前文件偏移量超过了文件大小f_size
  //     return -1;//说明已经读取到了文件末尾，返回-1表示读取失败
  //   }

  //   if(file_table[fd].open_offset + len >= file_table[fd].size) {//如果当前文件偏移量 + 要读取的数据长度 > 文件大小
  //     len = file_table[fd].size - file_table[fd].open_offset;//则将读取长度len限制为剩余的文件长度，确保不会读取超过文件末尾的数据
  //   }
  // }

  // /*使用ramdisk_read()来进行文件的真正读操作.*/
  // //从虚拟磁盘中读取数据到目标缓冲区 buf。
  // //读取的起始位置是文件在磁盘上的偏移量 file_table[fd].disk_offset 加上当前的文件操作偏移量 open_offset
  // //要读取的字节数是 len。
  // size_t real_len = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
  // file_table[fd].open_offset = file_table[fd].open_offset + real_len;//更新文件偏移量 open_offset，将其增加 len，以便下一次读取操作可以从正确的位置开始。
  // return real_len;//返回成功读取的字节数real_len，表示读取操作成功。
  
/*********************************************************************/  
  // size_t f_size = file_table[fd].size;
  // if(file_table[fd].open_offset >= f_size){
  //   return -1;
  // }
  // if(file_table[fd].open_offset + len > f_size){
  //   len = f_size - file_table[fd].open_offset;
  // }
  // ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
  // file_table[fd].open_offset = file_table[fd].open_offset + len;
  // return len;
  if (fd == 0 || fd > 2) {
    Finfo *file = &file_table[fd];
    // if ((*file).open_offset + len > (*file).size) {
    //   len = (*file).size - (*file).open_offset;
    // }
    // size_t offset = (*file).disk_offset + (*file).open_offset;
    // size_t bytes = ramdisk_read(buf, offset, len);
    // (*file).open_offset += bytes;
    if (file->open_offset + len > file->size) {
      len = file->size - file->open_offset;
    }
    size_t offset = file->disk_offset + file->open_offset;
    size_t bytes = ramdisk_read(buf, offset, len);
    return bytes;
  }
  else {
    return -1;
  }
}


/*fs_write:用于向文件描述符 fd 指定的文件中写入数据*/
  //参数包括一个整数 fd、一个指向数据缓冲区的指针 buf，以及要写入的字节数 len。函数返回实际写入的字节数。
size_t fs_write(int fd, void *buf, size_t len) {
  // if(file_table[fd].write != NULL) {  //检查fd对应的文件元素是否具有写入操作的处理函数
  //   return (file_table[fd].write)(buf, open_offset, len);//如果存在，则调用该函数，将其返回值作为fs_write的返回值
  // }
  // else {
  //   size_t f_size = file_table[fd].size;//获取文件大小并将其赋值给变量f_size
  //   if(open_offset >= f_size) { //检查 open_offset 是否超出文件大小，如果超出，则返回 -1 表示写入失败。
  //     return -1;
  //   }
  //   if(len > (f_size - open_offset)) { //检查写入长度 len 是否超出文件剩余可写入的长度
  //     len = f_size - open_offset; //如果超出，则将 len 限制为剩余可写入的长度，以确保不超出文件的大小。
  //   }
    
  //   ramdisk_write(buf, file_table[fd].disk_offset + open_offset, len);//调用 ramdisk_write 函数向 RAM 磁盘中写入数据
  //   open_offset = open_offset + len;//写入完成后，更新 open_offset 的值为当前位置加上已写入的字节数。
  //   return len;//返回实际写入的字节数 len。
  // }
  /********************************************/
//  size_t i = 0;
//   if (fd == 1 || fd == 2) {
//     for(; len > 0; len--) {
//       putch(((char*)buf)[i]);
//       i++;
//     }
//     return i;
//   }
//   else if (fd != 0) {
//     Finfo *file = &file_table[fd];
//     if ((*file).open_offset + len > (*file).size) {
//       len = (*file).size - (*file).open_offset;
//     }
//     size_t offset = (*file).disk_offset + (*file).open_offset;
//     size_t bytes = ramdisk_write(buf, offset, len);
//     (*file).open_offset += bytes;
//     return bytes;
//   }
//   else {
//     return -1;
//   }
  /*********************************************/
  if (fd != 0) {
    Finfo *file = &file_table[fd];
    if (file->write != NULL) { //非普通文件
      return file->write(buf, 0, len);
    }
    else {                     //普通文件
      if (file->open_offset + len > file->size) {
        len = file->size - file->open_offset;
      }
      size_t offset = file->disk_offset + file->open_offset;
      size_t bytes = ramdisk_write(buf, offset, len);
      file->open_offset += bytes;
      return bytes;
    }
  }
  else {
    return -1;
  }
}


/*fs_lseek:用于设置文件的偏移量*/
  //          文件描述符fd  偏移量offset  偏移方式whence
size_t fs_lseek(int fd, size_t offset, int whence) {
  if(fd == FD_STDIN || fd == FD_STDOUT || fd == FD_STDERR) {
    assert(0);
  }

  switch (whence)
  {
  case SEEK_SET://表示相对于文件的起始位置进行偏移
    if(offset <= file_table[fd].size) { //检查偏移量 offset 是否在文件的范围内
      file_table[fd].open_offset = offset;
      return file_table[fd].open_offset;
    }
    else {return -1;} //如果不在范围内，则返回-1表示设置偏移失败
    break;

  case SEEK_CUR://表示相对于当前位置进行偏移
    if(file_table[fd].open_offset + offset <= file_table[fd].size) { //检查当前的文件偏移量 open_offset 加上偏移量 offset 是否在文件的范围内
      file_table[fd].open_offset = file_table[fd].open_offset + offset;
      return file_table[fd].open_offset;
    }
    else {return -1;}
    break;

  case SEEK_END://表示相对于文件末尾位置进行偏移
    if((signed)offset <= 0) {
      file_table[fd].open_offset = file_table[fd].size + offset;
      return file_table[fd].open_offset;
    }
    else {return -1;}
    break;
  
  default:panic("check your input whence for lseek");
    break;
  }

  
}