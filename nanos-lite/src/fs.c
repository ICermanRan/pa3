#include <fs.h>

size_t serial_write(const void *buf, size_t offset, size_t len);


typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
//Finfo 结构体的初始化使用了一种特殊的语法，使用方括号和索引来指定数组中的元素。每个索引对应一个文件描述符。
    //数组中包含了几个文件的信息，如标准输入 (FD_STDIN)、标准输出 (FD_STDOUT)、标准错误输出 (FD_STDERR)
//每个元素的值是一个由多个字段组成的结构体，这些字段包括文件名、大小以及读写操作的处理函数。
    //值得注意的是，_attribute__((used)) 是一个编译器特定的属性（attribute），
    //用于告知编译器确保相关的符号在最终的可执行文件中被保留
    //__attribute__((used)) 被应用于 file_table 数组，用于确保该数组在最终的可执行文件中被保留，
    //即使在没有其他对该数组的引用的情况下。这样可以防止编译器在优化过程中将该数组识别为无用代码，并将其从最终的可执行文件中删除。
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  // [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},//fd == 1
  // [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},//fd == 2
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

// #define TABLE_LEN (int)(sizeof(file_table) / sizeof(Finfo))

// size_t open_offset = 0;//当前的文件偏移量，一直在变化

// /*fs_open:用于打开文件*/
// int fs_open(const char*pathname, int flags, unsigned int mode) {
//   for(int i = 0; i < TABLE_LEN; i++) {
//     // printf("pathname = %s\n", *pathname);
//     if(strcmp(file_table[i].name, pathname) == 0) {//如果pathname所指向的字符串和file_table[i].name所指向的字符串 相同
//       open_offset = 0;
//       return i;
//     }
//   }
//   assert(0);//should not reach here!
//   return -1;
// }

// /*fs_read:用于从文件中读取数据*/
// size_t fs_read(int fd,void *buf, int len) {
//   size_t f_size = file_table[fd].size;
//   if(open_offset >f_size) { //如果当前文件偏移量超过了文件大小f_size
//     return -1;    //说明已经读取到了文件末尾，返回-1表示读取失败
//   }
//   if(len + open_offset > f_size) { //如果当前文件偏移量 + 要读取的数据长度 > 文件大小
//     len = f_size - open_offset; //则将读取长度len限制为剩余的文件长度，确保不会读取超过文件末尾的数据
//   }

//   //调用 ramdisk_read 函数从虚拟磁盘中读取数据到目标缓冲区 buf。
//   //读取的起始位置是文件在磁盘上的偏移量 file_table[fd].disk_offset 加上当前的文件偏移量 open_offset
//   //要读取的字节数是 len。
//   ramdisk_read(buf, file_table[fd].disk_offset + open_offset, len);
//   open_offset = open_offset + len;//更新文件偏移量 open_offset，将其增加 len，以便下一次读取操作可以从正确的位置开始。
//   return len;//读取的字节数 len，表示读取操作成功。
// }


// /*fs_write:用于向文件描述符 fd 指定的文件中写入数据*/
//   //参数包括一个整数 fd、一个指向数据缓冲区的指针 buf，以及要写入的字节数 len。函数返回实际写入的字节数。
// size_t fs_write(int fd, void *buf, size_t len) {
//   // if(file_table[fd].write != NULL) {  //检查fd对应的文件元素是否具有写入操作的处理函数
//   //   return (file_table[fd].write)(buf, open_offset, len);//如果存在，则调用该函数，将其返回值作为fs_write的返回值
//   // }
//   // else {
//   //   size_t f_size = file_table[fd].size;//获取文件大小并将其赋值给变量f_size
//   //   if(open_offset >= f_size) { //检查 open_offset 是否超出文件大小，如果超出，则返回 -1 表示写入失败。
//   //     return -1;
//   //   }
//   //   if(len > (f_size - open_offset)) { //检查写入长度 len 是否超出文件剩余可写入的长度
//   //     len = f_size - open_offset; //如果超出，则将 len 限制为剩余可写入的长度，以确保不超出文件的大小。
//   //   }
    
//   //   ramdisk_write(buf, file_table[fd].disk_offset + open_offset, len);//调用 ramdisk_write 函数向 RAM 磁盘中写入数据
//   //   open_offset = open_offset + len;//写入完成后，更新 open_offset 的值为当前位置加上已写入的字节数。
//   //   return len;//返回实际写入的字节数 len。
//   // }
//   if(fd == 1 || fd == 2) {
//     int i;
//     for(i = 0; i < len; i++) {
//       putch(*((char *)buf + i));
//     }
//     return i;
//   }
//   else {
//     size_t f_size = file_table[fd].size;
//     if(open_offset + len <= f_size) {
//       ramdisk_write(buf, file_table[fd].disk_offset + open_offset, len);
//       open_offset = open_offset + len;
//       return len;
//     }
//     else {
//     return -1;
//    }
//   }
// }

// /*fs_lseek:用于设置文件的偏移量*/
//   //          文件描述符fd  偏移量offset  偏移方式whence
// size_t fs_lseek(int fd, size_t offset, int whence) {
//   size_t f_size = file_table[fd].size;

//   switch (whence)
//   {
//   case SEEK_SET://表示相对于文件的起始位置进行偏移
//     if(offset <= f_size) { //检查偏移量 offset 是否在文件的范围内
//       open_offset = offset;
//       return open_offset;
//     }
//     else {return -1;} //如果不在范围内，则返回-1表示设置偏移失败
//     break;

//   case SEEK_CUR://表示相对于当前位置进行偏移
//     if(open_offset + offset <= f_size) { //检查当前的文件偏移量 open_offset 加上偏移量 offset 是否在文件的范围内
//       open_offset = open_offset + offset;
//       return open_offset;
//     }
//     else {return -1;}
//     break;

//   case SEEK_END://表示相对于文件末尾位置进行偏移
//     if((signed)offset <= 0) {
//       open_offset = f_size + offset;
//       return open_offset;
//     }
//     else {return -1;}
//     break;
  
//   default:panic("check your input whence for lseek");
//     break;
//   }
// }