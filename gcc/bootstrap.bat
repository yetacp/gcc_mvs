call compile
copy gccmvs.exe ..\..\zlib\contrib\minizip
call compmvs -ansi -pedantic-errors

pushd ..\..\zlib\contrib\minizip
call compile
del gccmvs.exe
call runmvs mini1.jcl temp1.txt
call runmvs mini2.jcl temp2.txt
popd

call makeutil
call runmvs makeutil.jcl makeutil.out
del makeutil.jcl
call allmvs
