cd ..\..\pdos\pdpclib
del *.o
copy pdptop.mac backup.mac
copy pdp370.mac pdptop.mac
make -f makefile.w32
cd ..\..\gcc\gcc
call compile -DTARGET_VSE
call compmvs -DTARGET_VSE -UUSE_MEMMGR -ansi -pedantic-errors
m4 -I ../../pdos/pdpclib vseutil.m4 >makeutil.jcl
call runvse makeutil.jcl outputz.txt none vseutil.obj
cd ..\..\pdos\pdpclib
copy backup.mac pdptop.mac
del backup.mac
cd ..\..\gcc\gcc
