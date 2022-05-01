del gccs.aws
del pdpi.aws
del gcci.aws
del gccsrc.aws
del pdpsrc.aws
del gccjcl.aws
del gccdoc.aws
del pdpdoc.aws
del gccprc.aws
del gccexec.aws
del pdpmac.aws
cmstape -cvf gccs.aws *.s
mkdir ..\temp
del ..\temp\*.s
del ..\temp\*.h
del ..\temp\*.c
del ..\temp\*.def
cd ..\..\pdos\pdpclib
cmstape -cvf ..\..\gcc\gcc\pdpi.aws *.h
cmstape -rvf ..\..\gcc\gcc\gccs.aws *.asm
cmstape -cvf ..\..\gcc\gcc\pdpsrc.aws *.c *.asm
cmstape -cvf ..\..\gcc\gcc\pdpdoc.aws *.txt
cmstape -cvf ..\..\gcc\gcc\pdpmac.aws *.mac
cd ..\..\gcc\temp
copy ..\include\*.h
copy ..\gcc\*.h
copy ..\gcc\config\i370\*.h
copy ..\gcc\*.def
ren builtin-attrs.def builtina.h
ren builtin-types.def builtint.h
ren builtins.def builtind.h
ren c-common.def ccommond.h
ren diagnostic.def diagndef.h
ren machmode.def machmodd.h
ren params.def paramsd.h
ren predict.def predictd.h
ren rtl.def rtld.h
ren stab.def stabd.h
ren timevar.def timevard.h
ren tree.def treed.h
ren insn-constants.h i-constants.h
ren langhooks-def.h langhdef.h
cmstape -cvf ..\gcc\gcci.aws *.h
copy ..\libiberty\*.c
copy ..\gcc\*.c
copy ..\gcc\config\i370\*.c
cmstape -cvf ..\gcc\gccsrc.aws *.c
cd ..\gcc
cmstape -cvf gccjcl.aws *.jcl
cmstape -cvf gccdoc.aws gccmvs.txt COPYING gcccms.txt
cmstape -rvf gccdoc.aws config\i370\i370.md
cmstape -rvf gccdoc.zip c-parse.in
cmstape -cvf gccprc.aws *.prc
cmstape -cvf gccexec.aws *.exec *.parm
copy /b GCCEXEC.AWS + GCCPRC.AWS + PDPDOC.AWS + GCCDOC.AWS  + GCCJCL.AWS + PDPI.AWS + PDPSRC.AWS + GCCI.AWS + GCCSRC.AWS + GCCS.AWS + PDPMAC.AWS  GCCCMS.AWS



