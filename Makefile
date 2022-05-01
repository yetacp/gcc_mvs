
# common definitions
DEFINES = -DIN_GCC -DHAVE_CONFIG_H -DPUREISO -DTARGET_MVS
INCLUDES = -I include -I gcc -I gcc/config/i370 -I pdpclib -g
PROGRAM_NAME := gccmvs
# definitions for building cross tools
CC = gcc
CFLAGS = -std=c99 -fno-stack-protector -fno-builtin -fno-pie -m32 -nostdinc -O0 -ansi -Wall $(INCLUDES) -DMVSGCC_CROSS $(DEFINES)

# sources for the compiler
GCC_SRCS= \
  gcc/alias.c \
  gcc/attribs.c \
  gcc/bb-reorder.c \
  gcc/bitmap.c \
  gcc/builtins.c \
  gcc/c-aux-info.c \
  gcc/c-common.c \
  gcc/c-convert.c \
  gcc/c-decl.c \
  gcc/c-errors.c \
  gcc/c-format.c \
  gcc/c-lang.c \
  gcc/c-lex.c \
  gcc/c-objc-common.c \
  gcc/c-parse.c \
  gcc/c-pragma.c \
  gcc/c-semantics.c \
  gcc/c-typeck.c \
  gcc/caller-save.c \
  gcc/calls.c \
  gcc/cfg.c \
  gcc/cfganal.c \
  gcc/cfgbuild.c \
  gcc/cfgcleanup.c \
  gcc/cfglayout.c \
  gcc/cfgloop.c \
  gcc/cfgrtl.c \
  gcc/combine.c \
  gcc/conflict.c \
  gcc/convert.c \
  gcc/cppdefault.c \
  gcc/cpperror.c \
  gcc/cppexp.c \
  gcc/cppfiles.c \
  gcc/cpphash.c \
  gcc/cppinit.c \
  gcc/cpplex.c \
  gcc/cpplib.c \
  gcc/cppmacro.c \
  gcc/cppmain.c \
  gcc/cppspec.c \
  gcc/cse.c \
  gcc/cselib.c \
  gcc/debug.c \
  gcc/dependence.c \
  gcc/df.c \
  gcc/diagnostic.c \
  gcc/dominance.c \
  gcc/dwarf2asm.c \
  gcc/dwarf2out.c \
  gcc/emit-rtl.c \
  gcc/except.c \
  gcc/explow.c \
  gcc/expmed.c \
  gcc/expr.c \
  gcc/final.c \
  gcc/flow.c \
  gcc/fold-const.c \
  gcc/function.c \
  gcc/gcc.c \
  gcc/gccspec.c \
  gcc/gcse.c \
  gcc/genrtl.c \
  gcc/ggc-common.c \
  gcc/ggc-page.c \
  gcc/global.c \
  gcc/graph.c \
  gcc/hash.c \
  gcc/hashtable.c \
  gcc/hooks.c \
  gcc/ifcvt.c \
  gcc/insn-attrtab.c \
  gcc/insn-emit.c \
  gcc/insn-extract.c \
  gcc/insn-opinit.c \
  gcc/insn-output.c \
  gcc/insn-recog.c \
  gcc/integrate.c \
  gcc/jump.c \
  gcc/langhooks.c \
  gcc/lcm.c \
  gcc/line-map.c \
  gcc/lists.c \
  gcc/local-alloc.c \
  gcc/loop.c \
  gcc/mkdeps.c \
  gcc/optabs.c \
  gcc/params.c \
  gcc/predict.c \
  gcc/prefix.c \
  gcc/print-rtl.c \
  gcc/print-tree.c \
  gcc/profile.c \
  gcc/real.c \
  gcc/recog.c \
  gcc/regclass.c \
  gcc/regmove.c \
  gcc/regrename.c \
  gcc/reload.c \
  gcc/reload1.c \
  gcc/resource.c \
  gcc/rtl-error.c \
  gcc/rtl.c \
  gcc/rtlanal.c \
  gcc/sbitmap.c \
  gcc/sibcall.c \
  gcc/simplify-rtx.c \
  gcc/ssa-ccp.c \
  gcc/ssa-dce.c \
  gcc/ssa.c \
  gcc/stmt.c \
  gcc/stor-layout.c \
  gcc/stringpool.c \
  gcc/timevar.c \
  gcc/toplev.c \
  gcc/tree-dump.c \
  gcc/tree-inline.c \
  gcc/tree.c \
  gcc/unroll.c \
  gcc/unixio.c \
  gcc/varasm.c \
  gcc/varray.c \
  gcc/version.c \
  gcc/config/i370/i370-c.c \
  gcc/config/i370/i370.c

