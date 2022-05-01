sed 's/rem zip/zip/g' zipmvs.bat >zipmvs2.bat
sed -e 's/rem type/type/g' -e 's/type stage2d/rem type stage2d/g' subjobs.bat >subjobs2.bat
sed 's/subjobs/subjobs2/g' allmvs.bat | sed 's/zipmvs/zipmvs2/g' >allmvs2.bat
call allmvs2
