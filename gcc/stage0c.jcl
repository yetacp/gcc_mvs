//GCCGEN   JOB CLASS=C,REGION=0K
//*
//TRANSFER PROC GCCPREF='GCC'
//DELETE   EXEC PGM=IEFBR14
//DD1      DD DSN=&GCCPREF..ALLZIPS,DISP=(MOD,DELETE),
//       UNIT=SYSALLDA,SPACE=(TRK,(0))
//*
//COPY     EXEC PGM=COPYFILE,PARM='-bb dd:sysut1 dd:sysut2'
//SYSUT1   DD DSN=HERC01.IN,DISP=OLD,
//         UNIT=TAPE,VOL=SER=PCTOMF,LABEL=(1,NL),
//         DCB=(RECFM=U,LRECL=0,BLKSIZE=32760)
//SYSUT2   DD DSN=&GCCPREF..ALLZIPS,DISP=(,CATLG),
//         SPACE=(6233,(7000,7000),RLSE),UNIT=SYSALLDA,
//         DCB=(RECFM=U,LRECL=0,BLKSIZE=6233)
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//         PEND
//*
//S1 EXEC TRANSFER
//
