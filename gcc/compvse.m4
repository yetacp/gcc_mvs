* $$ JOB JNM=VSEJOB
* $$ LST LST=SYSLST,CLASS=A,RBM=999999
// JOB VSEJOB
*
*
* Disk layout, measured in tracks
* These are distinct logical files
* Default setup assumes that you wish to compile on the
* same disk as the normal, predefined disk used for syslnk
* Steer clear of bottom 4000, system files are there by default.
* Note that by default there are a lot of things cataloged
* in system libraries, whereas normally you would only want
* the final PHASEs to be put into system libraries, so you
* may want to change that.
* Space allocation is defined in a way that allows a global
* replace to be done.
*
*
* 10000,500 SPACE-ALLZIP (zip of zips)
* 10500,300 SPACE-SINGLEZIP (single zip under consideration)
* 10800,100 SPACE-SINGLEC (single C source file)
*
* 11000,500 SPACE-ASMOUT (assembler output from C compile et al)
* 12000,500 SPACE-OBJ (object code from above C-based assembly)
*
* 13000,1000 SPACE-SYSPUNCH (syspunch output, e.g. CIL header extract)
* 14000,2000 SPACE-PHASE (syslnk phase input)
*
*
*
* Standard assignments for C programs
*
// ASSGN SYS000,SYSLNK
// ASSGN SYS005,SYSLST
// ASSGN SYS007,SYSPCH
// OPTION DUMP
*
*
*
*
* First we get the zip of zips from tape.
*
// DLBL SDO1,'ALL.ZIP',0,SD
// EXTENT SYS000,,,,10000,500 SPACE-ALLZIP
// ASSGN SYS011,TAPE
// EXEC COPYFILE,SIZE=AUTO,PARM='-bb dd:mti1 dd:sdo1'
*
*
*
*
*
* unzip the PDPCLIB include zip file
*
// DLBL SDI1,'ALL.ZIP'
// DLBL SDO1,'PDPI.ZIP',0,SD
// EXTENT SYS000,,,,10500,300 SPACE-SINGLEZIP
// EXEC MVSUNZIP,SIZE=AUTO,PARM='dd:sdi1 dd:sdo1 pdpi.zip binary'
*
*
*
*
*
* extract header files
*
// DLBL IJSYSPH,'PDPPUNCH.DAT',0,SD
// EXTENT SYSPCH,,,,13000,1000 SPACE-SYSPUNCH
ASSGN SYSPCH,SYS000
*
// DLBL SDI1,'PDPI.ZIP'
// EXEC MVSUNZIP,SIZE=AUTO,PARM='dd:sdi1 dd:sdo1'
*
CLOSE SYSPCH,PUNCH
*
*
*
*
*
* Put header files into the CIL
*
ASSGN SYSLNK,SYS000
// OPTION CATAL
// DLBL IJSYSIN,'PDPPUNCH.DAT'
ASSGN SYSIPT,SYS000
 INCLUDE
CLOSE SYSIPT,READER
// EXEC LNKEDT
ASSGN SYSLNK,UA
*
*
*
*
*
*
* Assemble the prolog/epilog macros
*
// OPTION EDECK,NODECK  
// DLBL IJSYSPH,'PDPPUNCH.DAT',0,SD
// EXTENT SYSPCH,,,,13000,1000 SPACE-SYSPUNCH
ASSGN SYSPCH,SYS000
// EXEC ASSEMBLY
undivert(pdpprlg.mac)dnl
undivert(pdpepil.mac)dnl
         END
