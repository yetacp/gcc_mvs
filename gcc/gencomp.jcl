//GCCGEN   JOB CLASS=C,REGION=0K
//*
//CREATE   PROC
//S1       EXEC PGM=IEFBR14
//DD10     DD DSN=&&TMPLOAD,DISP=(,PASS),
// DCB=(RECFM=U,LRECL=0,BLKSIZE=6144),
// SPACE=(6144,(1000,1000,44)),UNIT=SYSALLDA
//DD11     DD DSN=&&TMPNCAL,DISP=(,PASS),
// DCB=(RECFM=U,LRECL=0,BLKSIZE=6144),
// SPACE=(6144,(1000,1000,44)),UNIT=SYSALLDA
//         PEND
//*
//GENCMP   PROC GCCPREF='GCC',PDPPREF='PDPCLIB',MEMBER='',
//* Note - due to the 100-character limit, we use 'GENFILES'
//* rather than the normal defines you would expect.
// COS1='-Os -S -ansi -pedantic-errors -remap -DHAVE_CONFIG_H',
// COS2='-DGENFILES -o dd:out -'
//*
//COMP     EXEC PGM=GCC,
// PARM='&COS1 &COS2'
//STEPLIB  DD DSN=&GCCPREF..LINKLIB,DISP=(SHR,PASS)
//SYSIN    DD DSN=&GCCPREF..SOURCE(&MEMBER),DISP=SHR
//INCLUDE  DD DSN=&GCCPREF..INCLUDE,DISP=SHR
//         DD DSN=&PDPPREF..INCLUDE,DISP=SHR
//SYSINCL  DD DSN=&GCCPREF..INCLUDE,DISP=SHR
//         DD DSN=&PDPPREF..INCLUDE,DISP=SHR
//OUT      DD DSN=&&TEMP,DISP=(,PASS),UNIT=SYSALLDA,
//            DCB=(LRECL=80,BLKSIZE=6160,RECFM=FB),
//            SPACE=(6160,(500,500))
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//*
//ASM      EXEC PGM=ASMA90,
//            PARM='DECK,NOLIST',
//            COND=(4,LT,COMP)
//SYSLIB   DD DSN=SYS1.MACLIB,DISP=SHR
//         DD DSN=&PDPPREF..MACLIB,DISP=SHR
//SYSUT1   DD UNIT=SYSALLDA,SPACE=(CYL,(20,10))
//SYSUT2   DD UNIT=SYSALLDA,SPACE=(CYL,(10,10))
//SYSUT3   DD UNIT=SYSALLDA,SPACE=(CYL,(10,10))
//SYSPRINT DD SYSOUT=*
//SYSLIN   DD DUMMY
//SYSGO    DD DUMMY
//SYSPUNCH DD DSN=&&OBJSET,UNIT=SYSALLDA,SPACE=(80,(4000,4000)),
//            DISP=(,PASS)
//SYSIN    DD DSN=&&TEMP,DISP=(OLD,DELETE)
//*
//LKED     EXEC PGM=IEWL,PARM='NCAL',
//            COND=(4,LT,ASM)
//SYSLIN   DD DSN=&&OBJSET,DISP=(OLD,DELETE)
//SYSLMOD  DD DSN=&&TMPNCAL(&MEMBER),DISP=(SHR,PASS)
//SYSUT1   DD UNIT=SYSALLDA,SPACE=(CYL,(2,1))
//SYSPRINT DD SYSOUT=*
//         PEND
//*
//LINK     PROC PDPPREF='PDPCLIB',EXE=''
//LKED     EXEC PGM=IEWL,
//  PARM='MAP,LIST,SIZE=(999424,65536),AMODE=31,RMODE=ANY'
//SYSUT1   DD UNIT=SYSALLDA,SPACE=(CYL,(30,10))
//SYSPRINT DD SYSOUT=*
//SYSLIB   DD DSN=&&TMPNCAL,DISP=(SHR,PASS)
//         DD DSN=&PDPPREF..NCALIB,DISP=SHR
//SYSLMOD  DD DSN=&&TMPLOAD(&EXE),DISP=(SHR,PASS)
//         PEND
//*
//MAKECP   PROC GCCPREF='GCC',BISPREF='BISON',SEDPREF='SED',
// SO1='-e "/^ifobjc$/,/^end ifobjc$/d"',
// SO2='-e "/^ifc$/d" -e "/^end ifc$/d"'
//SED      EXEC PGM=SED,PARM='&SO1 &SO2'
//STEPLIB  DD DSN=&SEDPREF..LINKLIB,DISP=SHR
//SYSIN    DD DSN=&GCCPREF..DOC(C@PARSE),DISP=SHR
//SYSPRINT DD DSN=&&TEMP2,DISP=(NEW,PASS),UNIT=SYSALLDA,
//            DCB=(RECFM=VB,LRECL=255,BLKSIZE=6233),
//            SPACE=(6233,(1000,1000))
//SYSTERM  DD SYSOUT=*
//*
//BISON    EXEC PGM=BISON,PARM='--output=dd:out dd:in'
//STEPLIB  DD DSN=&BISPREF..LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&TEMP2,DISP=(OLD,DELETE)
//OUT      DD DSN=&GCCPREF..SOURCE(C@PARSE),DISP=SHR
//BISONH   DD DSN=&BISPREF..SOURCE(HAIRY),DISP=SHR
//BISONS   DD DSN=&BISPREF..SOURCE(SIMPLE),DISP=SHR
//         PEND
//*
//CREATTMP EXEC CREATE
//*
//XMALLOC  EXEC GENCMP,MEMBER=XMALLOC
//XSTRERRO EXEC GENCMP,MEMBER=XSTRERRO
//XSTRDUP  EXEC GENCMP,MEMBER=XSTRDUP
//XEXIT    EXEC GENCMP,MEMBER=XEXIT  
//CONCAT   EXEC GENCMP,MEMBER=CONCAT 
//HEX      EXEC GENCMP,MEMBER=HEX    
//ALLOCA   EXEC GENCMP,MEMBER=ALLOCA 
//LBASENAM EXEC GENCMP,MEMBER=LBASENAM
//OBSTACK  EXEC GENCMP,MEMBER=OBSTACK
//STRSIGNA EXEC GENCMP,MEMBER=STRSIGNA
//SAFE@CTY EXEC GENCMP,MEMBER=SAFE@CTY
//SPLAY@TR EXEC GENCMP,MEMBER=SPLAY@TR
//FIBHEAP  EXEC GENCMP,MEMBER=FIBHEAP
//HASHTAB  EXEC GENCMP,MEMBER=HASHTAB
//ASPRINTF EXEC GENCMP,MEMBER=ASPRINTF
//VASPRINT EXEC GENCMP,MEMBER=VASPRINT
//GETPAGES EXEC GENCMP,MEMBER=GETPAGES
//PARTITIO EXEC GENCMP,MEMBER=PARTITIO
//*
//GENGENRT EXEC GENCMP,MEMBER=GENGENRT
//*
//DOLINK   EXEC LINK,EXE='GENGENRT'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(GENGENRT)
 ENTRY @@MAIN
