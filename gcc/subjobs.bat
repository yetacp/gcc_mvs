del alljcl.jcl
type stage0a.jcl >>alljcl.jcl
type stage0b.jcl >>alljcl.jcl
type stage0c.jcl >>alljcl.jcl
type stage0d.jcl >>alljcl.jcl
type stage1.jcl >>alljcl.jcl
rem type pregen.jcl >>alljcl.jcl
rem type stage4z.jcl >>alljcl.jcl
rem type gencomp.jcl >>alljcl.jcl
rem type postgen.jcl >>alljcl.jcl
type stage2a.jcl >>alljcl.jcl
type stage2b.jcl >>alljcl.jcl
type stage2c.jcl >>alljcl.jcl
rem type stage3a.jcl >>alljcl.jcl
rem type stage3b.jcl >>alljcl.jcl
type stage4z.jcl >>alljcl.jcl
type stage5a.jcl >>alljcl.jcl
type stage5b.jcl >>alljcl.jcl
type stage5c.jcl >>alljcl.jcl
type example.jcl >>alljcl.jcl
type xmitgcc.jcl >>alljcl.jcl
type xmittape.jcl >>alljcl.jcl
call runmvs alljcl.jcl output.txt all.zip gccmvs.xmi
