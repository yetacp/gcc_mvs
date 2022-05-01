:READ  PDPTOP   COPY     A
undivert(pdp370.mac)dnl
:READ  PDPMAIN  COPY    A
undivert(pdpmain.mac)dnl
:READ  PDPPRLG  MACRO    A
undivert(pdpprlg.mac)dnl
:READ  PDPEPIL  MACRO    A
undivert(pdpepil.mac)dnl
:READ  CMSSTART ASSEMBLE A
undivert(cmsstart.asm)dnl
:READ  CMSSUPA  ASSEMBLE A
undivert(cmssupa.asm)dnl
:READ  START    ASSEMBLE A
undivert(start.s)dnl
:READ  STDIO    ASSEMBLE A
undivert(stdio.s)dnl
:READ  STDLIB   ASSEMBLE A
undivert(stdlib.s)dnl
:READ  CTYPE    ASSEMBLE A
undivert(ctype.s)dnl
:READ  STRING   ASSEMBLE A
undivert(string.s)dnl
:READ  TIME     ASSEMBLE A
undivert(time.s)dnl
:READ  ERRNO    ASSEMBLE A
undivert(errno.s)dnl
:READ  ASSERT   ASSEMBLE A
undivert(assert.s)dnl
:READ  LOCALE   ASSEMBLE A
undivert(locale.s)dnl
:READ  MATH     ASSEMBLE A
undivert(math.s)dnl
:READ  SETJMP   ASSEMBLE A
undivert(setjmp.s)dnl
:READ  SIGNAL   ASSEMBLE A
undivert(signal.s)dnl
:READ  MVSUNZIP ASSEMBLE A
undivert(mvsunzip.s)dnl
:READ  HEXDUMP  ASSEMBLE A
undivert(hexdump.s)dnl
:READ  MVSENDEC ASSEMBLE A
undivert(mvsendec.s)dnl
:READ  CPYFIL   ASSEMBLE A
undivert(cpyfil.s)dnl
:READ  CMSUTIL  EXEC     A
undivert(cmsutil.exec)dnl
:READ  RUNSPOOL EXEC     A
undivert(runspool.exec)dnl