/*
CLOSE SYSPCH,PUNCH
*
*
* Put them into the assembler macro library
*
// DLBL IJSYSIN,'PDPPUNCH.DAT'
ASSGN SYSIPT,SYS000
// EXEC MAINT                                         
CLOSE SYSIPT,READER
*
*
*
* Also save a copy into the CIL that can be fed back to
* maint again later.
*
// DLBL SDI1,'PDPPUNCH.DAT'
// DLBL IJSYSPH,'PDPPUN2.DAT',0,SD
// EXTENT SYSPCH,,,,14000,2000 SPACE-SYSPUNCH
ASSGN SYSPCH,SYS000
// EXEC VSEMANIP,SIZE=AUTO,PARM='dd:sdi1 dd:out(pdpmacs)'
CLOSE SYSPCH,PUNCH
*
*
*
* Put copy of macros into CIL using LNKEDT
*
ASSGN SYSLNK,SYS000
// OPTION CATAL
// DLBL IJSYSIN,'PDPPUN2.DAT'
ASSGN SYSIPT,SYS000
 INCLUDE
CLOSE SYSIPT,READER
// EXEC LNKEDT
ASSGN SYSLNK,UA
*
*
*
* Put the copy libs directly in
*
// EXEC MAINT
 CATALS A.PDPTOP
 BKEND
undivert(pdptop.mac)dnl
 BKEND
/*
*
// EXEC MAINT
 CATALS A.PDP370
 BKEND
undivert(pdp370.mac)dnl
 BKEND
/*
*
// EXEC MAINT
 CATALS A.PDP380
 BKEND
undivert(pdp380.mac)dnl
 BKEND
/*
*
// EXEC MAINT
 CATALS A.PDP390
 BKEND
undivert(pdp390.mac)dnl
 BKEND
/*
*
*
*
*
*
*
* Now assemble the main routine
*
* Note that GCC exceeds the limits of z/VSE so cannot be made
* relocatable until a separate tool is written.
* Until then, the 7 MB location is the one most likely to work
* on a z/VSE system.
*
* However, if building on a VSE/380 system, some tricks needed
* to be pulled to make that work, and as a result, at least for
* now, if this value below is changed, both VSEPARM and $JOBEXIT
* also need to be changed to cope with the new location.
*
// DLBL IJSYSLN,,0,SD
// EXTENT SYSLNK,,,,14000,1000 SPACE-PHASE
ASSGN SYSLNK,SYS000
// OPTION CATAL,NOLIST
 PHASE GCC,+X'7000C8'
// EXEC ASSEMBLY
undivert(vsestart.asm)dnl
/*
*
* Now assemble the subroutines
*
// EXEC ASSEMBLY
undivert(start.s)dnl
/*
// EXEC ASSEMBLY
undivert(stdlib.s)dnl
/*
// EXEC ASSEMBLY
undivert(ctype.s)dnl
/*
// EXEC ASSEMBLY
undivert(string.s)dnl
/*
// EXEC ASSEMBLY
undivert(time.s)dnl
/*
// EXEC ASSEMBLY
undivert(errno.s)dnl
/*
// EXEC ASSEMBLY
undivert(assert.s)dnl
/*
// EXEC ASSEMBLY
undivert(locale.s)dnl
/*
// EXEC ASSEMBLY
undivert(math.s)dnl
/*
// EXEC ASSEMBLY
undivert(setjmp.s)dnl
/*
// EXEC ASSEMBLY
undivert(signal.s)dnl
/*
// EXEC ASSEMBLY
undivert(__memmgr.s)dnl
/*
// EXEC ASSEMBLY
undivert(stdio.s)dnl
/*
// EXEC ASSEMBLY
undivert(vsesupa.asm)dnl
/*
// EXEC ASSEMBLY
undivert(alias.s)dnl
/*
// EXEC ASSEMBLY
undivert(attribs.s)dnl
/*
// EXEC ASSEMBLY
undivert(bb-reorder.s)dnl
/*
// EXEC ASSEMBLY
undivert(bitmap.s)dnl
/*
// EXEC ASSEMBLY
undivert(builtins.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-aux-info.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-common.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-convert.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-decl.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-errors.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-format.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-lang.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-lex.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-objc-common.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-parse.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-pragma.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-semantics.s)dnl
/*
// EXEC ASSEMBLY
undivert(c-typeck.s)dnl
/*
// EXEC ASSEMBLY
undivert(caller-save.s)dnl
/*
// EXEC ASSEMBLY
undivert(calls.s)dnl
/*
// EXEC ASSEMBLY
undivert(cfg.s)dnl
/*
// EXEC ASSEMBLY
undivert(cfganal.s)dnl
/*
// EXEC ASSEMBLY
undivert(cfgbuild.s)dnl
/*
// EXEC ASSEMBLY
undivert(cfgcleanup.s)dnl
/*
// EXEC ASSEMBLY
undivert(cfglayout.s)dnl
/*
// EXEC ASSEMBLY
undivert(cfgloop.s)dnl
/*
// EXEC ASSEMBLY
undivert(cfgrtl.s)dnl
/*
// EXEC ASSEMBLY
undivert(combine.s)dnl
/*
// EXEC ASSEMBLY
undivert(conflict.s)dnl
/*
// EXEC ASSEMBLY
undivert(convert.s)dnl
/*
// EXEC ASSEMBLY
undivert(cppdefault.s)dnl
/*
// EXEC ASSEMBLY
undivert(cpperror.s)dnl
/*
// EXEC ASSEMBLY
undivert(cppexp.s)dnl
/*
// EXEC ASSEMBLY
undivert(cppfiles.s)dnl
/*
// EXEC ASSEMBLY
undivert(cpphash.s)dnl
/*
// EXEC ASSEMBLY
undivert(cppinit.s)dnl
/*
// EXEC ASSEMBLY
undivert(cpplex.s)dnl
/*
// EXEC ASSEMBLY
undivert(cpplib.s)dnl
/*
// EXEC ASSEMBLY
undivert(cppmacro.s)dnl
/*
// EXEC ASSEMBLY
undivert(cppmain.s)dnl
/*
// EXEC ASSEMBLY
undivert(cppspec.s)dnl
/*
// EXEC ASSEMBLY
undivert(cse.s)dnl
/*
// EXEC ASSEMBLY
undivert(cselib.s)dnl
/*
// EXEC ASSEMBLY
undivert(debug.s)dnl
/*
// EXEC ASSEMBLY
undivert(dependence.s)dnl
/*
// EXEC ASSEMBLY
undivert(df.s)dnl
/*
// EXEC ASSEMBLY
undivert(diagnostic.s)dnl
/*
// EXEC ASSEMBLY
undivert(dominance.s)dnl
/*
// EXEC ASSEMBLY
undivert(dwarf2asm.s)dnl
/*
// EXEC ASSEMBLY
undivert(dwarf2out.s)dnl
/*
// EXEC ASSEMBLY
undivert(emit-rtl.s)dnl
/*
// EXEC ASSEMBLY
undivert(except.s)dnl
/*
// EXEC ASSEMBLY
undivert(explow.s)dnl
/*
// EXEC ASSEMBLY
undivert(expmed.s)dnl
/*
// EXEC ASSEMBLY
undivert(expr.s)dnl
/*
// EXEC ASSEMBLY
undivert(final.s)dnl
/*
// EXEC ASSEMBLY
undivert(flow.s)dnl
/*
// EXEC ASSEMBLY
undivert(fold-const.s)dnl
/*
// EXEC ASSEMBLY
undivert(function.s)dnl
/*
// EXEC ASSEMBLY
undivert(gcc.s)dnl
/*
// EXEC ASSEMBLY
undivert(gccspec.s)dnl
/*
// EXEC ASSEMBLY
undivert(gcse.s)dnl
/*
// EXEC ASSEMBLY
undivert(genrtl.s)dnl
/*
// EXEC ASSEMBLY
undivert(ggc-common.s)dnl
/*
// EXEC ASSEMBLY
undivert(ggc-page.s)dnl
/*
// EXEC ASSEMBLY
undivert(global.s)dnl
/*
// EXEC ASSEMBLY
undivert(graph.s)dnl
/*
// EXEC ASSEMBLY
undivert(hash.s)dnl
/*
// EXEC ASSEMBLY
undivert(hashtable.s)dnl
/*
// EXEC ASSEMBLY
undivert(hooks.s)dnl
/*
// EXEC ASSEMBLY
undivert(ifcvt.s)dnl
/*
// EXEC ASSEMBLY
undivert(insn-attrtab.s)dnl
/*
// EXEC ASSEMBLY
undivert(insn-emit.s)dnl
/*
// EXEC ASSEMBLY
undivert(insn-extract.s)dnl
/*
// EXEC ASSEMBLY
undivert(insn-opinit.s)dnl
/*
// EXEC ASSEMBLY
undivert(insn-output.s)dnl
/*
// EXEC ASSEMBLY
undivert(insn-recog.s)dnl
/*
// EXEC ASSEMBLY
undivert(integrate.s)dnl
/*
// EXEC ASSEMBLY
undivert(jump.s)dnl
/*
// EXEC ASSEMBLY
undivert(langhooks.s)dnl
/*
// EXEC ASSEMBLY
undivert(lcm.s)dnl
/*
// EXEC ASSEMBLY
undivert(line-map.s)dnl
/*
// EXEC ASSEMBLY
undivert(lists.s)dnl
/*
// EXEC ASSEMBLY
undivert(local-alloc.s)dnl
/*
// EXEC ASSEMBLY
undivert(loop.s)dnl
/*
// EXEC ASSEMBLY
undivert(mkdeps.s)dnl
/*
// EXEC ASSEMBLY
undivert(optabs.s)dnl
/*
// EXEC ASSEMBLY
undivert(params.s)dnl
/*
// EXEC ASSEMBLY
undivert(predict.s)dnl
/*
// EXEC ASSEMBLY
undivert(prefix.s)dnl
/*
// EXEC ASSEMBLY
undivert(print-rtl.s)dnl
/*
// EXEC ASSEMBLY
undivert(print-tree.s)dnl
/*
// EXEC ASSEMBLY
undivert(profile.s)dnl
/*
// EXEC ASSEMBLY
undivert(real.s)dnl
/*
// EXEC ASSEMBLY
undivert(recog.s)dnl
/*
// EXEC ASSEMBLY
undivert(regclass.s)dnl
/*
// EXEC ASSEMBLY
undivert(regmove.s)dnl
/*
// EXEC ASSEMBLY
undivert(regrename.s)dnl
/*
// EXEC ASSEMBLY
undivert(reload.s)dnl
/*
// EXEC ASSEMBLY
undivert(reload1.s)dnl
/*
// EXEC ASSEMBLY
undivert(resource.s)dnl
/*
// EXEC ASSEMBLY
undivert(rtl-error.s)dnl
/*
// EXEC ASSEMBLY
undivert(rtl.s)dnl
/*
// EXEC ASSEMBLY
undivert(rtlanal.s)dnl
/*
// EXEC ASSEMBLY
undivert(sbitmap.s)dnl
/*
// EXEC ASSEMBLY
undivert(sibcall.s)dnl
/*
// EXEC ASSEMBLY
undivert(simplify-rtx.s)dnl
/*
// EXEC ASSEMBLY
undivert(ssa-ccp.s)dnl
/*
// EXEC ASSEMBLY
undivert(ssa-dce.s)dnl
/*
// EXEC ASSEMBLY
undivert(ssa.s)dnl
/*
// EXEC ASSEMBLY
undivert(stmt.s)dnl
/*
// EXEC ASSEMBLY
undivert(stor-layout.s)dnl
/*
// EXEC ASSEMBLY
undivert(stringpool.s)dnl
/*
// EXEC ASSEMBLY
undivert(timevar.s)dnl
/*
// EXEC ASSEMBLY
undivert(toplev.s)dnl
/*
// EXEC ASSEMBLY
undivert(tree-dump.s)dnl
/*
// EXEC ASSEMBLY
undivert(tree-inline.s)dnl
/*
// EXEC ASSEMBLY
undivert(tree.s)dnl
/*
// EXEC ASSEMBLY
undivert(unroll.s)dnl
/*
// EXEC ASSEMBLY
undivert(varasm.s)dnl
/*
// EXEC ASSEMBLY
undivert(varray.s)dnl
/*
// EXEC ASSEMBLY
undivert(version.s)dnl
/*
// EXEC ASSEMBLY
undivert(xmalloc.s)dnl
/*
// EXEC ASSEMBLY
undivert(xstrerror.s)dnl
/*
// EXEC ASSEMBLY
undivert(xstrdup.s)dnl
/*
// EXEC ASSEMBLY
undivert(xexit.s)dnl
/*
// EXEC ASSEMBLY
undivert(concat.s)dnl
/*
// EXEC ASSEMBLY
undivert(hex.s)dnl
/*
// EXEC ASSEMBLY
undivert(alloca.s)dnl
/*
// EXEC ASSEMBLY
undivert(lbasename.s)dnl
/*
// EXEC ASSEMBLY
undivert(obstack.s)dnl
/*
// EXEC ASSEMBLY
undivert(strsignal.s)dnl
/*
// EXEC ASSEMBLY
undivert(safe-ctype.s)dnl
/*
// EXEC ASSEMBLY
undivert(splay-tree.s)dnl
/*
// EXEC ASSEMBLY
undivert(fibheap.s)dnl
/*
// EXEC ASSEMBLY
undivert(hashtab.s)dnl
/*
// EXEC ASSEMBLY
undivert(asprintf.s)dnl
/*
// EXEC ASSEMBLY
undivert(vasprintf.s)dnl
/*
// EXEC ASSEMBLY
undivert(getpagesize.s)dnl
/*
// EXEC ASSEMBLY
undivert(partition.s)dnl
/*
// EXEC ASSEMBLY
undivert(i370-c.s)dnl
/*
// EXEC ASSEMBLY
undivert(i370.s)dnl
/*
// EXEC ASSEMBLY
undivert(unixio.s)dnl
/*
*
* Now link the whole app
*
// EXEC LNKEDT
*
ASSGN SYSLNK,UA
*
*
*
*
*
*
*
* Now run the app
*
// EXEC GCC,SIZE=AUTO,PARM='-S -o - -'
#include <stdio.h>

int main(void)
{
    printf("hello, world %d\n", FILENAME_MAX);
    return (0);
}
/*
*
*
*
*
* Switch to S/370 executables now
*
// EXEC MAINT
 CATALS A.PDPTOP
 BKEND
undivert(pdp370.mac)dnl
 BKEND
/*
*
*
*
* unzip the PDPCLIB source zip file
*
// DLBL SDI1,'ALL.ZIP'
// DLBL SDO1,'PDPSRC.ZIP',0,SD
// EXTENT SYS000,,,,10500,300 SPACE-SINGLEZIP
// EXEC MVSUNZIP,SIZE=AUTO,PARM='dd:sdi1 dd:sdo1 pdpsrc.zip binary'
*
*
*
*
*
* create the proc from list of files
*
// DLBL IJSYSPH,'PDPPUNCH.DAT',0,SD
// EXTENT SYSPCH,,,,13000,1000 SPACE-SYSPUNCH
ASSGN SYSPCH,SYS000
// EXEC VSEPROC,SIZE=AUTO,PARM='- dd:syspunch'
-----
STDIO
STRING
STDLIB
CTYPE
ERRNO
LOCALE
MATH
SIGNAL
SETJMP
ASSERT
TIME
START
-----
*
*
*
* unzip %s.C
*
// DLBL SDI1,'PDPSRC.ZIP'
// DLBL SDO1,'%s.C',0,SD
// EXTENT SYS000,,,,10800,100 SPACE-SINGLEC
// EXEC MVSUNZIP,SIZE=AUTO,PARM='dd:sdi1 dd:sdo1 %s.C'
*
* Compile %s
*
// DLBL SDI1,'%s.C'
// DLBL IJSYSPH,'%s.S',0,SD
// EXTENT SYSPCH,,,,11000,500 SPACE-ASMOUT
ASSGN SYSPCH,SYS000
// EXEC GCC,SIZE=AUTO,PARM='-S -Os -o dd:syspunch dd:sdi1'
*
CLOSE SYSPCH,PUNCH                                    
*
*
* assemble %s
*
// DLBL IJSYSIN,'%s.S'
ASSGN SYSIPT,SYS000
// DLBL IJSYSPH,'%s.OBJ',0,SD
// EXTENT SYSPCH,,,,12000,500 SPACE-OBJ
ASSGN SYSPCH,SYS000
// OPTION DECK,NOEDECK
 CATALR %s
// EXEC ASSEMBLY
*
CLOSE SYSPCH,PUNCH                                    
CLOSE SYSIPT,READER
*
*
*
// DLBL IJSYSIN,'%s.OBJ'
ASSGN SYSIPT,SYS000
// EXEC MAINT
CLOSE SYSIPT,READER
*
*
*
-----
/*
CLOSE SYSPCH,PUNCH
*
*
*
*
*
* Put the PROC in
*
// DLBL IJSYSIN,'PDPPUNCH.DAT'
ASSGN SYSIPT,SYS000
// EXEC MAINT
CLOSE SYSIPT,READER
*
*
*
*
*
* execute the proc
*
// EXEC PROC=VSEPROC
*
*
*
*
*
*
*
*
*
* unzip __memmgr.c
*
// DLBL SDI1,'PDPSRC.ZIP'
// DLBL SDO1,'@@MEMMGR.C',0,SD
// EXTENT SYS000,,,,10800,100 SPACE-SINGLEC
// EXEC MVSUNZIP,SIZE=AUTO,PARM='dd:sdi1 dd:sdo1 __memmgr.c'
*
* Compile __memmgr
*
// DLBL SDI1,'@@MEMMGR.C'
// DLBL IJSYSPH,'@@MEMMGR.S',0,SD
// EXTENT SYSPCH,,,,11000,500 SPACE-ASMOUT
ASSGN SYSPCH,SYS000
// EXEC GCC,SIZE=AUTO,PARM='-S -Os -o dd:syspunch dd:sdi1'
*
CLOSE SYSPCH,PUNCH                                    
*
*
* assemble __memmgr
*
// DLBL IJSYSIN,'@@MEMMGR.S'
ASSGN SYSIPT,SYS000
// DLBL IJSYSPH,'@@MEMMGR.OBJ',0,SD
// EXTENT SYSPCH,,,,12000,500 SPACE-OBJ
ASSGN SYSPCH,SYS000
// OPTION DECK,NOEDECK
 CATALR @@MEMMGR
// EXEC ASSEMBLY
*
CLOSE SYSPCH,PUNCH                                    
CLOSE SYSIPT,READER
*
// DLBL IJSYSIN,'@@MEMMGR.OBJ'
ASSGN SYSIPT,SYS000
// EXEC MAINT
CLOSE SYSIPT,READER
*
*
*
*
*
*
*
*
*
* unzip vsesupa
*
// DLBL SDI1,'PDPSRC.ZIP'
// DLBL SDO1,'VSESUPA.ASM',0,SD
// EXTENT SYS000,,,,10800,100 SPACE-SINGLEC
// EXEC MVSUNZIP,SIZE=AUTO,PARM='dd:sdi1 dd:sdo1 vsesupa.asm'
*
*
* Copy vsesupa
*
// DLBL SDI1,'VSESUPA.ASM'
// DLBL IJSYSPH,'VSESUPA.S',0,SD
// EXTENT SYSPCH,,,,11000,500 SPACE-ASMOUT
ASSGN SYSPCH,SYS000
// EXEC COPYFILE,SIZE=AUTO,PARM='-tt dd:sdi1 dd:syspunch'
CLOSE SYSPCH,PUNCH                                    
*
*
*
* assemble vsesupa
*
// DLBL IJSYSIN,'VSESUPA.S'
ASSGN SYSIPT,SYS000
// DLBL IJSYSPH,'VSESUPA.OBJ',0,SD
// EXTENT SYSPCH,,,,12000,500 SPACE-OBJ
ASSGN SYSPCH,SYS000
// OPTION DECK,NOEDECK
 CATALR VSESUPA
// EXEC ASSEMBLY
*
CLOSE SYSPCH,PUNCH                                    
CLOSE SYSIPT,READER
*
// DLBL IJSYSIN,'VSESUPA.OBJ'
ASSGN SYSIPT,SYS000
// EXEC MAINT
CLOSE SYSIPT,READER
*
*
*
*
*
*
*
* unzip vsestart
*
// DLBL SDI1,'PDPSRC.ZIP'
// DLBL SDO1,'VSESTART.ASM',0,SD
// EXTENT SYS000,,,,10800,100 SPACE-SINGLEC
// EXEC MVSUNZIP,SIZE=AUTO,PARM='dd:sdi1 dd:sdo1 vsestart.asm'
*
*
* Copy vsestart
*
// DLBL SDI1,'VSESTART.ASM'
// DLBL IJSYSPH,'VSESTART.S',0,SD
// EXTENT SYSPCH,,,,11000,500 SPACE-ASMOUT
ASSGN SYSPCH,SYS000
// EXEC COPYFILE,SIZE=AUTO,PARM='-tt dd:sdi1 dd:syspunch'
CLOSE SYSPCH,PUNCH                                    
*
*
*
* assemble vsestart
*
// DLBL IJSYSIN,'VSESTART.S'
ASSGN SYSIPT,SYS000
// DLBL IJSYSPH,'VSESTART.OBJ',0,SD
// EXTENT SYSPCH,,,,12000,500 SPACE-OBJ
ASSGN SYSPCH,SYS000
// OPTION DECK,NOEDECK
 CATALR VSESTART
// EXEC ASSEMBLY
*
CLOSE SYSPCH,PUNCH                                    
CLOSE SYSIPT,READER
*
// DLBL IJSYSIN,'VSESTART.OBJ'
ASSGN SYSIPT,SYS000
// EXEC MAINT
CLOSE SYSIPT,READER
*
*
*
*
*
*
*
*
* create the proc from list of files
*
// DLBL IJSYSPH,'PDPPUNCH.DAT',0,SD
// EXTENT SYSPCH,,,,13000,1000 SPACE-SYSPUNCH
ASSGN SYSPCH,SYS000
// EXEC VSEPROC,SIZE=AUTO,PARM='- dd:syspunch'
-----
COPYFILE
MVSENDEC
VSEPROC
VSEMANIP
HEXDUMP
MVSUNZIP
PDPTEST
-----
*
* unzip %s.C
*
// DLBL SDI1,'PDPSRC.ZIP'
// DLBL SDO1,'%s.C',0,SD
// EXTENT SYS000,,,,10800,100 SPACE-SINGLEC
// EXEC MVSUNZIP,SIZE=AUTO,PARM='dd:sdi1 dd:sdo1 %s.C'
*
*
*
* Compile %s
*
// DLBL SDI1,'%s.C'
// DLBL IJSYSPH,'%s.ASM',0,SD
// EXTENT SYSPCH,,,,11000,500 SPACE-ASMOUT
ASSGN SYSPCH,SYS000
// EXEC GCC,SIZE=AUTO,PARM='-S -Os -o dd:syspunch dd:sdi1'
*
CLOSE SYSPCH,PUNCH                                    
*
*
*
* assemble %s
*
// DLBL IJSYSLN,,0,SD
// EXTENT SYSLNK,,,,14000,1000 SPACE-PHASE
ASSGN SYSLNK,SYS000
// OPTION LINK
// OPTION CATAL,LIST
 PHASE %s,S+80
// DLBL IJSYSIN,'%s.ASM'
ASSGN SYSIPT,SYS000
// EXEC ASSEMBLY
CLOSE SYSIPT,READER
*
*
*
*
* link %s
*
 INCLUDE VSESTART
 INCLUDE STDIO
 INCLUDE STRING
 INCLUDE STDLIB
 INCLUDE CTYPE
 INCLUDE ERRNO
 INCLUDE LOCALE
 INCLUDE MATH
 INCLUDE SIGNAL
 INCLUDE SETJMP
 INCLUDE ASSERT
 INCLUDE TIME
 INCLUDE START
 INCLUDE VSESUPA
 ENTRY @@MAIN
// EXEC LNKEDT
ASSGN SYSLNK,UA
*
*
*
-----
/*
CLOSE SYSPCH,PUNCH
*
*
*
*
*
* Put the PROC in
*
// DLBL IJSYSIN,'PDPPUNCH.DAT'
ASSGN SYSIPT,SYS000
// EXEC MAINT
CLOSE SYSIPT,READER
*
*
*
*
*
* execute the proc
*
// EXEC PROC=VSEPROC
*
*
*
*
*
*
* Now run PDPTEST
*
// EXEC PDPTEST,SIZE=AUTO,PARM='PaulEdwards was Here'
*
*
*
*
* Now punch the header files by executing CSERV (unusually)
*
// DLBL IJSYSPH,'PDPPUNCH.DAT',0,SD
// EXTENT SYSPCH,,,,13000,1000 SPACE-SYSPUNCH
ASSGN SYSPCH,SYS000
// EXEC CSERV
 PUNCH ASSERT
 PUNCH CTYPE
 PUNCH ERRNO
 PUNCH FLOAT
 PUNCH LIMITS
 PUNCH LOCALE
 PUNCH MATH
 PUNCH MVSSUPA
 PUNCH SETJMP
 PUNCH SIGNAL
 PUNCH STDARG
 PUNCH STDDEF
 PUNCH STDIO
 PUNCH STDLIB
 PUNCH STRING
 PUNCH TIME
 PUNCH @@MEMMGR
/*
CLOSE SYSPCH,PUNCH
*
*
*
* And get the single file ready for the CIL
*
// DLBL SDI1,'PDPPUNCH.DAT'
// DLBL IJSYSPH,'PDPPUN2.DAT',0,SD
// EXTENT SYSPCH,,,,14000,2000 SPACE-PHASE
ASSGN SYSPCH,SYS000
// EXEC VSEMANIP,SIZE=AUTO,PARM='dd:sdi1 dd:out(pdpi)'
CLOSE SYSPCH,PUNCH
*
*
*
*
* Now put it in the CIL
*
ASSGN SYSLNK,SYS000
// OPTION CATAL
// DLBL IJSYSIN,'PDPPUN2.DAT'
ASSGN SYSIPT,SYS000
 INCLUDE
CLOSE SYSIPT,READER
// EXEC LNKEDT
ASSGN SYSLNK,UA
*
*
*
*
*
*
*
*
*
*
* Now punch the relocatable objects by executing RSERV
*
// DLBL IJSYSPH,'PDPPUNCH.DAT',0,SD
// EXTENT SYSPCH,,,,13000,1000 SPACE-SYSPUNCH
ASSGN SYSPCH,SYS000
// EXEC RSERV
 PUNCH ASSERT
 PUNCH CTYPE
 PUNCH ERRNO
 PUNCH LOCALE
 PUNCH MATH
 PUNCH VSESUPA
 PUNCH VSESTART
 PUNCH START
 PUNCH SETJMP
 PUNCH SIGNAL
 PUNCH STDIO
 PUNCH STDLIB
 PUNCH STRING
 PUNCH TIME
 PUNCH @@MEMMGR
/*
CLOSE SYSPCH,PUNCH
*
*
*
* And get the single file ready for the CIL
*
// DLBL SDI1,'PDPPUNCH.DAT'
// DLBL IJSYSPH,'PDPPUN2.DAT',0,SD
// EXTENT SYSPCH,,,,14000,2000 SPACE-PHASE
ASSGN SYSPCH,SYS000
// EXEC VSEMANIP,SIZE=AUTO,PARM='dd:sdi1 dd:out(pdpobj)'
CLOSE SYSPCH,PUNCH
*
*
*
*
* Now put it in the CIL
*
ASSGN SYSLNK,SYS000
// OPTION CATAL
// DLBL IJSYSIN,'PDPPUN2.DAT'
ASSGN SYSIPT,SYS000
 INCLUDE
CLOSE SYSIPT,READER
// EXEC LNKEDT
ASSGN SYSLNK,UA
*
*
*
*
*
*
*
* Now punch the assembler copybooks using SSERV
*
// DLBL IJSYSPH,'PDPPUNCH.DAT',0,SD
// EXTENT SYSPCH,,,,13000,1000 SPACE-SYSPUNCH
ASSGN SYSPCH,SYS000
// EXEC SSERV
 PUNCH PDPTOP
 PUNCH PDP370
 PUNCH PDP380
 PUNCH PDP390
/*
CLOSE SYSPCH,PUNCH
*
*
*
* And get the single file ready for the CIL
*
// DLBL SDI1,'PDPPUNCH.DAT'
// DLBL IJSYSPH,'PDPPUN2.DAT',0,SD
// EXTENT SYSPCH,,,,14000,2000 SPACE-PHASE
ASSGN SYSPCH,SYS000
// EXEC VSEMANIP,SIZE=AUTO,PARM='dd:sdi1 dd:out(pdpcopy)'
CLOSE SYSPCH,PUNCH
*
*
*
*
* Now put it in the CIL
*
ASSGN SYSLNK,SYS000
// OPTION CATAL
// DLBL IJSYSIN,'PDPPUN2.DAT'
ASSGN SYSIPT,SYS000
 INCLUDE
CLOSE SYSIPT,READER
// EXEC LNKEDT
ASSGN SYSLNK,UA
*
*
*
*
*
*
* Now punch the phases
*
// DLBL IJSYSPH,'PDPPUN2.DAT',0,SD
// EXTENT SYSPCH,,,,14000,2000 SPACE-PHASE
ASSGN SYSPCH,SYS000
// EXEC CSERV
 PUNCH GCC
 PUNCH COPYFILE
 PUNCH HEXDUMP
 PUNCH MVSENDEC
 PUNCH MVSUNZIP
 PUNCH VSEPROC
 PUNCH VSEMANIP
 PUNCH PDPI
 PUNCH PDPOBJ
 PUNCH PDPMACS
 PUNCH PDPCOPY
/*
CLOSE SYSPCH,PUNCH
*
*
*
* And put it to tape
*
// DLBL SDI1,'PDPPUN2.DAT'
// TLBL MTO1,'HERC01.MFTOPC',0
// ASSGN SYS011,TAPE,VOL=MFTOPC
// EXEC VSEMANIP,SIZE=AUTO,PARM='dd:sdi1 dd:mto1'
*
*
*
*
/&
* $$ EOJ
