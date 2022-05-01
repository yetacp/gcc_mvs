/* things that are required to compile in a pure
   ISO environment. */

#if defined(__MVS__) || defined(__CMS__) || defined(__VSE__)
#include "xm-mvs.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <stdarg.h>

#ifndef NO_DETAB
#define fputs t_fputs
#define fprintf t_fprintf
#define vfprintf t_vfprintf
#define fwrite t_fwrite
#define fputc t_fputc
#undef putc
#define putc t_fputc

int t_fputs (const char *str, FILE *file);
int t_fprintf (FILE *file, const char *format, ...);
int t_vfprintf (FILE *file, const char *format, va_list arg);
size_t t_fwrite (const void *ptr, size_t size, size_t nmemb, FILE *file);
int t_fputc (int c, FILE *file);
#endif

#include "unixio.h"

#define SINGLE_EXECUTABLE 1
#define ANSI_PROTOTYPES 1
#define PARAMS(ARGS) ARGS
#define PTR void *

#define DEFAULT_TARGET_VERSION "1.1"
#define DEFAULT_TARGET_MACHINE "i370"
#define PREFIX ""
#define TARGET_EBCDIC 1
#define TARGET_NAME "mvs"

#define USE_SHORT_NAMES 1
/* now redefine all functions that are too long
   to handle on MVS, before anyone tries to start
   using them. */
#if USE_SHORT_NAMES
#include "mshort.h"
#endif

/* unfortunately toplev.c doesn't compile with IFOX
   because there are more than 399 external references.
   You get an error message like this:
   IFO264      TOO MANY ESD ENTRIES
   To combat this problem, we index into an array
   instead. */
/*#define IFOX 1*/
#if IFOX
#undef flag_test_coverage
#undef flag_branch_probabilities
#undef flag_reorder_blocks
#undef flag_rename_registers
#undef flag_cprop_registers
#undef flag_force_mem
#undef flag_force_addr
#undef flag_defer_pop
#undef flag_float_store
#undef flag_cse_follow_jumps
#undef flag_cse_skip_blocks
#undef flag_expensive_optimizations
#undef flag_thread_jumps
#undef flag_strength_reduce
#undef flag_unroll_loops
#undef flag_unroll_all_loops
#undef flag_prefetch_loop_arrays
#undef flag_move_all_movables
#undef flag_reduce_all_givs
#undef flag_regmove
#undef flag_writable_strings
#undef flag_no_function_cse
#undef flag_omit_frame_pointer
#undef flag_function_sections
#undef flag_data_sections
#undef flag_no_peephole
#undef flag_optimize_sibling_calls
#undef flag_complex_divide_method
#undef flag_volatile
#undef flag_volatile_global
#undef flag_volatile_static
#undef flag_syntax_only
#define flag_test_coverage gflags[0]
#define flag_branch_probabilities gflags[1]
#define flag_reorder_blocks gflags[2]
#define flag_rename_registers gflags[3]
#define flag_cprop_registers gflags[4]
#define flag_force_mem gflags[5]
#define flag_force_addr gflags[6]
#define flag_defer_pop gflags[7]
#define flag_float_store gflags[8]
#define flag_cse_follow_jumps gflags[9]
#define flag_cse_skip_blocks gflags[10]
#define flag_expensive_optimizations gflags[11]
#define flag_thread_jumps gflags[12]
#define flag_strength_reduce gflags[13]
#define flag_unroll_loops gflags[14]
#define flag_unroll_all_loops gflags[15]
#define flag_prefetch_loop_arrays gflags[16]
#define flag_move_all_movables gflags[17]
#define flag_reduce_all_givs gflags[18]
#define flag_regmove gflags[19]
#define flag_writable_strings gflags[20]
#define flag_no_function_cse gflags[21]
#define flag_omit_frame_pointer gflags[22]
#define flag_function_sections gflags[23]
#define flag_data_sections gflags[24]
#define flag_no_peephole gflags[25]
#define flag_optimize_sibling_calls gflags[26]
#define flag_complex_divide_method gflags[27]
#define flag_volatile gflags[28]
#define flag_volatile_global gflags[29]
#define flag_volatile_static gflags[30]
#define flag_syntax_only gflags[31]
#endif

/* we define this in order to get consistent results
   regardless of whether using gcc or non-gcc compiler */
#define GCC_VERSION 0
#include "ansidecl.h"

#include "i370.h"
#include "defaults.h"

#include "auto-host.h"

/* Provide three core typedefs used by everything, if we are compiling
   GCC.  These used to be found in rtl.h and tree.h, but this is no
   longer practical.  Providing these here rather that system.h allows
   the typedefs to be used everywhere within GCC. */
#ifndef RTX_FORWARD
#define RTX_FORWARD 1
struct rtx_def;
typedef struct rtx_def *rtx;
struct rtvec_def;
typedef struct rtvec_def *rtvec;
union tree_node;
typedef union tree_node *tree;
#endif

#include "libiberty.h"

/* override some of libiberty's stuff with our own */
#if defined(__MVS__) || defined(__CMS__) || defined(__VSE__)
#define make_temp_file(a) "DD:WORK"
#else
#define make_temp_file(a) tmpnam(NULL)
#endif
#define pwait(a,b,c) (0)

#ifndef POSIX
#define POSIX
#endif

#ifndef GENERATOR_FILE
# include "insn-constants.h"
# include "insn-flags.h"
#endif

#include "system.h"

#include "machmode.h"
#include "real.h"

#define getpwd() ""
