del all.zip
del autos.zip
del gccs.zip
del pdpi.zip
del gcci.zip
del gccsrc.zip
del pdpsrc.zip
del gccjcl.zip
del gccdoc.zip
del pdpdoc.zip
del gccprc.zip
del gccexec.zip
del pdpmac.zip
del gccmvs-xmit.zip
del makeutil.jcl
del alljcl.jcl
del output.txt
del mvsendec.s
del hexdump.s
del dssrenam.s
del mvsunzip.s
del copyfile.s
del cpyfil.s
del vseproc.s
del vsemanip.s
zip -9 -X -ll gccs.zip *.s
cd ..\..\pdos\pdpclib
zip -9 -X -ll ..\..\gcc\gcc\pdpi.zip *.h
zip -9 -X -ll ..\..\gcc\gcc\pdpsrc.zip *.c *.asm
zip -9 -X -ll ..\..\gcc\gcc\pdpdoc.zip *.txt
zip -9 -X -ll ..\..\gcc\gcc\pdpmac.zip *.mac
cd ..\..\gcc\gcc
zip -9 -X -ll -j gcci.zip *.h ..\include\*.h config\i370\*.h *.def
zip -9 -X -ll -j gccsrc.zip *.c ..\libiberty\*.c config\i370\*.c
zip -9 -X -ll gccjcl.zip *.jcl
zip -9 -X -ll gccdoc.zip gccmvs.txt COPYING gcccms.txt xmitdoc.txt
zip -9 -X -ll -j gccdoc.zip config\i370\i370.md
zip -9 -X -ll gccdoc.zip c-parse.in
zip -9 -X -ll gccprc.zip *.prc
zip -9 -X -ll gccexec.zip *.exec *.parm comppdos.bat

rem for integrity, on a 31-bit system you should really
rem delete these source files and allow them to be regenerated instead
rem zip -d gccsrc.zip genrtl.c
rem zip -d gccsrc.zip insn-attrtab.c
rem zip -d gccsrc.zip insn-emit.c
rem zip -d gccsrc.zip insn-extract.c
rem zip -d gccsrc.zip insn-opinit.c
rem zip -d gccsrc.zip insn-output.c
rem zip -d gccsrc.zip insn-peep.c
rem zip -d gccsrc.zip insn-recog.c
rem zip -d gccsrc.zip c-parse.c
rem zip -d gcci.zip genrtl.h
rem zip -d gcci.zip insn-attr.h
rem zip -d gcci.zip insn-codes.h
rem zip -d gcci.zip insn-config.h
rem zip -d gcci.zip i-constants.h
rem zip -d gcci.zip insn-flags.h
rem zip -d gcci.zip tm-preds.h
rem zip -d gcci.zip tree-check.h

zip -9 -X all *.zip

rem for now, we need to use mvsunzip
mkdir ..\temp
del /q ..\temp\*.*
cd ..\temp
unzip ..\gcc\all
unzip *.zip
del *.zip
ren *.s *.s1
del ..\gcc\all.zip
zip -0mX ..\gcc\all *
cd ..\gcc
