rem this should be run in a directory under config/i370
copy ..\..\..\testsuite\gcc.c-torture\execute\%1 cprog.c
call mvsgccr cprog.c output.txt
grep "EXECC     CPROG     RC= 0000" output.txt
if errorlevel 1 goto bad
echo %1 passed >>results.txt
goto exit
:bad
echo %1 failed >>results.txt
:exit
