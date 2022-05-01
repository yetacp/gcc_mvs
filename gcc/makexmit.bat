del gccmvs-xmit.zip
rm -fr xxx
md xxx
copy xmitread.txt xxx\readme.txt
zip -9Xmj gccmvs-xmit gccmvs.xmi xxx\readme.txt
zip -9X gccmvs-xmit xmit1.jcl xmit2.jcl xmit3.jcl xmit4.jcl xmit5.jcl xmitrecv.bat
rd xxx
