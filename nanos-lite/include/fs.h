#ifndef __FS_H__
#define __FS_H__

#include <common.h>

#ifndef SEEK_SET
enum {SEEK_SET, SEEK_CUR, SEEK_END};
//三个常量用于表示相对于文件的起始位置、当前位置和文件末尾位置进行偏移的方式。
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

int fs_open(const char*pathname, int flags, int mode);
int fs_close(int fd);
size_t fs_write(int fd, void *buf, size_t len);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);



#endif