/*
//*
//GENGENRT EXEC PGM=GENGENRT,PARM='-h'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//SYSPRINT DD DSN=GCC.INCLUDE(GENRTL),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENGENRT EXEC PGM=GENGENRT
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//SYSPRINT DD DSN=GCC.SOURCE(GENRTL),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENCHECK EXEC GENCMP,MEMBER=GENCHECK
//*
//DOLINK   EXEC LINK,EXE='GENCHECK'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(GENCHECK)
 ENTRY @@MAIN
/*
//*
//GENCHECK EXEC PGM=GENCHECK
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//SYSPRINT DD DSN=GCC.INCLUDE(TREE@CHE),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//BITMAP   EXEC GENCMP,MEMBER=BITMAP  
//PRINT@RT EXEC GENCMP,MEMBER=PRINT@RT
//RTL      EXEC GENCMP,MEMBER=RTL
//*
//ERRORS   EXEC GENCMP,MEMBER=ERRORS
//READ@RTL EXEC GENCMP,MEMBER=READ@RTL
//GGC@NONE EXEC GENCMP,MEMBER=GGC@NONE
//GENSUPPO EXEC GENCMP,MEMBER=GENSUPPO
//*
//GENFLAGS EXEC GENCMP,MEMBER=GENFLAGS
//*
//DOLINK   EXEC LINK,EXE='GENFLAGS'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENFLAGS)
 ENTRY @@MAIN
/*
//*
//GENFLAGS EXEC PGM=GENFLAGS,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.INCLUDE(INSN@FLA),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENCONST EXEC GENCMP,MEMBER=GENCONST
//*
//DOLINK   EXEC LINK,EXE='GENCONST'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENCONST)
 ENTRY @@MAIN
/*
//*
//GENCONST EXEC PGM=GENCONST,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.INCLUDE(I@CONSTA),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENPREDS EXEC GENCMP,MEMBER=GENPREDS
//*
//DOLINK   EXEC LINK,EXE='GENPREDS'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(GENPREDS)
 ENTRY @@MAIN
/*
//*
//GENPREDS EXEC PGM=GENPREDS
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//SYSPRINT DD DSN=GCC.INCLUDE(TM@PREDS),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENCONFI EXEC GENCMP,MEMBER=GENCONFI
//*
//DOLINK   EXEC LINK,EXE='GENCONFI'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENCONFI)
 ENTRY @@MAIN
/*
//*
//GENCONFI EXEC PGM=GENCONFI,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.INCLUDE(INSN@CON),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENCODES EXEC GENCMP,MEMBER=GENCODES
//*
//DOLINK   EXEC LINK,EXE='GENCODES'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENCODES)
 ENTRY @@MAIN
/*
//*
//GENCODES EXEC PGM=GENCODES,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.INCLUDE(INSN@COD),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENATTR  EXEC GENCMP,MEMBER=GENATTR
//*
//DOLINK   EXEC LINK,EXE='GENATTR'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENATTR)
 ENTRY @@MAIN
/*
//*
//GENATTR  EXEC PGM=GENATTR,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.INCLUDE(INSN@ATT),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENATTRT EXEC GENCMP,MEMBER=GENATTRT
//*
//DOLINK   EXEC LINK,EXE='GENATTRT'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENATTRT)
 ENTRY @@MAIN
/*
//*
//GENATTRT EXEC PGM=GENATTRT,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.SOURCE(INSN@ATT),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENEMIT  EXEC GENCMP,MEMBER=GENEMIT 
//*
//DOLINK   EXEC LINK,EXE='GENEMIT'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENEMIT)
 ENTRY @@MAIN
/*
//*
//GENEMIT  EXEC PGM=GENEMIT,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.SOURCE(INSN@EMI),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENEXTRA EXEC GENCMP,MEMBER=GENEXTRA
//*
//DOLINK   EXEC LINK,EXE='GENEXTRA'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENEXTRA)
 ENTRY @@MAIN
/*
//*
//GENEXTRA EXEC PGM=GENEXTRA,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.SOURCE(INSN@EXT),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENOPINI EXEC GENCMP,MEMBER=GENOPINI
//*
//DOLINK   EXEC LINK,EXE='GENOPINI'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENOPINI)
 ENTRY @@MAIN
/*
//*
//GENOPINI EXEC PGM=GENOPINI,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.SOURCE(INSN@OPI),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENOUTPU EXEC GENCMP,MEMBER=GENOUTPU
//*
//DOLINK   EXEC LINK,EXE='GENOUTPU'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENOUTPU)
 ENTRY @@MAIN
/*
//*
//GENOUTPU EXEC PGM=GENOUTPU,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.SOURCE(INSN@OUT),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENPEEP  EXEC GENCMP,MEMBER=GENPEEP
//*
//DOLINK   EXEC LINK,EXE='GENPEEP'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENPEEP)
 ENTRY @@MAIN
/*
//*
//GENPEEP  EXEC PGM=GENPEEP,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.SOURCE(INSN@PEE),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//GENRECOG EXEC GENCMP,MEMBER=GENRECOG
//*
//DOLINK   EXEC LINK,EXE='GENRECOG'
//LKED.SYSLIN   DD *
 INCLUDE SYSLIB(MVSSTART)
 INCLUDE SYSLIB(START)
 INCLUDE SYSLIB(MVSSUPA)
 INCLUDE SYSLIB(STDIO)
 INCLUDE SYSLIB(STDLIB)
 INCLUDE SYSLIB(CTYPE)
 INCLUDE SYSLIB(STRING)
 INCLUDE SYSLIB(TIME)
 INCLUDE SYSLIB(ERRNO)
 INCLUDE SYSLIB(ASSERT)
 INCLUDE SYSLIB(LOCALE)
 INCLUDE SYSLIB(MATH)
 INCLUDE SYSLIB(SETJMP)
 INCLUDE SYSLIB(SIGNAL) 
 INCLUDE SYSLIB(XMALLOC)
 INCLUDE SYSLIB(XSTRERRO)
 INCLUDE SYSLIB(XSTRDUP)
 INCLUDE SYSLIB(XEXIT)
 INCLUDE SYSLIB(CONCAT)
 INCLUDE SYSLIB(HEX)
 INCLUDE SYSLIB(ALLOCA)
 INCLUDE SYSLIB(LBASENAM)
 INCLUDE SYSLIB(OBSTACK)
 INCLUDE SYSLIB(STRSIGNA)
 INCLUDE SYSLIB(SAFE@CTY)
 INCLUDE SYSLIB(SPLAY@TR)
 INCLUDE SYSLIB(FIBHEAP)
 INCLUDE SYSLIB(HASHTAB)
 INCLUDE SYSLIB(ASPRINTF)
 INCLUDE SYSLIB(VASPRINT)
 INCLUDE SYSLIB(GETPAGES)
 INCLUDE SYSLIB(PARTITIO)
 INCLUDE SYSLIB(RTL)
 INCLUDE SYSLIB(READ@RTL)
 INCLUDE SYSLIB(BITMAP)  
 INCLUDE SYSLIB(GGC@NONE)
 INCLUDE SYSLIB(GENSUPPO)
 INCLUDE SYSLIB(PRINT@RT)
 INCLUDE SYSLIB(ERRORS)
 INCLUDE SYSLIB(GENRECOG)
 ENTRY @@MAIN
/*
//*
//GENRECOG EXEC PGM=GENRECOG,PARM='dd:i370md'
//STEPLIB  DD DSN=&&TMPLOAD,DISP=(SHR,PASS)
//SYSIN    DD DUMMY
//I370MD   DD DSN=GCC.DOC(I370),DISP=SHR
//SYSPRINT DD DSN=GCC.SOURCE(INSN@REC),DISP=SHR
//SYSTERM  DD SYSOUT=*
//*
//MAKECP   EXEC MAKECP
//*
//
