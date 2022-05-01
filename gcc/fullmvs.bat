rem after you have updated version.c with the
rem latest version number, you can use this to
rem do a full build of GCCMVS (which includes
rem using (but not generating) bison and sed)
rem and source code-regeneration verification
rem It also produces the final deliverable xmits

call withbis

del gccmvs-xmit.zip
rm -fr xxx
md xxx
copy xmitread.txt xxx\readme.txt
zip -9Xmj gccmvs-xmit gccmvs.xmi xxx\readme.txt
zip -9X gccmvs-xmit xmit1.jcl xmit2.jcl xmit3.jcl xmit4.jcl xmit5.jcl xmitrecv.bat
rd xxx

rem we could combine the checkgen into the single job stream,
rem but it would require coordination with the MVS/380 build
rem where bison gets generated also.
rem We can't use the batch file directly, because that does
rem an unnecessary regeneration of code. fullmvs is not designed
rem to be used with a rebuild of bison.
runmvs checkgen.jcl checkgen.txt
