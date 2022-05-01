rem set this to core or standard
set gccname=gcc-core-3.2.3

rem this is the patch name
set gccpname=gcc-stage204

rem this is the name of the pdpclib archive
set pdpname=pdpclib

rm -fr work
md work
cd work
md pdos
cd pdos
md pdpclib
cd pdpclib
unzip ..\..\..\%pdpname%
cd ..\..
copy ..\%gccname%.tar.bz2
copy ..\%gccpname%.zip
bzip2 -d %gccname%.tar.bz2
tar xvf %gccname%.tar
del %gccname%.tar
unzip %gccpname%.zip
del %gccpname%.zip
ren gcc-3.2.3 gcc
cd gcc
patch -p 1 -f <..\%gccpname%.txt
del ..\%gccpname%.txt

cd gcc
sed 's/stdcompp/stdcompg/' stdcomp.bat >temp.bat
copy temp.bat stdcomp.bat
sed 's/rem gcc/gccreal/;s/gcc /rem gcc /;s/gccreal/gcc/' compile.bat >temp.bat
copy temp.bat compile.bat
del temp.bat

rem in case the cygwin is set to linefeeds, convert to cr/lf
zip -m -l temp compile.bat stdcomp.bat
unzip temp
del temp.zip

call compile
call compmvs -ansi -pedantic-errors
call zipmvs
