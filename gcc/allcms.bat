cd ..\..\pdos\pdpclib
del *.o
make -f makefile.w32
cd ..\..\gcc\gcc
call compile -DTARGET_CMS
call compmvs -DTARGET_CMS -DUSE_MEMMGR -ansi -pedantic-errors
del output.txt
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

rem for S/380 testing, use this
call runcms allcms.exec output.txt all.zip gcccms-exe.vmarc

rem for S/390 testing, use this
rem mvsendec encb all.zip all.dat
rem loc2ebc all.dat xfer.card
