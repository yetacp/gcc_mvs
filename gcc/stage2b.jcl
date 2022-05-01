//GCCGEN   JOB CLASS=C,REGION=0K,TIME=1440
//*
//ST2CMP   PROC GCCPREF='GCC',MEMBER='',
// PDPPREF='PDPCLIB',
// COS1='-Os -S -ansi -pedantic-errors -remap -DHAVE_CONFIG_H',
// COS2='-DIN_GCC -DPUREISO -o dd:out -'
//*
//COMP     EXEC PGM=STAGE1,
// PARM='&COS1 &COS2'
//STEPLIB  DD DSN=&GCCPREF..TMPLOAD,DISP=SHR
//SYSIN    DD DSN=&GCCPREF..SOURCE(&MEMBER),DISP=SHR
//INCLUDE  DD DSN=&GCCPREF..INCLUDE,DISP=SHR,DCB=BLKSIZE=32720
//         DD DSN=&PDPPREF..INCLUDE,DISP=SHR
//SYSINCL  DD DSN=&GCCPREF..INCLUDE,DISP=SHR,DCB=BLKSIZE=32720
//         DD DSN=&PDPPREF..INCLUDE,DISP=SHR
//OUT      DD DSN=&GCCPREF..S2(&MEMBER),DISP=SHR
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//*
//ASM      EXEC PGM=ASMA90,
//            PARM='DECK,NOLIST',
//            COND=(4,LT,COMP)
//SYSLIB   DD DSN=SYS1.MACLIB,DISP=SHR,DCB=BLKSIZE=32720
//         DD DSN=&PDPPREF..MACLIB,DISP=SHR
//SYSUT1   DD UNIT=SYSALLDA,SPACE=(CYL,(20,10))
//SYSUT2   DD UNIT=SYSALLDA,SPACE=(CYL,(10,10))
//SYSUT3   DD UNIT=SYSALLDA,SPACE=(CYL,(10,10))
//SYSPRINT DD SYSOUT=*
//SYSLIN   DD DUMMY
//SYSGO    DD DUMMY
//SYSPUNCH DD DSN=&GCCPREF..OBJ,DISP=MOD
//SYSIN    DD DSN=&GCCPREF..S2(&MEMBER),DISP=SHR
//*
//         PEND
//*
//ST2PDP   PROC GCCPREF='GCC',PDPPREF='PDPCLIB',MEMBER='',
// COS1='-Os -S -ansi -pedantic-errors',
// COS2='-DXXX_MEMMGR -o dd:out -'
//*
//COMP     EXEC PGM=STAGE1,
// PARM='&COS1 &COS2'
//STEPLIB  DD DSN=&GCCPREF..TMPLOAD,DISP=SHR
//SYSIN    DD DSN=&PDPPREF..SOURCE(&MEMBER),DISP=SHR
//INCLUDE  DD DSN=&PDPPREF..INCLUDE,DISP=SHR
//SYSINCL  DD DSN=&PDPPREF..INCLUDE,DISP=SHR
//OUT      DD DSN=&GCCPREF..S2(&MEMBER),DISP=SHR
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//*
//ASM      EXEC PGM=ASMA90,
//            PARM='DECK,NOLIST',
//            COND=(4,LT,COMP)
//SYSLIB   DD DSN=SYS1.MACLIB,DISP=SHR,DCB=BLKSIZE=32720
//         DD DSN=&PDPPREF..MACLIB,DISP=SHR
//SYSUT1   DD UNIT=SYSALLDA,SPACE=(CYL,(20,10))
//SYSUT2   DD UNIT=SYSALLDA,SPACE=(CYL,(10,10))
//SYSUT3   DD UNIT=SYSALLDA,SPACE=(CYL,(10,10))
//SYSPRINT DD SYSOUT=*
//SYSLIN   DD DUMMY
//SYSGO    DD DUMMY
//SYSPUNCH DD DSN=&GCCPREF..OBJ,DISP=MOD
//SYSIN    DD DSN=&GCCPREF..S2(&MEMBER),DISP=SHR
//*
//         PEND
//*
//PDPASM   PROC GCCPREF='GCC',PDPPREF='PDPCLIB',MEMBER=''
//*
//ASM      EXEC PGM=ASMA90,
//            PARM='DECK,NOLIST'
//SYSLIB   DD DSN=SYS1.MACLIB,DISP=SHR,DCB=BLKSIZE=32720
//         DD DSN=SYS1.MODGEN,DISP=SHR
//         DD DSN=&PDPPREF..MACLIB,DISP=SHR
//SYSUT1   DD UNIT=SYSALLDA,SPACE=(CYL,(20,10))
//SYSUT2   DD UNIT=SYSALLDA,SPACE=(CYL,(10,10))
//SYSUT3   DD UNIT=SYSALLDA,SPACE=(CYL,(10,10))
//SYSPRINT DD SYSOUT=*
//SYSLIN   DD DUMMY
//SYSGO    DD DUMMY
//SYSPUNCH DD DSN=&GCCPREF..OBJ,DISP=MOD
//SYSIN    DD DSN=&PDPPREF..SOURCE(&MEMBER),DISP=SHR
//*
//         PEND
//*
//LINK     PROC GCCPREF='GCC',MODULE=''
//LKED     EXEC PGM=IEWL,
//  PARM='MAP,LIST,SIZE=(999424,65536),AMODE=31,RMODE=ANY'
//SYSUT1   DD UNIT=SYSALLDA,SPACE=(CYL,(30,10))
//SYSPRINT DD SYSOUT=*
//SYSLIN   DD DSN=&GCCPREF..OBJ,DISP=(OLD,DELETE)
//*SYSLIB not needed
//SYSLMOD  DD DSN=&GCCPREF..TMPLOAD(&MODULE),DISP=SHR
//         PEND
//*
//INSN@ATT EXEC ST2CMP,MEMBER=INSN@ATT
//INSN@EMI EXEC ST2CMP,MEMBER=INSN@EMI
//INSN@EXT EXEC ST2CMP,MEMBER=INSN@EXT
//INSN@OPI EXEC ST2CMP,MEMBER=INSN@OPI
//INSN@OUT EXEC ST2CMP,MEMBER=INSN@OUT
//INSN@REC EXEC ST2CMP,MEMBER=INSN@REC
//INTEGRAT EXEC ST2CMP,MEMBER=INTEGRAT
//JUMP     EXEC ST2CMP,MEMBER=JUMP
//LANGHOOK EXEC ST2CMP,MEMBER=LANGHOOK
//LBASENAM EXEC ST2CMP,MEMBER=LBASENAM
//LCM      EXEC ST2CMP,MEMBER=LCM
//LINE@MAP EXEC ST2CMP,MEMBER=LINE@MAP
//LISTS    EXEC ST2CMP,MEMBER=LISTS
//LOCAL@AL EXEC ST2CMP,MEMBER=LOCAL@AL
//LOOP     EXEC ST2CMP,MEMBER=LOOP
//MKDEPS   EXEC ST2CMP,MEMBER=MKDEPS
//OBSTACK  EXEC ST2CMP,MEMBER=OBSTACK
//OPTABS   EXEC ST2CMP,MEMBER=OPTABS
//PARAMS   EXEC ST2CMP,MEMBER=PARAMS
//PARTITIO EXEC ST2CMP,MEMBER=PARTITIO
//PREDICT  EXEC ST2CMP,MEMBER=PREDICT
//PREFIX   EXEC ST2CMP,MEMBER=PREFIX
//PRINT@RT EXEC ST2CMP,MEMBER=PRINT@RT
//PRINT@TR EXEC ST2CMP,MEMBER=PRINT@TR
//PROFILE  EXEC ST2CMP,MEMBER=PROFILE
//REAL     EXEC ST2CMP,MEMBER=REAL
//RECOG    EXEC ST2CMP,MEMBER=RECOG
//REGCLASS EXEC ST2CMP,MEMBER=REGCLASS
//REGMOVE  EXEC ST2CMP,MEMBER=REGMOVE
//REGRENAM EXEC ST2CMP,MEMBER=REGRENAM
//RELOAD   EXEC ST2CMP,MEMBER=RELOAD
//RELOAD1  EXEC ST2CMP,MEMBER=RELOAD1
//RESOURCE EXEC ST2CMP,MEMBER=RESOURCE
//RTL@ERRO EXEC ST2CMP,MEMBER=RTL@ERRO
//RTL      EXEC ST2CMP,MEMBER=RTL
//RTLANAL  EXEC ST2CMP,MEMBER=RTLANAL
//SAFE@CTY EXEC ST2CMP,MEMBER=SAFE@CTY
//SBITMAP  EXEC ST2CMP,MEMBER=SBITMAP
//SIBCALL  EXEC ST2CMP,MEMBER=SIBCALL
//SIMPLIFY EXEC ST2CMP,MEMBER=SIMPLIFY
//SPLAY@TR EXEC ST2CMP,MEMBER=SPLAY@TR
//SSA@CCP  EXEC ST2CMP,MEMBER=SSA@CCP
//SSA@DCE  EXEC ST2CMP,MEMBER=SSA@DCE
//SSA      EXEC ST2CMP,MEMBER=SSA
//STMT     EXEC ST2CMP,MEMBER=STMT
//STOR@LAY EXEC ST2CMP,MEMBER=STOR@LAY
//STRINGPO EXEC ST2CMP,MEMBER=STRINGPO
//STRSIGNA EXEC ST2CMP,MEMBER=STRSIGNA
//TIMEVAR  EXEC ST2CMP,MEMBER=TIMEVAR
//TOPLEV   EXEC ST2CMP,MEMBER=TOPLEV
//TREE@DUM EXEC ST2CMP,MEMBER=TREE@DUM
//TREE@INL EXEC ST2CMP,MEMBER=TREE@INL
//TREE     EXEC ST2CMP,MEMBER=TREE
//UNIXIO   EXEC ST2CMP,MEMBER=UNIXIO
//UNROLL   EXEC ST2CMP,MEMBER=UNROLL
//VARASM   EXEC ST2CMP,MEMBER=VARASM
//VARRAY   EXEC ST2CMP,MEMBER=VARRAY
//VASPRINT EXEC ST2CMP,MEMBER=VASPRINT
//VERSION  EXEC ST2CMP,MEMBER=VERSION
//XMALLOC  EXEC ST2CMP,MEMBER=XMALLOC
//XSTRERRO EXEC ST2CMP,MEMBER=XSTRERRO
//XSTRDUP  EXEC ST2CMP,MEMBER=XSTRDUP
//XEXIT    EXEC ST2CMP,MEMBER=XEXIT
//CONCAT   EXEC ST2CMP,MEMBER=CONCAT
//*
//MVSSTART EXEC PDPASM,MEMBER=MVSSTART
//MVSSUPA  EXEC PDPASM,MEMBER=MVSSUPA
//*
//START    EXEC ST2PDP,MEMBER=START
//STDIO    EXEC ST2PDP,MEMBER=STDIO
//STDLIB   EXEC ST2PDP,MEMBER=STDLIB
//CTYPE    EXEC ST2PDP,MEMBER=CTYPE
//STRING   EXEC ST2PDP,MEMBER=STRING
//TIME     EXEC ST2PDP,MEMBER=TIME
//ERRNO    EXEC ST2PDP,MEMBER=ERRNO
//ASSERT   EXEC ST2PDP,MEMBER=ASSERT
//LOCALE   EXEC ST2PDP,MEMBER=LOCALE
//MATH     EXEC ST2PDP,MEMBER=MATH
//SETJMP   EXEC ST2PDP,MEMBER=SETJMP
//SIGNAL   EXEC ST2PDP,MEMBER=SIGNAL
//@@MEMMGR EXEC ST2PDP,MEMBER=@@MEMMGR
//*
//DOLINK   EXEC LINK,COND=(4,LT),MODULE='STAGE2'
//
