sed "s/'-DUSE_MEMMGR/'-DXXX_MEMMGR/g" <%1 >sed.tmp
del %1
ren sed.tmp %1
