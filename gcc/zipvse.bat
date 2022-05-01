del all.zip

del pdpi.zip
del pdpsrc.zip
del pdpdoc.zip
del pdpmac.zip
cd ..\..\pdos\pdpclib
rem don't compress these libraries, because VSE doesn't
rem have a port of minizip yet
zip -0 -X -ll ..\..\gcc\gcc\pdpi.zip *.h
zip -0 -X -ll ..\..\gcc\gcc\pdpsrc.zip *.c *.asm
zip -0 -X -ll ..\..\gcc\gcc\pdpdoc.zip *.txt
zip -0 -X -ll ..\..\gcc\gcc\pdpmac.zip *.mac
cd ..\..\gcc\gcc

zip -0 -X all pdp*.zip
