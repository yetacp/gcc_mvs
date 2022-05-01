cd ..\..\pdos\pdpclib

del *.o
make -f makefile.w32

cd ..\..\gcc\gcc

gcc -s -o mvsendec ../../pdos/pdpclib/mvsendec.c

rem !!!!!!!
rem This is useful during testing to get a faster compile but
rem should NOT be used for release
rem !!!!!!!
rem call fudge

call compile
call compmvs -DMUSIC -DIFOX -DUSE_MEMMGR
call zipmvs

mkdir ..\temp
del /q ..\temp\*.*
cd ..\temp
unzip ..\gcc\all
unzip *.zip
del *.zip
del ..\gcc\all.zip
zip -0mX ..\gcc\all *
cd ..\gcc

call runmus compmus.job output.txt all.zip gccmus.mfarc
grep "Files are different" output.txt
