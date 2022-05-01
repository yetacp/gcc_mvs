rem this should be run in a directory under config/i370
copy ..\..\..\testsuite\gcc.c-torture\compile\%1 cprog.c
call mvsgcc cprog.c cprog.s output.txt

grep "COMP      GCC       RC= 0000" output.txt
if errorlevel 1 goto bad
echo %1 passed >>resconly.txt
goto exit

:bad
grep "COMP      GCC       RC= 0004" output.txt
if errorlevel 1 goto bad2
echo %1 passed >>resconly.txt
goto exit

:bad2
echo %1 failed >>resconly.txt

:exit
