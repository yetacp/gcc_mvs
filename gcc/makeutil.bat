rem before running this, make sure that pdptop is set
rem to S/370 and that you are not using memmgr, so as
rem to produce 24-bit targets
rem something like this:
rem (in pdpclib)
rem copy pdp370.mac pdptop.mac
rem (in minizip)
rem compile
rem (in GCC)
rem call compmvs -UUSE_MEMMGR -ansi -pedantic-errors

m4 -I ../../pdos/pdpclib -I ../../zlib/contrib/minizip makeutil.m4 >makeutil.jcl
