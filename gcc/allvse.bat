
del *.s

cd ..\..\pdos\pdpclib

del *.o
make -f makefile.w32

cd ..\..\gcc\gcc

call compile -DTARGET_VSE

call compmvs -DTARGET_VSE -DUSE_MEMMGR -ansi -pedantic-errors

call zipvse

m4 -I . -I ..\..\pdos\pdpclib compvse.m4 >alljcl.jcl
call runvse alljcl.jcl output.txt all.zip gccvse-exe.obj
