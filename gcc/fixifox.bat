cd config\i370
sed 's/\/\*\#define IFOX 1\*\//\#define IFOX 1/g' <pureiso.h >ifox.tmp
del pureiso.h
ren ifox.tmp pureiso.h
cd ..\..
