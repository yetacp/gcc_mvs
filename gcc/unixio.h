/* written by Paul Edwards */
/* released to the public domain */

#ifndef UNIXIO_INCLUDED
#define UNIXIO_INCLUDED

#include <stddef.h>
#include <time.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#define S_IFBLK 0x3000
#define S_IFDIR 0x4000
#define S_IFREG 0x8000
#define S_IFMT 0xf000

#ifndef ENOENT
#define ENOENT 2002
#endif
#ifndef ENOTDIR
#define ENOTDIR 2045
#endif

#define O_RDONLY 1
#define O_WRONLY 2
#define O_RDWR 4
#define O_CREAT 0x100
#define O_TRUNC 0x200

struct stat {
  long st_size;
  long st_mode;
  long st_ino;
  long st_dev;
  long st_mtime;
  int st_nlink;
  int st_uid;
  int st_gid;
  int st_ctime;
};

typedef struct {
  int whatever;
} DIR;

struct dirent {
  int whatever;
};

struct direct {
  char *d_name;
  int d_namlen;
};

#define waitpid(a,b,c) (*(b) = 0)
#define getpid() (0)
#define geteuid() (0)
#define _exit(a) (exit((a)))

int open(const char *fnm, int mode, ...);
int read(int fno, void *buf, size_t bytes);
int write(int fno, const void *buf, size_t bytes);
int close(int fno);
long lseek(int fno, long int offset, int whence);
char *mktemp(char *s);
FILE *popen(const char *s, const char *t);
int kill(int a, int b);
DIR *opendir(char *dirname);
struct dirent *readdir(DIR *dir);
int closedir(DIR *dir);
int execvp(char *path, char **argv);

#endif
