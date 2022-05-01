rem this is useful during testing. It switches off optimization
rem which makes things run a LOT faster

sed 's/-Os/-O0/g' stage2a.jcl >temp.zzz
del stage2a.jcl
ren temp.zzz stage2a.jcl

sed 's/-Os/-O0/g' stage2b.jcl >temp.zzz
del stage2b.jcl
ren temp.zzz stage2b.jcl

sed 's/-Os/-O0/g' stage2c.jcl >temp.zzz
del stage2c.jcl
ren temp.zzz stage2c.jcl

sed 's/PGM=IEBCOMPR/PGM=IEFBR14/g' stage2c.jcl >temp.zzz
del stage2c.jcl
ren temp.zzz stage2c.jcl

