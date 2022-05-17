# GCC & PDPCLIB

## Linux C cross compiler for MVS
- Author: Paul Edwards
- Source: http://gccmvs.sourceforge.net/
- Fork: https://github.com/mainframed/gccmvs 

In Ubuntu/Debian install gcc-multilib.

```bash
sudo apt install gcc-multilib

git clone https://github.com/yetacp/gcc_mvs.git
cd gcc_mvs

mkdir submodules
cd submodules
git init
git submodule add https://github.com/yetacp/mvsclib.git
git submodule update
cd ../gccmvs
ln -s submodules/mvsclib .

make
```
### Warning

You must to compile gccmvs with CFLAGS = -O0. See Makefile.
There is a bug that avoid to optimize GCC code.

## **PDPCLIB 4.0**
- Public Domain Project C Library
- http://pdos.sourceforge.net/
- Author: Paul Edwards

## GCC
The GNU Compiler Collection is free software.  See the file COPYING
for copying permission.  The manuals, and some of the runtime
libraries, are under different terms; see the individual source files
for details.

The directory INSTALL contains copies of the installation information
as HTML and plain text.  The source of this information is
gcc/doc/install.texi.  The installation information includes details
of what is included in the GCC sources and what files GCC installs.

See the file gcc/doc/gcc.texi (together with other files that it
includes) for usage and porting information.  An online readable
version of the manual is in the files gcc/doc/gcc.info*.

See http://gcc.gnu.org/bugs.html for how to report bugs usefully.

