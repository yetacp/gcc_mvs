rem note that due to a bug in Open Watcom 1.6, which pollutes
rem the namespace with "open" (and "sopen" too), we need to
rem work around this problem by redefining all instances of
rem open to xxopen
wcl386 -3s -zq -e=1 -za -w- -c -Dopen=xxopen -DVALIST_NOT_PTR -DHAVE_CONFIG_H -DIN_GCC -DPUREISO -I. -Iconfig\i370 -I..\include %1 %2 %3 %4 %5 %6 %7 %8 %9
