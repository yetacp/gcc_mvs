cd ..\..\pdos\pdpclib
del *.o
copy pdptop.mac backup.mac
copy pdp370.mac pdptop.mac
make -f makefile.w32
cd ..\..\gcc\gcc
call compile
call compmvs -DMUSIC -UUSE_MEMMGR
m4 -I ../../pdos/pdpclib musutil.m4 >musutil.job
cd ..\..\pdos\pdpclib
copy backup.mac pdptop.mac
del backup.mac
cd ..\..\gcc\gcc

call runmus musutil.job output.txt
