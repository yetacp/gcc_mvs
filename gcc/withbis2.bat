rem this is the second part for use with CMS
rem this proves the integrity of the compiler
rem produced in part 1 by reproducing it and
rem comparing the assembler

cd ..\..\pdos\pdpclib
del *.o
make -f makefile.w32
cd ..\..\gcc\gcc
call compile -DTARGET_CMS
call compmvs -DTARGET_CMS -ansi -pedantic-errors
del output.txt
call zipmvs
mkdir ..\temp
del /q ..\temp\*.*
cd ..\temp
unzip ..\gcc\all
unzip *.zip
del *.zip
del ..\gcc\all.zip

rem for integrity, don't send these files up - let them
rem be generated
del genrtl.c
del insn-attrtab.c
del insn-emit.c
del insn-extract.c
del insn-opinit.c
del insn-output.c
del insn-peep.c
del insn-recog.c
del c-parse.c
del genrtl.h
del insn-attr.h
del insn-codes.h
del insn-config.h
del i-constants.h
del insn-flags.h
del tm-preds.h
del tree-check.h

del *.jcl
del *.s

zip -0mX ..\gcc\all *
cd ..\gcc

rem for S/380 testing, use this
call runcms fullcms2.exec output.txt all.zip gcccms-asm.vmarc

rem for S/390 testing, use this
rem mvsendec encb all.zip all.dat
rem loc2ebc all.dat xfer.card
