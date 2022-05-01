rem we don't yet have the ability to link a program on PDOS
rem so instead we just test that the standard MVS build
rem produces the expected assembler output on PDOS.

cd ..\..\pdos\pdpclib

del *.o
make -f makefile.w32

cd ..\..\gcc\gcc

rem !!!!!!!
rem This is useful during testing to get a faster compile but
rem should NOT be used for release
rem !!!!!!!
rem call fudge

call compile
call compmvs -ansi -pedantic-errors
call zipmvs

call zippdos

rem now we rebuild GCC from source on PDOS, and compare results
rem with what we had on the PC via cross-compile
call runpdos comppdos.bat output.txt all.zip
