//GCCGEN   JOB CLASS=C,REGION=0K
//*
//* GCC libraries are by default named GCC.* and PDPCLIB.*
//*
//* These are all bundled (via TRANSMIT) up into PDS, which
//* has the same (GCC) HLQ, since it's part of the GCC
//* product (although not a normal installation library).
//* it gets the HLQ repeated in case people wish to organize
//* XMITs of different products under their own userid, and 
//* still have the original product easily identifiable.
//* (Consider a non-sysprog doing the installation).
//*
//* That PDS is then in turn bundled up into a final XMIT
//* sequential file, called GCC.GCC.SEQ.XMIT
//*
//* Although both of these files are nominally temporary in 
//* nature, we give them permanent and semi-meaningful names 
//* so that when they are read (via RECEIVE on z/OS), the 
//* default name is something sensible and predictable.
//*
//DOIT     PROC 
//*
//* STUFF EACH GCC DSN INTO A MEMBER OF A PDS.
//*
//XMIT370A EXEC PGM=XMIT370
//XMITLOG   DD SYSOUT=*
//SYSPRINT  DD SYSOUT=*
//SYSUT1    DD DSN=&DSNAME,DISP=SHR
//SYSUT2    DD DSN=&&SYSUT2,
//             UNIT=SYSALLDA,                          
//             SPACE=(3120,(30000,30000)),
//             DISP=(,DELETE,DELETE)
//XMITOUT   DD DSN=GCC.GCC.PDS.XMIT(&MBR),
//             DISP=SHR
//SYSIN     DD DUMMY
//SYSUDUMP  DD SYSOUT=*
//         PEND
//*
//*
//*
//DELETE   EXEC PGM=IEFBR14
//XMITOUT   DD DSN=GCC.GCC.PDS.XMIT,
//             DISP=(MOD,DELETE,DELETE),
//             SPACE=(TRK,(0)),
//             UNIT=SYSALLDA
//*
//ALLOC    EXEC PGM=IEFBR14
//XMITOUT   DD DSN=GCC.GCC.PDS.XMIT,
//             DISP=(NEW,CATLG,DELETE),
//             DCB=(LRECL=80,BLKSIZE=3120,RECFM=FB,DSORG=PO),
//             SPACE=(3120,(30000,30000,44)),
//             UNIT=SYSALLDA
//*
//S1 EXEC PROC=DOIT,MBR=GCCDOC,DSNAME='GCC.DOC'
//S2 EXEC PROC=DOIT,MBR=GCCJCL,DSNAME='GCC.JCL'
//S3 EXEC PROC=DOIT,MBR=GCCLINK,DSNAME='GCC.LINKLIB'
//S4 EXEC PROC=DOIT,MBR=GCCPROC,DSNAME='GCC.PROCLIB'
//S5 EXEC PROC=DOIT,MBR=GCCS2,DSNAME='GCC.S2'
//S6 EXEC PROC=DOIT,MBR=GCCSRC,DSNAME='GCC.SOURCE'
//S7 EXEC PROC=DOIT,MBR=GCCINC,DSNAME='GCC.INCLUDE'
//*
//S1 EXEC PROC=DOIT,MBR=PDPDOC,DSNAME='PDPCLIB.DOC'
//S2 EXEC PROC=DOIT,MBR=PDPINC,DSNAME='PDPCLIB.INCLUDE'
//S3 EXEC PROC=DOIT,MBR=PDPMAC,DSNAME='PDPCLIB.MACLIB'
//S4 EXEC PROC=DOIT,MBR=PDPNCAL,DSNAME='PDPCLIB.NCALIB'
//S5 EXEC PROC=DOIT,MBR=PDPLINK,DSNAME='PDPCLIB.LINKLIB'
//S6 EXEC PROC=DOIT,MBR=PDPSRC,DSNAME='PDPCLIB.SOURCE'
//*
//*
//* Now provide some documentation
//*
//CPYFIL    EXEC PGM=COPYFILE,PARM='dd:in dd:out'
//STEPLIB   DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//IN        DD DSN=GCC.DOC(XMITDOC),DISP=SHR
//OUT       DD DSN=GCC.GCC.PDS.XMIT($$DOC),DISP=SHR
//SYSIN     DD DUMMY
//SYSPRINT  DD SYSOUT=*
//SYSTERM   DD SYSOUT=*
//*
//*
//* And some JCL they will need
//*
//COPY      EXEC PGM=IEBCOPY
//SYSUT1    DD DSN=GCC.JCL,DISP=SHR
//SYSUT2    DD DSN=GCC.GCC.PDS.XMIT,DISP=SHR
//SYSPRINT  DD SYSOUT=*
//SYSIN     DD *
 COPY OUTDD=SYSUT2
      INDD=SYSUT1
 SELECT MEMBER=((XMIT1,,R))
 SELECT MEMBER=((XMIT2,,R))
 SELECT MEMBER=((XMIT3,,R))
 SELECT MEMBER=((XMIT4,,R))
 SELECT MEMBER=((XMIT5,,R))
 SELECT MEMBER=((XMIT6,,R))
 SELECT MEMBER=((XMIT7,,R))
 SELECT MEMBER=((XMIT8,,R))
/*
//*
//*
//* Now create a sequential XMIT of the XMIT PDS.
//*
//DELETE   EXEC PGM=IEFBR14
//XMITOUT   DD DSN=GCC.GCC.SEQ.XMIT,
//             DISP=(MOD,DELETE,DELETE),
//             SPACE=(TRK,(0)),
//             UNIT=SYSALLDA
//*
//XMIT370B EXEC PGM=XMIT370
//XMITLOG   DD SYSOUT=*
//SYSPRINT  DD SYSOUT=*
//SYSUT1    DD DSN=GCC.GCC.PDS.XMIT,DISP=(SHR,DELETE,DELETE)
//SYSUT2    DD DSN=&&SYSUT2,
//             UNIT=SYSALLDA,                          
//             SPACE=(3120,(30000,30000)),
//             DISP=(,DELETE,DELETE)
//XMITOUT   DD DSN=GCC.GCC.SEQ.XMIT,
//             DISP=(NEW,CATLG,DELETE),
//             DCB=(LRECL=80,BLKSIZE=3120,RECFM=FB),
//             SPACE=(3120,(30000,30000),RLSE),
//             UNIT=SYSALLDA
//SYSIN     DD DUMMY
//SYSUDUMP  DD SYSOUT=*
//*
//