# sources for libiberty
LIB_SRCS = \
  libiberty/xmalloc.c \
  libiberty/xstrerror.c \
  libiberty/xstrdup.c \
  libiberty/xexit.c \
  libiberty/concat.c \
  libiberty/hex.c \
  libiberty/alloca.c \
  libiberty/lbasename.c \
  libiberty/obstack.c \
  libiberty/safe-ctype.c \
  libiberty/splay-tree.c \
  libiberty/fibheap.c \
  libiberty/hashtab.c \
  libiberty/asprintf.c \
  libiberty/vasprintf.c \
  libiberty/getpagesize.c \
  libiberty/strsignal.c \
  libiberty/partition.c

# PDPCLIB_SRCS = \
#   pdpclib/assert.c \
#   pdpclib/ctype.c \
#   pdpclib/errno.c \
#   pdpclib/linstart.c \
#   pdpclib/locale.c \
#   pdpclib/math.c \
#   pdpclib/__memmgr.c \
#   pdpclib/setjmp.c \
#   pdpclib/signal.c \
#   pdpclib/start.c \
#   pdpclib/stdio.c \
#   pdpclib/stdlib.c \
#   pdpclib/string.c \
#   pdpclib/time.c 


# all sources for the compiler

SRC_FILES = $(GCC_SRCS) $(LIB_SRCS) 
OBJ_FILES := $(foreach filename, $(SRC_FILES), $(filename:.c=.o))

# default rule
# all: target-mvs target-cms target-vse
# all: target-mvs
# .PHONY: all

# # rule for MVS
# target-mvs: out/i370-mvs-gcc
# .PHONY: target-mvs

# # rule for CMS
# target-cms: out/i370-cms-gcc
# .PHONY: target-cms

# # rule for VSE
# target-vse: out/i370-vse-gcc
# .PHONY: target-vse

# # cleanup rule
# clean:
# 	rm -rf out
# .PHONY: clean


all: $(PROGRAM_NAME)
.PHONY: all

#build executable file
$(PROGRAM_NAME): $(OBJ_FILES) pdpclib/pdplinux.a
	@echo "Build executable"
	@$(CC) $(CFLAGS) -nostdlib -o $@ $^ -lgcc

# compile all object file
%.o: %.c
	@echo "Compile $(notdir $<)"
	@$(CC) -c $(CFLAGS) $< -o $@
# # rule for building a cross compiler object
# define build_cross_object
# # rule for one source file
# out/$(1)-cross/$(notdir $(3:.c=.o)): $(3) out/$(1)-cross
# 	$(CC) $(CFLAGS) $(2) -c -o $$@ $$<

# endef



# # rule for building a cross compiler
# define build_cross
# # rule for each source file
# $(foreach src,$(3),$(call build_cross_object,$(1),$(2),$(src)))
# # rule for output directory
# out/$(1)-cross:
# 	mkdir -p $$@

  
# # rule for compiler binary
# out/$(1)-gcc: $(foreach src,$(3),out/$(1)-cross/$(notdir $(src:.c=.o))) pdpclib/pdplinux.a
# 	$(CC) $(CFLAGS) -nostdlib -o $$@ $$? -lgcc

# endef


pdpclib/pdplinux.a: 
	$(MAKE) -C pdpclib

# define cross compilers
# $(eval $(call build_cross,i370-mvs,-DTARGET_MVS,$(COMPILER_SRCS)))
#$(eval $(call build_cross,i370-cms,-DTARGET_CMS,$(COMPILER_SRCS)))
#$(eval $(call build_cross,i370-vse,-DTARGET_VSE,$(COMPILER_SRCS)))

clean:
	@rm -f $(OBJ_FILES) $(PROGRAM_NAME)
	@cd pdpclib && make clean


# dummy rule to prevent running yacc
gcc/c-parse.c:
	touch $@
