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
call subjobs
