@rem set EXTRA=-DI386 -D__WIN32__ -D__STATIC__ -I config/i386 -I config
@rem set EXTRA=-DS390 -D__WIN32__ -D__STATIC__ -I config/s390
@set EXTRA=-pedantic -I config/i370 -D__WIN32__ -D__STATIC__
gcc -O2 -c -ansi -nostdinc -DHAVE_CONFIG_H -DIN_GCC -DPUREISO -I ../../pdos/pdpclib -I . %EXTRA% -I ../include %1 %2 %3 %4 %5 %6 %7 %8 %9
