cd ..\..\pdos\pdpclib
del *.o
copy pdptop.mac backup.mac
copy pdp370.mac pdptop.mac
make -f makefile.w32
cd ..\..\gcc\gcc
call compile -DTARGET_CMS
call compmvs -DTARGET_CMS -UUSE_MEMMGR -ansi -pedantic-errors
copy copyfile.s cpyfil.s
m4 -I ../../pdos/pdpclib cmsutil.m4 >cmsutil.txt
cd ..\..\pdos\pdpclib
copy backup.mac pdptop.mac
del backup.mac
cd ..\..\gcc\gcc
