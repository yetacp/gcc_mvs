rem set mdfile=./config/i386/i386.md
rem set mdfile=./config/s390/s390.md
set mdfile=./config/i370/i370.md

del *.o
ren gencomp.exec gencomp.save
del gen*.exe
ren gencomp.save gencomp.exec
del libiberty.a
del autos.zip

zip -0 -m -@ -X autos.zip <genfiles.txt
unzip autos config.h auto-host.h hconfig.h configargs.h tm_p.h multilib.h gencheck.h options.h specs.h

call stdcompz ..\libiberty\xmalloc.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\xstrerror.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\xstrdup.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\xexit.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\concat.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\hex.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\alloca.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\lbasename.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\obstack.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\strsignal.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\safe-ctype.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\splay-tree.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\fibheap.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\hashtab.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\asprintf.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\vasprintf.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\getpagesize.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ..\libiberty\partition.c %1 %2 %3 %4 %5 %6 %7 %8 %9

ar rc libiberty.a *.o
ranlib libiberty.a

call stdcompz gengenrtl.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o gengenrtl.exe gengenrtl.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

gengenrtl -h >genrtl.h
gengenrtl >genrtl.c

call stdcompz gencheck.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o gencheck.exe gencheck.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

gencheck >tree-check.h

call stdcompz bitmap.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz print-rtl.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz rtl.c %1 %2 %3 %4 %5 %6 %7 %8 %9

call stdcompz errors.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz read-rtl.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz ggc-none.c %1 %2 %3 %4 %5 %6 %7 %8 %9
call stdcompz gensupport.c %1 %2 %3 %4 %5 %6 %7 %8 %9

call stdcompz genflags.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genflags.exe genflags.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genflags %mdfile% >insn-flags.h

call stdcompz genconstants.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genconstants.exe genconstants.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genconstants %mdfile% >insn-constants.h

call stdcompz genpreds.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genpreds.exe genpreds.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genpreds >tm-preds.h

call stdcompz genconfig.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genconfig.exe genconfig.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genconfig %mdfile% >insn-config.h

call stdcompz gencodes.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o gencodes.exe gencodes.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

gencodes %mdfile% >insn-codes.h

call stdcompz genattr.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genattr.exe genattr.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genattr %mdfile% >insn-attr.h

call stdcompz genattrtab.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genattrtab.exe genattrtab.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genattrtab %mdfile% >insn-attrtab.c

call stdcompz genemit.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genemit.exe genemit.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genemit %mdfile% >insn-emit.c

call stdcompz genextract.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genextract.exe genextract.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genextract.exe %mdfile% >insn-extract.c

call stdcompz genopinit.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genopinit.exe genopinit.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genopinit %mdfile% >insn-opinit.c

call stdcompz genoutput.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genoutput.exe genoutput.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genoutput %mdfile% >insn-output.c

call stdcompz genpeep.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genpeep.exe genpeep.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genpeep %mdfile% >insn-peep.c

call stdcompz genrecog.c %1 %2 %3 %4 %5 %6 %7 %8 %9

gcc -nostdlib -o genrecog.exe genrecog.o rtl.o read-rtl.o bitmap.o ggc-none.o gensupport.o print-rtl.o errors.o libiberty.a ../../pdos/pdpclib/pdpwin32.a -lkernel32 -lgcc

genrecog %mdfile% >insn-recog.c
