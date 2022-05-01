/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     tTYPENAME = 259,
     SELFNAME = 260,
     PFUNCNAME = 261,
     SCSPEC = 262,
     TYPESPEC = 263,
     CV_QUALIFIER = 264,
     CONSTANT = 265,
     VAR_FUNC_NAME = 266,
     STRING = 267,
     ELLIPSIS = 268,
     SIZEOF = 269,
     ENUM = 270,
     IF = 271,
     ELSE = 272,
     WHILE = 273,
     DO = 274,
     FOR = 275,
     SWITCH = 276,
     CASE = 277,
     DEFAULT = 278,
     BREAK = 279,
     CONTINUE = 280,
     RETURN_KEYWORD = 281,
     GOTO = 282,
     ASM_KEYWORD = 283,
     TYPEOF = 284,
     ALIGNOF = 285,
     SIGOF = 286,
     ATTRIBUTE = 287,
     EXTENSION = 288,
     LABEL = 289,
     REALPART = 290,
     IMAGPART = 291,
     VA_ARG = 292,
     AGGR = 293,
     VISSPEC = 294,
     DELETE = 295,
     NEW = 296,
     THIS = 297,
     OPERATOR = 298,
     CXX_TRUE = 299,
     CXX_FALSE = 300,
     NAMESPACE = 301,
     TYPENAME_KEYWORD = 302,
     USING = 303,
     LEFT_RIGHT = 304,
     TEMPLATE = 305,
     TYPEID = 306,
     DYNAMIC_CAST = 307,
     STATIC_CAST = 308,
     REINTERPRET_CAST = 309,
     CONST_CAST = 310,
     SCOPE = 311,
     EXPORT = 312,
     EMPTY = 313,
     NSNAME = 314,
     PTYPENAME = 315,
     THROW = 316,
     ASSIGN = 317,
     OROR = 318,
     ANDAND = 319,
     MIN_MAX = 320,
     EQCOMPARE = 321,
     ARITHCOMPARE = 322,
     RSHIFT = 323,
     LSHIFT = 324,
     DOT_STAR = 325,
     POINTSAT_STAR = 326,
     MINUSMINUS = 327,
     PLUSPLUS = 328,
     UNARY = 329,
     HYPERUNARY = 330,
     POINTSAT = 331,
     CATCH = 332,
     TRY = 333,
     EXTERN_LANG_STRING = 334,
     ALL = 335,
     PRE_PARSED_CLASS_DECL = 336,
     DEFARG = 337,
     DEFARG_MARKER = 338,
     PRE_PARSED_FUNCTION_DECL = 339,
     TYPENAME_DEFN = 340,
     IDENTIFIER_DEFN = 341,
     PTYPENAME_DEFN = 342,
     END_OF_LINE = 343,
     END_OF_SAVED_INPUT = 344
   };
#endif
#define IDENTIFIER 258
#define tTYPENAME 259
#define SELFNAME 260
#define PFUNCNAME 261
#define SCSPEC 262
#define TYPESPEC 263
#define CV_QUALIFIER 264
#define CONSTANT 265
#define VAR_FUNC_NAME 266
#define STRING 267
#define ELLIPSIS 268
#define SIZEOF 269
#define ENUM 270
#define IF 271
#define ELSE 272
#define WHILE 273
#define DO 274
#define FOR 275
#define SWITCH 276
#define CASE 277
#define DEFAULT 278
#define BREAK 279
#define CONTINUE 280
#define RETURN_KEYWORD 281
#define GOTO 282
#define ASM_KEYWORD 283
#define TYPEOF 284
#define ALIGNOF 285
#define SIGOF 286
#define ATTRIBUTE 287
#define EXTENSION 288
#define LABEL 289
#define REALPART 290
#define IMAGPART 291
#define VA_ARG 292
#define AGGR 293
#define VISSPEC 294
#define DELETE 295
#define NEW 296
#define THIS 297
#define OPERATOR 298
#define CXX_TRUE 299
#define CXX_FALSE 300
#define NAMESPACE 301
#define TYPENAME_KEYWORD 302
#define USING 303
#define LEFT_RIGHT 304
#define TEMPLATE 305
#define TYPEID 306
#define DYNAMIC_CAST 307
#define STATIC_CAST 308
#define REINTERPRET_CAST 309
#define CONST_CAST 310
#define SCOPE 311
#define EXPORT 312
#define EMPTY 313
#define NSNAME 314
#define PTYPENAME 315
#define THROW 316
#define ASSIGN 317
#define OROR 318
#define ANDAND 319
#define MIN_MAX 320
#define EQCOMPARE 321
#define ARITHCOMPARE 322
#define RSHIFT 323
#define LSHIFT 324
#define DOT_STAR 325
#define POINTSAT_STAR 326
#define MINUSMINUS 327
#define PLUSPLUS 328
#define UNARY 329
#define HYPERUNARY 330
#define POINTSAT 331
#define CATCH 332
#define TRY 333
#define EXTERN_LANG_STRING 334
#define ALL 335
#define PRE_PARSED_CLASS_DECL 336
#define DEFARG 337
#define DEFARG_MARKER 338
#define PRE_PARSED_FUNCTION_DECL 339
#define TYPENAME_DEFN 340
#define IDENTIFIER_DEFN 341
#define PTYPENAME_DEFN 342
#define END_OF_LINE 343
#define END_OF_SAVED_INPUT 344




/* Copy the first part of user declarations.  */
#line 30 "parse.y"

/* Cause the `yydebug' variable to be defined.  */
#define YYDEBUG 1

#include "config.h"

#include "system.h"

#include "tree.h"
#include "input.h"
#include "flags.h"
#include "cp-tree.h"
#include "lex.h"
#include "output.h"
#include "except.h"
#include "toplev.h"
#include "ggc.h"

extern struct obstack permanent_obstack;

/* Like YYERROR but do call yyerror.  */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }

#define OP0(NODE) (TREE_OPERAND (NODE, 0))
#define OP1(NODE) (TREE_OPERAND (NODE, 1))

/* Contains the statement keyword (if/while/do) to include in an
   error message if the user supplies an empty conditional expression.  */
static const char *cond_stmt_keyword;

/* Nonzero if we have an `extern "C"' acting as an extern specifier.  */
int have_extern_spec;
int used_extern_spec;

/* List of types and structure classes of the current declaration.  */
static tree current_declspecs;

/* List of prefix attributes in effect.
   Prefix attributes are parsed by the reserved_declspecs and declmods
   rules.  They create a list that contains *both* declspecs and attrs.  */
/* ??? It is not clear yet that all cases where an attribute can now appear in
   a declspec list have been updated.  */
static tree prefix_attributes;

/* When defining an enumeration, this is the type of the enumeration.  */
static tree current_enum_type;

/* When parsing a conversion operator name, this is the scope of the
   operator itself.  */
static tree saved_scopes;

static tree empty_parms PARAMS ((void));
static tree parse_decl0 PARAMS ((tree, tree, tree, tree, int));
static tree parse_decl PARAMS ((tree, tree, int));
static void parse_end_decl PARAMS ((tree, tree, tree));
static tree parse_field0 PARAMS ((tree, tree, tree, tree, tree, tree));
static tree parse_field PARAMS ((tree, tree, tree, tree));
static tree parse_bitfield0 PARAMS ((tree, tree, tree, tree, tree));
static tree parse_bitfield PARAMS ((tree, tree, tree));
static tree parse_method PARAMS ((tree, tree, tree));
static void frob_specs PARAMS ((tree, tree));
static void check_class_key PARAMS ((tree, tree));

/* Cons up an empty parameter list.  */
static inline tree
empty_parms ()
{
  tree parms;

#ifndef NO_IMPLICIT_EXTERN_C
  if (in_system_header && current_class_type == NULL 
      && current_lang_name == lang_name_c)
    parms = NULL_TREE;
  else
#endif
  parms = void_list_node;
  return parms;
}

/* Record the decl-specifiers, attributes and type lookups from the
   decl-specifier-seq in a declaration.  */

static void
frob_specs (specs_attrs, lookups)
     tree specs_attrs, lookups;
{
  save_type_access_control (lookups);
  split_specs_attrs (specs_attrs, &current_declspecs, &prefix_attributes);
  if (current_declspecs
      && TREE_CODE (current_declspecs) != TREE_LIST)
    current_declspecs = build_tree_list (NULL_TREE, current_declspecs);
  if (have_extern_spec && !used_extern_spec)
    {
      /* We have to indicate that there is an "extern", but that it
         was part of a language specifier.  For instance,
	 
    	    extern "C" typedef int (*Ptr) ();

         is well formed.  */
      current_declspecs = tree_cons (error_mark_node,
				     get_identifier ("extern"), 
				     current_declspecs);
      used_extern_spec = 1;
    }
}

static tree
parse_decl (declarator, attributes, initialized)
     tree declarator, attributes;
     int initialized;
{
  return start_decl (declarator, current_declspecs, initialized,
		     attributes, prefix_attributes);
}

static tree
parse_decl0 (declarator, specs_attrs, lookups, attributes, initialized)
     tree declarator, specs_attrs, lookups, attributes;
     int initialized;
{
  frob_specs (specs_attrs, lookups);
  return parse_decl (declarator, attributes, initialized);
}

static void
parse_end_decl (decl, init, asmspec)
     tree decl, init, asmspec;
{
  /* If decl is NULL_TREE, then this was a variable declaration using
     () syntax for the initializer, so we handled it in grokdeclarator.  */
  if (decl)
    decl_type_access_control (decl);
  cp_finish_decl (decl, init, asmspec, init ? LOOKUP_ONLYCONVERTING : 0);
}

static tree
parse_field (declarator, attributes, asmspec, init)
     tree declarator, attributes, asmspec, init;
{
  tree d = grokfield (declarator, current_declspecs, init, asmspec,
		      chainon (attributes, prefix_attributes));
  decl_type_access_control (d);
  return d;
}

static tree
parse_field0 (declarator, specs_attrs, lookups, attributes, asmspec, init)
     tree declarator, specs_attrs, lookups, attributes, asmspec, init;
{
  frob_specs (specs_attrs, lookups);
  return parse_field (declarator, attributes, asmspec, init);
}

static tree
parse_bitfield (declarator, attributes, width)
     tree declarator, attributes, width;
{
  tree d = grokbitfield (declarator, current_declspecs, width);
  cplus_decl_attributes (&d, chainon (attributes, prefix_attributes), 0);
  decl_type_access_control (d);
  return d;
}

static tree
parse_bitfield0 (declarator, specs_attrs, lookups, attributes, width)
     tree declarator, specs_attrs, lookups, attributes, width;
{
  frob_specs (specs_attrs, lookups);
  return parse_bitfield (declarator, attributes, width);
}

static tree
parse_method (declarator, specs_attrs, lookups)
     tree declarator, specs_attrs, lookups;
{
  tree d;
  frob_specs (specs_attrs, lookups);
  d = start_method (current_declspecs, declarator, prefix_attributes);
  decl_type_access_control (d);
  return d;
}

static void
check_class_key (key, aggr)
     tree key;
     tree aggr;
{
  if (TREE_CODE (key) == TREE_LIST)
    key = TREE_VALUE (key);
  if ((key == union_type_node) != (TREE_CODE (aggr) == UNION_TYPE))
    pedwarn ("`%s' tag used in naming `%#T'",
	     key == union_type_node ? "union"
	     : key == record_type_node ? "struct" : "class", aggr);
}

void
cp_parse_init ()
{
  ggc_add_tree_root (&current_declspecs, 1);
  ggc_add_tree_root (&prefix_attributes, 1);
  ggc_add_tree_root (&current_enum_type, 1);
  ggc_add_tree_root (&saved_scopes, 1);
}

/* Rename the "yyparse" function so that we can override it elsewhere.  */
#define yyparse yyparse_1


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 240 "parse.y"
typedef union YYSTYPE {
  long itype; 
  tree ttype; 
  char *strtype; 
  enum tree_code code; 
  flagged_type_tree ftype;
  struct unparsed_text *pi;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 470 "p2092.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 447 "parse.y"

/* Tell yyparse how to print a token's value, if yydebug is set.  */
#define YYPRINT(FILE,YYCHAR,YYLVAL) yyprint(FILE,YYCHAR,YYLVAL)
extern void yyprint			PARAMS ((FILE *, int, YYSTYPE));


/* Line 214 of yacc.c.  */
#line 487 "p2092.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13495

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  294
/* YYNRULES -- Number of rules. */
#define YYNRULES  931
/* YYNRULES -- Number of states. */
#define YYNSTATES  1833

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   112,     2,     2,     2,    85,    73,     2,
      94,   110,    83,    81,    62,    82,    93,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    63,
      76,    66,    77,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    95,     2,   113,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    71,   111,    88,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    64,    67,    69,    70,
      74,    75,    78,    79,    80,    86,    87,    89,    90,    91,
      92,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     6,     7,    10,    13,    15,    16,
      17,    18,    20,    22,    23,    26,    29,    31,    32,    36,
      38,    44,    49,    55,    60,    61,    68,    69,    75,    77,
      80,    82,    85,    86,    93,    96,   100,   104,   108,   112,
     117,   118,   124,   127,   131,   133,   135,   138,   141,   143,
     146,   147,   153,   157,   159,   161,   163,   167,   169,   170,
     173,   176,   180,   182,   186,   188,   192,   194,   198,   201,
     204,   207,   209,   211,   217,   222,   225,   228,   232,   236,
     239,   242,   246,   250,   253,   256,   259,   262,   265,   268,
     270,   272,   274,   276,   277,   279,   282,   283,   285,   286,
     293,   297,   301,   305,   306,   315,   321,   322,   332,   339,
     340,   349,   355,   356,   366,   373,   376,   379,   381,   384,
     386,   393,   402,   407,   414,   421,   426,   429,   431,   434,
     437,   439,   442,   444,   447,   450,   455,   458,   461,   462,
     463,   465,   469,   472,   476,   478,   483,   486,   491,   494,
     499,   502,   504,   506,   508,   510,   512,   514,   516,   518,
     520,   522,   524,   526,   527,   534,   535,   542,   543,   549,
     550,   556,   557,   565,   566,   574,   575,   582,   583,   590,
     591,   592,   598,   604,   606,   608,   614,   620,   621,   623,
     625,   626,   628,   630,   634,   636,   638,   641,   643,   647,
     649,   651,   653,   655,   657,   659,   661,   663,   667,   669,
     673,   674,   676,   678,   679,   687,   689,   691,   695,   700,
     704,   708,   712,   716,   720,   722,   724,   726,   729,   732,
     735,   738,   741,   744,   747,   752,   755,   760,   763,   767,
     771,   776,   781,   787,   793,   800,   803,   808,   814,   817,
     820,   824,   828,   832,   834,   838,   841,   845,   850,   852,
     855,   861,   863,   867,   871,   875,   879,   883,   887,   891,
     895,   899,   903,   907,   911,   915,   919,   923,   927,   931,
     935,   939,   945,   949,   953,   955,   958,   960,   964,   968,
     972,   976,   980,   984,   988,   992,   996,  1000,  1004,  1008,
    1012,  1016,  1020,  1024,  1028,  1032,  1038,  1042,  1046,  1048,
    1051,  1055,  1059,  1061,  1063,  1065,  1067,  1069,  1070,  1076,
    1082,  1088,  1094,  1100,  1102,  1104,  1106,  1108,  1111,  1113,
    1116,  1119,  1123,  1128,  1133,  1135,  1137,  1139,  1143,  1145,
    1147,  1149,  1151,  1153,  1157,  1161,  1165,  1166,  1171,  1176,
    1179,  1184,  1187,  1194,  1199,  1202,  1205,  1207,  1212,  1214,
    1222,  1230,  1238,  1246,  1251,  1256,  1259,  1262,  1265,  1267,
    1272,  1275,  1278,  1284,  1288,  1291,  1294,  1300,  1304,  1310,
    1314,  1319,  1326,  1329,  1331,  1334,  1336,  1339,  1341,  1343,
    1345,  1348,  1349,  1352,  1355,  1359,  1363,  1367,  1370,  1373,
    1376,  1378,  1380,  1382,  1385,  1388,  1391,  1394,  1396,  1398,
    1400,  1402,  1405,  1408,  1412,  1416,  1420,  1425,  1427,  1430,
    1433,  1435,  1437,  1440,  1443,  1446,  1448,  1451,  1454,  1458,
    1460,  1463,  1466,  1468,  1470,  1472,  1474,  1476,  1478,  1480,
    1485,  1490,  1495,  1500,  1502,  1504,  1506,  1508,  1512,  1514,
    1518,  1520,  1524,  1525,  1530,  1531,  1538,  1542,  1543,  1548,
    1550,  1554,  1558,  1559,  1564,  1568,  1569,  1571,  1573,  1576,
    1583,  1585,  1589,  1590,  1592,  1597,  1604,  1609,  1611,  1613,
    1615,  1617,  1619,  1623,  1624,  1627,  1629,  1632,  1636,  1641,
    1643,  1645,  1649,  1654,  1658,  1664,  1668,  1672,  1676,  1677,
    1681,  1685,  1689,  1690,  1693,  1696,  1697,  1704,  1705,  1711,
    1714,  1717,  1720,  1721,  1722,  1723,  1735,  1737,  1738,  1740,
    1741,  1743,  1745,  1748,  1751,  1754,  1757,  1760,  1763,  1767,
    1772,  1776,  1779,  1783,  1788,  1790,  1793,  1795,  1798,  1801,
    1804,  1807,  1811,  1815,  1818,  1819,  1822,  1826,  1828,  1833,
    1835,  1839,  1841,  1843,  1846,  1849,  1853,  1857,  1858,  1860,
    1864,  1867,  1870,  1872,  1875,  1878,  1881,  1884,  1887,  1890,
    1893,  1895,  1898,  1901,  1905,  1907,  1910,  1913,  1918,  1923,
    1926,  1928,  1934,  1939,  1941,  1942,  1944,  1948,  1949,  1951,
    1955,  1957,  1959,  1961,  1963,  1968,  1973,  1978,  1983,  1988,
    1992,  1997,  2002,  2007,  2012,  2016,  2019,  2021,  2023,  2027,
    2029,  2033,  2036,  2038,  2045,  2046,  2049,  2051,  2054,  2056,
    2059,  2063,  2067,  2069,  2073,  2075,  2078,  2082,  2086,  2089,
    2092,  2096,  2098,  2103,  2108,  2112,  2116,  2119,  2121,  2123,
    2126,  2128,  2130,  2133,  2136,  2138,  2141,  2145,  2149,  2152,
    2155,  2159,  2161,  2165,  2169,  2172,  2175,  2179,  2181,  2186,
    2190,  2195,  2199,  2201,  2204,  2207,  2210,  2213,  2216,  2219,
    2222,  2224,  2227,  2232,  2237,  2240,  2242,  2244,  2246,  2248,
    2251,  2256,  2260,  2264,  2267,  2270,  2273,  2276,  2278,  2281,
    2284,  2287,  2290,  2294,  2296,  2299,  2303,  2308,  2311,  2314,
    2317,  2320,  2323,  2326,  2331,  2334,  2336,  2339,  2342,  2346,
    2348,  2352,  2355,  2359,  2362,  2365,  2369,  2371,  2375,  2380,
    2382,  2385,  2389,  2392,  2395,  2397,  2401,  2404,  2407,  2409,
    2412,  2416,  2418,  2422,  2429,  2434,  2439,  2443,  2449,  2453,
    2457,  2461,  2464,  2466,  2468,  2471,  2474,  2477,  2478,  2480,
    2482,  2485,  2489,  2490,  2495,  2497,  2498,  2499,  2505,  2507,
    2508,  2512,  2514,  2517,  2519,  2522,  2523,  2528,  2530,  2531,
    2532,  2538,  2539,  2540,  2548,  2549,  2550,  2551,  2552,  2565,
    2566,  2567,  2575,  2576,  2582,  2583,  2591,  2592,  2597,  2600,
    2603,  2606,  2610,  2617,  2626,  2637,  2646,  2659,  2670,  2681,
    2686,  2690,  2693,  2696,  2698,  2700,  2702,  2704,  2706,  2707,
    2708,  2714,  2715,  2716,  2722,  2724,  2727,  2728,  2729,  2730,
    2736,  2738,  2740,  2744,  2748,  2751,  2754,  2757,  2760,  2763,
    2765,  2768,  2769,  2771,  2772,  2774,  2776,  2777,  2779,  2781,
    2785,  2790,  2798,  2800,  2804,  2805,  2807,  2809,  2811,  2814,
    2817,  2820,  2822,  2825,  2828,  2829,  2833,  2835,  2837,  2839,
    2842,  2845,  2848,  2853,  2856,  2859,  2862,  2865,  2868,  2871,
    2873,  2876,  2878,  2881,  2883,  2885,  2886,  2887,  2889,  2895,
    2899,  2900,  2904,  2905,  2906,  2911,  2914,  2916,  2918,  2920,
    2924,  2925,  2929,  2933,  2937,  2939,  2940,  2944,  2948,  2952,
    2956,  2960,  2964,  2968,  2972,  2976,  2980,  2984,  2988,  2992,
    2996,  3000,  3004,  3008,  3012,  3016,  3020,  3024,  3028,  3032,
    3037,  3041,  3045,  3049,  3053,  3058,  3062,  3066,  3072,  3078,
    3083,  3087
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     115,     0,    -1,    -1,   116,    -1,    -1,   117,   123,    -1,
     116,   123,    -1,   116,    -1,    -1,    -1,    -1,    33,    -1,
      28,    -1,    -1,   124,   125,    -1,   156,   153,    -1,   150,
      -1,    -1,    57,   126,   147,    -1,   147,    -1,   122,    94,
     224,   110,    63,    -1,   137,    61,   118,   111,    -1,   137,
     119,   156,   120,   153,    -1,   137,   119,   150,   120,    -1,
      -1,    46,   171,    61,   127,   118,   111,    -1,    -1,    46,
      61,   128,   118,   111,    -1,   129,    -1,   131,    63,    -1,
     133,    -1,   121,   125,    -1,    -1,    46,   171,    66,   130,
     136,    63,    -1,    48,   316,    -1,    48,   330,   316,    -1,
      48,   330,   214,    -1,    48,   135,   171,    -1,    48,   330,
     171,    -1,    48,   330,   135,   171,    -1,    -1,    48,    46,
     134,   136,    63,    -1,    59,    56,    -1,   135,    59,    56,
      -1,   214,    -1,   316,    -1,   330,   316,    -1,   330,   214,
      -1,    99,    -1,   137,    99,    -1,    -1,    50,    76,   139,
     142,    77,    -1,    50,    76,    77,    -1,   138,    -1,   140,
      -1,   146,    -1,   142,    62,   146,    -1,   171,    -1,    -1,
     276,   143,    -1,    47,   143,    -1,   138,   276,   143,    -1,
     144,    -1,   144,    66,   230,    -1,   394,    -1,   394,    66,
     209,    -1,   145,    -1,   145,    66,   192,    -1,   141,   148,
      -1,   141,     1,    -1,   156,   153,    -1,   149,    -1,   147,
      -1,   137,   119,   156,   120,   153,    -1,   137,   119,   149,
     120,    -1,   121,   148,    -1,   244,    63,    -1,   234,   243,
      63,    -1,   231,   242,    63,    -1,   268,    63,    -1,   244,
      63,    -1,   234,   243,    63,    -1,   231,   242,    63,    -1,
     234,    63,    -1,   174,    63,    -1,   231,    63,    -1,     1,
      63,    -1,     1,   111,    -1,     1,   109,    -1,    63,    -1,
     397,    -1,   225,    -1,   167,    -1,    -1,   166,    -1,   166,
      63,    -1,    -1,   109,    -1,    -1,   168,   151,   407,    61,
     155,   200,    -1,   162,   152,   154,    -1,   162,   152,   365,
      -1,   162,   152,     1,    -1,    -1,   321,     5,    94,   158,
     385,   110,   303,   400,    -1,   321,     5,    49,   303,   400,
      -1,    -1,   330,   321,     5,    94,   159,   385,   110,   303,
     400,    -1,   330,   321,     5,    49,   303,   400,    -1,    -1,
     321,   187,    94,   160,   385,   110,   303,   400,    -1,   321,
     187,    49,   303,   400,    -1,    -1,   330,   321,   187,    94,
     161,   385,   110,   303,   400,    -1,   330,   321,   187,    49,
     303,   400,    -1,   231,   228,    -1,   234,   313,    -1,   313,
      -1,   234,   157,    -1,   157,    -1,     5,    94,   385,   110,
     303,   400,    -1,    94,     5,   110,    94,   385,   110,   303,
     400,    -1,     5,    49,   303,   400,    -1,    94,     5,   110,
      49,   303,   400,    -1,   187,    94,   385,   110,   303,   400,
      -1,   187,    49,   303,   400,    -1,   234,   163,    -1,   163,
      -1,   231,   228,    -1,   234,   313,    -1,   313,    -1,   234,
     157,    -1,   157,    -1,    26,     3,    -1,   165,   261,    -1,
     165,    94,   202,   110,    -1,   165,    49,    -1,    65,   169,
      -1,    -1,    -1,   170,    -1,   169,    62,   170,    -1,   169,
       1,    -1,    94,   202,   110,    -1,    49,    -1,   172,    94,
     202,   110,    -1,   172,    49,    -1,   309,    94,   202,   110,
      -1,   309,    49,    -1,   323,    94,   202,   110,    -1,   323,
      49,    -1,     1,    -1,     3,    -1,     4,    -1,     5,    -1,
      60,    -1,    59,    -1,     3,    -1,    60,    -1,    59,    -1,
     106,    -1,   105,    -1,   107,    -1,    -1,    50,   183,   240,
      63,   175,   184,    -1,    -1,    50,   183,   231,   228,   176,
     184,    -1,    -1,    50,   183,   313,   177,   184,    -1,    -1,
      50,   183,   157,   178,   184,    -1,    -1,     7,    50,   183,
     240,    63,   179,   184,    -1,    -1,     7,    50,   183,   231,
     228,   180,   184,    -1,    -1,     7,    50,   183,   313,   181,
     184,    -1,    -1,     7,    50,   183,   157,   182,   184,    -1,
      -1,    -1,    60,    76,   190,   189,   188,    -1,     4,    76,
     190,   189,   188,    -1,   187,    -1,   185,    -1,   171,    76,
     190,    77,   188,    -1,     5,    76,   190,   189,   188,    -1,
      -1,    77,    -1,    79,    -1,    -1,   191,    -1,   192,    -1,
     191,    62,   192,    -1,   230,    -1,    60,    -1,   330,    60,
      -1,   209,    -1,   321,    50,   171,    -1,    82,    -1,    81,
      -1,    90,    -1,    89,    -1,   112,    -1,   201,    -1,   208,
      -1,    49,    -1,    94,   194,   110,    -1,    49,    -1,    94,
     198,   110,    -1,    -1,   198,    -1,     1,    -1,    -1,   375,
     228,   245,   254,    66,   199,   262,    -1,   194,    -1,   111,
      -1,   338,   336,   111,    -1,   338,   336,     1,   111,    -1,
     338,     1,   111,    -1,   208,    62,   208,    -1,   208,    62,
       1,    -1,   201,    62,   208,    -1,   201,    62,     1,    -1,
     208,    -1,   201,    -1,   219,    -1,   121,   207,    -1,    83,
     207,    -1,    73,   207,    -1,    88,   207,    -1,   193,   207,
      -1,    70,   171,    -1,   237,   203,    -1,   237,    94,   230,
     110,    -1,   238,   203,    -1,   238,    94,   230,   110,    -1,
     221,   302,    -1,   221,   302,   205,    -1,   221,   204,   302,
      -1,   221,   204,   302,   205,    -1,   221,    94,   230,   110,
      -1,   221,    94,   230,   110,   205,    -1,   221,   204,    94,
     230,   110,    -1,   221,   204,    94,   230,   110,   205,    -1,
     222,   207,    -1,   222,    95,   113,   207,    -1,   222,    95,
     194,   113,   207,    -1,    35,   207,    -1,    36,   207,    -1,
      94,   202,   110,    -1,    61,   202,   111,    -1,    94,   202,
     110,    -1,    49,    -1,    94,   240,   110,    -1,    66,   262,
      -1,    94,   230,   110,    -1,   206,    94,   230,   110,    -1,
     203,    -1,   206,   203,    -1,   206,    61,   263,   274,   111,
      -1,   207,    -1,   208,    87,   208,    -1,   208,    86,   208,
      -1,   208,    81,   208,    -1,   208,    82,   208,    -1,   208,
      83,   208,    -1,   208,    84,   208,    -1,   208,    85,   208,
      -1,   208,    80,   208,    -1,   208,    79,   208,    -1,   208,
      78,   208,    -1,   208,    76,   208,    -1,   208,    77,   208,
      -1,   208,    75,   208,    -1,   208,    74,   208,    -1,   208,
      73,   208,    -1,   208,    71,   208,    -1,   208,    72,   208,
      -1,   208,    70,   208,    -1,   208,    69,   208,    -1,   208,
      68,   380,    65,   208,    -1,   208,    66,   208,    -1,   208,
      67,   208,    -1,    64,    -1,    64,   208,    -1,   207,    -1,
     209,    87,   209,    -1,   209,    86,   209,    -1,   209,    81,
     209,    -1,   209,    82,   209,    -1,   209,    83,   209,    -1,
     209,    84,   209,    -1,   209,    85,   209,    -1,   209,    80,
     209,    -1,   209,    79,   209,    -1,   209,    78,   209,    -1,
     209,    76,   209,    -1,   209,    75,   209,    -1,   209,    74,
     209,    -1,   209,    73,   209,    -1,   209,    71,   209,    -1,
     209,    72,   209,    -1,   209,    70,   209,    -1,   209,    69,
     209,    -1,   209,    68,   380,    65,   209,    -1,   209,    66,
     209,    -1,   209,    67,   209,    -1,    64,    -1,    64,   209,
      -1,    88,   395,   171,    -1,    88,   395,   185,    -1,   212,
      -1,   406,    -1,     3,    -1,    60,    -1,    59,    -1,    -1,
       6,    76,   211,   190,   189,    -1,   406,    76,   211,   190,
     189,    -1,    50,   171,    76,   190,   189,    -1,    50,     6,
      76,   190,   189,    -1,    50,   406,    76,   190,   189,    -1,
     210,    -1,     4,    -1,     5,    -1,   216,    -1,   255,   216,
      -1,   210,    -1,    83,   215,    -1,    73,   215,    -1,    94,
     215,   110,    -1,     3,    76,   190,   189,    -1,    59,    76,
     191,   189,    -1,   315,    -1,   210,    -1,   217,    -1,    94,
     215,   110,    -1,   210,    -1,    10,    -1,   223,    -1,   224,
      -1,    11,    -1,    94,   194,   110,    -1,    94,   215,   110,
      -1,    94,     1,   110,    -1,    -1,    94,   220,   341,   110,
      -1,   210,    94,   202,   110,    -1,   210,    49,    -1,   219,
      94,   202,   110,    -1,   219,    49,    -1,    37,    94,   208,
      62,   230,   110,    -1,   219,    95,   194,   113,    -1,   219,
      90,    -1,   219,    89,    -1,    42,    -1,     9,    94,   202,
     110,    -1,   319,    -1,    52,    76,   230,    77,    94,   194,
     110,    -1,    53,    76,   230,    77,    94,   194,   110,    -1,
      54,    76,   230,    77,    94,   194,   110,    -1,    55,    76,
     230,    77,    94,   194,   110,    -1,    51,    94,   194,   110,
      -1,    51,    94,   230,   110,    -1,   330,     3,    -1,   330,
     212,    -1,   330,   406,    -1,   318,    -1,   318,    94,   202,
     110,    -1,   318,    49,    -1,   226,   213,    -1,   226,   213,
      94,   202,   110,    -1,   226,   213,    49,    -1,   226,   214,
      -1,   226,   318,    -1,   226,   214,    94,   202,   110,    -1,
     226,   214,    49,    -1,   226,   318,    94,   202,   110,    -1,
     226,   318,    49,    -1,   226,    88,     8,    49,    -1,   226,
       8,    56,    88,     8,    49,    -1,   226,     1,    -1,    41,
      -1,   330,    41,    -1,    40,    -1,   330,   222,    -1,    44,
      -1,    45,    -1,    12,    -1,   224,    12,    -1,    -1,   219,
      93,    -1,   219,    96,    -1,   240,   242,    63,    -1,   231,
     242,    63,    -1,   234,   243,    63,    -1,   231,    63,    -1,
     234,    63,    -1,   121,   227,    -1,   307,    -1,   313,    -1,
      49,    -1,   229,    49,    -1,   235,   334,    -1,   304,   334,
      -1,   240,   334,    -1,   235,    -1,   304,    -1,   235,    -1,
     232,    -1,   234,   240,    -1,   240,   233,    -1,   240,   236,
     233,    -1,   234,   240,   233,    -1,   234,   240,   236,    -1,
     234,   240,   236,   233,    -1,     7,    -1,   233,   241,    -1,
     233,     7,    -1,   304,    -1,     7,    -1,   234,     9,    -1,
     234,     7,    -1,   234,   255,    -1,   240,    -1,   304,   240,
      -1,   240,   236,    -1,   304,   240,   236,    -1,   241,    -1,
     236,   241,    -1,   236,   255,    -1,   255,    -1,    14,    -1,
      30,    -1,    29,    -1,   268,    -1,     8,    -1,   310,    -1,
     239,    94,   194,   110,    -1,   239,    94,   230,   110,    -1,
      31,    94,   194,   110,    -1,    31,    94,   230,   110,    -1,
       8,    -1,     9,    -1,   268,    -1,   250,    -1,   242,    62,
     246,    -1,   251,    -1,   243,    62,   246,    -1,   252,    -1,
     244,    62,   246,    -1,    -1,   122,    94,   224,   110,    -1,
      -1,   228,   245,   254,    66,   247,   262,    -1,   228,   245,
     254,    -1,    -1,   254,    66,   249,   262,    -1,   254,    -1,
     228,   245,   248,    -1,   313,   245,   248,    -1,    -1,   313,
     245,   253,   248,    -1,   157,   245,   254,    -1,    -1,   255,
      -1,   256,    -1,   255,   256,    -1,    32,    94,    94,   257,
     110,   110,    -1,   258,    -1,   257,    62,   258,    -1,    -1,
     259,    -1,   259,    94,     3,   110,    -1,   259,    94,     3,
      62,   202,   110,    -1,   259,    94,   202,   110,    -1,   171,
      -1,     7,    -1,     8,    -1,     9,    -1,   171,    -1,   260,
      62,   171,    -1,    -1,    66,   262,    -1,   208,    -1,    61,
     111,    -1,    61,   263,   111,    -1,    61,   263,    62,   111,
      -1,     1,    -1,   262,    -1,   263,    62,   262,    -1,    95,
     208,   113,   262,    -1,   171,    65,   262,    -1,   263,    62,
     171,    65,   262,    -1,   104,   152,   154,    -1,   104,   152,
     365,    -1,   104,   152,     1,    -1,    -1,   265,   264,   153,
      -1,   103,   208,   109,    -1,   103,     1,   109,    -1,    -1,
     267,   266,    -1,   267,     1,    -1,    -1,    15,   171,    61,
     269,   299,   111,    -1,    -1,    15,    61,   270,   299,   111,
      -1,    15,   171,    -1,    15,   328,    -1,    47,   323,    -1,
      -1,    -1,    -1,   280,   281,    61,   271,   286,   111,   254,
     272,   267,   273,   265,    -1,   279,    -1,    -1,    62,    -1,
      -1,    62,    -1,    38,    -1,   276,     7,    -1,   276,     8,
      -1,   276,     9,    -1,   276,    38,    -1,   276,   255,    -1,
     276,   171,    -1,   276,   321,   171,    -1,   276,   330,   321,
     171,    -1,   276,   330,   171,    -1,   276,   186,    -1,   276,
     321,   186,    -1,   276,   330,   321,   186,    -1,   277,    -1,
     276,   173,    -1,   278,    -1,   277,    61,    -1,   277,    65,
      -1,   278,    61,    -1,   278,    65,    -1,   276,   173,    61,
      -1,   276,   173,    65,    -1,   276,    61,    -1,    -1,    65,
     395,    -1,    65,   395,   282,    -1,   283,    -1,   282,    62,
     395,   283,    -1,   284,    -1,   285,   395,   284,    -1,   323,
      -1,   309,    -1,    39,   395,    -1,     7,   395,    -1,   285,
      39,   395,    -1,   285,     7,   395,    -1,    -1,   288,    -1,
     286,   287,   288,    -1,   286,   287,    -1,    39,    65,    -1,
     289,    -1,   288,   289,    -1,   290,    63,    -1,   290,   111,
      -1,   164,    65,    -1,   164,    98,    -1,   164,    26,    -1,
     164,    61,    -1,    63,    -1,   121,   289,    -1,   141,   289,
      -1,   141,   231,    63,    -1,   397,    -1,   231,   291,    -1,
     234,   292,    -1,   313,   245,   254,   261,    -1,   157,   245,
     254,   261,    -1,    65,   208,    -1,     1,    -1,   234,   163,
     245,   254,   261,    -1,   163,   245,   254,   261,    -1,   131,
      -1,    -1,   293,    -1,   291,    62,   294,    -1,    -1,   296,
      -1,   292,    62,   298,    -1,   295,    -1,   296,    -1,   297,
      -1,   298,    -1,   307,   245,   254,   261,    -1,     4,    65,
     208,   254,    -1,   313,   245,   254,   261,    -1,   157,   245,
     254,   261,    -1,     3,    65,   208,   254,    -1,    65,   208,
     254,    -1,   307,   245,   254,   261,    -1,     4,    65,   208,
     254,    -1,   313,   245,   254,   261,    -1,     3,    65,   208,
     254,    -1,    65,   208,   254,    -1,   300,   275,    -1,   275,
      -1,   301,    -1,   300,    62,   301,    -1,   171,    -1,   171,
      66,   208,    -1,   375,   331,    -1,   375,    -1,    94,   230,
     110,    95,   194,   113,    -1,    -1,   303,     9,    -1,     9,
      -1,   304,     9,    -1,   255,    -1,   304,   255,    -1,    94,
     202,   110,    -1,    94,   385,   110,    -1,    49,    -1,    94,
       1,   110,    -1,   307,    -1,   255,   307,    -1,    83,   304,
     306,    -1,    73,   304,   306,    -1,    83,   306,    -1,    73,
     306,    -1,   329,   303,   306,    -1,   308,    -1,   308,   305,
     303,   400,    -1,   308,    95,   194,   113,    -1,   308,    95,
     113,    -1,    94,   306,   110,    -1,   321,   320,    -1,   320,
      -1,   320,    -1,   330,   320,    -1,   309,    -1,   311,    -1,
     330,   311,    -1,   321,   320,    -1,   313,    -1,   255,   313,
      -1,    83,   304,   312,    -1,    73,   304,   312,    -1,    83,
     312,    -1,    73,   312,    -1,   329,   303,   312,    -1,   218,
      -1,    83,   304,   312,    -1,    73,   304,   312,    -1,    83,
     314,    -1,    73,   314,    -1,   329,   303,   312,    -1,   315,
      -1,   218,   305,   303,   400,    -1,    94,   314,   110,    -1,
     218,    95,   194,   113,    -1,   218,    95,   113,    -1,   317,
      -1,   330,   317,    -1,   330,   210,    -1,   321,   217,    -1,
     321,   214,    -1,   321,   213,    -1,   321,   210,    -1,   321,
     213,    -1,   317,    -1,   330,   317,    -1,   240,    94,   202,
     110,    -1,   240,    94,   215,   110,    -1,   240,   229,    -1,
       4,    -1,     5,    -1,   185,    -1,   322,    -1,   321,   322,
      -1,   321,    50,   327,    56,    -1,   321,     3,    56,    -1,
     321,    60,    56,    -1,     4,    56,    -1,     5,    56,    -1,
      59,    56,    -1,   185,    56,    -1,   324,    -1,   330,   324,
      -1,   325,   171,    -1,   325,   185,    -1,   325,   327,    -1,
     325,    50,   327,    -1,   326,    -1,   325,   326,    -1,   325,
     327,    56,    -1,   325,    50,   327,    56,    -1,     4,    56,
      -1,     5,    56,    -1,   185,    56,    -1,    60,    56,    -1,
       3,    56,    -1,    59,    56,    -1,   171,    76,   190,   189,
      -1,   330,   320,    -1,   311,    -1,   330,   311,    -1,   321,
      83,    -1,   330,   321,    83,    -1,    56,    -1,    83,   303,
     331,    -1,    83,   303,    -1,    73,   303,   331,    -1,    73,
     303,    -1,   329,   303,    -1,   329,   303,   331,    -1,   332,
      -1,    95,   194,   113,    -1,   332,    95,   194,   113,    -1,
     334,    -1,   255,   334,    -1,    83,   304,   333,    -1,    83,
     333,    -1,    83,   304,    -1,    83,    -1,    73,   304,   333,
      -1,    73,   333,    -1,    73,   304,    -1,    73,    -1,   329,
     303,    -1,   329,   303,   333,    -1,   335,    -1,    94,   333,
     110,    -1,   335,    94,   385,   110,   303,   400,    -1,   335,
      49,   303,   400,    -1,   335,    95,   194,   113,    -1,   335,
      95,   113,    -1,    94,   386,   110,   303,   400,    -1,   206,
     303,   400,    -1,   229,   303,   400,    -1,    95,   194,   113,
      -1,    95,   113,    -1,   349,    -1,   337,    -1,   336,   349,
      -1,   336,   337,    -1,     1,    63,    -1,    -1,   339,    -1,
     340,    -1,   339,   340,    -1,    34,   260,    63,    -1,    -1,
     407,    61,   342,   200,    -1,   341,    -1,    -1,    -1,    16,
     345,   196,   346,   347,    -1,   343,    -1,    -1,   348,   407,
     350,    -1,   343,    -1,   407,   350,    -1,   227,    -1,   194,
      63,    -1,    -1,   344,    17,   351,   347,    -1,   344,    -1,
      -1,    -1,    18,   352,   196,   353,   347,    -1,    -1,    -1,
      19,   354,   347,    18,   355,   195,    63,    -1,    -1,    -1,
      -1,    -1,    20,   356,    94,   378,   357,   197,    63,   358,
     380,   110,   359,   347,    -1,    -1,    -1,    21,   360,    94,
     198,   110,   361,   347,    -1,    -1,    22,   208,    65,   362,
     349,    -1,    -1,    22,   208,    13,   208,    65,   363,   349,
      -1,    -1,    23,    65,   364,   349,    -1,    24,    63,    -1,
      25,    63,    -1,    26,    63,    -1,    26,   194,    63,    -1,
     122,   379,    94,   224,   110,    63,    -1,   122,   379,    94,
     224,    65,   381,   110,    63,    -1,   122,   379,    94,   224,
      65,   381,    65,   381,   110,    63,    -1,   122,   379,    94,
     224,    56,   381,   110,    63,    -1,   122,   379,    94,   224,
      65,   381,    65,   381,    65,   384,   110,    63,    -1,   122,
     379,    94,   224,    56,   381,    65,   384,   110,    63,    -1,
     122,   379,    94,   224,    65,   381,    56,   384,   110,    63,
      -1,    27,    83,   194,    63,    -1,    27,   171,    63,    -1,
     377,   349,    -1,   377,   111,    -1,    63,    -1,   368,    -1,
     133,    -1,   132,    -1,   129,    -1,    -1,    -1,    98,   366,
     154,   367,   371,    -1,    -1,    -1,    98,   369,   343,   370,
     371,    -1,   372,    -1,   371,   372,    -1,    -1,    -1,    -1,
      97,   373,   376,   374,   343,    -1,   235,    -1,   304,    -1,
      94,    13,   110,    -1,    94,   394,   110,    -1,     3,    65,
      -1,    60,    65,    -1,     4,    65,    -1,     5,    65,    -1,
     380,    63,    -1,   227,    -1,    61,   200,    -1,    -1,     9,
      -1,    -1,   194,    -1,     1,    -1,    -1,   382,    -1,   383,
      -1,   382,    62,   383,    -1,    12,    94,   194,   110,    -1,
      95,   171,   113,    12,    94,   194,   110,    -1,   224,    -1,
     384,    62,   224,    -1,    -1,   386,    -1,   230,    -1,   390,
      -1,   391,    13,    -1,   390,    13,    -1,   230,    13,    -1,
      13,    -1,   390,    65,    -1,   230,    65,    -1,    -1,    66,
     388,   389,    -1,   102,    -1,   262,    -1,   392,    -1,   394,
     387,    -1,   391,   393,    -1,   391,   396,    -1,   391,   396,
      66,   262,    -1,   390,    62,    -1,   230,    62,    -1,   232,
     228,    -1,   235,   228,    -1,   240,   228,    -1,   232,   334,
      -1,   232,    -1,   234,   313,    -1,   394,    -1,   394,   387,
      -1,   392,    -1,   230,    -1,    -1,    -1,   313,    -1,     3,
     398,     3,   399,    63,    -1,    76,   190,   189,    -1,    -1,
      94,   202,   110,    -1,    -1,    -1,    64,    94,   402,   110,
      -1,    64,    49,    -1,   230,    -1,     1,    -1,   401,    -1,
     402,    62,   401,    -1,    -1,    83,   303,   403,    -1,    73,
     303,   403,    -1,   329,   303,   403,    -1,    43,    -1,    -1,
     404,    83,   405,    -1,   404,    84,   405,    -1,   404,    85,
     405,    -1,   404,    81,   405,    -1,   404,    82,   405,    -1,
     404,    73,   405,    -1,   404,    71,   405,    -1,   404,    72,
     405,    -1,   404,    88,   405,    -1,   404,    62,   405,    -1,
     404,    78,   405,    -1,   404,    76,   405,    -1,   404,    77,
     405,    -1,   404,    75,   405,    -1,   404,    67,   405,    -1,
     404,    66,   405,    -1,   404,    80,   405,    -1,   404,    79,
     405,    -1,   404,    90,   405,    -1,   404,    89,   405,    -1,
     404,    70,   405,    -1,   404,    69,   405,    -1,   404,   112,
     405,    -1,   404,    68,    65,   405,    -1,   404,    74,   405,
      -1,   404,    96,   405,    -1,   404,    87,   405,    -1,   404,
      49,   405,    -1,   404,    95,   113,   405,    -1,   404,    41,
     405,    -1,   404,    40,   405,    -1,   404,    41,    95,   113,
     405,    -1,   404,    40,    95,   113,   405,    -1,   404,   375,
     403,   405,    -1,   404,     1,   405,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   456,   456,   457,   466,   466,   469,   474,   475,   479,
     484,   488,   494,   498,   498,   506,   508,   512,   511,   515,
     517,   520,   522,   524,   527,   526,   531,   530,   534,   535,
     537,   538,   544,   543,   555,   557,   559,   564,   566,   568,
     574,   573,   588,   594,   604,   605,   606,   608,   613,   615,
     623,   622,   629,   635,   636,   640,   642,   647,   650,   654,
     656,   661,   673,   675,   677,   679,   681,   683,   698,   700,
     705,   707,   709,   711,   714,   717,   722,   723,   725,   727,
     738,   739,   741,   743,   745,   746,   753,   754,   755,   757,
     758,   762,   763,   766,   768,   769,   772,   774,   782,   781,
     792,   794,   796,   802,   801,   805,   810,   809,   813,   818,
     817,   821,   826,   825,   829,   836,   840,   843,   846,   849,
     858,   860,   863,   865,   867,   869,   876,   884,   887,   889,
     891,   894,   896,   902,   909,   911,   913,   918,   931,   938,
     942,   947,   958,   962,   968,   976,   978,   981,   983,   986,
     988,   991,   996,   997,   998,   999,  1000,  1004,  1005,  1006,
    1010,  1011,  1012,  1017,  1016,  1021,  1020,  1025,  1024,  1028,
    1027,  1031,  1030,  1037,  1035,  1042,  1041,  1046,  1045,  1052,
    1056,  1064,  1067,  1070,  1074,  1075,  1081,  1087,  1097,  1098,
    1108,  1109,  1113,  1115,  1120,  1122,  1128,  1134,  1135,  1148,
    1150,  1152,  1154,  1156,  1161,  1163,  1167,  1171,  1176,  1180,
    1186,  1187,  1188,  1194,  1193,  1215,  1219,  1220,  1221,  1222,
    1226,  1229,  1232,  1234,  1239,  1241,  1245,  1248,  1251,  1253,
    1255,  1257,  1260,  1262,  1265,  1269,  1272,  1279,  1282,  1285,
    1288,  1291,  1296,  1299,  1302,  1306,  1308,  1312,  1316,  1318,
    1323,  1325,  1331,  1333,  1335,  1345,  1360,  1364,  1371,  1372,
    1374,  1388,  1390,  1392,  1394,  1396,  1398,  1400,  1402,  1404,
    1406,  1408,  1410,  1412,  1414,  1416,  1418,  1420,  1422,  1424,
    1426,  1428,  1430,  1434,  1436,  1438,  1443,  1445,  1447,  1449,
    1451,  1453,  1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,
    1471,  1473,  1475,  1477,  1479,  1481,  1483,  1487,  1489,  1491,
    1496,  1498,  1500,  1501,  1502,  1503,  1504,  1508,  1521,  1523,
    1528,  1530,  1532,  1538,  1539,  1540,  1544,  1545,  1554,  1555,
    1557,  1559,  1564,  1566,  1571,  1574,  1575,  1576,  1581,  1588,
    1589,  1590,  1600,  1606,  1608,  1611,  1614,  1613,  1629,  1631,
    1633,  1635,  1637,  1640,  1642,  1644,  1647,  1649,  1660,  1661,
    1665,  1669,  1673,  1677,  1679,  1683,  1685,  1687,  1695,  1697,
    1699,  1701,  1705,  1707,  1709,  1711,  1716,  1718,  1720,  1722,
    1725,  1727,  1729,  1774,  1776,  1781,  1783,  1788,  1790,  1796,
    1797,  1803,  1810,  1812,  1820,  1825,  1829,  1831,  1836,  1838,
    1846,  1847,  1852,  1855,  1862,  1865,  1868,  1872,  1875,  1886,
    1888,  1893,  1896,  1899,  1902,  1905,  1908,  1915,  1920,  1922,
    1944,  1946,  1951,  1956,  1964,  1975,  1978,  1981,  1984,  1990,
    1992,  1994,  1996,  2001,  2005,  2009,  2017,  2019,  2021,  2023,
    2027,  2031,  2046,  2066,  2068,  2070,  2074,  2075,  2080,  2081,
    2086,  2087,  2093,  2094,  2100,  2099,  2104,  2119,  2118,  2125,
    2132,  2137,  2143,  2142,  2150,  2159,  2160,  2165,  2167,  2172,
    2177,  2179,  2185,  2186,  2188,  2190,  2192,  2200,  2201,  2202,
    2203,  2208,  2210,  2215,  2217,  2225,  2226,  2229,  2232,  2235,
    2242,  2244,  2247,  2249,  2251,  2256,  2261,  2266,  2272,  2274,
    2280,  2282,  2287,  2288,  2290,  2296,  2295,  2305,  2304,  2313,
    2316,  2319,  2326,  2343,  2361,  2325,  2371,  2379,  2381,  2384,
    2386,  2392,  2393,  2395,  2397,  2399,  2401,  2406,  2411,  2416,
    2421,  2429,  2434,  2439,  2447,  2453,  2459,  2467,  2474,  2481,
    2492,  2503,  2511,  2519,  2532,  2533,  2536,  2541,  2542,  2547,
    2549,  2554,  2557,  2562,  2563,  2567,  2578,  2592,  2593,  2594,
    2595,  2599,  2608,  2614,  2623,  2624,  2629,  2631,  2633,  2635,
    2637,  2639,  2642,  2652,  2657,  2665,  2686,  2692,  2694,  2696,
    2698,  2709,  2714,  2716,  2724,  2725,  2732,  2744,  2745,  2752,
    2763,  2764,  2768,  2769,  2773,  2776,  2782,  2785,  2788,  2791,
    2797,  2799,  2804,  2806,  2808,  2813,  2814,  2822,  2823,  2827,
    2829,  2835,  2838,  2843,  2854,  2856,  2861,  2864,  2867,  2870,
    2880,  2882,  2884,  2886,  2893,  2894,  2904,  2906,  2908,  2910,
    2912,  2916,  2920,  2922,  2924,  2926,  2928,  2932,  2936,  2946,
    2957,  2958,  2959,  2964,  2972,  2973,  2982,  2984,  2986,  2988,
    2990,  2994,  2998,  3000,  3002,  3004,  3006,  3010,  3014,  3016,
    3018,  3020,  3022,  3024,  3026,  3030,  3038,  3041,  3047,  3050,
    3056,  3057,  3062,  3064,  3066,  3071,  3072,  3073,  3077,  3078,
    3080,  3084,  3087,  3095,  3105,  3111,  3117,  3122,  3123,  3128,
    3141,  3143,  3145,  3150,  3157,  3170,  3173,  3181,  3193,  3199,
    3201,  3202,  3203,  3212,  3217,  3225,  3226,  3231,  3233,  3240,
    3246,  3248,  3250,  3252,  3254,  3258,  3262,  3267,  3269,  3274,
    3275,  3285,  3287,  3289,  3291,  3293,  3295,  3297,  3299,  3301,
    3305,  3309,  3314,  3317,  3319,  3321,  3323,  3325,  3327,  3329,
    3331,  3333,  3342,  3343,  3344,  3345,  3349,  3354,  3356,  3362,
    3363,  3367,  3379,  3378,  3386,  3392,  3395,  3391,  3402,  3404,
    3404,  3412,  3413,  3418,  3421,  3424,  3423,  3431,  3435,  3440,
    3434,  3445,  3447,  3444,  3455,  3457,  3459,  3461,  3454,  3466,
    3468,  3465,  3473,  3472,  3477,  3476,  3481,  3480,  3484,  3486,
    3488,  3490,  3492,  3497,  3500,  3503,  3506,  3509,  3512,  3515,
    3521,  3523,  3525,  3529,  3532,  3534,  3536,  3539,  3545,  3547,
    3544,  3554,  3556,  3553,  3562,  3563,  3565,  3577,  3579,  3576,
    3585,  3586,  3590,  3606,  3615,  3617,  3619,  3621,  3626,  3628,
    3629,  3639,  3640,  3645,  3646,  3647,  3655,  3656,  3660,  3661,
    3666,  3668,  3673,  3675,  3687,  3690,  3691,  3699,  3701,  3704,
    3706,  3709,  3711,  3721,  3737,  3736,  3743,  3744,  3749,  3752,
    3755,  3758,  3760,  3765,  3766,  3776,  3779,  3782,  3786,  3789,
    3792,  3798,  3801,  3807,  3808,  3812,  3817,  3822,  3839,  3847,
    3849,  3853,  3855,  3859,  3861,  3863,  3868,  3873,  3878,  3880,
    3885,  3887,  3889,  3891,  3898,  3911,  3919,  3921,  3923,  3925,
    3927,  3929,  3931,  3933,  3935,  3937,  3939,  3941,  3943,  3945,
    3947,  3949,  3951,  3953,  3955,  3957,  3959,  3961,  3963,  3965,
    3967,  3969,  3971,  3973,  3975,  3977,  3979,  3981,  3983,  3985,
    3987,  3995
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "tTYPENAME", "SELFNAME", 
  "PFUNCNAME", "SCSPEC", "TYPESPEC", "CV_QUALIFIER", "CONSTANT", 
  "VAR_FUNC_NAME", "STRING", "ELLIPSIS", "SIZEOF", "ENUM", "IF", "ELSE", 
  "WHILE", "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "BREAK", "CONTINUE", 
  "RETURN_KEYWORD", "GOTO", "ASM_KEYWORD", "TYPEOF", "ALIGNOF", "SIGOF", 
  "ATTRIBUTE", "EXTENSION", "LABEL", "REALPART", "IMAGPART", "VA_ARG", 
  "AGGR", "VISSPEC", "DELETE", "NEW", "THIS", "OPERATOR", "CXX_TRUE", 
  "CXX_FALSE", "NAMESPACE", "TYPENAME_KEYWORD", "USING", "LEFT_RIGHT", 
  "TEMPLATE", "TYPEID", "DYNAMIC_CAST", "STATIC_CAST", "REINTERPRET_CAST", 
  "CONST_CAST", "SCOPE", "EXPORT", "EMPTY", "NSNAME", "PTYPENAME", "'{'", 
  "','", "';'", "THROW", "':'", "'='", "ASSIGN", "'?'", "OROR", "ANDAND", 
  "'|'", "'^'", "'&'", "MIN_MAX", "EQCOMPARE", "'<'", "'>'", 
  "ARITHCOMPARE", "RSHIFT", "LSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", 
  "DOT_STAR", "POINTSAT_STAR", "'~'", "MINUSMINUS", "PLUSPLUS", "UNARY", 
  "HYPERUNARY", "'.'", "'('", "'['", "POINTSAT", "CATCH", "TRY", 
  "EXTERN_LANG_STRING", "ALL", "PRE_PARSED_CLASS_DECL", "DEFARG", 
  "DEFARG_MARKER", "PRE_PARSED_FUNCTION_DECL", "TYPENAME_DEFN", 
  "IDENTIFIER_DEFN", "PTYPENAME_DEFN", "END_OF_LINE", 
  "END_OF_SAVED_INPUT", "')'", "'}'", "'!'", "']'", "$accept", "program", 
  "extdefs", "@1", "extdefs_opt", ".hush_warning", ".warning_ok", 
  "extension", "asm_keyword", "lang_extdef", "@2", "extdef", "@3", "@4", 
  "@5", "namespace_alias", "@6", "using_decl", "namespace_using_decl", 
  "using_directive", "@7", "namespace_qualifier", "any_id", 
  "extern_lang_string", "template_parm_header", "@8", 
  "template_spec_header", "template_header", "template_parm_list", 
  "maybe_identifier", "template_type_parm", "template_template_parm", 
  "template_parm", "template_def", "template_extdef", "template_datadef", 
  "datadef", "ctor_initializer_opt", "maybe_return_init", 
  "eat_saved_input", "function_body", "@9", "fndef", 
  "constructor_declarator", "@10", "@11", "@12", "@13", "fn.def1", 
  "component_constructor_declarator", "fn.def2", "return_id", 
  "return_init", "base_init", ".begin_function_body", "member_init_list", 
  "member_init", "identifier", "notype_identifier", "identifier_defn", 
  "explicit_instantiation", "@14", "@15", "@16", "@17", "@18", "@19", 
  "@20", "@21", "begin_explicit_instantiation", 
  "end_explicit_instantiation", "template_type", "apparent_template_type", 
  "self_template_type", ".finish_template_type", "template_close_bracket", 
  "template_arg_list_opt", "template_arg_list", "template_arg", "unop", 
  "expr", "paren_expr_or_null", "paren_cond_or_null", "xcond", 
  "condition", "@22", "compstmtend", "nontrivial_exprlist", 
  "nonnull_exprlist", "unary_expr", "new_placement", "new_initializer", 
  "regcast_or_absdcl", "cast_expr", "expr_no_commas", 
  "expr_no_comma_rangle", "notype_unqualified_id", "do_id", "template_id", 
  "object_template_id", "unqualified_id", "expr_or_declarator_intern", 
  "expr_or_declarator", "notype_template_declarator", 
  "direct_notype_declarator", "primary", "@23", "new", "delete", 
  "boolean.literal", "string", "nodecls", "object", "decl", "declarator", 
  "fcast_or_absdcl", "type_id", "typed_declspecs", "typed_declspecs1", 
  "reserved_declspecs", "declmods", "typed_typespecs", 
  "reserved_typespecquals", "sizeof", "alignof", "typeof", "typespec", 
  "typespecqual_reserved", "initdecls", "notype_initdecls", 
  "nomods_initdecls", "maybeasm", "initdcl", "@24", "initdcl0_innards", 
  "@25", "initdcl0", "notype_initdcl0", "nomods_initdcl0", "@26", 
  "maybe_attribute", "attributes", "attribute", "attribute_list", 
  "attrib", "any_word", "identifiers_or_typenames", "maybe_init", "init", 
  "initlist", "pending_inline", "pending_inlines", "defarg_again", 
  "pending_defargs", "structsp", "@27", "@28", "@29", "@30", "@31", 
  "maybecomma", "maybecomma_warn", "aggr", "class_head", 
  "class_head_apparent_template", "class_head_decl", "class_head_defn", 
  "maybe_base_class_list", "base_class_list", "base_class", 
  "base_class.1", "base_class_access_list", "opt.component_decl_list", 
  "access_specifier", "component_decl_list", "component_decl", 
  "component_decl_1", "components", "notype_components", 
  "component_declarator0", "component_declarator", 
  "after_type_component_declarator0", "notype_component_declarator0", 
  "after_type_component_declarator", "notype_component_declarator", 
  "enumlist_opt", "enumlist", "enumerator", "new_type_id", 
  "cv_qualifiers", "nonempty_cv_qualifiers", "maybe_parmlist", 
  "after_type_declarator_intern", "after_type_declarator", 
  "direct_after_type_declarator", "nonnested_type", "complete_type_name", 
  "nested_type", "notype_declarator_intern", "notype_declarator", 
  "complex_notype_declarator", "complex_direct_notype_declarator", 
  "qualified_id", "notype_qualified_id", "overqualified_id", 
  "functional_cast", "type_name", "nested_name_specifier", 
  "nested_name_specifier_1", "typename_sub", "typename_sub0", 
  "typename_sub1", "typename_sub2", "explicit_template_type", 
  "complex_type_name", "ptr_to_mem", "global_scope", "new_declarator", 
  "direct_new_declarator", "absdcl_intern", "absdcl", 
  "direct_abstract_declarator", "stmts", "errstmt", "maybe_label_decls", 
  "label_decls", "label_decl", "compstmt_or_stmtexpr", "@32", "compstmt", 
  "simple_if", "@33", "@34", "implicitly_scoped_stmt", "@35", "stmt", 
  "simple_stmt", "@36", "@37", "@38", "@39", "@40", "@41", "@42", "@43", 
  "@44", "@45", "@46", "@47", "@48", "@49", "function_try_block", "@50", 
  "@51", "try_block", "@52", "@53", "handler_seq", "handler", "@54", 
  "@55", "type_specifier_seq", "handler_args", "label_colon", 
  "for.init.statement", "maybe_cv_qualifier", "xexpr", "asm_operands", 
  "nonnull_asm_operands", "asm_operand", "asm_clobbers", "parmlist", 
  "complex_parmlist", "defarg", "@56", "defarg1", "parms", "parms_comma", 
  "named_parm", "full_parm", "parm", "see_typename", "bad_parm", 
  "bad_decl", "template_arg_list_ignore", "arg_list_ignore", 
  "exception_specification_opt", "ansi_raise_identifier", 
  "ansi_raise_identifiers", "conversion_declarator", "operator", 
  "unoperator", "operator_name", "save_lineno", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   123,    44,    59,   316,    58,    61,   317,    63,   318,
     319,   124,    94,    38,   320,   321,    60,    62,   322,   323,
     324,    43,    45,    42,    47,    37,   325,   326,   126,   327,
     328,   329,   330,    46,    40,    91,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      41,   125,    33,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   114,   115,   115,   117,   116,   116,   118,   118,   119,
     120,   121,   122,   124,   123,   125,   125,   126,   125,   125,
     125,   125,   125,   125,   127,   125,   128,   125,   125,   125,
     125,   125,   130,   129,   131,   131,   131,   132,   132,   132,
     134,   133,   135,   135,   136,   136,   136,   136,   137,   137,
     139,   138,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   146,   146,   146,   146,   146,   146,   147,   147,
     148,   148,   148,   148,   148,   148,   149,   149,   149,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   151,   152,   152,   152,   153,   153,   155,   154,
     156,   156,   156,   158,   157,   157,   159,   157,   157,   160,
     157,   157,   161,   157,   157,   162,   162,   162,   162,   162,
     163,   163,   163,   163,   163,   163,   164,   164,   164,   164,
     164,   164,   164,   165,   166,   166,   166,   167,   168,   169,
     169,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   171,   171,   171,   171,   171,   172,   172,   172,
     173,   173,   173,   175,   174,   176,   174,   177,   174,   178,
     174,   179,   174,   180,   174,   181,   174,   182,   174,   183,
     184,   185,   185,   185,   186,   186,   187,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   192,   192,   192,   193,
     193,   193,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   199,   198,   198,   200,   200,   200,   200,
     201,   201,   201,   201,   202,   202,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     204,   204,   205,   205,   205,   205,   206,   206,   207,   207,
     207,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     210,   210,   210,   210,   210,   210,   210,   211,   212,   212,
     213,   213,   213,   214,   214,   214,   215,   215,   216,   216,
     216,   216,   217,   217,   218,   218,   218,   218,   219,   219,
     219,   219,   219,   219,   219,   219,   220,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   221,   221,   222,   222,   223,   223,   224,
     224,   225,   226,   226,   227,   227,   227,   227,   227,   227,
     228,   228,   229,   229,   230,   230,   230,   230,   230,   231,
     231,   232,   232,   232,   232,   232,   232,   233,   233,   233,
     234,   234,   234,   234,   234,   235,   235,   235,   235,   236,
     236,   236,   236,   237,   238,   239,   240,   240,   240,   240,
     240,   240,   240,   241,   241,   241,   242,   242,   243,   243,
     244,   244,   245,   245,   247,   246,   246,   249,   248,   248,
     250,   251,   253,   252,   252,   254,   254,   255,   255,   256,
     257,   257,   258,   258,   258,   258,   258,   259,   259,   259,
     259,   260,   260,   261,   261,   262,   262,   262,   262,   262,
     263,   263,   263,   263,   263,   264,   264,   264,   265,   265,
     266,   266,   267,   267,   267,   269,   268,   270,   268,   268,
     268,   268,   271,   272,   273,   268,   268,   274,   274,   275,
     275,   276,   276,   276,   276,   276,   276,   277,   277,   277,
     277,   278,   278,   278,   279,   279,   279,   280,   280,   280,
     280,   280,   280,   280,   281,   281,   281,   282,   282,   283,
     283,   284,   284,   285,   285,   285,   285,   286,   286,   286,
     286,   287,   288,   288,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   291,   291,   291,   292,   292,   292,
     293,   293,   294,   294,   295,   295,   296,   296,   296,   296,
     297,   297,   298,   298,   298,   299,   299,   300,   300,   301,
     301,   302,   302,   302,   303,   303,   304,   304,   304,   304,
     305,   305,   305,   305,   306,   306,   307,   307,   307,   307,
     307,   307,   308,   308,   308,   308,   308,   308,   309,   309,
     310,   310,   310,   311,   312,   312,   313,   313,   313,   313,
     313,   313,   314,   314,   314,   314,   314,   314,   315,   315,
     315,   315,   315,   315,   315,   315,   316,   316,   317,   317,
     318,   318,   319,   319,   319,   320,   320,   320,   321,   321,
     321,   321,   321,   322,   322,   322,   322,   323,   323,   324,
     324,   324,   324,   325,   325,   325,   325,   326,   326,   326,
     326,   326,   326,   327,   328,   328,   328,   329,   329,   330,
     331,   331,   331,   331,   331,   331,   331,   332,   332,   333,
     333,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   336,   336,   336,   336,   337,   338,   338,   339,
     339,   340,   342,   341,   343,   345,   346,   344,   347,   348,
     347,   349,   349,   350,   350,   351,   350,   350,   352,   353,
     350,   354,   355,   350,   356,   357,   358,   359,   350,   360,
     361,   350,   362,   350,   363,   350,   364,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   366,   367,
     365,   369,   370,   368,   371,   371,   371,   373,   374,   372,
     375,   375,   376,   376,   377,   377,   377,   377,   378,   378,
     378,   379,   379,   380,   380,   380,   381,   381,   382,   382,
     383,   383,   384,   384,   385,   385,   385,   386,   386,   386,
     386,   386,   386,   386,   388,   387,   389,   389,   390,   390,
     390,   390,   390,   391,   391,   392,   392,   392,   392,   392,
     392,   393,   393,   394,   394,   395,   396,   396,   397,   398,
     398,   399,   399,   400,   400,   400,   401,   401,   402,   402,
     403,   403,   403,   403,   404,   405,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   407
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     0,     2,     2,     1,     0,     0,
       0,     1,     1,     0,     2,     2,     1,     0,     3,     1,
       5,     4,     5,     4,     0,     6,     0,     5,     1,     2,
       1,     2,     0,     6,     2,     3,     3,     3,     3,     4,
       0,     5,     2,     3,     1,     1,     2,     2,     1,     2,
       0,     5,     3,     1,     1,     1,     3,     1,     0,     2,
       2,     3,     1,     3,     1,     3,     1,     3,     2,     2,
       2,     1,     1,     5,     4,     2,     2,     3,     3,     2,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     0,     1,     2,     0,     1,     0,     6,
       3,     3,     3,     0,     8,     5,     0,     9,     6,     0,
       8,     5,     0,     9,     6,     2,     2,     1,     2,     1,
       6,     8,     4,     6,     6,     4,     2,     1,     2,     2,
       1,     2,     1,     2,     2,     4,     2,     2,     0,     0,
       1,     3,     2,     3,     1,     4,     2,     4,     2,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     0,     6,     0,     5,     0,
       5,     0,     7,     0,     7,     0,     6,     0,     6,     0,
       0,     5,     5,     1,     1,     5,     5,     0,     1,     1,
       0,     1,     1,     3,     1,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       0,     1,     1,     0,     7,     1,     1,     3,     4,     3,
       3,     3,     3,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     4,     2,     3,     3,
       4,     4,     5,     5,     6,     2,     4,     5,     2,     2,
       3,     3,     3,     1,     3,     2,     3,     4,     1,     2,
       5,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     3,     1,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     3,     3,     1,     2,
       3,     3,     1,     1,     1,     1,     1,     0,     5,     5,
       5,     5,     5,     1,     1,     1,     1,     2,     1,     2,
       2,     3,     4,     4,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     3,     3,     0,     4,     4,     2,
       4,     2,     6,     4,     2,     2,     1,     4,     1,     7,
       7,     7,     7,     4,     4,     2,     2,     2,     1,     4,
       2,     2,     5,     3,     2,     2,     5,     3,     5,     3,
       4,     6,     2,     1,     2,     1,     2,     1,     1,     1,
       2,     0,     2,     2,     3,     3,     3,     2,     2,     2,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     4,     1,     2,     2,
       1,     1,     2,     2,     2,     1,     2,     2,     3,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     0,     4,     0,     6,     3,     0,     4,     1,
       3,     3,     0,     4,     3,     0,     1,     1,     2,     6,
       1,     3,     0,     1,     4,     6,     4,     1,     1,     1,
       1,     1,     3,     0,     2,     1,     2,     3,     4,     1,
       1,     3,     4,     3,     5,     3,     3,     3,     0,     3,
       3,     3,     0,     2,     2,     0,     6,     0,     5,     2,
       2,     2,     0,     0,     0,    11,     1,     0,     1,     0,
       1,     1,     2,     2,     2,     2,     2,     2,     3,     4,
       3,     2,     3,     4,     1,     2,     1,     2,     2,     2,
       2,     3,     3,     2,     0,     2,     3,     1,     4,     1,
       3,     1,     1,     2,     2,     3,     3,     0,     1,     3,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     3,     1,     2,     2,     4,     4,     2,
       1,     5,     4,     1,     0,     1,     3,     0,     1,     3,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     3,
       4,     4,     4,     4,     3,     2,     1,     1,     3,     1,
       3,     2,     1,     6,     0,     2,     1,     2,     1,     2,
       3,     3,     1,     3,     1,     2,     3,     3,     2,     2,
       3,     1,     4,     4,     3,     3,     2,     1,     1,     2,
       1,     1,     2,     2,     1,     2,     3,     3,     2,     2,
       3,     1,     3,     3,     2,     2,     3,     1,     4,     3,
       4,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     4,     4,     2,     1,     1,     1,     1,     2,
       4,     3,     3,     2,     2,     2,     2,     1,     2,     2,
       2,     2,     3,     1,     2,     3,     4,     2,     2,     2,
       2,     2,     2,     4,     2,     1,     2,     2,     3,     1,
       3,     2,     3,     2,     2,     3,     1,     3,     4,     1,
       2,     3,     2,     2,     1,     3,     2,     2,     1,     2,
       3,     1,     3,     6,     4,     4,     3,     5,     3,     3,
       3,     2,     1,     1,     2,     2,     2,     0,     1,     1,
       2,     3,     0,     4,     1,     0,     0,     5,     1,     0,
       3,     1,     2,     1,     2,     0,     4,     1,     0,     0,
       5,     0,     0,     7,     0,     0,     0,     0,    12,     0,
       0,     7,     0,     5,     0,     7,     0,     4,     2,     2,
       2,     3,     6,     8,    10,     8,    12,    10,    10,     4,
       3,     2,     2,     1,     1,     1,     1,     1,     0,     0,
       5,     0,     0,     5,     1,     2,     0,     0,     0,     5,
       1,     1,     3,     3,     2,     2,     2,     2,     2,     1,
       2,     0,     1,     0,     1,     1,     0,     1,     1,     3,
       4,     7,     1,     3,     0,     1,     1,     1,     2,     2,
       2,     1,     2,     2,     0,     3,     1,     1,     1,     2,
       2,     2,     4,     2,     2,     2,     2,     2,     2,     1,
       2,     1,     2,     1,     1,     0,     0,     1,     5,     3,
       0,     3,     0,     0,     4,     2,     1,     1,     1,     3,
       0,     3,     3,     3,     1,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     4,     3,     3,     5,     5,     4,
       3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       4,     0,    13,    13,     1,     6,     0,     5,     0,   314,
     675,   676,     0,   421,   437,   616,     0,    12,   435,     0,
       0,    11,   521,   894,     0,     0,     0,   179,   709,    17,
     316,   315,    89,     0,     0,   875,     0,    48,     0,     0,
      14,    28,     0,    30,     9,    53,    54,     0,    19,    16,
      96,   119,    93,     0,   677,   183,   335,   312,   336,   651,
       0,   410,     0,   409,     0,   425,     0,   450,   618,   467,
     436,     0,   534,   536,   516,   544,   420,   640,   438,   641,
     117,   334,   662,   638,     0,   678,   614,     0,    90,     0,
     313,    86,    88,    87,   190,     0,   683,   190,   684,   190,
     317,   179,   152,   153,   154,   156,   155,   507,   509,     0,
     705,     0,   510,     0,     0,     0,   153,   154,   156,   155,
      26,     0,     0,     0,     0,     0,     0,     0,   511,   687,
       0,   693,     0,     0,     0,    40,     0,     0,    34,     0,
       0,    50,     0,     0,   685,     0,   190,   314,   618,     0,
     649,   644,     0,     0,     0,   648,     0,     0,     0,     0,
     335,     0,   326,     0,     0,     0,   334,   614,    31,     0,
      29,     4,    49,     0,    69,   421,     0,     0,     9,    72,
      68,    71,    96,     0,     0,     0,   436,    97,    15,     0,
     465,     0,     0,   483,    94,    84,   686,   622,     0,     0,
     614,    85,     0,     0,     0,   115,     0,   446,   400,   631,
     401,   637,     0,   614,   423,   422,    83,   118,   411,     0,
     448,   424,   116,     0,   417,   443,   444,   412,   427,   429,
     432,   445,     0,    80,   468,   522,   523,   524,   525,   543,
     161,   160,   162,   527,   535,   184,   531,   526,     0,     0,
     537,   538,   539,   540,   875,     0,   617,   426,   619,     0,
     462,   314,   676,     0,   315,   707,   183,   668,   669,   665,
     643,   679,     0,   314,   316,   664,   642,   663,   639,     0,
     895,   895,   895,   895,   895,   895,   895,     0,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,     0,
     895,   895,   820,   425,   821,   890,   317,   616,   339,   342,
     389,   433,   434,     0,     0,     0,   385,   383,   356,   387,
     388,     0,     0,     0,     0,     0,   315,   308,     0,     0,
     200,   199,     0,     0,   202,   201,     0,   203,     0,     0,
     191,   192,     0,   258,     0,   286,   197,   338,   226,     0,
       0,   340,   341,     0,   194,   407,     0,     0,   425,   408,
     670,   368,   358,     0,     0,   882,     0,     0,   190,     0,
     519,   505,     0,     0,     0,   706,   704,   284,     0,   204,
     261,   205,     0,     0,     0,   472,     4,    24,    32,   701,
     697,   698,   702,   700,   699,   152,   153,   154,     0,   156,
     155,   689,   690,   694,   691,   688,     0,   314,   324,   325,
     323,   667,   666,    36,    35,    52,     0,   169,     0,     0,
     425,   167,    18,     0,     0,   190,   645,   619,   647,     0,
     646,   153,   154,   310,   311,   330,   618,     0,   655,   329,
       0,   654,     0,   337,   316,   315,     0,     0,     0,   328,
     327,   659,     0,     0,    13,     0,   179,    10,    10,    75,
       0,    70,     0,     0,    76,    79,     0,   464,   466,   133,
     102,   808,   100,   391,   101,   136,     0,     0,   134,    95,
       0,   851,   225,     0,   224,   846,   869,     0,   407,   425,
     408,     0,   845,   847,   876,   858,     0,     0,   661,     0,
       0,   883,   618,     0,   629,   624,     0,   628,     0,     0,
       0,     0,     0,   614,   465,     0,    82,     0,   614,   636,
       0,   414,   415,     0,    81,   465,     0,     0,   419,   418,
     413,   430,   431,   452,   451,   190,   541,   542,   152,   155,
     528,   532,   530,     0,   545,   512,   428,   465,   681,   614,
     103,     0,     0,     0,     0,   682,   614,   109,   615,     0,
     650,   676,   708,   183,   930,     0,   926,     0,   925,   923,
     905,   911,   910,   895,   917,   916,   902,   903,   901,   920,
     909,   907,   908,   906,   913,   912,   899,   900,   896,   897,
     898,   922,   904,   915,   914,   895,   921,   918,   427,   614,
     614,     0,   614,     0,   895,   190,     0,   248,   249,     0,
       0,     0,     0,     0,     0,   309,   232,   229,   228,   230,
       0,     0,     0,     0,     0,   338,     0,   931,     0,   227,
     188,   189,   332,     0,   231,     0,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   349,
       0,   351,   355,   354,   392,     0,     0,   393,     0,     0,
       0,   237,   612,     0,   245,   390,   382,     0,     0,   875,
     371,   374,   375,     0,     0,   402,   728,   724,     0,     0,
     614,   614,   614,   404,   731,     0,   233,     0,   235,     0,
     674,   406,     0,     0,   405,   370,     0,     0,   365,   384,
     196,   366,   386,   671,     0,   367,     0,     0,   187,   187,
       0,   177,     0,   425,   175,   520,   609,   606,     0,   519,
     607,   519,     0,   285,   441,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
     478,   479,   480,   477,     0,   470,   473,     0,     4,     0,
     692,   190,   695,     0,    44,    45,     0,    58,     0,     0,
       0,    62,    66,    55,   874,   425,    58,   873,    64,   180,
     165,   163,   180,   333,   187,     0,   653,   652,   337,     0,
     656,     0,    21,    23,    96,    10,    10,    78,    77,     0,
     138,     0,   931,    92,    91,   489,     0,   485,   484,     0,
     623,   620,   850,   864,   853,   728,   724,     0,   865,   614,
     868,   870,     0,     0,   866,     0,   867,   621,   849,   863,
     852,   848,   877,   860,   871,   861,   854,   859,   660,     0,
     674,     0,   658,   625,   619,   627,   626,   618,     0,     0,
       0,     0,     0,     0,   614,   635,     0,   460,   459,   447,
     634,     0,   883,     0,   630,   416,   449,   461,   439,   440,
     465,     0,   529,   533,   675,   676,   875,   875,   677,   546,
     547,   549,   875,   552,   551,     0,     0,   463,   883,   844,
     190,   190,   680,   190,   883,   844,   614,   106,   614,   112,
     895,   895,   919,   924,   890,   890,   890,     0,   929,     0,
       0,     0,     0,     0,     0,   425,     0,     0,     0,   345,
       0,   343,   344,     0,     0,   256,   193,   314,   675,   676,
     316,   315,     0,     0,   490,   517,     0,   306,   307,   835,
     834,     0,   304,   303,   301,   302,   300,   299,   298,   297,
     296,   295,   294,   289,   290,   291,   292,   293,   288,   287,
       0,     0,     0,     0,     0,     0,     0,   239,   253,     0,
       0,   238,   614,   614,     0,   614,   611,   716,     0,     0,
       0,     0,     0,   373,     0,   377,     0,   379,     0,   618,
     727,   726,   719,   723,   722,   874,     0,     0,   741,     0,
       0,   883,   403,   883,   729,   614,   844,     0,     0,     0,
     728,   724,     0,     0,   614,     0,   618,     0,     0,     0,
       0,   198,     0,   878,   182,   186,   318,   180,   173,   171,
     180,     0,   508,   520,   605,     0,   223,   222,   221,   220,
     282,   283,     0,   280,   279,   277,   278,   276,   275,   274,
     272,   273,   271,   270,   269,   264,   265,   266,   267,   268,
     263,   262,   472,     0,     0,    27,     0,     0,   696,     0,
      41,    47,    46,    60,    57,    50,    58,     0,    51,     0,
       0,    59,   527,     0,   170,   180,   180,   168,   181,   332,
     331,    20,    22,    74,    96,   453,   809,   151,   157,   144,
     159,   158,     0,     0,   140,     0,     0,     0,     0,   486,
       0,   135,   618,   727,   723,   728,   724,     0,   618,   638,
       0,   614,   729,     0,   728,   724,     0,   338,     0,   670,
       0,   872,     0,     0,   885,     0,     0,     0,     0,   457,
     633,   632,   456,   187,   554,   553,   875,   875,   875,     0,
     580,   676,     0,   570,     0,     0,     0,   583,     0,   132,
     127,     0,   183,   584,   587,     0,     0,   562,     0,   130,
     574,   105,     0,     0,     0,     0,   111,     0,   883,   844,
     883,   844,   928,   927,   892,   891,   893,   319,   357,     0,
     363,   364,     0,     0,     0,     0,   344,   347,   752,     0,
       0,     0,     0,   257,     0,   348,   350,   353,   251,   250,
     241,     0,   240,   255,     0,     0,   713,   711,     0,   714,
       0,   246,     0,     0,   190,   380,     0,     0,     0,   720,
     619,   725,   721,   732,   614,   740,   738,   739,     0,   730,
     883,     0,   736,     0,   234,   236,   672,   673,   728,   724,
       0,   369,   881,   178,   180,   180,   176,   610,   608,   506,
       0,   471,   469,   314,     0,    25,    33,   703,    61,    56,
      63,    67,    65,   166,   164,    73,   816,     0,   142,     0,
     146,     0,   148,     0,   150,     0,    98,     0,   487,   619,
     727,   723,   728,   724,     0,   614,   643,   729,     0,     0,
     673,   365,   366,   671,   367,   862,   856,   857,   855,   887,
     886,   888,     0,     0,     0,     0,   619,     0,     0,   454,
     185,     0,   556,   555,   550,   614,   844,   579,     0,   571,
     584,   572,   465,   465,   568,   569,   566,   567,   614,   844,
     314,   675,     0,   452,   128,   575,   585,   590,   591,   452,
     452,     0,     0,   452,   126,   576,   588,   452,     0,   465,
       0,   563,   564,   565,   465,   614,   321,   320,   322,   614,
     108,     0,   114,     0,     0,     0,     0,     0,     0,   747,
       0,   493,     0,   491,   260,   305,     0,   242,   243,   252,
     254,   712,   710,   717,   715,     0,   247,     0,     0,   372,
     376,   378,   883,   734,   614,   735,   174,   172,   281,     0,
     474,   476,   817,   810,   814,   143,   141,     0,     0,     0,
     747,   488,   727,   723,     0,   729,   344,     0,   884,   618,
     458,     0,   548,   883,     0,     0,   573,   483,   483,   883,
       0,     0,     0,   465,   465,     0,   465,   465,     0,   465,
       0,   561,   513,     0,   483,   883,   883,   614,   614,   352,
       0,     0,     0,     0,     0,   216,   753,     0,   748,   749,
     492,     0,     0,   244,   718,   381,   320,   737,   883,     0,
       0,   815,   145,   147,   149,    99,   728,   724,     0,   619,
       0,   889,   455,   122,   614,   614,   844,   578,   582,   125,
     614,   465,   465,   599,   483,   314,   675,     0,   586,   592,
     593,   452,   452,   483,   483,     0,   483,   589,   502,   577,
     104,   110,   883,   883,   359,   360,   361,   362,   481,     0,
       0,     0,   743,   754,   761,   742,     0,   750,   494,   613,
     733,   475,     0,   818,   618,   883,   883,     0,   883,   598,
     595,   597,     0,     0,   465,   465,   465,   594,   596,   581,
       0,   107,   113,     0,   751,   746,   219,     0,   217,   745,
     744,   314,   675,   676,   755,   768,   771,   774,   779,     0,
       0,     0,     0,     0,     0,     0,     0,   315,   803,   811,
       0,   831,   807,   806,   805,     0,   763,     0,     0,   425,
     767,   762,   804,   931,     0,     0,   931,   120,   123,   614,
     124,   465,   465,   604,   483,   483,   504,     0,   503,   498,
     482,   218,   824,   826,   827,     0,     0,   759,     0,     0,
       0,   786,   788,   789,   790,     0,     0,     0,     0,     0,
       0,     0,   825,   931,   399,   832,     0,   764,   397,   452,
       0,   398,     0,   452,     0,     0,   765,   802,   801,   822,
     823,   819,   883,   603,   601,   600,   602,     0,     0,   515,
     208,     0,   756,   769,   758,     0,   931,     0,     0,     0,
     782,   931,   791,     0,   800,    42,   156,    37,   156,     0,
      38,   812,     0,   395,   396,     0,     0,     0,   394,   759,
     121,   501,   500,    93,    96,   215,     0,   425,     0,   759,
     759,   772,     0,   747,   829,   775,     0,     0,     0,   931,
     787,   799,    43,    39,   816,     0,   766,     0,   499,   209,
     452,   757,   770,     0,   760,   830,     0,   828,   780,   784,
     783,   813,   836,   836,     0,   497,   495,   496,   465,   206,
       0,     0,   212,     0,   211,   759,   931,     0,     0,     0,
     837,   838,     0,   792,     0,     0,   773,   776,   781,   785,
       0,     0,     0,     0,     0,     0,   836,     0,   213,   207,
       0,     0,     0,   842,     0,   795,   839,     0,     0,   793,
       0,     0,   840,     0,     0,     0,     0,     0,     0,   214,
     777,     0,   843,   797,   798,     0,   794,   759,     0,     0,
     778,   841,   796
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,   464,     3,   465,   173,   813,   348,   189,     5,
       6,    40,   143,   778,   396,    41,   779,  1177,  1613,    43,
     416,  1660,   783,    44,    45,   426,    46,  1178,   790,  1093,
     791,   792,   793,    48,   180,   181,    49,   822,   192,   188,
     482,  1440,    50,    51,   909,  1199,   915,  1201,    52,  1180,
    1181,   193,   194,   823,   483,  1123,  1124,   736,  1125,   244,
      53,  1106,  1105,   802,   799,  1275,  1274,  1050,  1047,   142,
    1104,    54,   246,    55,  1044,   642,   349,   350,   351,   352,
     634,  1771,  1692,  1773,  1726,  1810,  1486,   389,  1033,   353,
     680,   991,   354,   390,   391,   356,   357,   378,    57,   268,
     784,   445,   162,    58,    59,   358,   637,   359,   360,   361,
     362,   824,   363,  1616,   543,   701,   364,  1183,   496,   227,
     497,   365,   228,   366,   367,    64,   510,   229,   206,   219,
      66,   524,   544,  1451,   877,  1338,   207,   220,    67,   557,
     878,    68,    69,   774,   775,   776,  1549,   488,   954,   955,
    1724,  1689,  1638,  1580,    70,   741,   380,   906,  1538,  1639,
    1222,   737,    71,    72,    73,    74,    75,   255,   899,   900,
     901,   902,  1185,  1380,  1186,  1187,  1188,  1365,  1375,  1366,
    1528,  1367,  1368,  1529,  1530,   738,   739,   740,   681,  1021,
     369,   200,   522,   515,   209,    77,    78,    79,   150,   151,
     165,    81,   138,   370,   371,   372,    83,   393,    85,   904,
     129,   130,   131,   563,   112,    86,   394,   996,   997,  1016,
    1012,   704,  1551,  1552,  1487,  1488,  1489,  1553,  1399,  1554,
    1620,  1645,  1729,  1695,  1696,  1555,  1621,  1719,  1646,  1730,
    1647,  1753,  1648,  1756,  1800,  1827,  1649,  1775,  1739,  1776,
    1701,   484,   820,  1296,  1622,  1663,  1744,  1433,  1434,  1500,
    1626,  1728,  1563,  1623,  1735,  1666,   961,  1779,  1780,  1781,
    1804,   501,  1017,   857,  1153,  1328,   503,   504,   505,   853,
     506,   156,   855,  1190,    95,   727,   862,  1331,  1332,   614,
      89,   574,    90,   944
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1660
static const short yypact[] =
{
     137,   166,   193, -1660, -1660, -1660,  7189, -1660,   326,   126,
      71,   248,   140,   174, -1660, -1660,  1737, -1660, -1660,    50,
     163, -1660, -1660, -1660,  1235,  1558,   456,   222, -1660, -1660,
     251,   224, -1660,  2573,  2573, -1660,  3176, -1660,  7189,   212,
   -1660, -1660,   256, -1660,   259, -1660, -1660,  3236, -1660, -1660,
     238,  1085,   334,   314,   327, -1660, -1660, -1660, -1660,   479,
    2942, -1660,  5058, -1660,   319,  2218,   604, -1660,   395, -1660,
   -1660,  1397,   700,   725, -1660,   369,  4966, -1660, -1660, -1660,
    1304, -1660, -1660, -1660,  1457, -1660, -1660,   778, -1660, 10624,
     368, -1660, -1660, -1660, 11764,   449, -1660, 11764, -1660, 11764,
   -1660, -1660, -1660,    71,   248,   469,   224, -1660,   410,   327,
   -1660,  1028, -1660,   922, 11856,   383, -1660, -1660, -1660, -1660,
   -1660,   614,   482,   480,   506,   488,   622,   494, -1660, -1660,
    1855, -1660,  1697,    71,   248, -1660,   469,   224, -1660,  1266,
    1069,   507, 13262,   526, -1660, 11764, 11764,   608,  4307,  4160,
   -1660, -1660,  3083,  1596,  4160, -1660,  1704,  4422,  4422,  3176,
     495,   569, -1660,   479,   331,   611,   623, -1660, -1660,   696,
   -1660,   637, -1660,  6912, -1660, -1660,   222,  4645,   663, -1660,
   -1660, -1660,   238,  5357, 13308,   817,   673, -1660, -1660,   680,
     395,   767,   124,   460,   731, -1660, -1660, -1660,  9165, 10718,
   -1660, -1660,  5388,  5388,  5171,  1304,   890, -1660, -1660,   499,
   -1660, -1660,  3496, -1660, -1660, -1660, -1660, -1660,  2218,   905,
   -1660,   395,  1304, 11856, -1660, -1660, -1660,  1372,  2218, -1660,
     395, -1660,  5357, -1660, -1660, -1660, -1660, -1660, -1660, -1660,
   -1660, -1660, -1660,   733,   870,   327, -1660,   395,  1876,  1741,
   -1660, -1660, -1660, -1660, -1660,   757, -1660,  1924,   395,   922,
   -1660,   674,   519,   826,   676, -1660,   195, -1660, -1660, -1660,
   -1660, -1660,  7289, -1660,   469, -1660, -1660, -1660, -1660,  3523,
   -1660,   738,   760, -1660, -1660, -1660, -1660,   761, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660,   745,
   -1660, -1660, -1660,  1924,  4966,  1851, -1660,   758, -1660, -1660,
   -1660, -1660, -1660, 12961, 12961,   766, -1660, -1660, -1660, -1660,
   -1660,   768,   791,   794,   866,   885,  1123, 12316,  2005, 12961,
   -1660, -1660, 12961, 12961, -1660, -1660,  9444, -1660, 12961,   444,
     811, -1660, 12961, -1660, 12408, -1660,  6269,   202,  1387,  3984,
   12500, -1660,   881,  3335, -1660,  2396, 13053, 13145,  6239,  5788,
   -1660,   246, -1660,  1469,  2729,   825,   444,   444, 11764, 13262,
     975, -1660,   921,  2005,   676, -1660, -1660, 12593,   876,   942,
   -1660, 13337,   898,  2034,  2829,  1490,   637, -1660, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660,   482,   480,   506,  2005,   488,
     622,   908,   494, -1660,   956, -1660,   603,   921,    71,   248,
   -1660, -1660, -1660, -1660, -1660, -1660,  6427, -1660,  5357,  5178,
    2263, -1660, -1660,   980,   444, 11764, -1660,  4307, -1660,  3604,
   -1660,   952,   954, -1660, -1660, -1660,   331,  4160, -1660, -1660,
    4160, -1660,   928, -1660, -1660, -1660,   331,   331,   331, -1660,
   -1660, -1660,  7289,    91,   929,   943, -1660, -1660, -1660, -1660,
   13262, -1660,   948,   988, -1660, -1660,   696, -1660,   395, -1660,
   -1660, -1660, -1660,   979, -1660, -1660, 10094, 12593, -1660, -1660,
     951, -1660,   942,   955, 13337,   337,  1587, 13308,  1587,  3864,
    8178,   957, -1660,   147,  7749,  1005,  1016,   758, -1660,   982,
     551,   123,  5717,  7402, -1660, -1660,  7402, -1660,  7824,  7824,
    5171,  6412,   994, -1660,   395,  5357, -1660, 10810, -1660, -1660,
    8254,  1372,  2218,  5357, -1660,   395,   997,  1004, -1660, -1660,
    1372, -1660,   395,  1070, -1660, 11764, -1660, -1660,   921,   676,
     733, -1660, -1660,  1876,  1712, -1660,  1924,   395, -1660, -1660,
   -1660,  1044,  1046,  1071,  1054, -1660, -1660, -1660, -1660,  4307,
   -1660,   575, -1660,   595, -1660,  1023, -1660,  1056, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660,  1924, -1660,
   -1660,   739, -1660,   936, -1660, 11764, 12593, -1660, -1660, 12593,
   11856,  7097,  7097,  7097,  7097,  6269, -1660, -1660, -1660, -1660,
    1057, 12685, 12685,  9444,  1062,   215,  1072, -1660,  1082, -1660,
   -1660, -1660,  1135, 11764, -1660,  9536,  9444, -1660, 12316, 12316,
   10186, 12316, 12316, 12316, 12316, 12316, 12316, 12316, 12316, 12316,
   12316, 12316, 12316, 12316, 12316, 12316, 12316, 12316, 12316, -1660,
   12593, -1660, -1660, -1660, -1660, 12593, 12593, -1660, 12593, 11856,
    3169,   660,   458, 10902, -1660, -1660, -1660,  1124,   826,  1181,
     616,   624,   702,  3767,   936, -1660,   555,   555,  3505, 10994,
    1101,  1161, -1660, -1660,   633,  9444, -1660,  9444, -1660, 11392,
     810, -1660,  1010,   922, -1660, -1660, 12593,   826, -1660, -1660,
     224, -1660, -1660, -1660,   586,   368, 12593,  1163, -1660, -1660,
     444, -1660,  5357,  2904, -1660, -1660,  1165, -1660,  1118,  1170,
   -1660,   975,   908, 13408, -1660, 10370, 10462, 12593, 12593, 10186,
   12593, 12593, 12593, 12593, 12593, 12593, 12593, 12593, 12593, 12593,
   12593, 12593, 12593, 12593, 12593, 12593, 12593, 12593, 12593, -1660,
   -1660, -1660, -1660, -1660,    66, -1660,  1140,  1126,   637,   603,
    1180, 11764, -1660,  1184, -1660, -1660,  1069,  1578,  1168,  1210,
     316,  1183,  1193, -1660, -1660,  4050,  1397, -1660,  1194, -1660,
   -1660, -1660, -1660, -1660, -1660,   444, -1660, -1660,  1154,  1156,
   -1660,  1211, -1660, -1660,   238, -1660, -1660, -1660, -1660,    94,
   -1660,   529, -1660, -1660, -1660, -1660,  9349, 13408, -1660,  1166,
   -1660, -1660, -1660, -1660, -1660,  2121,  2121,  5913, -1660, -1660,
   -1660, -1660,  3496,   778, -1660, 11485, -1660, -1660, -1660, -1660,
   -1660, -1660, -1660, -1660,  1016,  1213, -1660, -1660, -1660, 11948,
    1161,   707, -1660, -1660,  5717, -1660, -1660,  6412,  7402,  7402,
    8285,  8285,  6412,  1010, -1660, -1660,  8254, -1660,  1215, -1660,
   -1660,  1173,   123,  5717, -1660,  1372, -1660, -1660, -1660, -1660,
     395,  1221,   733, -1660,   480,   506, -1660, -1660,   494,  1225,
   -1660, -1660,   435, -1660, -1660,  2188,  3845, -1660,   123,  6851,
   11764, 11764, -1660, 11764,   123,  6851, -1660, -1660, -1660, -1660,
   -1660, -1660, -1660, -1660,  1756,  1756,  1756,  1300, -1660,   444,
    1178, 13363,  1189,  1192,  1229,  7051,  1233,  1236,  1238, -1660,
    1202, -1660, -1660,  1212,  1259, -1660, -1660,  1256,   867,   895,
     521,   150, 12593,  1274, -1660,  1269,  1234,  6269,  6269, -1660,
   -1660,  1280,  7901,  8079,  5502,  7091,  7924,  5323,  4968,  2757,
    2757,  2176,  2176,  1078,  1078,   843,   843,   843, -1660, -1660,
    1245,  1247,  1248,  1252,  1262,  1265,  7097,   660, -1660, 10094,
   12593, -1660, -1660, -1660, 12593, -1660, -1660,  1251, 12961,  1271,
    1270,  1302,  1333, -1660, 12593, -1660, 12593, -1660, 12593,  1818,
    2158, -1660, -1660,  2158, -1660,   138,  1279,  1284, -1660,  1277,
    7097,   123, -1660,   123,  2329, -1660,  6851, 11086,  1286,  1288,
   11578, 11578,  8933,  1289, 12408,  1297,  2040,  3733,  2829,  1314,
    1298,  1046,  1301, -1660, -1660, -1660, -1660, -1660, -1660, -1660,
   -1660, 12593, -1660,  2005, -1660,  1307, -1660, 13408, -1660, 13408,
   13408, 13408,  1350,  7451,  7877,  4699,  3682,  7589,  8341,  4766,
    3411,  3411,  3411,  2589,  2589,  1650,  1650,  1038,  1038,  1038,
   -1660, -1660,  1490,  1310, 12777, -1660,  1313,  1363, -1660,   444,
   -1660, -1660, -1660, -1660, -1660, -1660,  2858,  6427, -1660,  7097,
   11764, -1660,  1145, 12316, -1660, -1660, -1660, -1660, -1660, -1660,
   -1660, -1660, -1660, -1660,   238, -1660, -1660, -1660,   482, -1660,
     488,   622, 12593,   144, -1660,   709,   719,   787,  1366, -1660,
      58, -1660,  2595,  2234,  2234,  2276,  2276,  5913,  2849,   221,
    3496, -1660,  2472,  4192, 11671, 11671,  9053,   223,  1320,   312,
     933, -1660, 10094,  9631, -1660,  4947,  1059,  1059,  1893, -1660,
   -1660, -1660,  1373, -1660, -1660, -1660, -1660, -1660, -1660,  2100,
   -1660,   751,   960, -1660, 12593,  7020,  6742, -1660,  6742,   260,
     260,   421,   804,  3384,  8429,    85,  5285, -1660,   160,   260,
   -1660, -1660,  1324,   444,   444,   444, -1660,  1336,   123,  6851,
     123,  6851, -1660, -1660, -1660, -1660, -1660, -1660, -1660,  7097,
   -1660, -1660,  1354,  1357,  1358,  1360,  1154, -1660, -1660,  8679,
   10094,  9726,  1356, -1660, 12316, -1660, -1660, -1660, -1660, -1660,
     797,  1359, -1660, -1660,  1374,   241,   788,   788,  1376,   788,
   12593, -1660, 12961,  1477, 11764, -1660,  1377,  1380,  1386, -1660,
    1818, -1660, -1660, -1660, -1660, -1660, -1660, -1660,  1818, -1660,
     123,  1398, -1660,  1405, -1660, -1660, -1660, -1660,  2960,  2960,
    7567, -1660, -1660, -1660, -1660, -1660, -1660, 13408, -1660, -1660,
   12593, -1660, -1660,   204,  1410, -1660, -1660, -1660, -1660, -1660,
   -1660, -1660,  6269, -1660, -1660, -1660,  1389,  1412, -1660,   598,
   -1660, 12593, -1660, 12593, -1660, 12593, -1660,  9818, -1660,  2595,
    2234,  2234,  3041,  3041,  8034, -1660,   335,  2472,  2595,  1413,
     990,   457,   471,   625,   254, -1660, -1660, -1660, -1660, -1660,
   -1660, -1660,   308,  2082,  2082,  1241,  1241,  1241, 10094, -1660,
   -1660,  1712, -1660, -1660, -1660, -1660,  6851, 13408,   184, -1660,
    1043, -1660,   395,   395, -1660, -1660, -1660, -1660, -1660,  6851,
     576,  1025, 12593,  1070, -1660,  1470, -1660, -1660, -1660,   415,
     431,  1457,  1596,   599,   260,  1471, -1660,   759,  1466,   395,
    5652, -1660, -1660, -1660,   395, -1660, -1660,  1478, -1660, -1660,
   -1660,  1428, -1660,  1433,  1436, 12593, 12593, 12593, 12593,    87,
   10094, -1660,  1482, -1660, -1660,  6269, 12593, -1660,   797, -1660,
   -1660, -1660, -1660, -1660, -1660,  1445, -1660,  1511,   444, -1660,
   -1660, -1660,   123, -1660, -1660, -1660, -1660, -1660, 13408, 12593,
   -1660, -1660, -1660,  1389, -1660, -1660, -1660,  1454,  1456,  1458,
      87, -1660,  2348,  2348,  1010,  2514,   755,  4947, -1660,  1241,
   -1660, 10094, -1660,   123,  1459,   815, -1660,  1508,  1508,   123,
    1465, 12593, 12593,  8653,   395,  5485,   395,   395,  4326,   395,
    6033, -1660, -1660,  6186,  1508,   123,   123, -1660, -1660, -1660,
    1474,  1484,  1486,  1493,  2005, -1660, -1660,  8606,  1542, -1660,
   -1660, 10094,  1492, -1660, -1660, -1660, -1660, -1660,   123,  1496,
    1485, -1660, -1660, -1660, -1660, -1660,  2688,  2688,  4287,  1899,
    1899, -1660, -1660, -1660, -1660, -1660,  6851, -1660, -1660, -1660,
   -1660,  8653,  8653, -1660,  1508,   618,  1079, 12593, -1660, -1660,
   -1660,  1070,  1070,  1508,  1508,   575,  1508, -1660, -1660, -1660,
   -1660, -1660,   123,   123, -1660, -1660, -1660, -1660, -1660,  1083,
     310,  6536, -1660, -1660, -1660, -1660, 11197, -1660, -1660, -1660,
   -1660, -1660,  7322, -1660,  1899,   123,   123,  1500,   123, -1660,
   -1660, -1660, 12593, 12593,  8653,   395,   395, -1660, -1660, -1660,
    8780, -1660, -1660,  2005, -1660, -1660, -1660,   370, -1660, -1660,
   -1660,  1546,  1114,  1121, -1660, -1660, -1660, -1660, -1660, 12593,
    1547,  1553,  1557, 12040,   406,  2005,   701,   852, -1660, -1660,
   12132,  1612, -1660, -1660, -1660,  1559, -1660,  6598, 13216,  5592,
    1606, -1660, -1660,  1515,  1517,  1519, -1660, -1660, -1660, -1660,
   -1660,  8653,  8653, -1660,  1508,  1508, -1660, 10554, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660,   828,   828,  1571,  1548,  1554,
    4801, -1660, -1660, -1660, -1660,  1577, 12593,  1586,  1591,  1602,
    2195,  2295, -1660, -1660, -1660, -1660,  1567, -1660, -1660,  1070,
    1125, -1660,  1146,  1070, 12224,  1150, -1660, -1660, -1660, -1660,
   -1660, -1660,   123, -1660, -1660, -1660, -1660,  1555,  8840,  1564,
   -1660, 11856, -1660, -1660, -1660,  1645, -1660,  9257, 11856, 12593,
   -1660, -1660, -1660,  1608, -1660, -1660,  1616, -1660,  1602,  2195,
   -1660, -1660,   696, -1660, -1660, 12869, 12869,  9910, -1660,  1571,
   -1660, -1660, -1660,   334,   238, -1660,  1563,   441,  5357,  1571,
    1571, -1660, 11296,    87, -1660, -1660,  1611,  1570, 13386, -1660,
   -1660, -1660, -1660, -1660,  1389,   121, -1660,   189, -1660, -1660,
    1070, -1660, -1660,   850, -1660, -1660, 10002, -1660, -1660, -1660,
   -1660,  1389,    89,    89,  1620, -1660, -1660, -1660,   395, -1660,
   12593,  1623, -1660,  1624, -1660,  1571, -1660,  1598,  2005,   836,
    1628, -1660,   359, -1660,  1630,  1589, -1660, -1660, -1660, -1660,
   12593,  1584,   696,  1643,    89,   696,    89,  1655, -1660, -1660,
   10278,  1603,  1710,   881,   433, -1660, -1660,   436,   846, -1660,
   10094,  1614, -1660,  1631,   696,  1663,  1665,   696,  1667, -1660,
   -1660, 12593,   881, -1660, -1660,   437, -1660,  1571,  1633,  1668,
   -1660, -1660, -1660
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1660, -1660,  1750, -1660,  -332,  1574,  -418,    42,    -5,  1755,
   -1660,  1721, -1660, -1660, -1660, -1454, -1660,   502, -1660, -1446,
   -1660,   105,   996,    69,  -383, -1660, -1660,   116, -1660,  -728,
   -1660, -1660,   672,    68,  1601,  1309,  1607, -1660,    63,  -180,
    -802, -1660,     2,    99, -1660, -1660, -1660, -1660, -1660,   606,
   -1660, -1660, -1660, -1660, -1660, -1660,   489,   -16, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660,  1691,
    -705,  7781,  -181,   -18,  -695,   874,   -70,  1659,  -607, -1660,
     129, -1660,   159, -1660, -1543, -1660, -1371,    37,  1167,  -329,
   -1660,  -957,  7269,  4278,  6794,  1368,  4996,  1491,  -348,   -64,
     -83,   832,  -136,   -78,   117, -1660, -1660, -1660,  -342, -1660,
    -164, -1660, -1660, -1487,    59,  -351,  4914,    52,    15,  -146,
      41,    57,  -206, -1660, -1660, -1660,    -3,  -144,  -174,  -171,
      14,   -40,  -360, -1660,  -405, -1660, -1660, -1660, -1660, -1660,
     478,  1352,  3134, -1660,   724, -1660, -1660, -1195,  -482,   991,
   -1660, -1660, -1660, -1660,    40, -1660, -1660, -1660, -1660, -1660,
   -1660,  1080,  -384, -1660, -1660, -1660, -1660, -1660, -1660,   477,
     652, -1660, -1660, -1660,   445, -1078, -1660, -1660, -1660, -1660,
   -1660, -1660,   640, -1660,   358,  1095, -1660,   795,  1160,  4547,
      79,  1632,  3105,  2092, -1660,  -530, -1660,    54,  1689,  2935,
    -138,   296,   -62,  5584,  1481, -1660,  6552,  2280,  2635,   -15,
    -110, -1660,  1717,   -49, -1660,  6005,  3655,  -160, -1660,  3453,
    1621, -1660, -1660,   302, -1660, -1660,   366,  1232, -1660, -1491,
   -1660, -1660, -1660, -1522, -1660, -1474,   134, -1660, -1660, -1660,
   -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660, -1660,
   -1660,   128, -1660, -1660, -1660, -1660, -1660,   142, -1392, -1660,
   -1660,   -58, -1660, -1660, -1660, -1660,  -742, -1632, -1660,    95,
   -1659,  -855,  -175,  1019, -1660, -1660, -1660, -1660,  -412, -1660,
    -411,  -209, -1660,   112, -1660, -1660,  -843,   443, -1660,    75,
   -1660,  6101,  -125,  -806
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -932
static const short yytable[] =
{
     108,    39,   471,    65,   828,   463,   269,  1062,   121,   472,
     128,   190,   532,   473,   797,   798,  1128,   710,  1116,   448,
     451,    61,   415,   502,   903,   647,   721,   376,   460,   377,
    1232,   315,   722,    39,  1045,    65,   946,   706,   708,  1161,
     260,  1501,   796,   789,    65,   554,   721,    62,    38,   182,
     814,   556,   722,    61,  1192,   243,   422,   423,    60,   218,
    1197,   185,    61,    63,   777,  1191,   266,   551,  1101,  1505,
     110,  1196,   531,   257,   269,   421,   434,  1590,   424,    62,
      38,   414,   540,   539,   541,    76,   313,   186,   184,   177,
      60,   368,   797,   854,   368,    63,   368,  1107,  1349,   183,
    1351,  1777,  1612,   685,    63,   231,   685,   608,  1381,  1108,
    1614,   368,   149,   154,   411,   179,   178,    76,    88,   205,
    1307,  1484,    47,  1664,  1378,   480,    76,    96,  1082,  -880,
     887,  1782,   568,   685,   269,  1681,  1807,    -2,   564,   430,
     443,   276,   368,   368,   114,  1298,   312,    97,   710,  1678,
      88,   832,   907,   163,    47,  1737,  1694,    61,  1825,   860,
     848,   217,   608,    47,  1808,   879,     4,   385,   314,  1308,
      65,  1261,  1711,   886,    65,   468,  1083,  1762,  1256,   182,
    1257,   218,   535,   429,  1778,  -138,  1763,   861,    61,  -138,
    1765,   185,    61,    -3,   428,   499,  1379,  1746,  1485,    63,
     833,   811,    94,   834,  1115,  -137,  1299,  1751,  1752,   849,
    1734,   432,   850,  1774,    62,  -155,   100,   186,   184,   177,
     368,    76,   481,  1382,   101,    60,   146,  1740,  1694,   183,
      63,  1764,   550,   552,    63,   492,   447,   450,  1694,  1694,
      98,   427,   205,   388,   566,   179,   178,   562,   945,   725,
    -138,   669,    76,  1788,  -138,   498,    76,   115,   231,    47,
      99,   573,  1517,  1518,   669,  1760,  1429,   231,   231,   725,
    -637,  1383,  -335,  1407,   163,   163,   163,   500,  1612,  1539,
     691,   513,   516,   217,  1694,    88,  1614,   481,    17,   567,
     695,  1126,  -452,    47,  1455,   715,   670,   231,   141,   690,
     146,   682,  1789,  -313,    98,  1830,   169,   144,   730,   670,
     460,   257,   819,   276,  1430,  -637,  -637,  -335,  -335,   170,
     171,   163,   626,  -452,    99,  -328,  -452,   145,   509,  1571,
     316,  -637,   166,  -328,   273,   859,  1694,    12,  1577,  1578,
     716,  1579,  1273,   368,  1391,  1276,  1393,   187,  -313,  -313,
     832,  1410,   536,   231,   785,  1390,   313,  1392,   172,   780,
     191,  -662,  1755,    20,  -313,   805,   257,   742,  1288,  1501,
    1447,  -452,   893,  1585,    23,   368,   733,   195,  1097,   773,
     448,   451,   722,   196,  -636,   460,   885,   539,   541,    91,
     454,   455,   742,  1098,    61,  1381,   539,  1113,  1114,   833,
    1293,  1294,   834,  -874,   456,  1096,  -662,  -662,   231,   102,
     116,   117,   541,   223,   457,  1795,   312,  1423,  1448,    35,
     429,  1586,  -662,   795,  1796,   458,   218,    20,   276,  -636,
    -636,   732,   368,  1585,   254,    92,    63,    93,   314,  1685,
    1686,  -400,  1167,    17,   316,  -636,  1086,  1354,   276,   225,
     226,  1493,   375,   166,   166,   166,    16,  -401,    76,    17,
     133,   134,   133,   134,   541,   118,   119,    65,  1340,  1797,
     231,   381,   816,    20,  1168,   891,  -400,   395,   731,    22,
    -400,  1641,  1355,   498,   185,    61,  1356,   800,    25,  1656,
     695,  1454,  -401,  1291,   218,  1814,  -401,   257,  1814,  1814,
     166,   795,   135,   890,  1460,   500,  -314,  1233,    42,   485,
     186,   184,    28,  -400,    28,   136,   137,   136,   137,  1357,
    -312,   640,   183,   641,   492,   144,   486,    63,   197,  -401,
    1117,   992,  1118,   894,   895,   859,   400,   892,   399,   231,
      42,   993,   368,  1815,   402,   929,  1816,  1829,   197,    76,
     404,  -314,  -314,   994,   487,   838,    97,   844,   846,   133,
     134,   498,   401,   564,    15,  -312,  -312,  -314,   559,  1426,
    1427,   231,   231,   198,   199,    98,   176,   144,  1119,  1497,
     231,  -312,    99,   500,   425,    28,  -156,    20,  1120,  1121,
    -139,  -139,   564,   198,   527,    99,   231,   868,   869,  1117,
     695,  1118,   894,   895,   695,  -328,   273,   418,   419,    12,
    1513,    28,   368,   560,   136,   137,  1519,   368,   935,   935,
     935,   935,   682,  1122,   916,  -131,   326,    17,   696,   953,
     368,    98,  1540,  1541,  1112,   163,   163,   163,   697,   903,
     368,  1461,    28,   368,   918,   859,    23,  1119,   231,   698,
     699,    99,   435,   492,    28,  1560,   881,  1120,  1121,    28,
    -131,  1567,   274,    31,  -131,  1003,   232,   233,   477,   917,
    1325,  1327,  1001,  1005,  -663,   397,   368,   313,   403,   453,
     398,  1556,  1025,  1572,   435,   797,   798,  1164,  1165,   919,
     721,    35,  1122,  1169,   435,   795,   722,  -131,   146,  1581,
    1582,  1041,   368,  1091,   368,   647,   499,   492,   320,   988,
    1004,  1089,   492,   796,   789,   492,   492,   785,  1006,  -663,
    -663,   461,  1627,  1628,  1092,  1630,   989,  1026,  1027,   608,
     558,   460,   565,  -657,   502,  -663,   475,   312,  1401,  1403,
     502,   539,   382,   133,   134,  1556,   492,   135,    -8,   932,
     435,  1007,   146,   492,   990,   498,  1154,    28,  1300,   314,
    1659,   250,   172,   492,   269,   251,   498,   276,  1302,  1126,
     479,  1094,   128,   231,   476,  1010,  1013,   500,   368,   960,
    1102,   273,    10,    11,    12,  -129,   252,    17,   500,   383,
     253,  1048,   133,   134,   489,   415,  1008,   568,   136,   384,
    1345,  1155,  1322,  1301,  -337,   982,  1127,    98,   722,   545,
     953,   903,   999,  1303,   166,   166,   166,  1556,   555,  -614,
    -129,    23,   265,  -614,  -129,  1403,   583,    99,  1019,   102,
     116,   117,   561,   575,   795,   231,  1304,   274,    31,  1720,
    1193,  1194,   499,  1195,    28,  1346,   988,   136,   137,  -337,
    -337,   502,   616,  1358,   846,   577,  1450,  -129,   605,  1022,
     619,   992,   620,   989,  1515,  -331,    35,   621,   161,    23,
     622,   993,  -614,   643,  -614,  -614,  -614,  1690,   960,   232,
     474,  1305,   492,   994,   860,   118,   119,  -614,  1182,  -614,
    1732,   990,  1406,   685,   498,  1556,   492,   276,  1359,  1769,
     460,  1792,   498,    65,  -614,  -614,   795,   368,   368,  1516,
     368,  1817,   795,   725,  1133,  1134,   500,  1662,  1490,   726,
    -614,    61,  1691,    96,   500,   231,    10,    11,   146,   667,
     668,   546,  -153,  1556,  1295,   547,  1321,    10,    11,    12,
     133,   134,   623,    97,  1770,  1766,  1793,  1184,  1176,  1156,
    1157,    98,   525,   526,   163,  1736,  1818,  1341,  1342,  1343,
    -154,   624,   163,    63,   133,   134,   498,   533,   534,  1512,
    1556,    99,   498,   326,   719,   231,    23,   558,   102,   116,
     117,   136,   137,   935,   781,    76,   744,  1235,   500,    28,
     449,   452,   274,    31,   500,   136,   137,   448,   451,  1204,
    1205,  1206,   460,  -337,   745,  1179,   448,   451,   769,  1558,
     525,   817,   782,   382,    10,    11,    28,   935,  -337,   136,
     137,    35,  -337,   795,   502,  1324,   502,   492,    97,   499,
      99,   382,    10,    11,   118,   119,   161,   735,   808,  -337,
      -7,   492,   643,   492,   821,   492,  1360,  1361,    11,    12,
     533,   818,  -337,  -337,   812,  -337,  -337,   640,  1811,   641,
     383,   830,   269,    10,    11,   831,   773,   847,   256,   136,
     384,  -873,   273,   418,   419,    12,  1411,  1412,   383,  1414,
    1094,    96,   856,   498,  -337,  -337,    23,   136,   384,   498,
    1462,    20,   276,   265,   795,   858,   935,   368,    17,    28,
    -337,    97,    30,    31,   875,   500,  1456,   888,  1362,  1010,
    1013,   500,    23,    17,   889,    28,   202,  -452,   136,   137,
     910,   492,   911,  1238,   767,   768,   203,   912,   274,    31,
     913,    35,  1333,   166,   795,    96,   920,   204,  -879,  1352,
    1353,   166,  1334,   499,  1573,  1583,  1584,  -452,  -452,  1384,
     797,  1625,   935,  1335,   498,    97,  1263,    35,  1182,   492,
    1182,   664,   665,   666,   667,   668,  1182,   939,  1182,   921,
      96,   502,   941,    65,  1418,    65,   500,    98,   636,  1643,
    1000,   218,   942,    65,   502,  -195,  1644,   525,  1713,  1002,
      97,    61,   945,    61,   498,  1020,   795,    99,   795,   146,
    -195,    61,  -195,   498,   276,  1402,   935,   -57,   533,  1714,
    1022,   -57,   525,  1718,  1310,  1311,   500,  1184,  1176,  1184,
    1176,   545,   -57,  1310,  1311,   500,  1043,  1184,  1176,  1052,
    1350,  1051,  1053,    63,  1084,    63,  1088,  1085,   102,   116,
     117,   368,  1364,    63,  1095,    10,    11,  1090,    22,  1099,
     728,   729,   163,   163,   163,    76,   498,    76,   498,  1100,
    1103,   163,   163,   163,  -331,    76,  1110,   795,   860,   417,
     418,   419,    12,    20,  1111,  1179,  1131,  1179,   500,  1152,
     500,  1159,  1363,  1373,  1127,  1179,  1160,  1166,  1208,   449,
     809,  1402,   163,   269,   118,   119,   120,    28,  1163,  1210,
     136,   137,  1211,   382,   133,   134,  1212,   803,   804,    23,
    1213,   795,  1216,  1214,  1333,  1215,   263,   382,    10,    11,
    1218,  -152,  1217,  1464,  1334,   274,   264,   498,  1819,  1466,
    1467,  1221,    17,  1464,  1469,  1335,  -452,  1467,   492,  1220,
     492,   502,   492,   795,  1223,  1224,  1240,  1010,  1013,   500,
     383,   449,   452,   266,    35,  1225,   795,  1226,  1243,   136,
     384,  1227,  1182,  1228,   383,   493,  -452,  -452,  1162,  1415,
    -452,   498,  1229,   136,   384,  1230,   860,    65,  1244,   538,
     225,   226,  1245,   572,  1242,   148,   148,    16,   164,  1253,
    1255,  1442,  1443,   500,  1254,    61,  1264,   572,  1265,  1266,
     102,   103,   104,   498,   235,   236,   237,  1267,  1271,  1364,
      22,  1272,  1156,  1157,   221,  1280,   498,   230,  1279,    25,
    1282,  1184,  1176,   247,  1285,   500,  1286,  1306,   258,    20,
    1320,   166,   166,   166,  1385,   238,   671,    63,   500,  1339,
     166,   166,   166,  1670,   935,  1675,  1389,  1672,  1395,  1363,
     573,  1396,  1397,    28,  1398,  1182,   105,   106,   239,    76,
     261,    10,   262,    12,   449,   940,   492,  1404,  1548,  1408,
      65,   166,   417,    10,    11,    12,   672,   673,   636,  1179,
     674,   675,   676,   677,  1409,  1417,  1432,  1419,    61,  1413,
    1420,  1575,  1576,   102,   116,   117,  1421,   770,   771,   772,
      23,   437,   240,   241,   242,   795,   437,   263,  1424,   446,
     446,   164,    23,   795,  1184,  1176,    30,   264,  1425,   717,
    1431,   608,  1435,  1446,  1480,  1481,  1482,  1483,   274,   264,
      63,  1471,  1465,  1470,  -703,  1492,   221,   636,  1477,   636,
     265,  1035,   478,  1478,  1748,    35,  1479,  1491,  1745,   118,
     119,  1611,    76,  1619,   512,   512,   521,    35,  1494,   795,
    1495,   122,   123,   124,  1502,   498,  1503,  1640,  1504,  1514,
     230,    61,  1179,   498,   486,  1520,  1484,   448,   451,  1562,
     542,   405,   406,   407,  1544,  1442,  1443,   500,  1657,  1658,
     147,    10,    11,    12,  1545,   500,  1546,  1618,  1610,   273,
     133,   134,    12,  1547,  1046,  1559,  1561,  1619,  1617,   230,
    1629,  1642,  1651,    63,    28,   218,  1652,   125,   126,   498,
    1653,  1665,  1667,  1676,   569,    61,  1677,  1679,  1803,  1680,
      23,  1803,  -931,   535,    28,    76,   695,   409,   410,    23,
    1702,   500,  1697,    28,  1707,  1710,    30,    31,  1698,  1704,
    1822,  1618,  1610,  1803,   829,   274,    31,   398,  1705,   231,
     835,  1712,  1617,  1731,  1721,   230,   258,    63,  1723,   161,
     836,  1741,  1742,  1749,  1757,    35,  1669,  1148,  1669,  1109,
    1758,   837,   699,  1783,    35,  1615,  1786,  1787,  1727,    76,
    1794,  1035,  1790,  1743,  1619,  1727,  1798,  1802,   446,  1799,
     122,   123,   124,   449,   809,   625,  1805,   102,   441,   442,
    1768,   492,    61,  1812,   368,   122,   894,   895,  1809,   896,
     230,   258,  1813,   155,  1820,  1821,  1823,  1611,  1824,  1619,
    1826,  1832,  1655,   764,   765,   766,   767,   768,  1618,  1610,
     102,   103,   104,  1831,   102,   103,   104,    61,   312,  1617,
       2,   897,   470,  1727,    63,   312,   125,   126,     7,   168,
     133,   134,  1791,   118,   106,   568,  1709,   231,    28,  1289,
     314,   125,   126,  1618,  1610,  1087,    76,   314,   469,   815,
     467,   221,   230,   930,  1617,  1703,  1747,  1750,  1436,    63,
    1374,   163,   379,    28,   868,   869,   105,   106,   107,   437,
     105,   106,   437,  1207,   433,  1693,  1281,   615,   164,   164,
     164,    76,    28,   312,   569,   136,   137,  1130,  1452,  1054,
    1725,  1344,   133,   134,  1376,  1473,   960,  1725,  1537,   609,
    1457,  1458,   163,   163,   163,   314,  1055,   980,   438,   610,
     987,   528,   981,   440,   692,   983,   984,   413,  1278,   221,
      20,   230,   258,  1589,  1557,   133,   134,  1472,   405,   406,
     407,  1615,  1474,   449,   940,   864,  1754,   695,   864,   943,
     867,   867,   521,  1151,    28,  1767,   478,   136,   137,   548,
     103,   104,   883,  1040,   542,  1725,  1761,   478,     0,  1806,
    1511,   696,   155,  1042,     0,     0,     0,    10,    11,  1785,
       0,   697,   568,    10,    11,   408,     0,    28,   542,   478,
     136,   137,   698,   699,   409,   410,     0,     0,     0,  1801,
       0,     0,     0,     0,   609,    20,   383,     0,     0,   960,
       0,    20,   225,   226,   610,   105,   549,     0,     0,    16,
       0,  1523,  1524,     0,  1533,  1534,     0,  1536,   695,    28,
    1828,     0,   136,   137,     0,    28,    20,     0,   136,   137,
     542,   570,    22,  1287,     0,     0,  1333,     0,   449,   452,
     166,    25,  1506,     0,     0,     0,  1334,   449,  1319,     0,
       0,     0,  1507,   164,   164,   446,   703,  1335,     0,   711,
     714,     0,     0,  1508,   699,     0,     0,     0,   446,  1569,
    1570,     0,     0,     0,     0,     0,     0,   161,   102,   116,
     117,   166,   166,   166,     0,     0,   957,   958,     0,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   417,    10,    11,
      12,     0,     0,   273,   133,   134,    12,     0,  1009,  1009,
    1009,     0,  1633,  1634,  1635,     0,     0,   446,     0,   446,
       0,  1036,     0,     0,   118,   119,     0,  1386,  1387,  1388,
       0,     0,    20,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,    23,   263,   230,    10,    11,     0,   695,
       0,    15,     0,   274,   264,     0,    28,     0,     0,   274,
      31,   449,   809,   122,   894,   895,     0,     0,     0,  1683,
    1684,     0,     0,  1268,    20,     0,     0,   840,     0,   703,
     711,   714,    35,  1269,   147,    10,    11,    12,    35,     0,
      15,     0,     0,     0,  1270,   699,   806,     0,    28,   807,
       0,   136,   137,     0,     0,   449,   809,   230,   247,     0,
       0,   810,   208,    20,     0,  1333,    28,  1234,     0,   125,
     126,     0,   133,   134,    23,  1334,     0,   256,     0,     0,
     695,  1246,     0,  1247,     0,  1248,  1335,    28,     0,     0,
      30,    31,     0,     0,     0,     0,     0,  1132,  1132,  1138,
      20,   122,   894,   895,   835,     0,     0,  1138,   102,   116,
     117,     0,   438,     0,   836,   440,     0,   695,     0,    35,
       0,   164,     0,     0,    28,   837,   699,   136,   137,   570,
     864,   864,   867,   867,   521,   224,   225,   226,   883,     0,
       0,   696,     0,    16,     0,     0,     0,   147,    10,    11,
      12,   697,   478,   256,     0,     0,  1784,   125,   126,     0,
      20,  1284,   698,   699,  1706,   119,    22,   662,   663,   664,
     665,   666,   667,   668,     0,    25,    20,     0,     0,     0,
     224,   225,   226,     0,     0,   208,     0,    23,    16,   147,
      10,    11,    12,   695,     0,    15,    84,   230,     0,  1297,
      28,     0,  1496,    30,    31,    20,   111,     0,   102,   116,
     117,    22,     0,     0,     0,     0,   139,   835,    20,     0,
      25,     0,     0,   152,   152,     0,   152,   836,    84,    23,
       0,     0,    35,     0,   208,   695,   801,    84,   837,   699,
       0,     0,    28,   133,   134,    30,    31,     0,   568,     0,
     212,     0,    84,     0,     0,     0,     0,     0,     0,  1135,
       0,   248,    10,    11,  1708,   119,   111,   256,     0,  1136,
       0,    20,  1250,     0,    35,  1250,     0,   279,     0,   111,
    1137,   699,     0,     0,   373,     0,  1258,   373,   695,   373,
      20,     0,  1036,  1036,  1036,    28,     0,     0,   136,   137,
       0,     0,     0,   111,     0,     0,     0,   695,     0,     0,
     133,   134,   696,     0,    28,     0,     0,   136,   137,     0,
       0,     0,   697,     0,     0,     0,   711,     0,     0,     0,
     139,  1506,    84,   698,   699,   373,   373,     0,   152,   152,
       0,  1507,     0,   439,   152,     0,     0,   152,   152,   152,
       0,     0,  1508,   699,     0,   695,     0,     0,   247,     0,
       0,     0,    28,    84,     0,   136,   137,    84,     0,     0,
       0,     0,     0,   212,    84,     0,     0,     0,  1437,   696,
    1438,  1292,  1439,     0,     0,   147,    10,    11,    12,   697,
       0,   568,   212,   212,   212,  1309,  1309,  1138,  1138,  1138,
     698,   699,     0,     0,  1318,     0,  1138,  1138,  1138,     0,
       0,     0,     0,     0,    20,     0,  1148,     0,  1336,  1336,
    1337,     0,   212,     0,     0,    23,     0,     0,    10,    11,
     208,   695,     0,   568,     0,   155,     0,   164,    28,   553,
       0,    30,    31,     0,     0,     0,   221,     0,     0,   111,
       0,     0,     0,     0,     0,   835,    20,     0,   449,  1319,
       0,     0,   152,     0,     0,   836,   711,   806,   807,     0,
      35,     0,     0,   695,     0,   810,   837,   699,     0,     0,
      28,     0,     0,   136,   137,     0,   147,   133,   134,    12,
       0,     0,    15,     0,     0,     0,     0,  1506,   208,     0,
     208,   208,  1405,     0,   111,   611,  1499,  1507,   147,    10,
      11,    12,     0,     0,   863,    20,     0,     0,  1508,   699,
       0,     0,     0,   863,     0,     0,    23,   208,     0,     0,
    1036,  1036,  1036,     0,     0,   208,     0,    20,     0,    28,
    1249,     0,    30,    31,     0,     0,     0,     0,    23,   111,
       0,     0,     0,   693,   695,   611,    33,     0,   611,   712,
       0,    28,     0,     0,    30,    31,    34,  1249,   373,    84,
       0,    35,  1309,  1309,  1138,  1138,  1138,    36,   835,  1318,
     762,   763,   764,   765,   766,   767,   768,     0,   836,     0,
       0,     0,     0,    35,     0,  1449,  1449,  1337,     0,   837,
     699,     0,    10,    11,     0,     0,   139,    15,     0,     0,
       0,     0,     0,     0,   478,   478,   111,     0,   212,   111,
       0,     0,     0,     0,     0,   373,     0,   152,     0,   271,
      20,     0,     0,     0,     0,     0,     0,   152,     0,     0,
     152,   478,   718,    10,    11,    12,   478,   695,     0,     0,
       0,     0,   152,     0,    28,     0,   271,   136,   137,     0,
      84,     0,     0,  1249,     0,     0,     0,     0,     0,  1249,
       0,  1506,     0,     0,     0,     0,     0,     0,     0,   326,
     719,  1507,    23,     0,   271,     0,   212,   842,   212,   212,
     712,     0,  1508,   699,   842,    28,     0,   271,   136,   720,
       0,     0,   212,   212,  1509,  1509,   212,  1510,   212,   212,
     212,   873,     0,     0,     0,   212,     0,     0,     0,     0,
     212,     0,     0,   212,     0,   478,   478,     0,   478,   478,
       0,   478,   438,   440,   208,   373,     0,     0,     0,     0,
       0,   570,   718,    10,    11,    12,   660,   661,   662,   663,
     664,   665,   666,   667,   668,     0,     0,   271,     0,   152,
       0,     0,   273,    10,    11,    12,     0,     0,  1564,  1564,
    1564,   102,   116,   117,     0,   235,   236,   237,     0,   326,
     719,  1249,    23,   478,   478,     0,     0,     0,     0,  1249,
       0,    20,     0,   271,     0,    28,     0,   208,   136,   137,
      20,     0,    23,   927,     0,   373,   238,     0,   695,     0,
       0,   111,   111,   111,   111,    28,     0,     0,   274,    31,
       0,   224,   225,   226,   271,     0,     0,   118,   119,    16,
       0,     0,  1312,   373,     0,     0,   478,   478,   478,     0,
    1249,     0,  1313,     0,     0,     0,    20,    35,     0,  1249,
       0,    80,    22,  1314,   699,   147,    10,    11,    12,     0,
       0,    25,     0,     0,     0,     0,   863,     0,     0,   863,
     111,     0,   611,   273,   133,   134,    12,  1049,     0,    15,
     221,   230,     0,    80,   693,   863,   611,   611,   712,     0,
       0,     0,    80,   478,   478,    23,     0,     0,     0,  1037,
       0,     0,    20,  1039,     0,   210,     0,   222,    28,   806,
     807,    30,    31,    23,     0,   201,   810,     0,   271,   695,
       0,     0,   212,     0,     0,   202,    28,     0,     0,   274,
      31,     0,     0,     0,     0,   203,   521,     0,   271,     0,
      35,     0,     0,  1268,     0,     0,   204,     0,     0,     0,
       0,     0,     0,  1269,   273,    10,    11,    12,    35,     0,
      15,     0,     0,     0,  1270,   699,     0,     0,     0,   139,
       0,   373,     0,     0,     0,     0,   139,   867,   867,   867,
       0,     0,     0,    20,   271,   212,   248,   431,     0,   230,
       0,     0,     0,   436,    23,     0,   261,   133,   134,    12,
     695,     0,     0,     0,     0,     0,     0,    28,     0,     0,
     274,    31,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,    80,     0,  1312,   212,   212,  1140,   210,   222,
     478,     0,     0,  1143,  1313,  1140,    23,     0,     0,    35,
    1249,  1249,     0,   263,     0,  1314,   699,     0,     0,     0,
       0,     0,    30,   264,   212,     0,     0,   873,   212,   212,
     873,   873,   873,     0,     0,     0,   212,     0,     0,     0,
       0,     0,     0,   212,     0,     0,   265,   210,     0,     0,
       0,    35,     0,    10,    11,     0,     0,    14,    15,   147,
     133,   134,    12,     0,    16,  1249,    84,     0,   271,   111,
     373,   373,     0,   373,     0,   111,     0,     0,    18,     0,
      19,    20,   234,     0,   611,   611,   611,    22,    20,     0,
       0,     0,     0,     0,     0,   611,    25,     0,     0,    23,
       0,     0,     0,     0,   863,    28,     0,     0,   136,   137,
     863,     0,    28,     0,     0,    30,    31,   174,     0,   147,
      10,    11,    12,   175,    14,    15,   271,     0,     0,   157,
       0,    16,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,   986,    35,    18,   111,    19,    20,    21,
     159,     0,     0,     0,    22,  1369,     0,     0,     0,    23,
       0,     0,   234,    25,     0,     0,   176,     0,     0,   611,
     611,     0,    28,   611,     0,    30,    31,     0,   234,     0,
     111,     0,     0,     0,   611,     0,   111,   514,   517,    33,
    1037,  1037,  1037,     0,   734,     0,   611,     0,  1143,    34,
       0,     0,     0,     0,    35,     0,     0,     0,   271,     0,
      36,     0,     0,     0,     0,    37,   686,     0,   273,   418,
     419,    12,     0,   687,     0,     0,     0,   271,     0,     0,
       0,     0,     0,     0,     0,   234,     0,     0,     0,     0,
       0,     0,     0,   210,   234,     0,     0,     0,     0,     0,
       0,     0,   436,     0,     0,     0,     0,   111,    23,   111,
     373,   234,     0,     0,     0,   688,     0,  1360,  1361,    11,
      12,    28,   234,     0,   274,    31,     0,     0,     0,     0,
       0,   863,     0,     0,     0,    80,     0,     0,     0,     0,
     863,     0,   212,   212,   212,   212,   212,  1140,   873,     0,
       0,     0,   212,   689,  1140,  1140,  1140,    23,   863,   863,
    1143,   210,   841,   210,   210,   111,   873,   873,   873,   852,
      28,     0,  1369,    30,    31,     0,     0,   436,     0,  1362,
       0,     0,   139,     0,     0,   152,    84,   202,    84,     0,
     210,     0,     0,  1371,    84,     0,    84,   203,   210,     0,
       0,     0,    35,     0,     0,     0,     0,   271,   204,   111,
       0,   111,     0,     0,     0,     0,     0,     0,     0,   111,
     760,   761,   762,   763,   764,   765,   766,   767,   768,   261,
      10,    11,    12,     0,   436,     0,     0,     0,   271,    10,
      11,     0,   175,    14,    15,     0,   611,   611,   491,   611,
      16,     0,     0,     0,   373,     0,   417,    10,   571,    12,
     611,     0,     0,     0,    18,     0,    19,    20,   611,    23,
       0,   863,     0,    22,     0,     0,   263,     0,   611,   611,
     712,     0,    25,     0,   695,    30,   264,  1531,     0,     0,
       0,    28,   271,     0,   136,   137,    23,     0,     0,     0,
       0,   234,     0,   263,     0,     0,     0,     0,   696,   265,
     234,     0,   274,   264,    35,     0,     0,     0,   697,   212,
     212,   212,   873,   873,  1444,     0,     0,   212,   212,   698,
     699,   863,   863,     0,     0,     0,   572,   417,   133,   134,
      12,    35,   234,   873,   873,   873,   873,   873,   865,     0,
       0,   866,     0,   514,   517,     0,   111,     0,     0,     0,
    1371,     0,     0,     0,     0,   884,     0,     0,     0,   111,
       0,     0,     0,     0,     0,     0,   234,    23,     0,     0,
       0,     0,  1468,     0,   263,   234,   863,     0,     0,     0,
      84,    87,     0,   274,   264,     0,     0,   210,     0,     0,
       0,   113,   271,     0,   271,     0,   234,     0,     0,     0,
     132,   140,     0,     0,     0,     0,     0,   572,   153,   153,
       0,   153,    35,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    87,   234,     0,     0,     0,     0,     0,   208,
       0,   208,     0,     0,     0,   153,     0,    87,     0,     0,
       0,     0,   873,   873,     0,   873,   249,   111,     0,   873,
     210,   259,     0,     0,     0,     0,   417,    10,    11,    12,
       0,     0,     0,     0,   259,   212,     0,     0,     0,   374,
     152,     0,   374,    84,   374,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     417,   133,   134,    12,     0,   271,    23,     0,   271,     0,
       0,     0,     0,   263,     0,     0,   873,   873,  1444,   873,
     873,     0,   274,   264,     0,     0,   111,    87,     0,   436,
     374,   374,     0,   153,   153,     0,     0,     0,     0,   153,
      23,     0,   153,   153,   153,     0,   265,   263,   436,     0,
     208,    35,     0,     0,     0,     0,   274,   264,    87,     0,
       0,     0,    87,     0,     0,     0,     0,     0,   153,    87,
       0,  1189,   111,     0,   873,     0,  1170,     0,     9,    10,
    1171,    12,   175,    14,    15,    35,     0,   153,   153,   153,
      16,     0,     0,     0,     0,     0,     0,   147,    10,    11,
      12,   224,   225,   226,    18,     0,    19,    20,    21,    16,
       0,     0,     0,    22,  -557,     0,     0,   153,    23,     0,
       0,     0,    25,  1172,     0,   176,    20,   212,   842,   212,
       0,    28,    22,     0,    30,    31,     0,    23,  1173,     0,
    1174,    25,     0,   695,     0,     0,     0,     0,    33,     0,
      28,     0,     0,    30,    31,     0,     0,   153,    34,     0,
       0,     0,     0,    35,     0,     0,     0,   835,     0,  1175,
     514,   517,     0,     0,     0,     0,     0,   836,     0,     0,
       0,     0,    35,     0,  1140,     0,  -557,     0,   845,   699,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   259,
     613,     0,     0,   865,   866,   514,   517,     0,     0,     0,
       0,   884,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,    14,    15,     0,  1140,  1140,  1140,   234,    16,
       0,   234,     0,     0,     0,     0,   271,     0,   212,     0,
       0,     0,     0,    18,   259,    19,    20,   234,   694,     0,
     613,     0,    22,   613,   713,     0,     0,     0,     0,   724,
       0,    25,     0,   374,    87,     0,     0,     0,     0,     0,
      28,     0,     0,   136,   137,   678,     0,     0,     0,   724,
       0,     0,     0,   147,    10,    11,    12,   224,   225,   226,
       0,     0,     0,     0,     0,    16,     0,   436,     0,     0,
       0,   786,     0,     0,     0,     0,     0,     0,   679,   271,
       0,   259,    20,   153,   259,     0,     0,     0,    22,     0,
     374,     0,   153,    23,     0,     0,     0,    25,     0,   695,
       0,     0,   153,   271,     0,   153,    28,     0,     0,    30,
      31,  1189,     0,  1189,     0,     0,     0,   153,  1370,  1377,
       0,  1189,     0,   835,     0,    87,     0,     0,     0,     0,
       0,     0,     0,   836,     0,     0,     0,     0,    35,     0,
       0,     0,     0,   234,   837,   699,     0,     0,     0,  1011,
    1014,   153,   843,   153,   153,   713,     0,     0,     0,   843,
       0,     0,     0,   147,   133,   134,    12,   153,   153,   256,
     234,   153,     0,   153,   153,   153,   613,     0,     0,     0,
     153,     0,     0,     0,     0,   153,     0,     0,   153,     0,
       0,     0,    20,     0,     0,   417,    10,    11,    12,     0,
     374,     0,     0,    23,     0,     0,     0,     0,     0,   905,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
      31,     0,     0,     0,   153,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,    23,     0,     0,   865,   866,
     514,   517,   263,    34,   436,     0,     0,   884,    35,   514,
     517,   274,   264,   436,    36,     0,     0,     0,     0,     0,
       0,   865,   866,   884,     0,     0,   234,     0,     0,     0,
     374,     0,   234,     0,     0,   572,   259,   259,   259,   259,
      35,     0,     0,     0,     0,  1370,     0,     0,  1011,  1014,
       0,    10,    11,     0,   175,    14,    15,     0,   374,     0,
     491,     0,    16,     0,     0,     0,     0,     0,     0,     0,
     147,   133,   134,    12,     0,  1189,    18,     0,    19,    20,
       0,     0,     0,     0,     0,    22,     0,     0,     0,   417,
     133,  1535,    12,     0,    25,   259,   695,   613,     0,    20,
       0,     0,     0,    28,     0,     0,   136,   137,     0,     0,
      23,   613,   613,   713,     0,     0,     0,     0,     0,     0,
    1506,     0,     0,    28,  1038,     0,    30,    31,     0,    23,
    1507,     0,   355,     0,     0,   355,   263,   355,     0,   724,
      33,  1508,   699,     0,   234,   274,   264,   153,     0,     0,
      34,     0,   234,     0,     0,    35,     0,     0,     0,     0,
    1532,    36,     0,     0,     0,  1532,     0,     0,  1189,   572,
       0,     0,     0,     0,    35,   865,   866,   514,   517,     0,
       0,     0,   884,   355,   355,   147,   133,   134,    12,     0,
       0,    15,     0,     0,   786,     0,   374,     0,   514,   517,
       0,     0,   132,   234,     0,     0,     0,     0,     0,     0,
     153,   249,   234,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,  1251,     0,    23,  1252,     0,     0,     0,
     234,   234,     0,     0,     0,     0,   905,  1259,    28,     0,
       0,    30,    31,  1011,  1014,     0,     0,     0,     0,     0,
     153,   153,   843,     0,     0,   157,     0,     0,     0,     0,
    1150,     0,     0,     0,     0,   158,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,   159,     0,     0,   153,
       0,     0,   613,   153,   153,   613,   613,   613,     0,     0,
       0,   153,     0,     0,     0,     0,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,   865,   866,     0,
     884,     0,   210,  1673,   210,     0,     0,     0,     0,     0,
       0,    87,     0,     0,   259,   374,   374,     0,   374,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,   613,
     613,   613,     0,   234,     0,     0,  1251,  1252,  1011,  1014,
     613,     0,     0,     0,     0,  1259,     0,  1011,  1014,     0,
       0,   617,   618,     0,     0,     0,     0,     0,     0,     0,
       0,   514,   517,     0,     0,   355,     0,   627,     0,     0,
     628,   629,     0,     0,     0,     0,   639,     0,     0,     0,
     644,     0,     0,   272,     0,     0,     0,     0,   684,     0,
       0,   259,     0,   234,   234,     0,     0,     0,   147,    10,
      11,    12,   175,    14,    15,     0,   355,     0,     0,     0,
      16,     0,     0,   210,   613,   613,     0,     0,   613,     0,
       0,     0,     0,     0,    18,   259,    19,    20,    21,   613,
       0,   259,     0,    22,     0,  1038,  1038,  1038,    23,     0,
       0,   613,    25,   724,     0,   176,     0,     0,   234,     0,
       0,    28,     0,     0,    30,    31,     0,     0,     0,     0,
       0,     0,     0,   355,   462,     0,     0,     0,    33,     0,
       0,  1011,  1014,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,    37,     0,     0,   511,     0,     0,
       0,     0,   259,     0,   259,   374,     0,     0,     0,     0,
     530,     0,     0,  1251,  1252,  1011,  1014,     0,     0,     0,
    1259,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,   153,   153,   153,
     153,   153,   843,   613,     0,     0,     0,   153,     0,  1150,
    1150,  1150,     0,     0,     0,   724,     0,     0,     0,     0,
     259,   613,   613,   613,  1699,     0,     0,     0,     0,     0,
     514,   517,     0,   355,   905,     0,     0,   140,     0,     0,
     153,    87,     0,    87,     0,     0,     0,     0,  1372,    87,
       0,    87,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   259,     0,   259,     0,     0,     0,
       0,     0,     0,     0,   259,     0,  1700,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   758,   759,
     760,   761,   762,   763,   764,   765,   766,   767,   768,     0,
       0,   613,   613,   355,   613,  1251,  1252,     0,  1259,   374,
       0,     0,     0,     0,     0,   613,     0,     0,     0,   627,
     628,     0,     0,   613,     0,     0,     0,     0,     0,     0,
       0,   355,     0,   613,   613,   713,   355,   355,     0,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,     0,  1329,     0,
       0,    10,    11,     0,   905,    14,    15,     0,     0,  1011,
    1014,     0,    16,     0,   153,   153,   153,   613,   613,   713,
      10,    11,   153,   153,    14,   256,    18,     0,    19,    20,
       0,    16,     0,     0,     0,    22,     0,     0,   613,   613,
     613,   613,   613,     0,    25,    18,   905,    19,    20,     0,
       0,   259,    56,    28,    22,  1372,   136,   137,     0,     0,
       0,     0,     0,    25,   259,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,   136,   137,     0,   392,    56,
      56,     0,   160,     0,    56,    87,     0,     0,     0,     0,
       0,     0,     0,    56,   658,     0,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,    56,     0,    56,   355,
       0,   147,    10,    11,    12,   214,    14,   215,     0,     0,
     876,     0,     0,    16,     0,   882,     0,     0,     0,     0,
     267,     0,     0,   275,     0,     0,     0,    18,     0,    19,
      20,     0,     0,     0,     0,     0,    22,   613,   613,     0,
     613,    23,   259,     0,   613,    25,   908,     0,     0,     0,
       0,     0,   495,   914,    28,     0,     0,    30,    31,     0,
     153,   216,     0,     0,     0,   153,     0,     0,    87,     0,
       0,    33,     0,     0,     0,   420,   420,   537,    56,     0,
       0,    34,     0,     0,    56,    56,    35,     0,   267,   275,
      56,     0,    36,   160,   160,   160,   924,   925,     0,   926,
     459,   613,   613,   713,   613,   613,     0,     0,     0,    56,
       0,   259,     0,    56,   147,    10,    11,    12,     0,    56,
      56,     0,    10,    11,     0,   214,    14,   215,   355,   355,
       0,   355,     0,    16,     0,     0,     0,     0,    56,    56,
     160,     0,     0,    20,     0,     0,     0,    18,   267,    19,
      20,     0,     0,     0,    23,     0,    22,   259,     0,   613,
       0,     0,     0,     0,     0,    25,     0,    28,    56,     0,
      30,    31,     0,     0,    28,     0,     0,   136,   137,     0,
       0,     0,     0,     0,   518,     0,     0,     0,  1023,  1024,
       0,     0,     0,     0,   519,     0,     0,  1023,     0,    35,
     638,  1661,     0,     0,     0,   520,     0,     0,    56,     0,
       0,     0,   153,   843,   153,   267,  1241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1170,     0,     9,    10,
    1171,    12,   175,    14,    15,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,   627,   628,
       0,     0,     0,     0,    18,     0,    19,    20,    21,     0,
       0,     0,     0,    22,  -558,     0,     0,     0,    23,  1150,
       0,     0,    25,  1172,     0,   176,     0,     0,     0,     0,
     794,    28,   635,     0,    30,    31,     0,     0,  1173,     0,
    1174,     0,     0,     0,     0,     0,     0,     0,    33,   420,
     147,    10,    11,    12,     0,     0,     0,     0,    34,   267,
    1150,  1150,  1150,    35,     0,    56,     0,     0,   355,  1175,
       0,   355,     0,   153,     0,     0,  1142,     0,     0,   267,
       0,   147,    10,    11,    12,     0,  -558,    15,   657,   658,
      23,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,     0,   420,    28,     0,     0,    30,    31,   794,     0,
      20,  1158,   627,   628,    56,     0,     0,     0,     0,     0,
     202,    23,     0,    56,     0,   267,     0,     0,     0,     0,
     203,     0,   459,    56,    28,    35,    56,    30,    31,     0,
       0,   204,   459,   459,   459,     0,     0,     0,    56,     0,
       0,   202,     0,  1198,     0,  1200,    56,     0,     0,     0,
       0,   203,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,  1525,  1526,
      11,    12,    56,    56,    56,    56,     0,     0,     0,     0,
      56,     0,   355,     0,     0,     0,     0,     0,    56,    56,
       0,     0,    56,     0,   160,   160,   160,   459,     0,     0,
    1416,    56,   355,     0,     0,     0,    56,     0,    23,    56,
       0,     0,     0,     0,   933,   934,   936,   937,   938,  1236,
    1237,    28,  1239,     0,    30,    31,     0,   638,     0,     0,
    1527,     0,     0,     0,     0,     0,     0,     0,   202,     0,
     956,     0,     0,     0,     0,    56,     0,     0,   203,     0,
       0,     0,  1260,    35,   654,   655,   656,   657,   658,   204,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
      82,     0,     0,   985,     0,   147,    10,    11,    12,   224,
     225,   226,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,  1015,     0,     0,     0,     0,    82,    82,  1028,
      82,  1029,    82,  1015,    20,     0,     0,   635,   635,   635,
      22,    82,     0,     0,     0,    23,     0,     0,     0,    25,
       0,   695,   635,     0,    82,     0,    82,     0,    28,     0,
       0,    30,    31,  1170,     0,     9,    10,  1171,    12,   175,
      14,    15,     0,     0,     0,   202,     0,    16,     0,     0,
       0,   277,     0,     0,     0,   203,     0,     0,     0,     0,
      35,    18,     0,    19,    20,    21,  1674,     0,  1317,   267,
      22,  -560,     0,     0,     0,    23,     0,     0,     0,    25,
    1172,   635,   176,   635,     0,   635,     0,     0,    28,     0,
       0,    30,    31,     0,     0,  1173,     0,  1174,     0,     0,
     147,    10,    11,    12,     0,    33,    82,     0,    56,     0,
       0,     0,    82,    82,     0,    34,     0,   277,    82,     0,
      35,    82,    82,    82,     0,     0,  1175,     0,     0,    20,
       0,  1015,     0,     0,     0,     0,     0,    82,     0,  1015,
      23,    82,     0,  -560,     0,     0,     0,    82,    82,     0,
       0,     0,     0,    28,     0,   420,    30,    31,     0,     0,
       0,     0,   420,     0,     0,     0,    82,    82,    82,     0,
     202,    56,    10,    11,     0,     0,    14,   256,     0,     0,
     203,  1422,     0,    16,     0,    35,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,    82,    18,     0,    19,
      20,     0,     0,   495,     0,     0,    22,     0,     0,   495,
       0,    56,    56,   160,     0,    25,     0,   695,   267,   275,
       0,  1147,     0,     0,    28,     0,     0,   136,   137,     0,
       0,     0,     0,     0,     0,   635,    82,     0,     0,     0,
      56,   696,  1445,   459,    56,    56,   459,   459,   459,     0,
       0,   697,    56,     0,     0,     0,     0,     0,     0,    56,
       0,     0,   698,   699,     0,     0,     0,     0,   639,     0,
       0,     0,  1453,     0,     0,     0,     0,     0,     0,     0,
    1231,     0,    56,     0,     0,  1459,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,    10,    11,    12,
     175,    14,    15,     0,     0,     0,   491,     0,    16,     0,
       0,     0,  1475,     0,   956,     0,  1476,     0,     0,     0,
     495,     0,    18,     0,    19,    20,  1015,     0,     0,     0,
       0,    22,     0,     0,     0,     0,    23,     0,   723,     0,
      25,     0,   695,    82,     0,     0,     0,     0,     0,    28,
       0,  1498,    30,    31,     0,     0,     0,     0,   723,     0,
       0,     0,     0,     0,     0,     0,  1135,     0,     0,     0,
       0,     0,     0,   627,   628,     0,  1136,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,  1137,   699,     0,
       0,   794,    82,  1290,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,  1542,  1543,   635,   635,   635,     0,
       0,    82,   459,   267,    82,     0,  1525,   133,   134,    12,
       0,   167,     0,     0,     0,     0,    82,     0,     0,     0,
       0,  1015,     0,     0,    82,     0,     0,     0,     0,     0,
    1015,  1565,  1566,     0,     0,   213,     0,  1568,     0,  1330,
       0,     0,     0,     0,     0,     0,    23,     0,     0,     0,
      82,    82,    82,    82,     0,     0,     0,     0,    82,    28,
       0,     0,    30,    31,     0,     0,    82,    82,  1527,     0,
      82,     0,    82,    82,    82,     0,    33,     0,     0,    82,
       0,     0,     0,   495,    82,   495,    34,    82,     0,     0,
       0,    35,     0,  1394,     0,     0,     0,    36,    56,    56,
      56,   160,   160,   160,   459,     0,   267,     0,    56,   267,
    1147,  1147,  1147,     0,     0,     0,   275,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   167,   167,     0,     0,     0,     0,     0,
       0,   160,    56,     0,    56,     0,  1682,     0,     0,    56,
      56,     0,    56,     0,  1015,     0,     0,  1170,   213,     9,
      10,  1171,    12,   175,    14,    15,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,   213,   213,   523,
       0,     0,     0,     0,     0,    18,     0,    19,    20,    21,
       0,     0,     0,     0,    22,  -559,     0,     0,  1015,    23,
       0,     0,     0,    25,  1172,     0,   176,   213,     0,     0,
       0,     0,    28,   133,   134,    30,    31,   225,   226,  1173,
       0,  1174,     0,     0,    16,     0,     0,     0,     0,    33,
     495,     0,     0,     0,   459,   459,   459,     0,     0,    34,
       0,    20,     0,   495,    35,     0,     0,    22,   723,     0,
    1175,     0,     0,     0,     0,     0,    25,     0,   695,     0,
       0,     0,     0,     0,     0,    28,     0,  -559,   136,   137,
       0,     0,     0,     0,     0,    56,    56,    56,   459,   459,
     459,     0,   696,    56,    56,     0,    82,     0,     0,     0,
     612,     0,   697,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   709,   699,   648,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,    56,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,     0,     0,     0,
       0,  1330,     0,     0,     0,     0,     0,   267,   275,     0,
     702,     0,     0,   702,   702,     0,    56,     0,     0,    82,
       0,     0,   576,   578,   579,   580,   581,   582,     0,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
       0,   606,   607,     0,     0,   273,    10,    11,    12,    82,
      82,    82,  1015,     0,     0,     0,     0,   277,     0,  1149,
     495,    10,    11,   213,   175,    14,    15,     0,     0,     0,
       0,     0,    16,     0,    20,     0,     0,     0,    82,     0,
       0,     0,    82,    82,     0,    23,    18,     0,    19,    20,
      82,    56,     0,     0,   267,    22,    56,    82,    28,    56,
       0,   274,    31,     0,   787,     0,   794,   788,     0,     0,
       0,     0,     0,    28,     0,   870,   136,   137,     0,     0,
      82,     0,     0,     0,     0,   871,     0,     0,     0,     0,
      35,   839,     0,   839,   839,   702,   872,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,   213,     0,
       0,   213,     0,   523,   523,   523,   874,     0,     0,     0,
     213,     0,     0,     0,     0,   213,     0,  1587,   213,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,     0,
    -931,  -931,  -931,     0,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
       0,  -931,  -931,  -931,  -931,     0,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,     0,     0,  -931,  -931,  -931,
    -931,  -931,  -931,     0,     0,  -931,  -931,  -931,     0,  -931,
    -931,   147,    10,    11,    12,     0,  -931,     0,     0,  -931,
       0,     0,   211,    56,    56,    56,     0,  -931,  -931,  -931,
       0,     0,   723,     0,  -931,  -931,  -931,     0,     0,     0,
    -931,   638,     0,     0,  -931,     0,   270,     0,     0,   278,
       0,    23,     0,     0,     0,     0,     0,  1588,  -931,     0,
       0,     0,     0,     0,    28,     0,     0,    30,    31,     0,
       0,  1668,     0,   270,     0,   386,     0,     0,     0,     0,
    1147,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   922,     0,    35,   995,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,     0,     0,
       0,   702,   702,   702,     0,     0,   923,     0,     0,     0,
       0,  1147,  1147,  1147,   702,   928,    82,    82,    82,    82,
      82,    82,     0,     0,    56,     0,    82,     0,  1149,  1149,
    1149,     0,     0,     0,  1323,   211,     0,   213,     0,     0,
       0,     0,     0,  1170,     0,     9,    10,  1171,    12,   175,
      14,    15,     0,     0,   211,   211,   211,    16,     0,    82,
      82,     0,    82,     0,   529,     0,     0,    82,    82,     0,
      82,    18,     0,    19,    20,    21,     0,     0,     0,     0,
      22,     0,     0,     0,   211,    23,     0,     0,     0,    25,
    1172,     0,   176,     0,     0,     0,     0,     0,    28,     0,
     839,    30,    31,     0,     0,  1173,     0,  1174,     0,     0,
       0,   278,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
      35,   270,     0,     0,     0,     0,  1175,     0,     0,     0,
     839,   839,  1141,     0,     0,     0,     0,     0,     0,     0,
    1141,     0,     0,     0,     0,    10,    11,     0,   175,    14,
      15,     0,     0,     0,   491,     0,    16,     0,     0,   213,
       0,     0,   874,   213,   213,   874,   874,   874,     0,     0,
      18,   213,    19,    20,     0,     0,     0,     0,   213,    22,
       0,     0,     0,    82,    82,    82,     0,     0,    25,     0,
       0,    82,    82,     0,     0,     0,     0,    28,     0,     0,
     136,   137,     0,     8,     0,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,   270,   278,    16,     0,   612,
     612,   612,     0,     0,    82,     0,     0,     0,     0,     0,
     702,    18,     0,    19,    20,   270,   278,     0,     0,     0,
      22,     0,     0,     0,     0,    23,   277,     0,     0,    25,
       0,     0,   466,     0,    82,     0,     0,     0,    28,     0,
       0,    30,    31,     0,     0,    32,     0,     0,     0,     0,
     211,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,   494,     0,     0,    34,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,   702,   702,     0,     0,   702,     0,
       0,  1202,  1203,   147,   133,  1348,    12,     0,     0,   702,
       0,     0,     0,     0,     0,   702,   702,   702,     0,     0,
       0,   702,     0,     0,     0,     0,     0,     0,   211,    82,
     211,   211,    20,     0,    82,   133,   134,    82,     0,   225,
     226,     0,     0,    23,   211,   211,    16,     0,   211,     0,
     211,   211,   211,   211,     0,     0,    28,   211,     0,    30,
      31,     0,   211,    20,     0,   211,     0,     0,     0,    22,
       0,     0,     0,   157,     0,     0,     0,     0,    25,     0,
     695,    10,    11,   158,     0,    14,    15,    28,    35,     0,
     136,   137,    16,     0,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   696,     0,    18,     0,    19,    20,
       0,     0,     0,     0,   697,    22,     0,   839,   839,   839,
    1141,  1141,  1141,  1315,    25,   698,   699,   839,     0,  1141,
    1141,  1141,     0,    28,     0,     0,   136,   137,     0,     0,
       0,   874,   874,   874,   655,   656,   657,   658,     0,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,     0,
     167,   743,     0,     0,     0,     0,     0,     0,   213,     0,
       8,     0,     9,    10,    11,    12,    13,    14,    15,     0,
       0,    82,    82,    82,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,    22,     0,     0,
       0,     0,    23,     0,     0,    24,    25,    26,     0,    27,
       0,   995,   995,     0,   995,    28,    29,     0,    30,    31,
       0,     0,    32,     0,     0,   702,     0,     0,  1149,     0,
       0,     0,    33,   702,   270,   278,     0,     0,     0,     0,
       0,     0,    34,   702,   702,   702,     0,    35,     0,     0,
     827,   494,     0,    36,   211,     0,     0,     0,    37,     0,
       0,     0,   147,   133,   134,    12,     0,     0,   568,  1149,
    1149,  1149,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,   839,   839,   839,  1315,  1315,  1315,
       0,    20,   839,   839,     0,     0,    10,    11,     0,   175,
      14,    15,    23,     0,     0,  1624,     0,    16,   874,   874,
     874,   874,   874,     0,     0,    28,     0,   211,    30,    31,
       0,    18,     0,    19,    20,   213,     0,     0,     0,     0,
      22,     0,    33,     0,     0,     0,     0,     0,     0,    25,
       0,     0,    34,     0,     0,     0,     0,    35,    28,     0,
       0,   136,   137,    36,     0,     0,     0,   211,   211,  1139,
       0,     0,     0,     0,   270,   278,     0,  1139,     0,     0,
       0,     0,     0,     0,     0,   147,    10,    11,    12,     0,
     494,   256,     0,   931,     0,     0,   211,     0,     0,   211,
     211,   211,   211,   211,   211,   529,     0,     0,   211,     0,
       0,     0,     0,     0,    20,   211,     0,     0,     0,   827,
       0,     0,     0,     0,     0,    23,     0,  1315,  1315,     0,
    1315,     0,     0,     0,   874,     0,     0,   278,    28,     0,
       0,    30,    31,     0,   494,     0,     0,     0,     0,   494,
     213,     0,   494,   494,     0,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,   204,     0,     0,     0,
       0,     0,     0,   494,     0,     0,     0,     0,     0,     0,
     494,  1315,  1315,  1315,  1315,  1315,     0,     0,     0,     0,
     494,   751,   752,   753,   754,   755,   756,   757,   758,   759,
     760,   761,   762,   763,   764,   765,   766,   767,   768,  1057,
    1059,  1060,  1061,     0,  1063,  1064,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,  1080,  1081,     0,     0,     0,     0,     0,     0,  1315,
     273,    10,    11,    12,   175,    14,    15,     0,     0,     0,
     491,     0,    16,     0,     0,     0,     0,     0,     0,   270,
     278,   270,     0,     0,     0,     0,    18,     0,    19,    20,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
      23,     0,     0,     0,    25,     0,   695,     0,     0,     0,
     827,     0,   213,    28,   213,     0,   274,    31,     0,     0,
       0,     0,     0,     0,   700,     0,     0,   700,   700,   494,
    1268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1269,     0,     0,   494,     0,    35,     0,     0,     0,     0,
       0,  1270,   699,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,     0,     0,   523,
       0,     0,     0,     0,   211,   211,   211,   211,   211,  1139,
     211,     0,  1316,     0,   211,   270,  1139,  1139,  1139,     0,
       0,     0,   278,     0,     0,     0,     0,     0,   211,   211,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     523,   523,   523,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   213,     0,   211,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1219,     0,     0,     0,
       0,     0,   147,    10,    11,    12,   175,    14,    15,     0,
       0,     0,   851,     0,    16,   700,     0,   700,   700,   700,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
      19,    20,     0,   827,   494,     0,     0,    22,     0,     0,
       0,     0,    23,     0,     0,     0,    25,   109,   494,     0,
     494,     0,   494,     0,     0,    28,   127,   109,    30,    31,
       0,     0,     0,     0,   109,   109,     0,   109,     0,     0,
       0,     0,    33,     0,     0,     0,     0,   147,    10,    11,
      12,     0,    34,    15,     0,     0,     0,    35,     0,     0,
       0,     0,     0,    36,     0,  1277,     0,     0,     0,     0,
       0,     0,   245,     0,     0,     0,    20,     0,     0,     0,
       0,   211,   211,   211,   211,   211,  1139,    23,     0,   211,
     211,     0,     0,     0,     0,     0,     0,     0,   494,     0,
      28,     0,     0,    30,    31,   211,   211,   211,   211,   211,
       0,     0,     0,     0,     0,     0,     0,   518,     0,     0,
       0,     0,   211,     0,     0,     0,     0,   519,     0,     0,
       0,   412,    35,   127,     0,     0,   494,     0,   520,     0,
     109,   109,     0,   529,     0,     0,     0,     0,     0,   109,
     109,     0,     0,   109,   109,   109,     0,   444,   109,   109,
     109,     0,     0,     0,     0,     0,   827,   827,   752,   753,
     754,   755,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,   700,   700,   700,  1347,     0,
       0,   652,   653,   654,   655,   656,   657,   658,  1034,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,     0,
       0,     0,     0,     0,   211,   211,  1316,   211,   656,   657,
     658,   211,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,     0,     0,   827,   827,     0,   211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
     109,     0,     0,     0,     0,     0,     0,   273,    10,    11,
      12,   175,    14,    15,     0,     0,     0,   491,     0,    16,
       0,     0,     0,   109,     0,     0,     0,     0,   211,   211,
    1139,   211,   211,    18,   700,    19,    20,     0,     0,     0,
       0,     0,    22,     0,  1428,     0,     0,    23,     0,     0,
       0,    25,     0,   695,     0,     0,     0,     0,     0,     0,
      28,     0,     0,   274,    31,   494,   109,   494,     0,   494,
       0,   827,     0,     0,   700,   700,   700,  1312,     0,     0,
       0,     0,     0,     0,  1034,     0,   211,  1313,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,  1314,   699,
       0,     0,   827,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,     0,   109,     0,     0,   109,
     653,   654,   655,   656,   657,   658,  1463,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,     0,     0,   211,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -420,    10,    11,  -420,  -420,    14,   256,     0,     0,
       0,     0,     0,    16,   827,     0,     0,   109,     0,     0,
       0,     0,     0,     0,   700,     0,     0,    18,     0,    19,
      20,     0,     0,     0,     0,     0,    22,     0,   109,     0,
     109,  -420,     0,   494,     0,    25,  1139,   695,   109,     0,
       0,   109,     0,     0,    28,     0,     0,   136,   137,     0,
       0,     0,     0,   109,     0,   827,     0,     0,     0,     0,
       0,   696,     0,     0,     0,  1521,  1522,   147,    10,    11,
      12,   697,     0,   568,     0,     0,  -420,  1139,  1139,  1139,
       0,     0,   698,   699,     0,     0,     0,     0,   700,   700,
     211,     0,   700,     0,     0,   827,    20,     0,   273,    10,
      11,    12,     0,   700,    15,     0,     0,    23,     0,  1034,
    1034,  1034,     0,     0,     0,   700,     0,     0,     0,     0,
      28,     0,     0,    30,    31,     0,     0,    20,     0,     0,
       0,  1574,     0,     0,     0,     0,     0,   202,    23,     0,
       0,     0,     0,     0,   245,   898,     0,   203,     0,     0,
       0,    28,    35,     0,   274,    31,     0,     0,   204,     0,
     109,     0,     0,     0,     0,     0,     0,     0,   870,     0,
       0,     0,     0,     0,     0,     0,  1631,  1632,   871,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,   872,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,  1650,   109,     0,     0,     0,     0,     0,
       0,   700,   700,   700,   700,   700,   700,   700,     0,     0,
       0,   700,     0,  1034,  1034,  1034,   756,   757,   758,   759,
     760,   761,   762,   763,   764,   765,   766,   767,   768,     0,
       0,  1688,  1360,    10,  1171,    12,   214,    14,   215,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
      19,    20,     0,   109,     0,     0,     0,    22,   494,     0,
       0,     0,    23,     0,   109,   109,    25,   109,   109,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    30,    31,
       0,     0,     0,  1738,  1362,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,    35,     0,   700,
       0,     0,     0,  1175,     0,     0,     0,   700,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   700,   700,   700,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,   109,   127,     0,
       0,     0,     0,     0,     0,     0,     0,   245,   700,   700,
     700,   700,   700,   700,     0,     0,   700,   700,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   898,     0,   827,     0,     0,  1550,     0,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,     0,
    -931,  -931,  -931,     0,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
       0,  -931,  -931,  -931,  -931,     0,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,     0,     0,  -931,  -931,  -931,
    -931,  -931,  -931,     0,     0,  -931,  -931,  -931,     0,  -931,
    -931,     0,     0,     0,     0,     0,  -931,     0,     0,  -931,
       0,     0,     0,     0,     0,    20,   898,  -931,  -931,  -931,
       0,     0,     0,     0,  -931,  -931,  -931,     0,     0,     0,
    -931,     0,     0,     0,  -931,   109,   109,   109,   109,     0,
       0,   700,   700,     0,   700,     0,   109,     0,  -931,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   766,   767,
     768,     0,     0,     0,     0,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,     0,     0,     0,
       0,     0,     0,     0,     0,   700,   700,   700,   700,   700,
       0,  1636,     0,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
     109,   109,  1400,  -514,   109,  -514,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,  -514,     0,  -514,     0,
       0,     0,  -514,     0,     0,     0,     0,   109,  -514,     0,
       0,     0,     0,  -514,     0,     0,     0,  -514,     0,  -514,
       0,     0,     0,   700,     0,     0,  -514,     0,     0,  -514,
    -514,  -514,  -514,  -514,     0,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,     0,     0,  -514,  -514,  -514,  -514,     0,  -514,     0,
       0,     0,     0,  1637,  -514,     0,     0,     0,     0,  -514,
    -514,  -514,     0,  -514,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,     0,     0,
       0,     0,     0,     0,   630,     0,   273,    10,    11,    12,
     175,    14,   317,   318,   319,   320,   491,   321,    16,  1722,
     898,     0,     0,   109,     0,     0,   109,     0,     0,     0,
       0,     0,    18,   322,    19,    20,    21,     0,   323,   324,
     325,    22,     0,   326,   327,   328,    23,   329,   330,     0,
      25,     0,   695,     0,   331,   332,   333,   334,   335,    28,
       0,     0,   274,    31,  -346,     0,     0,   387,     0,     0,
       0,     0,     0,   338,     0,     0,  1030,     0,     0,     0,
       0,     0,     0,     0,   340,   341,  1031,   109,   109,     0,
     109,   343,   344,   345,     0,     0,     0,  1032,   699,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,     0,     0,   347,     0,     0,     0,   109,
     109,     0,     0,     0,   630,     0,   147,    10,    11,    12,
     175,    14,   317,   318,   319,   320,   491,   321,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     898,     0,    18,   322,    19,    20,    21,     0,   323,   324,
     325,    22,     0,   326,   327,   328,    23,   329,   330,     0,
      25,     0,   695,     0,   331,   332,   333,   334,   335,    28,
       0,     0,    30,    31,  -346,     0,     0,   387,     0,     0,
       0,     0,   898,   338,     0,     0,  1144,     0,     0,     0,
       0,     0,     0,     0,   340,   341,  1145,     0,     0,     0,
       0,   343,   344,   345,     0,     0,     0,  1146,   699,     0,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,   490,     0,   273,    10,
      11,    12,   175,    14,   317,   318,   319,   320,   491,   321,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,   322,    19,    20,    21,     0,
     323,   324,   325,    22,     0,   326,   327,   328,    23,   329,
     330,     0,    25,     0,     0,     0,   331,   332,   333,   334,
     335,    28,     0,     0,   274,    31,     0,     0,     0,   387,
       0,     0,     0,     0,     0,   338,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,   109,
       0,   109,     0,   343,   344,   345,     0,     0,   959,   346,
     273,    10,    11,    12,   175,    14,   317,   318,   319,   320,
       0,   321,    16,     0,     0,  -844,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,    18,   322,    19,    20,
      21,     0,   323,   324,   325,    22,     0,   326,   327,   328,
      23,   329,   330,     0,    25,     0,     0,     0,   331,   332,
     333,   334,   335,    28,     0,     0,   274,    31,  1733,     0,
    -833,   387,     0,     0,     0,     0,     0,   338,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,     0,     0,     0,     0,   343,   344,   345,     0,     0,
     825,   346,   947,   948,   949,    12,     0,    14,   507,   318,
     319,   320,     0,   321,    16,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,    18,   322,
      19,     0,    21,     0,   323,   324,   325,    22,     0,   326,
     327,   328,    23,   329,   330,     0,    25,     0,     0,     0,
     331,   332,   333,   334,   335,    28,     0,     0,   950,   951,
     826,     0,     0,   387,     0,     0,     0,     0,     0,   338,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,     0,     0,     0,     0,   343,   344,   345,
       0,     0,     0,   346,   952,   630,     0,   273,    10,    11,
      12,     0,    14,   317,   318,   319,   320,     0,   321,    16,
    1129,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   322,    19,    20,    21,     0,   323,
     324,   325,    22,     0,   326,   327,   328,    23,   329,   330,
       0,    25,     0,     0,     0,   331,   332,   333,   334,   335,
      28,     0,     0,   274,    31,  -346,     0,     0,   387,     0,
       0,     0,     0,     0,   338,     0,     0,   631,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   632,     0,     0,
       0,     0,   343,   344,   345,     0,     0,   825,   633,   947,
     948,   949,    12,     0,    14,   507,   318,   319,   320,     0,
     321,    16,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,    18,   322,    19,     0,    21,
       0,   323,   324,   325,    22,     0,   326,   327,   328,    23,
     329,   330,     0,    25,     0,     0,     0,   331,   332,   333,
     334,   335,    28,     0,     0,   950,   951,   826,     0,     0,
     387,     0,     0,     0,     0,     0,   338,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,   343,   344,   345,     0,     0,     0,
     346,   952,   825,     0,   273,    10,    11,    12,     0,    14,
     507,   318,   319,   320,     0,   321,    16,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,   322,    19,     0,    21,     0,   323,   324,   325,    22,
       0,   326,   327,   328,    23,   329,   330,     0,    25,     0,
       0,     0,   331,   332,   333,   334,   335,    28,     0,     0,
     274,    31,   826,     0,     0,   387,     0,     0,     0,     0,
       0,   338,     0,     0,   339,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,     0,     0,     0,     0,   343,
     344,   345,     0,     0,     0,   346,     0,   825,     0,   947,
     948,   949,    12,  1326,    14,   507,   318,   319,   320,     0,
     321,    16,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,   322,    19,     0,    21,
       0,   323,   324,   325,    22,     0,   326,   327,   328,    23,
     329,   330,     0,    25,     0,     0,     0,   331,   332,   333,
     334,   335,    28,     0,     0,   950,   951,   826,     0,     0,
     387,     0,     0,     0,     0,     0,   338,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,   343,   344,   345,     0,     0,   825,
     346,   947,   948,   949,    12,     0,    14,   507,   318,   319,
     320,     0,   321,    16,     0,     0,     0,  -518,   347,     0,
       0,     0,     0,     0,     0,     0,     0,    18,   322,    19,
       0,    21,     0,   323,   324,   325,    22,     0,   326,   327,
     328,    23,   329,   330,     0,    25,     0,     0,     0,   331,
     332,   333,   334,   335,    28,     0,     0,   950,   951,   826,
       0,     0,   387,     0,     0,     0,     0,     0,   338,     0,
       0,   339,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,     0,     0,     0,     0,   343,   344,   345,     0,
       0,   630,   346,   147,    10,    11,    12,     0,    14,   317,
     318,   319,   320,     0,   321,    16,     0,     0,     0,  1441,
     347,     0,     0,     0,     0,     0,     0,     0,     0,    18,
     322,    19,    20,    21,     0,   323,   324,   325,    22,     0,
     326,   327,   328,    23,   329,   330,     0,    25,     0,     0,
       0,   331,   332,   333,   334,   335,    28,     0,     0,    30,
      31,  -346,     0,     0,   387,     0,     0,     0,     0,     0,
     338,     0,     0,  1715,     0,     0,     0,     0,     0,     0,
       0,   340,   341,  1716,     0,     0,     0,     0,   343,   344,
     345,     0,     0,  1772,  1717,   273,    10,    11,    12,     0,
      14,   317,   318,   319,   320,     0,   321,    16,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,    18,   322,    19,    20,    21,     0,   323,   324,   325,
      22,     0,   326,   327,   328,    23,   329,   330,     0,    25,
       0,     0,     0,   331,   332,   333,   334,   335,    28,     0,
       0,   274,    31,     0,     0,  -210,   387,     0,     0,     0,
       0,     0,   338,     0,     0,   339,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,     0,     0,     0,     0,
     343,   344,   345,     0,     0,   825,   346,   273,    10,    11,
      12,     0,    14,   507,   318,   319,   320,     0,   321,    16,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   322,    19,     0,    21,     0,   323,
     324,   325,    22,     0,   326,   327,   328,    23,   329,   330,
       0,    25,     0,     0,     0,   331,   332,   333,   334,   335,
      28,     0,     0,   274,    31,   826,     0,     0,   387,     0,
       0,     0,     0,     0,   338,     0,     0,   339,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,   343,   344,   345,     0,     0,   959,   346,   273,
      10,    11,    12,     0,    14,   507,   318,   319,   320,     0,
     321,    16,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,    18,   322,    19,     0,    21,
       0,   323,   324,   325,    22,     0,   326,   327,   328,    23,
     329,   330,     0,    25,     0,     0,     0,   331,   332,   333,
     334,   335,    28,     0,     0,   274,    31,     0,     0,     0,
     387,  -833,     0,     0,     0,     0,   338,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,   343,   344,   345,     0,     0,   959,
     346,   273,    10,    11,    12,     0,    14,   507,   318,   319,
     320,     0,   321,    16,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,    18,   322,    19,
       0,    21,     0,   323,   324,   325,    22,     0,   326,   327,
     328,    23,   329,   330,     0,    25,     0,     0,     0,   331,
     332,   333,   334,   335,    28,     0,     0,   274,    31,     0,
       0,     0,   387,     0,     0,     0,     0,     0,   338,     0,
       0,   339,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,     0,     0,     0,     0,   343,   344,   345,     0,
       0,  1056,   346,   273,    10,    11,    12,     0,    14,   507,
     318,   319,   320,     0,   321,    16,     0,     0,  -833,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,    18,
     322,    19,     0,    21,     0,   323,   324,   325,    22,     0,
     326,   327,   328,    23,   329,   330,     0,    25,     0,     0,
       0,   331,   332,   333,   334,   335,    28,     0,     0,   274,
      31,     0,     0,     0,   387,     0,     0,     0,     0,     0,
     338,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,   343,   344,
     345,     0,     0,  1058,   346,   273,    10,    11,    12,     0,
      14,   507,   318,   319,   320,     0,   321,    16,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,    18,   322,    19,     0,    21,     0,   323,   324,   325,
      22,     0,   326,   327,   328,    23,   329,   330,     0,    25,
       0,     0,     0,   331,   332,   333,   334,   335,    28,     0,
       0,   274,    31,     0,     0,     0,   387,     0,     0,     0,
       0,     0,   338,     0,     0,   339,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,     0,     0,     0,     0,
     343,   344,   345,     0,     0,  1687,   346,   273,    10,    11,
      12,     0,    14,   507,   318,   319,   320,     0,   321,    16,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   322,    19,     0,    21,     0,   323,
     324,   325,    22,     0,   326,   327,   328,    23,   329,   330,
       0,    25,     0,     0,     0,   331,   332,   333,   334,   335,
      28,     0,     0,   274,    31,     0,     0,     0,   387,     0,
       0,     0,     0,     0,   338,   280,     0,   339,    10,    11,
       0,     0,    14,    15,     0,   340,   341,   342,     0,    16,
       0,     0,   343,   344,   345,     0,     0,     0,   346,     0,
       0,     0,     0,    18,     0,    19,    20,     0,     0,     0,
       0,     0,    22,     0,   281,   282,   347,     0,     0,     0,
       0,    25,     0,   283,     0,     0,     0,     0,     0,     0,
      28,     0,     0,   136,   137,     0,   284,     0,     0,     0,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
       0,   305,   306,   307,   308,     0,     0,     0,     0,   309,
     310,   273,    10,    11,    12,     0,    14,   507,   318,   319,
     320,     0,   321,    16,     0,     0,   311,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,   322,    19,
       0,    21,     0,   323,   324,   325,    22,     0,   326,   327,
     328,    23,   329,   330,     0,    25,     0,     0,     0,   331,
     332,   333,   334,   335,    28,     0,     0,   274,    31,     0,
       0,     0,   387,     0,     0,     0,     0,     0,   338,     0,
       0,   339,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,     0,     0,     0,     0,   343,   344,   345,     0,
       0,     0,   346,   273,    10,    11,    12,     0,    14,   507,
     318,   319,   320,     0,   321,    16,     0,     0,     0,     0,
     347,   508,     0,     0,     0,     0,     0,     0,     0,    18,
     322,    19,     0,    21,     0,   323,   324,   325,    22,     0,
     326,   327,   328,    23,   329,   330,     0,    25,     0,     0,
       0,   331,   332,   333,   334,   335,    28,     0,     0,   274,
      31,     0,     0,     0,   387,     0,     0,     0,     0,     0,
     338,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,   343,   344,
     345,     0,     0,     0,   346,   273,    10,    11,    12,     0,
      14,   507,   318,   319,   320,     0,   321,    16,     0,     0,
       0,     0,   347,   880,     0,     0,     0,     0,     0,     0,
       0,    18,   322,    19,     0,    21,     0,   323,   324,   325,
      22,     0,   326,   327,   328,    23,   329,   330,     0,    25,
       0,     0,     0,   331,   332,   333,   334,   335,    28,     0,
       0,   274,    31,     0,     0,     0,   387,     0,     0,     0,
       0,     0,   338,     0,     0,   339,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,     0,     0,     0,     0,
     343,   344,   345,     0,     0,     0,   346,   273,    10,    11,
      12,     0,    14,   507,   318,   319,   320,     0,   321,    16,
       0,     0,     0,     0,   347,   998,     0,     0,     0,     0,
       0,     0,     0,    18,   322,    19,     0,    21,     0,   323,
     324,   325,    22,     0,   326,   327,   328,    23,   329,   330,
       0,    25,     0,     0,     0,   331,   332,   333,   334,   335,
      28,     0,     0,   274,    31,     0,     0,     0,   387,     0,
       0,     0,     0,     0,   338,     0,     0,   339,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,   343,   344,   345,     0,     0,     0,   346,   273,
      10,    11,    12,     0,    14,   507,   318,   319,   320,     0,
     321,    16,     0,     0,     0,     0,   347,  1018,     0,     0,
       0,     0,     0,     0,     0,    18,   322,    19,     0,    21,
       0,   323,   324,   325,    22,     0,   326,   327,   328,    23,
     329,   330,     0,    25,     0,     0,     0,   331,   332,   333,
     334,   335,    28,     0,     0,   274,    31,     0,     0,     0,
     387,     0,     0,     0,     0,     0,   338,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,   343,   344,   345,     0,     0,     0,
     346,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   347,  1262,
    1591,  1592,  1593,    12,   175,    14,   317,   318,   319,   320,
       0,   321,    16,  1594,     0,  1595,  1596,  1597,  1598,  1599,
    1600,  1601,  1602,  1603,  1604,    17,    18,   322,    19,    20,
      21,     0,   323,   324,   325,    22,     0,   326,   327,   328,
      23,   329,   330,  1605,    25,  1606,     0,     0,   331,   332,
     333,   334,   335,    28,     0,     0,   274,  1607,  1218,     0,
    1608,   387,     0,     0,     0,     0,     0,   338,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,     0,     0,     0,     0,   343,   344,   345,     0,     0,
       0,   346,     0,     0,     0,  1609,     0,     0,     0,  1591,
    1592,  1593,    12,   175,    14,   317,   318,   319,   320,   347,
     321,    16,  1594,     0,  1595,  1596,  1597,  1598,  1599,  1600,
    1601,  1602,  1603,  1604,    17,    18,   322,    19,    20,    21,
       0,   323,   324,   325,    22,     0,   326,   327,   328,    23,
     329,   330,  1605,    25,  1606,     0,     0,   331,   332,   333,
     334,   335,    28,     0,     0,   274,  1607,     0,     0,  1608,
     387,     0,     0,     0,     0,     0,   338,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,   343,   344,   345,     0,     0,     0,
     346,     0,     0,     0,  1609,   273,    10,    11,    12,   175,
      14,   317,   318,   319,   320,   491,   321,    16,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,   322,    19,    20,    21,     0,   323,   324,   325,
      22,     0,   326,   327,   328,    23,   329,   330,     0,    25,
       0,   695,     0,   331,   332,   333,   334,   335,    28,     0,
       0,   274,    31,     0,     0,     0,   387,     0,     0,     0,
       0,     0,   338,     0,     0,  1030,     0,     0,     0,     0,
       0,     0,     0,   340,   341,  1031,     0,     0,     0,     0,
     343,   344,   345,     0,     0,     0,  1032,   699,   147,    10,
      11,    12,   175,    14,   317,   318,   319,   320,   491,   321,
      16,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,   322,    19,    20,    21,     0,
     323,   324,   325,    22,     0,   326,   327,   328,    23,   329,
     330,     0,    25,     0,   695,     0,   331,   332,   333,   334,
     335,    28,     0,     0,    30,    31,     0,     0,     0,   387,
       0,     0,     0,     0,     0,   338,     0,     0,  1144,     0,
       0,     0,     0,     0,     0,     0,   340,   341,  1145,     0,
       0,     0,     0,   343,   344,   345,     0,     0,     0,  1146,
     699,   273,    10,    11,    12,     0,    14,   317,   318,   319,
     320,     0,   321,    16,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,   322,    19,
      20,    21,     0,   323,   324,   325,    22,     0,   326,   327,
     328,    23,   329,   330,     0,    25,     0,   695,     0,   331,
     332,   333,   334,   335,    28,     0,     0,   274,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   338,     0,
       0,  1030,     0,     0,     0,     0,     0,     0,     0,   340,
     341,  1031,     0,     0,     0,     0,   343,   344,   345,     0,
       0,     0,  1032,   699,   147,    10,    11,    12,     0,    14,
     317,   318,   319,   320,     0,   321,    16,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,   322,    19,    20,    21,     0,   323,   324,   325,    22,
       0,   326,   327,   328,    23,   329,   330,     0,    25,     0,
     695,     0,   331,   332,   333,   334,   335,    28,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,  1144,     0,     0,     0,     0,     0,
       0,     0,   340,   341,  1145,     0,     0,     0,     0,   343,
     344,   345,     0,     0,     0,  1146,   699,   273,    10,    11,
      12,     0,    14,   317,   318,   319,   320,     0,   321,    16,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   322,    19,    20,    21,     0,   323,
     324,   325,    22,     0,   326,   327,   328,    23,   329,   330,
       0,    25,     0,     0,     0,   331,   332,   333,   334,   335,
      28,     0,     0,   274,   336,     0,     0,     0,   337,     0,
       0,     0,     0,     0,   338,     0,     0,   339,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,   343,   344,   345,     0,     0,     0,   346,   273,
      10,    11,    12,     0,    14,   317,   318,   319,   320,     0,
     321,    16,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,    18,   322,    19,    20,    21,
       0,   323,   324,   325,    22,     0,   326,   327,   328,    23,
     329,   330,     0,    25,     0,     0,     0,   331,   332,   333,
     334,   335,    28,     0,     0,   274,    31,     0,     0,     0,
     387,     0,     0,     0,     0,     0,   338,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,   343,   344,   345,     0,     0,     0,
     346,   273,    10,    11,    12,     0,    14,   507,   318,   319,
     320,     0,   321,    16,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,    18,   322,    19,
      20,    21,     0,   323,   324,   325,    22,     0,   326,   327,
     328,    23,   329,   330,     0,    25,     0,     0,     0,   331,
     332,   333,   334,   335,    28,     0,     0,   274,    31,     0,
       0,     0,   387,     0,     0,     0,     0,     0,   338,     0,
       0,   631,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   632,     0,     0,     0,     0,   343,   344,   345,     0,
       0,     0,   633,   273,    10,    11,    12,     0,    14,   507,
     318,   319,   320,     0,   321,    16,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,    18,
     322,    19,     0,    21,     0,   323,   324,   325,    22,     0,
     326,   327,   328,    23,   329,   330,     0,    25,     0,     0,
       0,   331,   332,   333,   334,   335,    28,     0,     0,   274,
      31,     0,     0,  1654,   387,     0,     0,     0,     0,     0,
     338,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,   343,   344,
     345,     0,     0,     0,   346,   273,    10,    11,    12,   175,
      14,   317,   318,   319,   320,     0,   321,    16,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,    18,   322,    19,    20,    21,     0,   323,   324,   325,
      22,     0,   326,   327,   328,    23,   329,   330,     0,    25,
       0,     0,     0,   331,   332,   333,   334,   335,    28,     0,
       0,   274,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,     0,     0,   339,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,     0,     0,     0,     0,
     343,   344,   345,     0,     0,     0,   346,   147,    10,    11,
      12,     0,    14,   507,   318,   319,   320,     0,   321,    16,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   322,    19,    20,    21,     0,   323,
     324,   325,    22,     0,   326,   327,   328,    23,   329,   330,
       0,    25,     0,     0,     0,   331,   332,   333,   334,   335,
      28,     0,     0,    30,    31,     0,     0,     0,   387,     0,
       0,     0,     0,     0,   338,     0,     0,  1715,     0,     0,
       0,     0,     0,     0,     0,   340,   341,  1716,     0,     0,
       0,     0,   343,   344,   345,     0,     0,     0,  1717,   273,
      10,    11,    12,     0,    14,   507,   318,   319,   320,     0,
     321,    16,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,    18,   322,    19,     0,    21,
       0,   323,   324,   325,    22,     0,   326,   327,   328,    23,
     329,   330,     0,    25,     0,     0,     0,   331,   332,   333,
     334,   335,    28,     0,     0,   274,    31,     0,     0,     0,
     337,     0,     0,     0,     0,     0,   338,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,   343,   344,   345,     0,     0,     0,
     346,   273,    10,    11,    12,     0,    14,   507,   318,   319,
     320,     0,   321,    16,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,    18,   322,    19,
       0,    21,     0,   323,   324,   325,    22,     0,   326,   327,
     328,    23,   329,   330,     0,    25,     0,     0,     0,   331,
     332,   333,   334,   335,    28,     0,     0,   274,    31,   645,
       0,     0,     0,     0,     0,     0,     0,     0,   338,     0,
       0,   339,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,     0,     0,     0,     0,   343,   344,   345,     0,
       0,     0,   646,   273,    10,    11,    12,     0,    14,   507,
     318,   319,   320,     0,   321,    16,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,    18,
     322,    19,     0,    21,     0,   323,   324,   325,    22,     0,
     326,   327,   328,    23,   329,   330,     0,    25,     0,     0,
       0,   331,   332,   333,   334,   335,    28,     0,     0,   274,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,   343,   344,
     345,     0,     0,     0,   346,   683,   273,    10,    11,    12,
       0,    14,   507,   318,   319,   320,     0,   321,    16,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,   322,    19,     0,    21,     0,   323,   324,
     325,    22,     0,   326,   327,   328,    23,   329,   330,     0,
      25,     0,     0,     0,   331,   332,   333,   334,   335,    28,
       0,     0,   274,    31,     0,     0,     0,   387,     0,     0,
       0,     0,     0,   338,     0,     0,   339,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,     0,     0,     0,
       0,   343,   344,   345,     0,     0,     0,   346,   273,    10,
      11,    12,     0,    14,   507,   318,   319,   320,     0,   321,
      16,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,    18,   322,    19,    20,    21,     0,
     323,   324,   325,    22,     0,   326,   327,   328,    23,   329,
     330,     0,    25,     0,     0,     0,   331,   332,   333,   334,
     335,    28,     0,     0,   274,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,     0,     0,   631,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   632,     0,
       0,     0,     0,   343,   344,   345,     0,     0,     0,   633,
    1283,    10,    11,    12,     0,    14,   507,   318,   319,   320,
       0,   321,    16,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,    18,   322,    19,     0,
      21,     0,   323,   324,   325,    22,     0,   326,   327,   328,
      23,   329,   330,     0,    25,     0,     0,     0,   331,   332,
     333,   334,   335,    28,     0,     0,   274,    31,     0,     0,
       0,   387,     0,     0,     0,     0,     0,   338,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,     0,     0,     0,     0,   343,   344,   345,     0,     0,
       0,   346,   147,    10,    11,    12,     0,    14,   317,   318,
     319,   320,     0,   321,    16,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,    18,   322,
      19,    20,    21,     0,   323,   324,   325,    22,     0,   326,
     327,   328,    23,   329,   330,     0,    25,     0,     0,     0,
     331,   332,   333,   334,   335,    28,     0,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
       0,     0,  1715,     0,     0,     0,     0,     0,     0,     0,
     340,   341,  1716,     0,     0,     0,     0,   343,   344,   345,
       0,     0,     0,  1717,   273,    10,    11,    12,     0,    14,
     507,   318,   319,   320,     0,   321,    16,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
      18,   322,    19,     0,    21,     0,   323,   324,   325,    22,
       0,   326,   327,   328,    23,   329,   330,     0,    25,     0,
       0,     0,   331,   332,   333,   334,   335,    28,     0,     0,
     274,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,   339,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,     0,     0,     0,     0,   343,
     344,   345,     0,     0,     0,   346,   273,    10,    11,    12,
       0,    14,   507,   318,   319,   320,     0,   321,    16,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,    18,   322,    19,     0,    21,     0,   323,   324,
     325,    22,     0,   326,   327,   328,    23,   329,   330,     0,
      25,     0,     0,     0,   331,   332,   333,   334,   335,    28,
       0,     0,   274,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   338,     0,     0,   339,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,     0,     0,     0,
       0,   343,   344,   345,     0,     0,     0,   705,   273,    10,
      11,    12,     0,    14,   507,   318,   319,   320,     0,   321,
      16,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,    18,   322,    19,     0,    21,     0,
     323,   324,   325,    22,     0,   326,   327,   328,    23,   329,
     330,     0,    25,     0,     0,     0,   331,   332,   333,   334,
     335,    28,     0,     0,   274,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,     0,     0,   339,   147,
      10,    11,    12,   214,    14,   215,   340,   341,   342,     0,
       0,    16,     0,   343,   344,   345,     0,     0,     0,   707,
       0,     0,     0,     0,     0,    18,     0,    19,    20,     0,
       0,     0,     0,     0,    22,     0,     0,   347,     0,    23,
       0,     0,     0,    25,     0,   147,    10,    11,    12,   175,
      14,    15,    28,     0,     0,    30,    31,    16,     0,  1671,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,    18,     0,    19,    20,     0,     0,     0,     0,    34,
      22,     0,     0,     0,    35,    23,     0,     0,     0,    25,
      36,   147,    10,    11,    12,   214,    14,   215,    28,     0,
       0,    30,    31,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,    18,     0,    19,
      20,     0,     0,     0,     0,    34,    22,     0,     0,     0,
      35,    23,     0,     0,     0,    25,    36,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,    35,     0,     0,   746,
       0,     0,    36,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,  1209,     0,     0,     0,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   766,   767,
     768,  1759,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   747,   748,   749,   750,   751,   752,
     753,   754,   755,   756,   757,   758,   759,   760,   761,   762,
     763,   764,   765,   766,   767,   768
};

static const short yycheck[] =
{
      16,     6,   182,     6,   486,   169,    84,   749,    24,   183,
      25,    51,   218,   184,   426,   426,   822,   368,   820,   157,
     158,     6,   132,   198,   554,   354,   374,    97,   164,    99,
     987,    89,   374,    38,   729,    38,   643,   366,   367,   882,
      80,  1433,   426,   426,    47,   254,   394,     6,     6,    47,
     468,   257,   394,    38,   909,    71,   139,   140,     6,    62,
     915,    47,    47,     6,   396,   908,    84,   248,   796,  1440,
      16,   914,   218,    76,   152,   139,   146,  1551,   140,    38,
      38,   130,   228,   227,   228,     6,    89,    47,    47,    47,
      38,    94,   504,   504,    97,    38,    99,   802,  1176,    47,
    1178,    12,  1556,    12,    47,    65,    12,   313,  1186,   804,
    1556,   114,    33,    34,   130,    47,    47,    38,     6,    60,
      62,    34,     6,  1610,    39,     1,    47,    56,    62,     3,
     535,  1763,     9,    12,   212,  1626,  1795,     0,   263,   142,
     156,    87,   145,   146,    94,     1,    89,    76,   499,  1623,
      38,    13,   557,    36,    38,  1698,  1647,   142,  1817,   510,
      13,    62,   368,    47,  1796,   525,     0,   113,    89,   111,
     173,  1026,  1663,   533,   177,   173,   110,    56,  1021,   177,
    1023,   184,   222,   142,    95,    61,    65,    64,   173,    65,
       1,   177,   177,     0,   142,   198,   111,  1719,   111,   142,
      62,   110,    76,    65,   110,    61,    62,  1729,  1730,    62,
    1697,   143,    65,  1756,   173,    65,    76,   177,   177,   177,
     223,   142,    98,    63,    50,   173,    76,  1701,  1719,   177,
     173,   110,   248,   249,   177,   198,   157,   158,  1729,  1730,
      56,   142,   183,   114,    49,   177,   177,   263,   110,   374,
      61,    49,   173,  1775,    65,   198,   177,    94,   218,   143,
      76,   279,  1457,  1458,    49,  1739,    62,   227,   228,   394,
      49,   111,    49,  1230,   157,   158,   159,   198,  1732,  1474,
     363,   202,   203,   184,  1775,   173,  1732,    98,    28,    94,
      49,   821,    32,   177,   110,    49,    94,   257,    76,   363,
      76,   359,  1776,    49,    56,  1827,    94,    56,   378,    94,
     446,   314,   476,   259,   110,    94,    95,    94,    95,    63,
      61,   204,   338,    63,    76,   110,    66,    76,   199,  1524,
      76,   110,    36,   110,     3,    94,  1827,     6,  1533,  1534,
      94,  1536,  1047,   346,  1199,  1050,  1201,   109,    94,    95,
      13,   110,   223,   313,   416,  1198,   359,  1200,    99,   408,
      26,    49,  1733,    32,   110,   435,   369,   383,  1096,  1761,
      62,   111,   553,    63,    43,   378,   379,    63,    62,   395,
     518,   519,   724,    56,    49,   521,   532,   531,   532,    63,
      59,    60,   408,    77,   379,  1473,   540,   815,   816,    62,
    1105,  1106,    65,    66,    73,   789,    94,    95,   368,     3,
       4,     5,   556,    94,    83,    56,   359,  1260,   110,    88,
     379,   111,   110,   426,    65,    94,   429,    32,   374,    94,
      95,   379,   435,    63,    65,   109,   379,   111,   359,  1634,
    1635,    26,     7,    28,    76,   110,   778,    26,   394,     8,
       9,  1408,     3,   157,   158,   159,    15,    26,   379,    28,
       4,     5,     4,     5,   608,    59,    60,   470,  1163,   110,
     430,    61,   470,    32,    39,   545,    61,    94,   379,    38,
      65,   111,    61,   426,   470,   470,    65,   428,    47,    83,
      49,  1346,    61,  1100,   497,    62,    65,   500,    62,    62,
     204,   504,    46,   543,  1359,   426,    49,   989,     6,    49,
     470,   470,    56,    98,    56,    59,    60,    59,    60,    98,
      49,    77,   470,    79,   487,    56,    66,   470,    49,    98,
       1,    73,     3,     4,     5,    94,    56,   553,    56,   499,
      38,    83,   545,   110,    56,   615,   110,   110,    49,   470,
      56,    94,    95,    95,    94,   496,    76,   498,   499,     4,
       5,   504,    56,   688,     9,    94,    95,   110,    49,  1274,
    1275,   531,   532,    94,    95,    56,    50,    56,    49,  1422,
     540,   110,    76,   504,    77,    56,    65,    32,    59,    60,
      61,    62,   717,    94,    95,    76,   556,   518,   519,     1,
      49,     3,     4,     5,    49,   110,     3,     4,     5,     6,
    1453,    56,   615,    94,    59,    60,  1459,   620,   621,   622,
     623,   624,   680,    94,    49,    26,    40,    28,    73,   645,
     633,    56,  1475,  1476,   814,   518,   519,   520,    83,  1169,
     643,    65,    56,   646,    49,    94,    43,    49,   608,    94,
      95,    76,    76,   616,    56,  1498,   527,    59,    60,    56,
      61,  1516,    59,    60,    65,    49,    62,    63,   190,    94,
    1152,  1153,   688,    49,    49,    61,   679,   680,    56,   110,
      66,  1487,    49,    65,    76,  1097,  1097,   896,   897,    94,
    1038,    88,    94,   902,    76,   698,  1038,    98,    76,  1542,
    1543,   717,   705,   786,   707,  1034,   709,   670,    12,    49,
      94,   781,   675,  1097,  1097,   678,   679,   779,    94,    94,
      95,   110,  1565,  1566,   786,  1568,    66,    94,    95,   935,
      56,   867,    56,   110,   909,   110,    63,   680,  1220,  1221,
     915,   885,     3,     4,     5,  1551,   709,    46,   111,   620,
      76,    49,    76,   716,    94,   698,    49,    56,    49,   680,
      59,    61,    99,   726,   842,    65,   709,   713,    49,  1299,
       3,   787,   787,   733,    94,   696,   697,   698,   781,   650,
     796,     3,     4,     5,     6,    26,    61,    28,   709,    50,
      65,   732,     4,     5,    63,   905,    94,     9,    59,    60,
      49,    94,  1150,    94,    49,   676,   821,    56,  1150,    76,
     826,  1341,   683,    94,   518,   519,   520,  1623,    61,     9,
      61,    43,    83,    13,    65,  1307,    65,    76,   699,     3,
       4,     5,     6,    95,   837,   795,    49,    59,    60,  1682,
     910,   911,   845,   913,    56,    94,    49,    59,    60,    94,
      95,  1026,    94,    49,   795,    95,  1338,    98,   113,    49,
      94,    73,    94,    66,    49,   110,    88,    76,    36,    43,
      76,    83,    62,    62,    64,    65,    66,    49,   749,    62,
      63,    94,   845,    95,  1235,    59,    60,    77,   906,    79,
    1696,    94,    95,    12,   837,  1701,   859,   843,    94,    49,
    1036,    65,   845,   906,    94,    95,   909,   910,   911,    94,
     913,    65,   915,  1038,   835,   836,   837,    65,  1400,    94,
     110,   906,    94,    56,   845,   885,     4,     5,    76,    86,
      87,    61,    65,  1739,  1114,    65,     3,     4,     5,     6,
       4,     5,    76,    76,    94,  1747,   110,   906,   906,   870,
     871,    56,    62,    63,   837,  1697,   110,  1166,  1167,  1168,
      65,    76,   845,   906,     4,     5,   909,    62,    63,  1451,
    1776,    76,   915,    40,    41,   935,    43,    56,     3,     4,
       5,    59,    60,   986,    76,   906,   110,   990,   909,    56,
     158,   159,    59,    60,   915,    59,    60,  1135,  1136,   924,
     925,   926,  1138,    13,    62,   906,  1144,  1145,   110,  1491,
      62,    63,    56,     3,     4,     5,    56,  1020,    28,    59,
      60,    88,    32,  1026,  1199,  1150,  1201,   990,    76,  1032,
      76,     3,     4,     5,    59,    60,   204,    62,   110,    49,
     111,  1004,    62,  1006,    65,  1008,     3,     4,     5,     6,
      62,    63,    62,    63,   111,    65,    66,    77,  1800,    79,
      50,   110,  1140,     4,     5,   110,  1082,   110,     9,    59,
      60,    66,     3,     4,     5,     6,  1236,  1237,    50,  1239,
    1096,    56,    66,  1026,    94,    95,    43,    59,    60,  1032,
      65,    32,  1038,    83,  1097,   113,  1099,  1100,    28,    56,
     110,    76,    59,    60,   110,  1026,    63,   110,    65,  1030,
    1031,  1032,    43,    28,   110,    56,    73,    32,    59,    60,
      76,  1084,    76,   994,    86,    87,    83,    56,    59,    60,
      76,    88,    73,   837,  1137,    56,   113,    94,     3,  1179,
    1180,   845,    83,  1146,    65,    62,    63,    62,    63,  1189,
    1562,  1562,  1155,    94,  1097,    76,  1027,    88,  1176,  1122,
    1178,    83,    84,    85,    86,    87,  1184,   110,  1186,   113,
      56,  1346,   110,  1176,  1244,  1178,  1097,    56,   346,    65,
      56,  1184,   110,  1186,  1359,    62,    65,    62,    63,     8,
      76,  1176,   110,  1178,  1137,    94,  1199,    76,  1201,    76,
      77,  1186,    79,  1146,  1150,  1221,  1209,    62,    62,    63,
      49,    66,    62,    63,  1135,  1136,  1137,  1176,  1176,  1178,
    1178,    76,    77,  1144,  1145,  1146,    63,  1186,  1186,   111,
    1178,    66,    62,  1176,    94,  1178,    56,   111,     3,     4,
       5,  1244,  1183,  1186,    76,     4,     5,    63,    38,    66,
     376,   377,  1135,  1136,  1137,  1176,  1199,  1178,  1201,    66,
      66,  1144,  1145,  1146,   110,  1186,   110,  1270,  1619,     3,
       4,     5,     6,    32,    63,  1176,   110,  1178,  1199,    66,
    1201,    66,  1183,  1184,  1299,  1186,   113,    62,   110,   457,
     458,  1307,  1175,  1371,    59,    60,    61,    56,    77,   110,
      59,    60,   110,     3,     4,     5,    77,   433,   434,    43,
      77,  1314,   110,    77,    73,    77,    50,     3,     4,     5,
      61,    65,   110,  1363,    83,    59,    60,  1270,  1810,  1369,
    1370,    62,    28,  1373,  1374,    94,    32,  1377,  1301,    65,
    1303,  1516,  1305,  1346,   110,    65,    95,  1268,  1269,  1270,
      50,   519,   520,  1371,    88,   110,  1359,   110,    88,    59,
      60,   113,  1380,   111,    50,   198,    62,    63,   890,  1240,
      66,  1314,   110,    59,    60,   110,  1727,  1380,    76,     7,
       8,     9,    49,    83,   113,    33,    34,    15,    36,   110,
     113,  1312,  1313,  1314,   110,  1380,   110,    83,   110,   110,
       3,     4,     5,  1346,     7,     8,     9,   110,   110,  1350,
      38,   110,  1333,  1334,    62,    65,  1359,    65,   111,    47,
     110,  1380,  1380,    71,   111,  1346,    63,    61,    76,    32,
     110,  1135,  1136,  1137,   110,    38,    49,  1380,  1359,    66,
    1144,  1145,  1146,  1617,  1447,  1619,   110,  1618,    94,  1350,
    1468,    94,    94,    56,    94,  1473,    59,    60,    61,  1380,
       3,     4,     5,     6,   632,   633,  1429,   111,  1484,   110,
    1473,  1175,     3,     4,     5,     6,    89,    90,   646,  1380,
      93,    94,    95,    96,   110,     8,    97,   110,  1473,   113,
     110,  1531,  1532,     3,     4,     5,   110,     7,     8,     9,
      43,   149,   105,   106,   107,  1508,   154,    50,   110,   157,
     158,   159,    43,  1516,  1473,  1473,    59,    60,   113,    50,
     110,  1727,   110,   110,  1395,  1396,  1397,  1398,    59,    60,
    1473,    65,    62,    62,    56,  1406,   184,   705,   110,   707,
      83,   709,   190,   110,  1724,    88,   110,    65,  1712,    59,
      60,  1556,  1473,  1556,   202,   203,   204,    88,   113,  1562,
      49,     3,     4,     5,   110,  1508,   110,  1583,   110,   110,
     218,  1556,  1473,  1516,    66,   110,    34,  1715,  1716,    94,
     228,     3,     4,     5,   110,  1506,  1507,  1508,  1604,  1605,
       3,     4,     5,     6,   110,  1516,   110,  1556,  1556,     3,
       4,     5,     6,   110,   730,   113,   110,  1610,  1556,   257,
     110,    65,    65,  1556,    56,  1618,    63,    59,    60,  1562,
      63,     9,    63,    17,   272,  1610,   111,   110,  1792,   110,
      43,  1795,    61,  1673,    56,  1556,    49,    59,    60,    43,
      63,  1562,    94,    56,  1660,  1661,    59,    60,    94,    63,
    1814,  1610,  1610,  1817,   487,    59,    60,    66,    56,  1619,
      73,    94,  1610,    18,   109,   313,   314,  1610,   104,   837,
      83,    63,    56,   110,    63,    88,  1617,   845,  1619,   805,
     110,    94,    95,    63,    88,  1556,    63,    63,  1691,  1610,
      62,   859,    94,  1709,  1697,  1698,    66,   113,   346,   110,
       3,     4,     5,   871,   872,   337,    63,     3,     4,     5,
    1750,  1674,  1697,   110,  1717,     3,     4,     5,    63,     7,
     368,   369,    12,    34,   110,    94,    63,  1732,    63,  1732,
      63,    63,  1603,    83,    84,    85,    86,    87,  1697,  1697,
       3,     4,     5,   110,     3,     4,     5,  1732,  1691,  1697,
       0,    39,   178,  1756,  1697,  1698,    59,    60,     3,    38,
       4,     5,  1778,    59,    60,     9,  1661,  1727,    56,  1097,
    1691,    59,    60,  1732,  1732,   779,  1697,  1698,   177,   470,
     173,   429,   430,   616,  1732,  1656,  1723,  1728,  1299,  1732,
    1184,  1674,   101,    56,  1715,  1716,    59,    60,    61,   447,
      59,    60,   450,   929,   145,  1646,  1082,   316,   456,   457,
     458,  1732,    56,  1756,   462,    59,    60,   826,  1341,   739,
    1691,  1169,     4,     5,  1184,  1380,  1697,  1698,  1470,    73,
    1352,  1353,  1715,  1716,  1717,  1756,   741,   670,   149,    83,
     680,   209,   675,   154,   363,   678,   679,   130,  1053,   497,
      32,   499,   500,  1551,  1488,     4,     5,  1379,     3,     4,
       5,  1732,  1384,  1031,  1032,   513,  1732,    49,   516,   637,
     518,   519,   520,   854,    56,  1747,   524,    59,    60,     3,
       4,     5,   530,   716,   532,  1756,  1744,   535,    -1,  1794,
    1447,    73,   203,   726,    -1,    -1,    -1,     4,     5,  1770,
      -1,    83,     9,     4,     5,    50,    -1,    56,   556,   557,
      59,    60,    94,    95,    59,    60,    -1,    -1,    -1,  1790,
      -1,    -1,    -1,    -1,    73,    32,    50,    -1,    -1,  1800,
      -1,    32,     8,     9,    83,    59,    60,    -1,    -1,    15,
      -1,  1463,  1464,    -1,  1466,  1467,    -1,  1469,    49,    56,
    1821,    -1,    59,    60,    -1,    56,    32,    -1,    59,    60,
     608,   272,    38,  1089,    -1,    -1,    73,    -1,  1136,  1137,
    1674,    47,    73,    -1,    -1,    -1,    83,  1145,  1146,    -1,
      -1,    -1,    83,   631,   632,   633,   365,    94,    -1,   368,
     369,    -1,    -1,    94,    95,    -1,    -1,    -1,   646,  1521,
    1522,    -1,    -1,    -1,    -1,    -1,    -1,  1175,     3,     4,
       5,  1715,  1716,  1717,    -1,    -1,   648,   649,    -1,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,     3,     4,     5,
       6,    -1,    -1,     3,     4,     5,     6,    -1,   696,   697,
     698,    -1,  1574,  1575,  1576,    -1,    -1,   705,    -1,   707,
      -1,   709,    -1,    -1,    59,    60,    -1,  1193,  1194,  1195,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    43,    50,   733,     4,     5,    -1,    49,
      -1,     9,    -1,    59,    60,    -1,    56,    -1,    -1,    59,
      60,  1269,  1270,     3,     4,     5,    -1,    -1,    -1,  1631,
    1632,    -1,    -1,    73,    32,    -1,    -1,   496,    -1,   498,
     499,   500,    88,    83,     3,     4,     5,     6,    88,    -1,
       9,    -1,    -1,    -1,    94,    95,   447,    -1,    56,   450,
      -1,    59,    60,    -1,    -1,  1313,  1314,   795,   796,    -1,
      -1,   462,    60,    32,    -1,    73,    56,   990,    -1,    59,
      60,    -1,     4,     5,    43,    83,    -1,     9,    -1,    -1,
      49,  1004,    -1,  1006,    -1,  1008,    94,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,   835,   836,   837,
      32,     3,     4,     5,    73,    -1,    -1,   845,     3,     4,
       5,    -1,   513,    -1,    83,   516,    -1,    49,    -1,    88,
      -1,   859,    -1,    -1,    56,    94,    95,    59,    60,   530,
     868,   869,   870,   871,   872,     7,     8,     9,   876,    -1,
      -1,    73,    -1,    15,    -1,    -1,    -1,     3,     4,     5,
       6,    83,   890,     9,    -1,    -1,  1768,    59,    60,    -1,
      32,  1084,    94,    95,    59,    60,    38,    81,    82,    83,
      84,    85,    86,    87,    -1,    47,    32,    -1,    -1,    -1,
       7,     8,     9,    -1,    -1,   183,    -1,    43,    15,     3,
       4,     5,     6,    49,    -1,     9,     6,   935,    -1,  1122,
      56,    -1,  1418,    59,    60,    32,    16,    -1,     3,     4,
       5,    38,    -1,    -1,    -1,    -1,    26,    73,    32,    -1,
      47,    -1,    -1,    33,    34,    -1,    36,    83,    38,    43,
      -1,    -1,    88,    -1,   232,    49,    63,    47,    94,    95,
      -1,    -1,    56,     4,     5,    59,    60,    -1,     9,    -1,
      60,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    71,     4,     5,    59,    60,    76,     9,    -1,    83,
      -1,    32,  1010,    -1,    88,  1013,    -1,    87,    -1,    89,
      94,    95,    -1,    -1,    94,    -1,  1024,    97,    49,    99,
      32,    -1,  1030,  1031,  1032,    56,    -1,    -1,    59,    60,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    49,    -1,    -1,
       4,     5,    73,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    83,    -1,    -1,    -1,   795,    -1,    -1,    -1,
     140,    73,   142,    94,    95,   145,   146,    -1,   148,   149,
      -1,    83,    -1,   153,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    94,    95,    -1,    49,    -1,    -1,  1096,    -1,
      -1,    -1,    56,   173,    -1,    59,    60,   177,    -1,    -1,
      -1,    -1,    -1,   183,   184,    -1,    -1,    -1,  1301,    73,
    1303,  1103,  1305,    -1,    -1,     3,     4,     5,     6,    83,
      -1,     9,   202,   203,   204,  1133,  1134,  1135,  1136,  1137,
      94,    95,    -1,    -1,  1142,    -1,  1144,  1145,  1146,    -1,
      -1,    -1,    -1,    -1,    32,    -1,  1674,    -1,  1156,  1157,
    1158,    -1,   232,    -1,    -1,    43,    -1,    -1,     4,     5,
     428,    49,    -1,     9,    -1,   836,    -1,  1175,    56,   249,
      -1,    59,    60,    -1,    -1,    -1,  1184,    -1,    -1,   259,
      -1,    -1,    -1,    -1,    -1,    73,    32,    -1,  1716,  1717,
      -1,    -1,   272,    -1,    -1,    83,   935,   868,   869,    -1,
      88,    -1,    -1,    49,    -1,   876,    94,    95,    -1,    -1,
      56,    -1,    -1,    59,    60,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    73,   496,    -1,
     498,   499,  1224,    -1,   314,   315,  1429,    83,     3,     4,
       5,     6,    -1,    -1,   512,    32,    -1,    -1,    94,    95,
      -1,    -1,    -1,   521,    -1,    -1,    43,   525,    -1,    -1,
    1268,  1269,  1270,    -1,    -1,   533,    -1,    32,    -1,    56,
    1009,    -1,    59,    60,    -1,    -1,    -1,    -1,    43,   359,
      -1,    -1,    -1,   363,    49,   365,    73,    -1,   368,   369,
      -1,    56,    -1,    -1,    59,    60,    83,  1036,   378,   379,
      -1,    88,  1310,  1311,  1312,  1313,  1314,    94,    73,  1317,
      81,    82,    83,    84,    85,    86,    87,    -1,    83,    -1,
      -1,    -1,    -1,    88,    -1,  1333,  1334,  1335,    -1,    94,
      95,    -1,     4,     5,    -1,    -1,   416,     9,    -1,    -1,
      -1,    -1,    -1,    -1,  1352,  1353,   426,    -1,   428,   429,
      -1,    -1,    -1,    -1,    -1,   435,    -1,   437,    -1,    84,
      32,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,
     450,  1379,     3,     4,     5,     6,  1384,    49,    -1,    -1,
      -1,    -1,   462,    -1,    56,    -1,   111,    59,    60,    -1,
     470,    -1,    -1,  1132,    -1,    -1,    -1,    -1,    -1,  1138,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    83,    43,    -1,   139,    -1,   496,   497,   498,   499,
     500,    -1,    94,    95,   504,    56,    -1,   152,    59,    60,
      -1,    -1,   512,   513,  1442,  1443,   516,  1445,   518,   519,
     520,   521,    -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,
     530,    -1,    -1,   533,    -1,  1463,  1464,    -1,  1466,  1467,
      -1,  1469,  1133,  1134,   732,   545,    -1,    -1,    -1,    -1,
      -1,  1142,     3,     4,     5,     6,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    -1,   212,    -1,   569,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,  1506,  1507,
    1508,     3,     4,     5,    -1,     7,     8,     9,    -1,    40,
      41,  1250,    43,  1521,  1522,    -1,    -1,    -1,    -1,  1258,
      -1,    32,    -1,   248,    -1,    56,    -1,   795,    59,    60,
      32,    -1,    43,   613,    -1,   615,    38,    -1,    49,    -1,
      -1,   621,   622,   623,   624,    56,    -1,    -1,    59,    60,
      -1,     7,     8,     9,   279,    -1,    -1,    59,    60,    15,
      -1,    -1,    73,   643,    -1,    -1,  1574,  1575,  1576,    -1,
    1309,    -1,    83,    -1,    -1,    -1,    32,    88,    -1,  1318,
      -1,     6,    38,    94,    95,     3,     4,     5,     6,    -1,
      -1,    47,    -1,    -1,    -1,    -1,   864,    -1,    -1,   867,
     680,    -1,   682,     3,     4,     5,     6,    63,    -1,     9,
    1618,  1619,    -1,    38,   694,   883,   696,   697,   698,    -1,
      -1,    -1,    47,  1631,  1632,    43,    -1,    -1,    -1,   709,
      -1,    -1,    32,   713,    -1,    60,    -1,    62,    56,  1310,
    1311,    59,    60,    43,    -1,    63,  1317,    -1,   373,    49,
      -1,    -1,   732,    -1,    -1,    73,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    83,  1674,    -1,   393,    -1,
      88,    -1,    -1,    73,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    83,     3,     4,     5,     6,    88,    -1,
       9,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,   779,
      -1,   781,    -1,    -1,    -1,    -1,   786,  1715,  1716,  1717,
      -1,    -1,    -1,    32,   439,   795,   796,   142,    -1,  1727,
      -1,    -1,    -1,   148,    43,    -1,     3,     4,     5,     6,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    73,   835,   836,   837,   183,   184,
    1768,    -1,    -1,   843,    83,   845,    43,    -1,    -1,    88,
    1509,  1510,    -1,    50,    -1,    94,    95,    -1,    -1,    -1,
      -1,    -1,    59,    60,   864,    -1,    -1,   867,   868,   869,
     870,   871,   872,    -1,    -1,    -1,   876,    -1,    -1,    -1,
      -1,    -1,    -1,   883,    -1,    -1,    83,   232,    -1,    -1,
      -1,    88,    -1,     4,     5,    -1,    -1,     8,     9,     3,
       4,     5,     6,    -1,    15,  1564,   906,    -1,   553,   909,
     910,   911,    -1,   913,    -1,   915,    -1,    -1,    29,    -1,
      31,    32,    68,    -1,   924,   925,   926,    38,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   935,    47,    -1,    -1,    43,
      -1,    -1,    -1,    -1,  1132,    56,    -1,    -1,    59,    60,
    1138,    -1,    56,    -1,    -1,    59,    60,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,   611,    -1,    -1,    73,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    94,    88,    29,   986,    31,    32,    33,
      94,    -1,    -1,    -1,    38,  1183,    -1,    -1,    -1,    43,
      -1,    -1,   148,    47,    -1,    -1,    50,    -1,    -1,  1009,
    1010,    -1,    56,  1013,    -1,    59,    60,    -1,   164,    -1,
    1020,    -1,    -1,    -1,  1024,    -1,  1026,   202,   203,    73,
    1030,  1031,  1032,    -1,   379,    -1,  1036,    -1,  1038,    83,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,   693,    -1,
      94,    -1,    -1,    -1,    -1,    99,     1,    -1,     3,     4,
       5,     6,    -1,     8,    -1,    -1,    -1,   712,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,   230,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   437,    -1,    -1,    -1,    -1,  1097,    43,  1099,
    1100,   247,    -1,    -1,    -1,    50,    -1,     3,     4,     5,
       6,    56,   258,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,  1309,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,
    1318,    -1,  1132,  1133,  1134,  1135,  1136,  1137,  1138,    -1,
      -1,    -1,  1142,    88,  1144,  1145,  1146,    43,  1336,  1337,
    1150,   496,   497,   498,   499,  1155,  1156,  1157,  1158,   504,
      56,    -1,  1350,    59,    60,    -1,    -1,   512,    -1,    65,
      -1,    -1,  1172,    -1,    -1,  1175,  1176,    73,  1178,    -1,
     525,    -1,    -1,  1183,  1184,    -1,  1186,    83,   533,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,   842,    94,  1199,
      -1,  1201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1209,
      79,    80,    81,    82,    83,    84,    85,    86,    87,     3,
       4,     5,     6,    -1,   569,    -1,    -1,    -1,   873,     4,
       5,    -1,     7,     8,     9,    -1,  1236,  1237,    13,  1239,
      15,    -1,    -1,    -1,  1244,    -1,     3,     4,     5,     6,
    1250,    -1,    -1,    -1,    29,    -1,    31,    32,  1258,    43,
      -1,  1449,    -1,    38,    -1,    -1,    50,    -1,  1268,  1269,
    1270,    -1,    47,    -1,    49,    59,    60,  1465,    -1,    -1,
      -1,    56,   927,    -1,    59,    60,    43,    -1,    -1,    -1,
      -1,   437,    -1,    50,    -1,    -1,    -1,    -1,    73,    83,
     446,    -1,    59,    60,    88,    -1,    -1,    -1,    83,  1309,
    1310,  1311,  1312,  1313,  1314,    -1,    -1,  1317,  1318,    94,
      95,  1509,  1510,    -1,    -1,    -1,    83,     3,     4,     5,
       6,    88,   478,  1333,  1334,  1335,  1336,  1337,   513,    -1,
      -1,   516,    -1,   518,   519,    -1,  1346,    -1,    -1,    -1,
    1350,    -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,  1359,
      -1,    -1,    -1,    -1,    -1,    -1,   512,    43,    -1,    -1,
      -1,    -1,  1372,    -1,    50,   521,  1564,    -1,    -1,    -1,
    1380,     6,    -1,    59,    60,    -1,    -1,   732,    -1,    -1,
      -1,    16,  1037,    -1,  1039,    -1,   542,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    83,    33,    34,
      -1,    36,    88,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,   569,    -1,    -1,    -1,    -1,    -1,  1617,
      -1,  1619,    -1,    -1,    -1,    60,    -1,    62,    -1,    -1,
      -1,    -1,  1442,  1443,    -1,  1445,    71,  1447,    -1,  1449,
     795,    76,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    89,  1465,    -1,    -1,    -1,    94,
    1470,    -1,    97,  1473,    99,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       3,     4,     5,     6,    -1,  1140,    43,    -1,  1143,    -1,
      -1,    -1,    -1,    50,    -1,    -1,  1506,  1507,  1508,  1509,
    1510,    -1,    59,    60,    -1,    -1,  1516,   142,    -1,   864,
     145,   146,    -1,   148,   149,    -1,    -1,    -1,    -1,   154,
      43,    -1,   157,   158,   159,    -1,    83,    50,   883,    -1,
    1728,    88,    -1,    -1,    -1,    -1,    59,    60,   173,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,   183,   184,
      -1,   906,  1562,    -1,  1564,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    88,    -1,   202,   203,   204,
      15,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    29,    -1,    31,    32,    33,    15,
      -1,    -1,    -1,    38,    39,    -1,    -1,   232,    43,    -1,
      -1,    -1,    47,    48,    -1,    50,    32,  1617,  1618,  1619,
      -1,    56,    38,    -1,    59,    60,    -1,    43,    63,    -1,
      65,    47,    -1,    49,    -1,    -1,    -1,    -1,    73,    -1,
      56,    -1,    -1,    59,    60,    -1,    -1,   272,    83,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    73,    -1,    94,
     835,   836,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    88,    -1,  1674,    -1,   111,    -1,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,
     315,    -1,    -1,   868,   869,   870,   871,    -1,    -1,    -1,
      -1,   876,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,     8,     9,    -1,  1715,  1716,  1717,   864,    15,
      -1,   867,    -1,    -1,    -1,    -1,  1371,    -1,  1728,    -1,
      -1,    -1,    -1,    29,   359,    31,    32,   883,   363,    -1,
     365,    -1,    38,   368,   369,    -1,    -1,    -1,    -1,   374,
      -1,    47,    -1,   378,   379,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,   394,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    -1,  1132,    -1,    -1,
      -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    94,  1444,
      -1,   426,    32,   428,   429,    -1,    -1,    -1,    38,    -1,
     435,    -1,   437,    43,    -1,    -1,    -1,    47,    -1,    49,
      -1,    -1,   447,  1468,    -1,   450,    56,    -1,    -1,    59,
      60,  1176,    -1,  1178,    -1,    -1,    -1,   462,  1183,  1184,
      -1,  1186,    -1,    73,    -1,   470,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,  1009,    94,    95,    -1,    -1,    -1,   696,
     697,   496,   497,   498,   499,   500,    -1,    -1,    -1,   504,
      -1,    -1,    -1,     3,     4,     5,     6,   512,   513,     9,
    1036,   516,    -1,   518,   519,   520,   521,    -1,    -1,    -1,
     525,    -1,    -1,    -1,    -1,   530,    -1,    -1,   533,    -1,
      -1,    -1,    32,    -1,    -1,     3,     4,     5,     6,    -1,
     545,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,   554,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,   569,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    43,    -1,    -1,  1133,  1134,
    1135,  1136,    50,    83,  1309,    -1,    -1,  1142,    88,  1144,
    1145,    59,    60,  1318,    94,    -1,    -1,    -1,    -1,    -1,
      -1,  1156,  1157,  1158,    -1,    -1,  1132,    -1,    -1,    -1,
     615,    -1,  1138,    -1,    -1,    83,   621,   622,   623,   624,
      88,    -1,    -1,    -1,    -1,  1350,    -1,    -1,   835,   836,
      -1,     4,     5,    -1,     7,     8,     9,    -1,   643,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,  1380,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    47,   680,    49,   682,    -1,    32,
      -1,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,
      43,   696,   697,   698,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    56,   709,    -1,    59,    60,    -1,    43,
      83,    -1,    94,    -1,    -1,    97,    50,    99,    -1,   724,
      73,    94,    95,    -1,  1250,    59,    60,   732,    -1,    -1,
      83,    -1,  1258,    -1,    -1,    88,    -1,    -1,    -1,    -1,
    1465,    94,    -1,    -1,    -1,  1470,    -1,    -1,  1473,    83,
      -1,    -1,    -1,    -1,    88,  1310,  1311,  1312,  1313,    -1,
      -1,    -1,  1317,   145,   146,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,   779,    -1,   781,    -1,  1333,  1334,
      -1,    -1,   787,  1309,    -1,    -1,    -1,    -1,    -1,    -1,
     795,   796,  1318,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1010,    -1,    43,  1013,    -1,    -1,    -1,
    1336,  1337,    -1,    -1,    -1,    -1,   821,  1024,    56,    -1,
      -1,    59,    60,  1030,  1031,    -1,    -1,    -1,    -1,    -1,
     835,   836,   837,    -1,    -1,    73,    -1,    -1,    -1,    -1,
     845,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,   864,
      -1,    -1,   867,   868,   869,   870,   871,   872,    -1,    -1,
      -1,   876,    -1,    -1,    -1,    -1,    -1,    -1,   883,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1442,  1443,    -1,
    1445,    -1,  1617,  1618,  1619,    -1,    -1,    -1,    -1,    -1,
      -1,   906,    -1,    -1,   909,   910,   911,    -1,   913,    -1,
     915,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   924,
     925,   926,    -1,  1449,    -1,    -1,  1133,  1134,  1135,  1136,
     935,    -1,    -1,    -1,    -1,  1142,    -1,  1144,  1145,    -1,
      -1,   323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1506,  1507,    -1,    -1,   337,    -1,   339,    -1,    -1,
     342,   343,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,
     352,    -1,    -1,    86,    -1,    -1,    -1,    -1,   360,    -1,
      -1,   986,    -1,  1509,  1510,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,   378,    -1,    -1,    -1,
      15,    -1,    -1,  1728,  1009,  1010,    -1,    -1,  1013,    -1,
      -1,    -1,    -1,    -1,    29,  1020,    31,    32,    33,  1024,
      -1,  1026,    -1,    38,    -1,  1030,  1031,  1032,    43,    -1,
      -1,  1036,    47,  1038,    -1,    50,    -1,    -1,  1564,    -1,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   167,    -1,    -1,    -1,    73,    -1,
      -1,  1268,  1269,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,   200,    -1,    -1,
      -1,    -1,  1097,    -1,  1099,  1100,    -1,    -1,    -1,    -1,
     213,    -1,    -1,  1310,  1311,  1312,  1313,    -1,    -1,    -1,
    1317,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,    -1,    -1,    -1,  1142,    -1,  1144,
    1145,  1146,    -1,    -1,    -1,  1150,    -1,    -1,    -1,    -1,
    1155,  1156,  1157,  1158,    13,    -1,    -1,    -1,    -1,    -1,
    1715,  1716,    -1,   545,  1169,    -1,    -1,  1172,    -1,    -1,
    1175,  1176,    -1,  1178,    -1,    -1,    -1,    -1,  1183,  1184,
      -1,  1186,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,  1199,    -1,  1201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1209,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,  1236,  1237,   615,  1239,  1442,  1443,    -1,  1445,  1244,
      -1,    -1,    -1,    -1,    -1,  1250,    -1,    -1,    -1,   631,
     632,    -1,    -1,  1258,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   643,    -1,  1268,  1269,  1270,   648,   649,    -1,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,    -1,     1,    -1,
      -1,     4,     5,    -1,  1299,     8,     9,    -1,    -1,  1506,
    1507,    -1,    15,    -1,  1309,  1310,  1311,  1312,  1313,  1314,
       4,     5,  1317,  1318,     8,     9,    29,    -1,    31,    32,
      -1,    15,    -1,    -1,    -1,    38,    -1,    -1,  1333,  1334,
    1335,  1336,  1337,    -1,    47,    29,  1341,    31,    32,    -1,
      -1,  1346,     6,    56,    38,  1350,    59,    60,    -1,    -1,
      -1,    -1,    -1,    47,  1359,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    59,    60,    -1,   114,    33,
      34,    -1,    36,    -1,    38,  1380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    76,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    60,    -1,    62,   781,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
     523,    -1,    -1,    15,    -1,   528,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    38,  1442,  1443,    -1,
    1445,    43,  1447,    -1,  1449,    47,   559,    -1,    -1,    -1,
      -1,    -1,   198,   566,    56,    -1,    -1,    59,    60,    -1,
    1465,    63,    -1,    -1,    -1,  1470,    -1,    -1,  1473,    -1,
      -1,    73,    -1,    -1,    -1,   139,   140,   223,   142,    -1,
      -1,    83,    -1,    -1,   148,   149,    88,    -1,   152,   153,
     154,    -1,    94,   157,   158,   159,   609,   610,    -1,   612,
     164,  1506,  1507,  1508,  1509,  1510,    -1,    -1,    -1,   173,
      -1,  1516,    -1,   177,     3,     4,     5,     6,    -1,   183,
     184,    -1,     4,     5,    -1,     7,     8,     9,   910,   911,
      -1,   913,    -1,    15,    -1,    -1,    -1,    -1,   202,   203,
     204,    -1,    -1,    32,    -1,    -1,    -1,    29,   212,    31,
      32,    -1,    -1,    -1,    43,    -1,    38,  1562,    -1,  1564,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    56,   232,    -1,
      59,    60,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,   701,   702,
      -1,    -1,    -1,    -1,    83,    -1,    -1,   710,    -1,    88,
     346,  1606,    -1,    -1,    -1,    94,    -1,    -1,   272,    -1,
      -1,    -1,  1617,  1618,  1619,   279,   998,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1030,  1031,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,  1674,
      -1,    -1,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,
     426,    56,   346,    -1,    59,    60,    -1,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,   363,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    83,   373,
    1715,  1716,  1717,    88,    -1,   379,    -1,    -1,  1100,    94,
      -1,  1103,    -1,  1728,    -1,    -1,   839,    -1,    -1,   393,
      -1,     3,     4,     5,     6,    -1,   111,     9,    75,    76,
      43,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,   416,    56,    -1,    -1,    59,    60,   504,    -1,
      32,   874,  1144,  1145,   428,    -1,    -1,    -1,    -1,    -1,
      73,    43,    -1,   437,    -1,   439,    -1,    -1,    -1,    -1,
      83,    -1,   446,   447,    56,    88,   450,    59,    60,    -1,
      -1,    94,   456,   457,   458,    -1,    -1,    -1,   462,    -1,
      -1,    73,    -1,   916,    -1,   918,   470,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,   496,   497,   498,   499,    -1,    -1,    -1,    -1,
     504,    -1,  1224,    -1,    -1,    -1,    -1,    -1,   512,   513,
      -1,    -1,   516,    -1,   518,   519,   520,   521,    -1,    -1,
    1242,   525,  1244,    -1,    -1,    -1,   530,    -1,    43,   533,
      -1,    -1,    -1,    -1,   620,   621,   622,   623,   624,   992,
     993,    56,   995,    -1,    59,    60,    -1,   633,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
     646,    -1,    -1,    -1,    -1,   569,    -1,    -1,    83,    -1,
      -1,    -1,  1025,    88,    72,    73,    74,    75,    76,    94,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       6,    -1,    -1,   679,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,   698,    -1,    -1,    -1,    -1,    33,    34,   705,
      36,   707,    38,   709,    32,    -1,    -1,   631,   632,   633,
      38,    47,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      -1,    49,   646,    -1,    60,    -1,    62,    -1,    56,    -1,
      -1,    59,    60,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    73,    -1,    15,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,    29,    -1,    31,    32,    33,    94,    -1,  1141,   693,
      38,    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,   705,    50,   707,    -1,   709,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,    -1,
       3,     4,     5,     6,    -1,    73,   142,    -1,   732,    -1,
      -1,    -1,   148,   149,    -1,    83,    -1,   153,   154,    -1,
      88,   157,   158,   159,    -1,    -1,    94,    -1,    -1,    32,
      -1,   837,    -1,    -1,    -1,    -1,    -1,   173,    -1,   845,
      43,   177,    -1,   111,    -1,    -1,    -1,   183,   184,    -1,
      -1,    -1,    -1,    56,    -1,   779,    59,    60,    -1,    -1,
      -1,    -1,   786,    -1,    -1,    -1,   202,   203,   204,    -1,
      73,   795,     4,     5,    -1,    -1,     8,     9,    -1,    -1,
      83,  1254,    -1,    15,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,   232,    29,    -1,    31,
      32,    -1,    -1,   909,    -1,    -1,    38,    -1,    -1,   915,
      -1,   835,   836,   837,    -1,    47,    -1,    49,   842,   843,
      -1,   845,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,   859,   272,    -1,    -1,    -1,
     864,    73,  1315,   867,   868,   869,   870,   871,   872,    -1,
      -1,    83,   876,    -1,    -1,    -1,    -1,    -1,    -1,   883,
      -1,    -1,    94,    95,    -1,    -1,    -1,    -1,  1610,    -1,
      -1,    -1,  1345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     986,    -1,   906,    -1,    -1,  1358,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    15,    -1,
      -1,    -1,  1385,    -1,  1020,    -1,  1389,    -1,    -1,    -1,
    1026,    -1,    29,    -1,    31,    32,  1032,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    -1,   374,    -1,
      47,    -1,    49,   379,    -1,    -1,    -1,    -1,    -1,    56,
      -1,  1424,    59,    60,    -1,    -1,    -1,    -1,   394,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,  1715,  1716,    -1,    83,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,    -1,
      -1,  1097,   428,  1099,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   437,    -1,    -1,  1477,  1478,  1030,  1031,  1032,    -1,
      -1,   447,  1036,  1037,   450,    -1,     3,     4,     5,     6,
      -1,    36,    -1,    -1,    -1,    -1,   462,    -1,    -1,    -1,
      -1,  1137,    -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,
    1146,  1514,  1515,    -1,    -1,    60,    -1,  1520,    -1,  1155,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
     496,   497,   498,   499,    -1,    -1,    -1,    -1,   504,    56,
      -1,    -1,    59,    60,    -1,    -1,   512,   513,    65,    -1,
     516,    -1,   518,   519,   520,    -1,    73,    -1,    -1,   525,
      -1,    -1,    -1,  1199,   530,  1201,    83,   533,    -1,    -1,
      -1,    88,    -1,  1209,    -1,    -1,    -1,    94,  1132,  1133,
    1134,  1135,  1136,  1137,  1138,    -1,  1140,    -1,  1142,  1143,
    1144,  1145,  1146,    -1,    -1,    -1,  1150,    -1,    -1,    -1,
      -1,    -1,    -1,   569,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,
      -1,  1175,  1176,    -1,  1178,    -1,  1629,    -1,    -1,  1183,
    1184,    -1,  1186,    -1,  1270,    -1,    -1,     1,   183,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,  1314,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,   232,    -1,    -1,
      -1,    -1,    56,     4,     5,    59,    60,     8,     9,    63,
      -1,    65,    -1,    -1,    15,    -1,    -1,    -1,    -1,    73,
    1346,    -1,    -1,    -1,  1268,  1269,  1270,    -1,    -1,    83,
      -1,    32,    -1,  1359,    88,    -1,    -1,    38,   694,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,   111,    59,    60,
      -1,    -1,    -1,    -1,    -1,  1309,  1310,  1311,  1312,  1313,
    1314,    -1,    73,  1317,  1318,    -1,   732,    -1,    -1,    -1,
     315,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,  1350,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,  1447,    -1,    -1,    -1,    -1,    -1,  1371,  1372,    -1,
     365,    -1,    -1,   368,   369,    -1,  1380,    -1,    -1,   795,
      -1,    -1,   281,   282,   283,   284,   285,   286,    -1,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
      -1,   310,   311,    -1,    -1,     3,     4,     5,     6,   835,
     836,   837,  1508,    -1,    -1,    -1,    -1,   843,    -1,   845,
    1516,     4,     5,   428,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    32,    -1,    -1,    -1,   864,    -1,
      -1,    -1,   868,   869,    -1,    43,    29,    -1,    31,    32,
     876,  1465,    -1,    -1,  1468,    38,  1470,   883,    56,  1473,
      -1,    59,    60,    -1,    47,    -1,  1562,    50,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    73,    59,    60,    -1,    -1,
     906,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,   496,    -1,   498,   499,   500,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,   513,    -1,
      -1,   516,    -1,   518,   519,   520,   521,    -1,    -1,    -1,
     525,    -1,    -1,    -1,    -1,   530,    -1,     1,   533,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    -1,    63,
      64,     3,     4,     5,     6,    -1,    70,    -1,    -1,    73,
      -1,    -1,    60,  1617,  1618,  1619,    -1,    81,    82,    83,
      -1,    -1,  1038,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,  1717,    -1,    -1,    98,    -1,    84,    -1,    -1,    87,
      -1,    43,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    63,    -1,   111,    -1,   113,    -1,    -1,    -1,    -1,
    1674,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,   583,    -1,    88,   682,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   696,   697,   698,    -1,    -1,   605,    -1,    -1,    -1,
      -1,  1715,  1716,  1717,   709,   614,  1132,  1133,  1134,  1135,
    1136,  1137,    -1,    -1,  1728,    -1,  1142,    -1,  1144,  1145,
    1146,    -1,    -1,    -1,  1150,   183,    -1,   732,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,   202,   203,   204,    15,    -1,  1175,
    1176,    -1,  1178,    -1,   212,    -1,    -1,  1183,  1184,    -1,
    1186,    29,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,   232,    43,    -1,    -1,    -1,    47,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
     795,    59,    60,    -1,    -1,    63,    -1,    65,    -1,    -1,
      -1,   259,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,   279,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
     835,   836,   837,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     845,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    15,    -1,    -1,   864,
      -1,    -1,   867,   868,   869,   870,   871,   872,    -1,    -1,
      29,   876,    31,    32,    -1,    -1,    -1,    -1,   883,    38,
      -1,    -1,    -1,  1309,  1310,  1311,    -1,    -1,    47,    -1,
      -1,  1317,  1318,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      59,    60,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,   373,   374,    15,    -1,   924,
     925,   926,    -1,    -1,  1350,    -1,    -1,    -1,    -1,    -1,
     935,    29,    -1,    31,    32,   393,   394,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    43,  1372,    -1,    -1,    47,
      -1,    -1,    50,    -1,  1380,    -1,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,
     428,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1009,  1010,    -1,    -1,  1013,    -1,
      -1,   920,   921,     3,     4,     5,     6,    -1,    -1,  1024,
      -1,    -1,    -1,    -1,    -1,  1030,  1031,  1032,    -1,    -1,
      -1,  1036,    -1,    -1,    -1,    -1,    -1,    -1,   496,  1465,
     498,   499,    32,    -1,  1470,     4,     5,  1473,    -1,     8,
       9,    -1,    -1,    43,   512,   513,    15,    -1,   516,    -1,
     518,   519,   520,   521,    -1,    -1,    56,   525,    -1,    59,
      60,    -1,   530,    32,    -1,   533,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    47,    -1,
      49,     4,     5,    83,    -1,     8,     9,    56,    88,    -1,
      59,    60,    15,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    83,    38,    -1,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,    47,    94,    95,  1142,    -1,  1144,
    1145,  1146,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,
      -1,  1156,  1157,  1158,    73,    74,    75,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
    1175,   387,    -1,    -1,    -1,    -1,    -1,    -1,  1183,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,  1617,  1618,  1619,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    46,    47,    48,    -1,    50,
      -1,  1236,  1237,    -1,  1239,    56,    57,    -1,    59,    60,
      -1,    -1,    63,    -1,    -1,  1250,    -1,    -1,  1674,    -1,
      -1,    -1,    73,  1258,   712,   713,    -1,    -1,    -1,    -1,
      -1,    -1,    83,  1268,  1269,  1270,    -1,    88,    -1,    -1,
     486,   487,    -1,    94,   732,    -1,    -1,    -1,    99,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,  1715,
    1716,  1717,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1728,    -1,  1309,  1310,  1311,  1312,  1313,  1314,
      -1,    32,  1317,  1318,    -1,    -1,     4,     5,    -1,     7,
       8,     9,    43,    -1,    -1,    13,    -1,    15,  1333,  1334,
    1335,  1336,  1337,    -1,    -1,    56,    -1,   795,    59,    60,
      -1,    29,    -1,    31,    32,  1350,    -1,    -1,    -1,    -1,
      38,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    56,    -1,
      -1,    59,    60,    94,    -1,    -1,    -1,   835,   836,   837,
      -1,    -1,    -1,    -1,   842,   843,    -1,   845,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
     616,     9,    -1,   619,    -1,    -1,   864,    -1,    -1,   867,
     868,   869,   870,   871,   872,   873,    -1,    -1,   876,    -1,
      -1,    -1,    -1,    -1,    32,   883,    -1,    -1,    -1,   645,
      -1,    -1,    -1,    -1,    -1,    43,    -1,  1442,  1443,    -1,
    1445,    -1,    -1,    -1,  1449,    -1,    -1,   905,    56,    -1,
      -1,    59,    60,    -1,   670,    -1,    -1,    -1,    -1,   675,
    1465,    -1,   678,   679,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,   709,    -1,    -1,    -1,    -1,    -1,    -1,
     716,  1506,  1507,  1508,  1509,  1510,    -1,    -1,    -1,    -1,
     726,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,   745,
     746,   747,   748,    -1,   750,   751,   752,   753,   754,   755,
     756,   757,   758,   759,   760,   761,   762,   763,   764,   765,
     766,   767,   768,    -1,    -1,    -1,    -1,    -1,    -1,  1564,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,  1037,
    1038,  1039,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,
     826,    -1,  1617,    56,  1619,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,   365,    -1,    -1,   368,   369,   845,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,   859,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    94,    95,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,  1674,
      -1,    -1,    -1,    -1,  1132,  1133,  1134,  1135,  1136,  1137,
    1138,    -1,  1140,    -1,  1142,  1143,  1144,  1145,  1146,    -1,
      -1,    -1,  1150,    -1,    -1,    -1,    -1,    -1,  1156,  1157,
    1158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1715,  1716,  1717,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1728,    -1,  1183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   952,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    15,   496,    -1,   498,   499,   500,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    -1,   989,   990,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    16,  1004,    -1,
    1006,    -1,  1008,    -1,    -1,    56,    25,    26,    59,    60,
      -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    83,     9,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    94,    -1,  1051,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,  1309,  1310,  1311,  1312,  1313,  1314,    43,    -1,  1317,
    1318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1084,    -1,
      56,    -1,    -1,    59,    60,  1333,  1334,  1335,  1336,  1337,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,  1350,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,   130,    88,   132,    -1,    -1,  1122,    -1,    94,    -1,
     139,   140,    -1,  1371,    -1,    -1,    -1,    -1,    -1,   148,
     149,    -1,    -1,   152,   153,   154,    -1,   156,   157,   158,
     159,    -1,    -1,    -1,    -1,    -1,  1152,  1153,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,   696,   697,   698,  1174,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,   709,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,  1442,  1443,  1444,  1445,    74,    75,
      76,  1449,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    -1,  1220,  1221,    -1,  1465,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
     249,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    15,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,  1506,  1507,
    1508,  1509,  1510,    29,   795,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,  1280,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    59,    60,  1301,   315,  1303,    -1,  1305,
      -1,  1307,    -1,    -1,   835,   836,   837,    73,    -1,    -1,
      -1,    -1,    -1,    -1,   845,    -1,  1564,    83,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,
      -1,    -1,  1338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   363,    -1,   365,    -1,    -1,   368,
      71,    72,    73,    74,    75,    76,  1362,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,  1617,
      -1,  1619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,  1400,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,   935,    -1,    -1,    29,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    38,    -1,   437,    -1,
     439,    43,    -1,  1429,    -1,    47,  1674,    49,   447,    -1,
      -1,   450,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,   462,    -1,  1451,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,  1461,  1462,     3,     4,     5,
       6,    83,    -1,     9,    -1,    -1,    88,  1715,  1716,  1717,
      -1,    -1,    94,    95,    -1,    -1,    -1,    -1,  1009,  1010,
    1728,    -1,  1013,    -1,    -1,  1491,    32,    -1,     3,     4,
       5,     6,    -1,  1024,     9,    -1,    -1,    43,    -1,  1030,
    1031,  1032,    -1,    -1,    -1,  1036,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    59,    60,    -1,    -1,    32,    -1,    -1,
      -1,  1527,    -1,    -1,    -1,    -1,    -1,    73,    43,    -1,
      -1,    -1,    -1,    -1,   553,   554,    -1,    83,    -1,    -1,
      -1,    56,    88,    -1,    59,    60,    -1,    -1,    94,    -1,
     569,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1572,  1573,    83,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   611,  1599,   613,    -1,    -1,    -1,    -1,    -1,
      -1,  1132,  1133,  1134,  1135,  1136,  1137,  1138,    -1,    -1,
      -1,  1142,    -1,  1144,  1145,  1146,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,  1637,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    -1,   682,    -1,    -1,    -1,    38,  1674,    -1,
      -1,    -1,    43,    -1,   693,   694,    47,   696,   697,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    59,    60,
      -1,    -1,    -1,  1699,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    -1,  1250,
      -1,    -1,    -1,    94,    -1,    -1,    -1,  1258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1268,  1269,  1270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     779,    -1,    -1,    -1,    -1,    -1,    -1,   786,   787,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   796,  1309,  1310,
    1311,  1312,  1313,  1314,    -1,    -1,  1317,  1318,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   821,    -1,  1810,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    32,   905,    81,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    98,   924,   925,   926,   927,    -1,
      -1,  1442,  1443,    -1,  1445,    -1,   935,    -1,   112,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1506,  1507,  1508,  1509,  1510,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
    1009,  1010,   113,    13,  1013,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1024,    26,    -1,    28,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,  1036,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    49,
      -1,    -1,    -1,  1564,    -1,    -1,    56,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    -1,
      -1,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   109,
    1169,    -1,    -1,  1172,    -1,    -1,  1175,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,  1236,  1237,    -1,
    1239,    88,    89,    90,    -1,    -1,    -1,    94,    95,    -1,
      -1,  1250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1258,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,  1268,
    1269,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1299,    -1,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    -1,    -1,    64,    -1,    -1,
      -1,    -1,  1341,    70,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,
      -1,    88,    89,    90,    -1,    -1,    -1,    94,    95,    -1,
      -1,    -1,    -1,  1372,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,  1468,
      -1,  1470,    -1,    88,    89,    90,    -1,    -1,     1,    94,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    -1,    -1,   110,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
       1,    94,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,
      -1,    -1,    -1,    94,    95,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    14,    15,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,     1,    94,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    95,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    -1,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    -1,    -1,    -1,    94,    -1,     1,    -1,     3,
       4,     5,     6,   102,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,     1,
      94,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    61,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,     1,    94,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,     1,    94,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,
      88,    89,    90,    -1,    -1,     1,    94,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,     1,    94,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,     1,
      94,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,     1,    94,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,   110,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,     1,    94,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,
      88,    89,    90,    -1,    -1,     1,    94,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,     1,    -1,    73,     4,     5,
      -1,    -1,     8,     9,    -1,    81,    82,    83,    -1,    15,
      -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40,    41,   112,    -1,    -1,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    59,    60,    -1,    62,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    95,
      96,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,    -1,    94,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,    -1,    94,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,
      88,    89,    90,    -1,    -1,    -1,    94,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    98,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   112,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    98,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,
      88,    89,    90,    -1,    -1,    -1,    94,    95,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      45,    -1,    47,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      95,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,    -1,    94,    95,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    -1,    47,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    -1,    -1,    -1,    94,    95,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,    -1,    94,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,    -1,    94,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,
      88,    89,    90,    -1,    -1,    -1,    94,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,    -1,    94,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,    -1,    94,    95,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,
      -1,    88,    89,    90,    -1,    -1,    -1,    94,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
      -1,    94,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,
      -1,    -1,    -1,    94,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    -1,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    -1,    -1,    -1,    94,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,
      -1,    88,    89,    90,    -1,    -1,    -1,    94,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,     3,
       4,     5,     6,     7,     8,     9,    81,    82,    83,    -1,
      -1,    15,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   112,    -1,    43,
      -1,    -1,    -1,    47,    -1,     3,     4,     5,     6,     7,
       8,     9,    56,    -1,    -1,    59,    60,    15,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,    83,
      38,    -1,    -1,    -1,    88,    43,    -1,    -1,    -1,    47,
      94,     3,     4,     5,     6,     7,     8,     9,    56,    -1,
      -1,    59,    60,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    29,    -1,    31,
      32,    -1,    -1,    -1,    -1,    83,    38,    -1,    -1,    -1,
      88,    43,    -1,    -1,    -1,    47,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    62,
      -1,    -1,    94,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    62,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   115,   116,   117,     0,   123,   124,   123,     1,     3,
       4,     5,     6,     7,     8,     9,    15,    28,    29,    31,
      32,    33,    38,    43,    46,    47,    48,    50,    56,    57,
      59,    60,    63,    73,    83,    88,    94,    99,   121,   122,
     125,   129,   131,   133,   137,   138,   140,   141,   147,   150,
     156,   157,   162,   174,   185,   187,   210,   212,   217,   218,
     231,   232,   234,   235,   239,   240,   244,   252,   255,   256,
     268,   276,   277,   278,   279,   280,   304,   309,   310,   311,
     313,   315,   317,   320,   321,   322,   329,   330,   397,   404,
     406,    63,   109,   111,    76,   398,    56,    76,    56,    76,
      76,    50,     3,     4,     5,    59,    60,    61,   171,   185,
     311,   321,   328,   330,    94,    94,     4,     5,    59,    60,
      61,   171,     3,     4,     5,    59,    60,   185,   323,   324,
     325,   326,   330,     4,     5,    46,    59,    60,   316,   321,
     330,    76,   183,   126,    56,    76,    76,     3,   255,   304,
     312,   313,   321,   330,   304,   312,   395,    73,    83,    94,
     210,   215,   216,   218,   255,   314,   315,   329,   125,    94,
      63,    61,    99,   119,     1,     7,    50,   121,   137,   147,
     148,   149,   156,   231,   234,   244,   268,   109,   153,   122,
     245,    26,   152,   165,   166,    63,    56,    49,    94,    95,
     305,    63,    73,    83,    94,   228,   242,   250,   307,   308,
     313,   320,   321,   329,     7,     9,    63,   157,   240,   243,
     251,   255,   313,    94,     7,     8,     9,   233,   236,   241,
     255,   268,    62,    63,   256,     7,     8,     9,    38,    61,
     105,   106,   107,   171,   173,   185,   186,   255,   321,   330,
      61,    65,    61,    65,    65,   281,     9,   240,   255,   330,
     245,     3,     5,    50,    60,    83,   187,   210,   213,   217,
     320,   322,   303,     3,    59,   210,   311,   317,   320,   321,
       1,    40,    41,    49,    62,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    87,    88,    89,    90,    95,
      96,   112,   235,   240,   304,   375,    76,     9,    10,    11,
      12,    14,    30,    35,    36,    37,    40,    41,    42,    44,
      45,    51,    52,    53,    54,    55,    60,    64,    70,    73,
      81,    82,    83,    88,    89,    90,    94,   112,   121,   190,
     191,   192,   193,   203,   206,   207,   209,   210,   219,   221,
     222,   223,   224,   226,   230,   235,   237,   238,   240,   304,
     317,   318,   319,   321,   330,     3,   190,   190,   211,   183,
     270,    61,     3,    50,    60,   311,   320,    64,   194,   201,
     207,   208,   230,   321,   330,    94,   128,    61,    66,    56,
      56,    56,    56,    56,    56,     3,     4,     5,    50,    59,
      60,   171,   185,   326,   327,   324,   134,     3,     4,     5,
     210,   213,   214,   214,   316,    77,   139,   157,   231,   234,
     240,   313,   147,   191,   190,    76,   313,   255,   312,   321,
     312,     4,     5,   171,   185,   215,   255,   304,   314,   215,
     304,   314,   215,   110,    59,    60,    73,    83,    94,   210,
     216,   110,   303,   224,   116,   118,    50,   150,   156,   148,
     119,   153,   242,   243,    63,    63,    94,   254,   255,     3,
       1,    98,   154,   168,   365,    49,    66,    94,   261,    63,
       1,    13,   201,   202,   208,   230,   232,   234,   235,   240,
     304,   385,   386,   390,   391,   392,   394,     9,   113,   194,
     240,   303,   255,   304,   306,   307,   304,   306,    73,    83,
      94,   255,   306,   329,   245,    62,    63,    95,   305,   320,
     303,   233,   236,    62,    63,   245,   194,   230,     7,   241,
     233,   241,   255,   228,   246,    76,    61,    65,     3,    60,
     171,   186,   171,   321,   395,    61,   236,   253,    56,    49,
      94,     6,   171,   327,   406,    56,    49,    94,     9,   255,
     312,     5,    83,   187,   405,    95,   405,    95,   405,   405,
     405,   405,   405,    65,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   113,   405,   405,   236,    73,
      83,   321,   329,   330,   403,   211,    94,   207,   207,    94,
      94,    76,    76,    76,    76,   209,   171,   207,   207,   207,
       1,    73,    83,    94,   194,   210,   215,   220,   230,   207,
      77,    79,   189,    62,   207,    61,    94,   203,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    49,
      94,    49,    89,    90,    93,    94,    95,    96,    61,    94,
     204,   302,   375,    95,   207,    12,     1,     8,    50,    88,
     213,   214,   318,   321,   330,    49,    73,    83,    94,    95,
     206,   229,   329,   334,   335,    94,   203,    94,   203,    94,
     229,   334,   321,   330,   334,    49,    94,    50,     3,    41,
      60,   212,   222,   317,   330,   406,    94,   399,   189,   189,
     190,   157,   231,   240,   313,    62,   171,   275,   299,   300,
     301,   269,   171,   208,   110,    62,    62,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,   110,
       7,     8,     9,   171,   257,   258,   259,   118,   127,   130,
     327,    76,    56,   136,   214,   316,   330,    47,    50,   138,
     142,   144,   145,   146,   230,   240,   276,   392,   394,   178,
     228,    63,   177,   189,   189,   190,   312,   312,   110,   215,
     312,   110,   111,   120,   120,   149,   156,    63,    63,   224,
     366,    65,   151,   167,   225,     1,    61,   208,   262,   202,
     110,   110,    13,    62,    65,    73,    83,    94,   228,   329,
     334,   313,   321,   330,   228,    94,   228,   110,    13,    62,
      65,    13,   313,   393,   394,   396,    66,   387,   113,    94,
     229,    64,   400,   307,   255,   306,   306,   255,   304,   304,
      73,    83,    94,   321,   329,   110,   303,   248,   254,   246,
     113,   194,   303,   255,   306,   233,   246,   248,   110,   110,
     245,   190,   171,   186,     4,     5,     7,    39,   185,   282,
     283,   284,   285,   309,   323,   330,   271,   248,   303,   158,
      76,    76,    56,    76,   303,   160,    49,    94,    49,    94,
     113,   113,   405,   405,   303,   303,   303,   321,   405,   190,
     202,   208,   194,   230,   230,   240,   230,   230,   230,   110,
     215,   110,   110,   341,   407,   110,   192,     3,     4,     5,
      59,    60,    95,   171,   262,   263,   230,   209,   209,     1,
     194,   380,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     202,   202,   194,   202,   202,   230,    94,   302,    49,    66,
      94,   205,    73,    83,    95,   329,   331,   332,   113,   194,
      56,   171,     8,    49,    94,    49,    94,    49,    94,   255,
     304,   333,   334,   304,   333,   230,   333,   386,   113,   194,
      94,   303,    49,   303,   303,    49,    94,    95,   230,   230,
      73,    83,    94,   202,   206,   215,   255,   321,   330,   321,
     202,   171,   202,    63,   188,   188,   189,   182,   228,    63,
     181,    66,   111,    62,   275,   299,     1,   208,     1,   208,
     208,   208,   380,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,    62,   110,    94,   111,   118,   136,    56,   190,
      63,   214,   316,   143,   171,    76,   276,    62,    77,    66,
      66,   143,   171,    66,   184,   176,   175,   184,   188,   189,
     110,    63,   153,   120,   120,   110,   154,     1,     3,    49,
      59,    60,    94,   169,   170,   172,   309,   323,   407,   111,
     263,   110,   255,   304,   304,    73,    83,    94,   255,   320,
     321,   329,   303,   321,    73,    83,    94,   210,   215,   317,
     330,   387,    66,   388,    49,    94,   304,   304,   303,    66,
     113,   400,   254,    77,   395,   395,    62,     7,    39,   395,
       1,     5,    48,    63,    65,    94,   121,   131,   141,   157,
     163,   164,   187,   231,   234,   286,   288,   289,   290,   313,
     397,   400,   385,   190,   190,   190,   400,   385,   303,   159,
     303,   161,   405,   405,   403,   403,   403,   189,   110,    62,
     110,   110,    77,    77,    77,    77,   110,   110,    61,   208,
      65,    62,   274,   110,    65,   110,   110,   113,   111,   110,
     110,   230,   205,   262,   202,   240,   303,   303,   194,   303,
      95,   207,   113,    88,    76,    49,   202,   202,   202,   334,
     255,   333,   333,   110,   110,   113,   400,   400,   255,   333,
     303,   385,   113,   194,   110,   110,   110,   110,    73,    83,
      94,   110,   110,   184,   180,   179,   184,   208,   301,   111,
      65,   258,   110,     3,   202,   111,    63,   189,   143,   146,
     230,   192,   209,   184,   184,   153,   367,   202,     1,    62,
      49,    94,    49,    94,    49,    94,    61,    62,   111,   255,
     304,   304,    73,    83,    94,   329,   320,   303,   255,   215,
     110,     3,   212,   317,   406,   262,   102,   262,   389,     1,
     230,   401,   402,    73,    83,    94,   255,   255,   249,    66,
     188,   395,   395,   395,   284,    49,    94,   208,     5,   289,
     231,   289,   245,   245,    26,    61,    65,    98,    49,    94,
       3,     4,    65,   157,   228,   291,   293,   295,   296,   307,
     313,   321,   330,   157,   163,   292,   296,   313,    39,   111,
     287,   289,    63,   111,   245,   110,   189,   189,   189,   110,
     400,   385,   400,   385,   230,    94,    94,    94,    94,   342,
     113,   262,   171,   262,   111,   209,    95,   205,   110,   110,
     110,   331,   331,   113,   331,   194,   207,     8,   190,   110,
     110,   110,   303,   400,   110,   113,   184,   184,   208,    62,
     110,   110,    97,   371,   372,   110,   170,   202,   202,   202,
     155,   111,   304,   304,   321,   303,   110,    62,   110,   255,
     262,   247,   283,   303,   385,   110,    63,   254,   254,   303,
     385,    65,    65,   208,   245,    62,   245,   245,   321,   245,
      62,    65,   254,   288,   254,   303,   303,   110,   110,   110,
     194,   194,   194,   194,    34,   111,   200,   338,   339,   340,
     262,    65,   194,   205,   113,    49,   189,   400,   303,   202,
     373,   372,   110,   110,   110,   200,    73,    83,    94,   255,
     255,   401,   262,   400,   110,    49,    94,   261,   261,   400,
     110,   208,   208,   254,   254,     3,     4,    65,   294,   297,
     298,   307,   313,   254,   254,     5,   254,   298,   272,   261,
     400,   400,   303,   303,   110,   110,   110,   110,   171,   260,
       1,   336,   337,   341,   343,   349,   407,   340,   262,   113,
     400,   110,    94,   376,   255,   303,   303,   385,   303,   254,
     254,   261,    65,    65,   208,   245,   245,   261,   261,   261,
     267,   400,   400,    62,    63,    63,   111,     1,   111,   337,
     349,     3,     4,     5,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    46,    48,    60,    63,    98,
     121,   122,   129,   132,   133,   194,   227,   231,   234,   240,
     344,   350,   368,   377,    13,   394,   374,   400,   400,   110,
     400,   208,   208,   254,   254,   254,     1,   103,   266,   273,
     171,   111,    65,    65,    65,   345,   352,   354,   356,   360,
     208,    65,    63,    63,    63,   194,    83,   171,   171,    59,
     135,   330,    65,   369,   227,     9,   379,    63,    63,   228,
     242,    63,   243,   313,    94,   242,    17,   111,   349,   110,
     110,   343,   303,   254,   254,   261,   261,     1,   208,   265,
      49,    94,   196,   196,   343,   347,   348,    94,    94,    13,
      65,   364,    63,   194,    63,    56,    59,   171,    59,   135,
     171,   343,    94,    63,    63,    73,    83,    94,    63,   351,
     400,   109,   109,   104,   264,   194,   198,   240,   375,   346,
     353,    18,   407,    61,   227,   378,   380,   198,   208,   362,
     349,    63,    56,   171,   370,   224,   347,   152,   153,   110,
     228,   347,   347,   355,   350,   200,   357,    63,   110,    65,
     349,   371,    56,    65,   110,     1,   154,   365,   245,    49,
      94,   195,     1,   197,   198,   361,   363,    12,    95,   381,
     382,   383,   381,    63,   254,   194,    63,    63,   347,   349,
      94,   171,    65,   110,    62,    56,    65,   110,    66,   110,
     358,   194,   113,   224,   384,    63,   383,   384,   381,    63,
     199,   380,   110,    12,    62,   110,   110,    65,   110,   262,
     110,    94,   224,    63,    63,   384,    63,   359,   194,   110,
     347,   110,    63
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 456 "parse.y"
    { finish_translation_unit (); ;}
    break;

  case 3:
#line 458 "parse.y"
    { finish_translation_unit (); ;}
    break;

  case 4:
#line 466 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 5:
#line 468 "parse.y"
    { yyval.ttype = NULL_TREE; ggc_collect (); ;}
    break;

  case 6:
#line 470 "parse.y"
    { yyval.ttype = NULL_TREE; ggc_collect (); ;}
    break;

  case 9:
#line 479 "parse.y"
    { have_extern_spec = 1;
		  used_extern_spec = 0;
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 10:
#line 484 "parse.y"
    { have_extern_spec = 0; ;}
    break;

  case 11:
#line 489 "parse.y"
    { yyval.itype = pedantic;
		  pedantic = 0; ;}
    break;

  case 13:
#line 498 "parse.y"
    { if (pending_lang_change) do_pending_lang_change();
		  type_lookups = NULL_TREE; ;}
    break;

  case 14:
#line 501 "parse.y"
    { if (! toplevel_bindings_p ())
		  pop_everything (); ;}
    break;

  case 15:
#line 507 "parse.y"
    { do_pending_inlines (); ;}
    break;

  case 16:
#line 509 "parse.y"
    { do_pending_inlines (); ;}
    break;

  case 17:
#line 512 "parse.y"
    { warning ("keyword `export' not implemented, and will be ignored"); ;}
    break;

  case 18:
#line 514 "parse.y"
    { do_pending_inlines (); ;}
    break;

  case 19:
#line 516 "parse.y"
    { do_pending_inlines (); ;}
    break;

  case 20:
#line 518 "parse.y"
    { if (TREE_CHAIN (yyvsp[-2].ttype)) yyvsp[-2].ttype = combine_strings (yyvsp[-2].ttype);
		  assemble_asm (yyvsp[-2].ttype); ;}
    break;

  case 21:
#line 521 "parse.y"
    { pop_lang_context (); ;}
    break;

  case 22:
#line 523 "parse.y"
    { do_pending_inlines (); pop_lang_context (); ;}
    break;

  case 23:
#line 525 "parse.y"
    { do_pending_inlines (); pop_lang_context (); ;}
    break;

  case 24:
#line 527 "parse.y"
    { push_namespace (yyvsp[-1].ttype); ;}
    break;

  case 25:
#line 529 "parse.y"
    { pop_namespace (); ;}
    break;

  case 26:
#line 531 "parse.y"
    { push_namespace (NULL_TREE); ;}
    break;

  case 27:
#line 533 "parse.y"
    { pop_namespace (); ;}
    break;

  case 29:
#line 536 "parse.y"
    { do_toplevel_using_decl (yyvsp[-1].ttype); ;}
    break;

  case 31:
#line 539 "parse.y"
    { pedantic = yyvsp[-1].itype; ;}
    break;

  case 32:
#line 544 "parse.y"
    { begin_only_namespace_names (); ;}
    break;

  case 33:
#line 546 "parse.y"
    {
		  end_only_namespace_names ();
		  if (lastiddecl)
		    yyvsp[-1].ttype = lastiddecl;
		  do_namespace_alias (yyvsp[-4].ttype, yyvsp[-1].ttype);
		;}
    break;

  case 34:
#line 556 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 35:
#line 558 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 36:
#line 560 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 37:
#line 565 "parse.y"
    { yyval.ttype = build_nt (SCOPE_REF, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 38:
#line 567 "parse.y"
    { yyval.ttype = build_nt (SCOPE_REF, global_namespace, yyvsp[0].ttype); ;}
    break;

  case 39:
#line 569 "parse.y"
    { yyval.ttype = build_nt (SCOPE_REF, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 40:
#line 574 "parse.y"
    { begin_only_namespace_names (); ;}
    break;

  case 41:
#line 576 "parse.y"
    {
		  end_only_namespace_names ();
		  /* If no declaration was found, the using-directive is
		     invalid. Since that was not reported, we need the
		     identifier for the error message. */
		  if (TREE_CODE (yyvsp[-1].ttype) == IDENTIFIER_NODE && lastiddecl)
		    yyvsp[-1].ttype = lastiddecl;
		  do_using_directive (yyvsp[-1].ttype);
		;}
    break;

  case 42:
#line 589 "parse.y"
    {
		  if (TREE_CODE (yyval.ttype) == IDENTIFIER_NODE)
		    yyval.ttype = lastiddecl;
		  got_scope = yyval.ttype;
		;}
    break;

  case 43:
#line 595 "parse.y"
    {
		  yyval.ttype = yyvsp[-1].ttype;
		  if (TREE_CODE (yyval.ttype) == IDENTIFIER_NODE)
		    yyval.ttype = lastiddecl;
		  got_scope = yyval.ttype;
		;}
    break;

  case 46:
#line 607 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 47:
#line 609 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 48:
#line 614 "parse.y"
    { push_lang_context (yyvsp[0].ttype); ;}
    break;

  case 49:
#line 616 "parse.y"
    { if (current_lang_name != yyvsp[0].ttype)
		    error ("use of linkage spec `%D' is different from previous spec `%D'", yyvsp[0].ttype, current_lang_name);
		  pop_lang_context (); push_lang_context (yyvsp[0].ttype); ;}
    break;

  case 50:
#line 623 "parse.y"
    { begin_template_parm_list (); ;}
    break;

  case 51:
#line 625 "parse.y"
    { yyval.ttype = end_template_parm_list (yyvsp[-1].ttype); ;}
    break;

  case 52:
#line 630 "parse.y"
    { begin_specialization(); 
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 55:
#line 641 "parse.y"
    { yyval.ttype = process_template_parm (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 56:
#line 643 "parse.y"
    { yyval.ttype = process_template_parm (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 57:
#line 648 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 58:
#line 650 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 59:
#line 655 "parse.y"
    { yyval.ttype = finish_template_type_parm (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 60:
#line 657 "parse.y"
    { yyval.ttype = finish_template_type_parm (class_type_node, yyvsp[0].ttype); ;}
    break;

  case 61:
#line 662 "parse.y"
    { yyval.ttype = finish_template_template_parm (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 62:
#line 674 "parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 63:
#line 676 "parse.y"
    { yyval.ttype = build_tree_list (groktypename (yyvsp[0].ftype.t), yyvsp[-2].ttype); ;}
    break;

  case 64:
#line 678 "parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ftype.t); ;}
    break;

  case 65:
#line 680 "parse.y"
    { yyval.ttype = build_tree_list (yyvsp[0].ttype, yyvsp[-2].ftype.t); ;}
    break;

  case 66:
#line 682 "parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 67:
#line 684 "parse.y"
    {
		  if (TREE_CODE (yyvsp[0].ttype) != TEMPLATE_DECL
		      && TREE_CODE (yyvsp[0].ttype) != TEMPLATE_TEMPLATE_PARM
		      && TREE_CODE (yyvsp[0].ttype) != TYPE_DECL
		      && TREE_CODE (yyvsp[0].ttype) != UNBOUND_CLASS_TEMPLATE)
		    {
		      error ("invalid default template argument");
		      yyvsp[0].ttype = error_mark_node;
		    }
		  yyval.ttype = build_tree_list (yyvsp[0].ttype, yyvsp[-2].ttype);
		;}
    break;

  case 68:
#line 699 "parse.y"
    { finish_template_decl (yyvsp[-1].ttype); ;}
    break;

  case 69:
#line 701 "parse.y"
    { finish_template_decl (yyvsp[-1].ttype); ;}
    break;

  case 70:
#line 706 "parse.y"
    { do_pending_inlines (); ;}
    break;

  case 71:
#line 708 "parse.y"
    { do_pending_inlines (); ;}
    break;

  case 72:
#line 710 "parse.y"
    { do_pending_inlines (); ;}
    break;

  case 73:
#line 712 "parse.y"
    { do_pending_inlines ();
		  pop_lang_context (); ;}
    break;

  case 74:
#line 715 "parse.y"
    { do_pending_inlines ();
		  pop_lang_context (); ;}
    break;

  case 75:
#line 718 "parse.y"
    { pedantic = yyvsp[-1].itype; ;}
    break;

  case 77:
#line 724 "parse.y"
    {;}
    break;

  case 78:
#line 726 "parse.y"
    { note_list_got_semicolon (yyvsp[-2].ftype.t); ;}
    break;

  case 79:
#line 728 "parse.y"
    {
		  if (yyvsp[-1].ftype.t != error_mark_node)
                    {
		      maybe_process_partial_specialization (yyvsp[-1].ftype.t);
		      note_got_semicolon (yyvsp[-1].ftype.t);
	            }
                ;}
    break;

  case 81:
#line 740 "parse.y"
    {;}
    break;

  case 82:
#line 742 "parse.y"
    { note_list_got_semicolon (yyvsp[-2].ftype.t); ;}
    break;

  case 83:
#line 744 "parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 85:
#line 747 "parse.y"
    {
		  tree t, attrs;
		  split_specs_attrs (yyvsp[-1].ftype.t, &t, &attrs);
		  shadow_tag (t);
		  note_list_got_semicolon (yyvsp[-1].ftype.t);
		;}
    break;

  case 88:
#line 756 "parse.y"
    { end_input (); ;}
    break;

  case 98:
#line 782 "parse.y"
    { yyval.ttype = begin_compound_stmt (/*has_no_scope=*/1); ;}
    break;

  case 99:
#line 784 "parse.y"
    {
		  STMT_LINENO (yyvsp[-1].ttype) = yyvsp[-3].itype;
		  finish_compound_stmt (/*has_no_scope=*/1, yyvsp[-1].ttype);
		  finish_function_body (yyvsp[-5].ttype);
		;}
    break;

  case 100:
#line 793 "parse.y"
    { expand_body (finish_function (0)); ;}
    break;

  case 101:
#line 795 "parse.y"
    { expand_body (finish_function (0)); ;}
    break;

  case 102:
#line 797 "parse.y"
    { ;}
    break;

  case 103:
#line 802 "parse.y"
    { yyval.ttype = begin_constructor_declarator (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 104:
#line 804 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-4].ttype, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 105:
#line 806 "parse.y"
    { yyval.ttype = begin_constructor_declarator (yyvsp[-4].ttype, yyvsp[-3].ttype); 
		  yyval.ttype = make_call_declarator (yyval.ttype, empty_parms (), yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 106:
#line 810 "parse.y"
    { yyval.ttype = begin_constructor_declarator (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 107:
#line 812 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-4].ttype, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 108:
#line 814 "parse.y"
    { yyval.ttype = begin_constructor_declarator (yyvsp[-4].ttype, yyvsp[-3].ttype);
		  yyval.ttype = make_call_declarator (yyval.ttype, empty_parms (), yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 109:
#line 818 "parse.y"
    { yyval.ttype = begin_constructor_declarator (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 110:
#line 820 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-4].ttype, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 111:
#line 822 "parse.y"
    { yyval.ttype = begin_constructor_declarator (yyvsp[-4].ttype, yyvsp[-3].ttype);
		  yyval.ttype = make_call_declarator (yyval.ttype, empty_parms (), yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 112:
#line 826 "parse.y"
    { yyval.ttype = begin_constructor_declarator (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 113:
#line 828 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-4].ttype, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 114:
#line 830 "parse.y"
    { yyval.ttype = begin_constructor_declarator (yyvsp[-4].ttype, yyvsp[-3].ttype); 
		  yyval.ttype = make_call_declarator (yyval.ttype, empty_parms (), yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 115:
#line 837 "parse.y"
    { check_for_new_type ("return type", yyvsp[-1].ftype);
		  if (!begin_function_definition (yyvsp[-1].ftype.t, yyvsp[0].ttype))
		    YYERROR1; ;}
    break;

  case 116:
#line 841 "parse.y"
    { if (!begin_function_definition (yyvsp[-1].ftype.t, yyvsp[0].ttype))
		    YYERROR1; ;}
    break;

  case 117:
#line 844 "parse.y"
    { if (!begin_function_definition (NULL_TREE, yyvsp[0].ttype))
		    YYERROR1; ;}
    break;

  case 118:
#line 847 "parse.y"
    { if (!begin_function_definition (yyvsp[-1].ftype.t, yyvsp[0].ttype))
		    YYERROR1; ;}
    break;

  case 119:
#line 850 "parse.y"
    { if (!begin_function_definition (NULL_TREE, yyvsp[0].ttype))
		    YYERROR1; ;}
    break;

  case 120:
#line 859 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-5].ttype, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 121:
#line 862 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-6].ttype, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 122:
#line 864 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-3].ttype, empty_parms (), yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 123:
#line 866 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-4].ttype, empty_parms (), yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 124:
#line 868 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-5].ttype, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 125:
#line 870 "parse.y"
    { yyval.ttype = make_call_declarator (yyvsp[-3].ttype, empty_parms (), yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 126:
#line 877 "parse.y"
    { yyval.ttype = parse_method (yyvsp[0].ttype, yyvsp[-1].ftype.t, yyvsp[-1].ftype.lookups);
		 rest_of_mdef:
		  if (! yyval.ttype)
		    YYERROR1;
		  if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  snarf_method (yyval.ttype); ;}
    break;

  case 127:
#line 885 "parse.y"
    { yyval.ttype = parse_method (yyvsp[0].ttype, NULL_TREE, NULL_TREE); 
		  goto rest_of_mdef; ;}
    break;

  case 128:
#line 888 "parse.y"
    { yyval.ttype = parse_method (yyvsp[0].ttype, yyvsp[-1].ftype.t, yyvsp[-1].ftype.lookups); goto rest_of_mdef;;}
    break;

  case 129:
#line 890 "parse.y"
    { yyval.ttype = parse_method (yyvsp[0].ttype, yyvsp[-1].ftype.t, yyvsp[-1].ftype.lookups); goto rest_of_mdef;;}
    break;

  case 130:
#line 892 "parse.y"
    { yyval.ttype = parse_method (yyvsp[0].ttype, NULL_TREE, NULL_TREE); 
		  goto rest_of_mdef; ;}
    break;

  case 131:
#line 895 "parse.y"
    { yyval.ttype = parse_method (yyvsp[0].ttype, yyvsp[-1].ftype.t, yyvsp[-1].ftype.lookups); goto rest_of_mdef;;}
    break;

  case 132:
#line 897 "parse.y"
    { yyval.ttype = parse_method (yyvsp[0].ttype, NULL_TREE, NULL_TREE); 
		  goto rest_of_mdef; ;}
    break;

  case 133:
#line 903 "parse.y"
    {
		  yyval.ttype = yyvsp[0].ttype;
		;}
    break;

  case 134:
#line 910 "parse.y"
    { finish_named_return_value (yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 135:
#line 912 "parse.y"
    { finish_named_return_value (yyval.ttype, yyvsp[-1].ttype); ;}
    break;

  case 136:
#line 914 "parse.y"
    { finish_named_return_value (yyval.ttype, NULL_TREE); ;}
    break;

  case 137:
#line 919 "parse.y"
    {
		  if (! DECL_CONSTRUCTOR_P (current_function_decl))
		    error ("only constructors take base initializers");
		  else if (yyvsp[0].ftype.new_type_flag == 0)
		    error ("no base or member initializers given following ':'");

		  finish_mem_initializers (yyvsp[0].ftype.t);
		;}
    break;

  case 138:
#line 931 "parse.y"
    {
		  yyval.ttype = begin_function_body ();
		;}
    break;

  case 139:
#line 938 "parse.y"
    { 
		  yyval.ftype.new_type_flag = 0; 
		  yyval.ftype.t = NULL_TREE; 
		;}
    break;

  case 140:
#line 943 "parse.y"
    { 
		  yyval.ftype.new_type_flag = 1; 
		  yyval.ftype.t = yyvsp[0].ttype; 
		;}
    break;

  case 141:
#line 948 "parse.y"
    { 
		  if (yyvsp[0].ttype) 
		    {
		      yyval.ftype.new_type_flag = 1; 
		      TREE_CHAIN (yyvsp[0].ttype) = yyvsp[-2].ftype.t;
		      yyval.ftype.t = yyvsp[0].ttype;
		    }
		  else
		    yyval.ftype = yyvsp[-2].ftype;
		;}
    break;

  case 143:
#line 963 "parse.y"
    {
		  if (current_class_name)
		    pedwarn ("anachronistic old style base class initializer");
		  yyval.ttype = expand_member_init (current_class_ref, NULL_TREE, yyvsp[-1].ttype);
		;}
    break;

  case 144:
#line 969 "parse.y"
    {
		  if (current_class_name)
		    pedwarn ("anachronistic old style base class initializer");
		  yyval.ttype = expand_member_init (current_class_ref,
					   NULL_TREE, 
					   void_type_node);
		;}
    break;

  case 145:
#line 977 "parse.y"
    { yyval.ttype = expand_member_init (current_class_ref, yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 146:
#line 979 "parse.y"
    { yyval.ttype = expand_member_init (current_class_ref, yyvsp[-1].ttype,
					   void_type_node); ;}
    break;

  case 147:
#line 982 "parse.y"
    { yyval.ttype = expand_member_init (current_class_ref, yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 148:
#line 984 "parse.y"
    { yyval.ttype = expand_member_init (current_class_ref, yyvsp[-1].ttype,
					   void_type_node); ;}
    break;

  case 149:
#line 987 "parse.y"
    { yyval.ttype = expand_member_init (current_class_ref, yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 150:
#line 989 "parse.y"
    { yyval.ttype = expand_member_init (current_class_ref, yyvsp[-1].ttype,
					   void_type_node); ;}
    break;

  case 151:
#line 992 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 163:
#line 1017 "parse.y"
    { do_type_instantiation (yyvsp[-1].ftype.t, NULL_TREE, 1);
		  yyungetc (';', 1); ;}
    break;

  case 165:
#line 1021 "parse.y"
    { tree specs = strip_attrs (yyvsp[-1].ftype.t);
		  do_decl_instantiation (specs, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 167:
#line 1025 "parse.y"
    { do_decl_instantiation (NULL_TREE, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 169:
#line 1028 "parse.y"
    { do_decl_instantiation (NULL_TREE, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 171:
#line 1031 "parse.y"
    { do_type_instantiation (yyvsp[-1].ftype.t, yyvsp[-4].ttype, 1);
		  yyungetc (';', 1); ;}
    break;

  case 172:
#line 1034 "parse.y"
    {;}
    break;

  case 173:
#line 1037 "parse.y"
    { tree specs = strip_attrs (yyvsp[-1].ftype.t);
		  do_decl_instantiation (specs, yyvsp[0].ttype, yyvsp[-4].ttype); ;}
    break;

  case 174:
#line 1040 "parse.y"
    {;}
    break;

  case 175:
#line 1042 "parse.y"
    { do_decl_instantiation (NULL_TREE, yyvsp[0].ttype, yyvsp[-3].ttype); ;}
    break;

  case 176:
#line 1044 "parse.y"
    {;}
    break;

  case 177:
#line 1046 "parse.y"
    { do_decl_instantiation (NULL_TREE, yyvsp[0].ttype, yyvsp[-3].ttype); ;}
    break;

  case 178:
#line 1048 "parse.y"
    {;}
    break;

  case 179:
#line 1052 "parse.y"
    { begin_explicit_instantiation(); ;}
    break;

  case 180:
#line 1056 "parse.y"
    { end_explicit_instantiation(); ;}
    break;

  case 181:
#line 1066 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 182:
#line 1069 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 185:
#line 1077 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 186:
#line 1083 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 187:
#line 1087 "parse.y"
    { 
		  if (yychar == YYEMPTY)
		    yychar = YYLEX;

		  yyval.ttype = finish_template_type (yyvsp[-3].ttype, yyvsp[-1].ttype, 
					     yychar == SCOPE);
		;}
    break;

  case 189:
#line 1099 "parse.y"
    {
		  /* Handle `Class<Class<Type>>' without space in the `>>' */
		  pedwarn ("`>>' should be `> >' in template class name");
		  yyungetc ('>', 1);
		;}
    break;

  case 190:
#line 1108 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 192:
#line 1114 "parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyval.ttype); ;}
    break;

  case 193:
#line 1116 "parse.y"
    { yyval.ttype = chainon (yyval.ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 194:
#line 1121 "parse.y"
    { yyval.ttype = groktypename (yyvsp[0].ftype.t); ;}
    break;

  case 195:
#line 1123 "parse.y"
    {
		  yyval.ttype = lastiddecl;
		  if (DECL_TEMPLATE_TEMPLATE_PARM_P (yyval.ttype))
		    yyval.ttype = TREE_TYPE (yyval.ttype);
		;}
    break;

  case 196:
#line 1129 "parse.y"
    {
		  yyval.ttype = lastiddecl;
		  if (DECL_TEMPLATE_TEMPLATE_PARM_P (yyval.ttype))
		    yyval.ttype = TREE_TYPE (yyval.ttype);
		;}
    break;

  case 198:
#line 1136 "parse.y"
    {
		  if (!processing_template_decl)
		    {
		      error ("use of template qualifier outside template");
		      yyval.ttype = error_mark_node;
		    }
		  else
		    yyval.ttype = make_unbound_class_template (yyvsp[-2].ttype, yyvsp[0].ttype, 1);
		;}
    break;

  case 199:
#line 1149 "parse.y"
    { yyval.code = NEGATE_EXPR; ;}
    break;

  case 200:
#line 1151 "parse.y"
    { yyval.code = CONVERT_EXPR; ;}
    break;

  case 201:
#line 1153 "parse.y"
    { yyval.code = PREINCREMENT_EXPR; ;}
    break;

  case 202:
#line 1155 "parse.y"
    { yyval.code = PREDECREMENT_EXPR; ;}
    break;

  case 203:
#line 1157 "parse.y"
    { yyval.code = TRUTH_NOT_EXPR; ;}
    break;

  case 204:
#line 1162 "parse.y"
    { yyval.ttype = build_x_compound_expr (yyval.ttype); ;}
    break;

  case 206:
#line 1168 "parse.y"
    { error ("ISO C++ forbids an empty condition for `%s'",
			 cond_stmt_keyword);
		  yyval.ttype = integer_zero_node; ;}
    break;

  case 207:
#line 1172 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 208:
#line 1177 "parse.y"
    { error ("ISO C++ forbids an empty condition for `%s'",
			 cond_stmt_keyword);
		  yyval.ttype = integer_zero_node; ;}
    break;

  case 209:
#line 1181 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 210:
#line 1186 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 212:
#line 1189 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 213:
#line 1194 "parse.y"
    { {
		  tree d;
		  for (d = getdecls (); d; d = TREE_CHAIN (d))
		    if (TREE_CODE (d) == TYPE_DECL) {
		      tree s = TREE_TYPE (d);
		      if (TREE_CODE (s) == RECORD_TYPE)
			error ("definition of class `%T' in condition", s);
		      else if (TREE_CODE (s) == ENUMERAL_TYPE)
			error ("definition of enum `%T' in condition", s);
		    }
		  }
		  current_declspecs = yyvsp[-4].ftype.t;
		  yyval.ttype = parse_decl (yyvsp[-3].ttype, yyvsp[-1].ttype, 1);
		;}
    break;

  case 214:
#line 1209 "parse.y"
    { 
		  parse_end_decl (yyvsp[-1].ttype, yyvsp[0].ttype, yyvsp[-3].ttype);
		  yyval.ttype = convert_from_reference (yyvsp[-1].ttype); 
		  if (TREE_CODE (TREE_TYPE (yyval.ttype)) == ARRAY_TYPE)
		    error ("definition of array `%#D' in condition", yyval.ttype); 
		;}
    break;

  case 220:
#line 1227 "parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyval.ttype, 
		                  build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 221:
#line 1230 "parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyval.ttype, 
		                  build_tree_list (NULL_TREE, error_mark_node)); ;}
    break;

  case 222:
#line 1233 "parse.y"
    { chainon (yyval.ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 223:
#line 1235 "parse.y"
    { chainon (yyval.ttype, build_tree_list (NULL_TREE, error_mark_node)); ;}
    break;

  case 224:
#line 1240 "parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyval.ttype); ;}
    break;

  case 226:
#line 1246 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 227:
#line 1249 "parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  pedantic = yyvsp[-1].itype; ;}
    break;

  case 228:
#line 1252 "parse.y"
    { yyval.ttype = build_x_indirect_ref (yyvsp[0].ttype, "unary *"); ;}
    break;

  case 229:
#line 1254 "parse.y"
    { yyval.ttype = build_x_unary_op (ADDR_EXPR, yyvsp[0].ttype); ;}
    break;

  case 230:
#line 1256 "parse.y"
    { yyval.ttype = build_x_unary_op (BIT_NOT_EXPR, yyvsp[0].ttype); ;}
    break;

  case 231:
#line 1258 "parse.y"
    { yyval.ttype = finish_unary_op_expr (yyvsp[-1].code, yyvsp[0].ttype); ;}
    break;

  case 232:
#line 1261 "parse.y"
    { yyval.ttype = finish_label_address_expr (yyvsp[0].ttype); ;}
    break;

  case 233:
#line 1263 "parse.y"
    { yyval.ttype = finish_sizeof (yyvsp[0].ttype);
		  skip_evaluation--; ;}
    break;

  case 234:
#line 1266 "parse.y"
    { yyval.ttype = finish_sizeof (groktypename (yyvsp[-1].ftype.t));
		  check_for_new_type ("sizeof", yyvsp[-1].ftype);
		  skip_evaluation--; ;}
    break;

  case 235:
#line 1270 "parse.y"
    { yyval.ttype = finish_alignof (yyvsp[0].ttype);
		  skip_evaluation--; ;}
    break;

  case 236:
#line 1273 "parse.y"
    { yyval.ttype = finish_alignof (groktypename (yyvsp[-1].ftype.t)); 
		  check_for_new_type ("alignof", yyvsp[-1].ftype);
		  skip_evaluation--; ;}
    break;

  case 237:
#line 1280 "parse.y"
    { yyval.ttype = build_new (NULL_TREE, yyvsp[0].ftype.t, NULL_TREE, yyvsp[-1].itype); 
		  check_for_new_type ("new", yyvsp[0].ftype); ;}
    break;

  case 238:
#line 1283 "parse.y"
    { yyval.ttype = build_new (NULL_TREE, yyvsp[-1].ftype.t, yyvsp[0].ttype, yyvsp[-2].itype); 
		  check_for_new_type ("new", yyvsp[-1].ftype); ;}
    break;

  case 239:
#line 1286 "parse.y"
    { yyval.ttype = build_new (yyvsp[-1].ttype, yyvsp[0].ftype.t, NULL_TREE, yyvsp[-2].itype); 
		  check_for_new_type ("new", yyvsp[0].ftype); ;}
    break;

  case 240:
#line 1289 "parse.y"
    { yyval.ttype = build_new (yyvsp[-2].ttype, yyvsp[-1].ftype.t, yyvsp[0].ttype, yyvsp[-3].itype); 
		  check_for_new_type ("new", yyvsp[-1].ftype); ;}
    break;

  case 241:
#line 1293 "parse.y"
    { yyval.ttype = build_new (NULL_TREE, groktypename(yyvsp[-1].ftype.t),
				  NULL_TREE, yyvsp[-3].itype); 
		  check_for_new_type ("new", yyvsp[-1].ftype); ;}
    break;

  case 242:
#line 1297 "parse.y"
    { yyval.ttype = build_new (NULL_TREE, groktypename(yyvsp[-2].ftype.t), yyvsp[0].ttype, yyvsp[-4].itype); 
		  check_for_new_type ("new", yyvsp[-2].ftype); ;}
    break;

  case 243:
#line 1300 "parse.y"
    { yyval.ttype = build_new (yyvsp[-3].ttype, groktypename(yyvsp[-1].ftype.t), NULL_TREE, yyvsp[-4].itype); 
		  check_for_new_type ("new", yyvsp[-1].ftype); ;}
    break;

  case 244:
#line 1303 "parse.y"
    { yyval.ttype = build_new (yyvsp[-4].ttype, groktypename(yyvsp[-2].ftype.t), yyvsp[0].ttype, yyvsp[-5].itype); 
		  check_for_new_type ("new", yyvsp[-2].ftype); ;}
    break;

  case 245:
#line 1307 "parse.y"
    { yyval.ttype = delete_sanity (yyvsp[0].ttype, NULL_TREE, 0, yyvsp[-1].itype); ;}
    break;

  case 246:
#line 1309 "parse.y"
    { yyval.ttype = delete_sanity (yyvsp[0].ttype, NULL_TREE, 1, yyvsp[-3].itype);
		  if (yychar == YYEMPTY)
		    yychar = YYLEX; ;}
    break;

  case 247:
#line 1313 "parse.y"
    { yyval.ttype = delete_sanity (yyvsp[0].ttype, yyvsp[-2].ttype, 2, yyvsp[-4].itype);
		  if (yychar == YYEMPTY)
		    yychar = YYLEX; ;}
    break;

  case 248:
#line 1317 "parse.y"
    { yyval.ttype = build_x_unary_op (REALPART_EXPR, yyvsp[0].ttype); ;}
    break;

  case 249:
#line 1319 "parse.y"
    { yyval.ttype = build_x_unary_op (IMAGPART_EXPR, yyvsp[0].ttype); ;}
    break;

  case 250:
#line 1324 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 251:
#line 1326 "parse.y"
    { pedwarn ("old style placement syntax, use () instead");
		  yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 252:
#line 1332 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 253:
#line 1334 "parse.y"
    { yyval.ttype = void_zero_node; ;}
    break;

  case 254:
#line 1336 "parse.y"
    {
		  error ("`%T' is not a valid expression", yyvsp[-1].ftype.t);
		  yyval.ttype = error_mark_node;
		;}
    break;

  case 255:
#line 1346 "parse.y"
    {
		  if (pedantic)
		    pedwarn ("ISO C++ forbids initialization of new expression with `='");
		  cp_deprecated ("new initializer lists extension");
		  if (TREE_CODE (yyvsp[0].ttype) != TREE_LIST
		      && TREE_CODE (yyvsp[0].ttype) != CONSTRUCTOR)
		    yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype);
		  else
		    yyval.ttype = yyvsp[0].ttype;
		;}
    break;

  case 256:
#line 1361 "parse.y"
    { yyvsp[-1].ftype.t = finish_parmlist (build_tree_list (NULL_TREE, yyvsp[-1].ftype.t), 0);
		  yyval.ttype = make_call_declarator (NULL_TREE, yyvsp[-1].ftype.t, NULL_TREE, NULL_TREE);
		  check_for_new_type ("cast", yyvsp[-1].ftype); ;}
    break;

  case 257:
#line 1365 "parse.y"
    { yyvsp[-1].ftype.t = finish_parmlist (build_tree_list (NULL_TREE, yyvsp[-1].ftype.t), 0); 
		  yyval.ttype = make_call_declarator (yyval.ttype, yyvsp[-1].ftype.t, NULL_TREE, NULL_TREE);
		  check_for_new_type ("cast", yyvsp[-1].ftype); ;}
    break;

  case 259:
#line 1373 "parse.y"
    { yyval.ttype = reparse_absdcl_as_casts (yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 260:
#line 1375 "parse.y"
    { 
		  tree init = build_nt (CONSTRUCTOR, NULL_TREE,
					nreverse (yyvsp[-2].ttype)); 
		  if (pedantic)
		    pedwarn ("ISO C++ forbids compound literals");
		  /* Indicate that this was a C99 compound literal.  */
		  TREE_HAS_CONSTRUCTOR (init) = 1;

		  yyval.ttype = reparse_absdcl_as_casts (yyval.ttype, init);
		;}
    break;

  case 262:
#line 1391 "parse.y"
    { yyval.ttype = build_x_binary_op (MEMBER_REF, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 263:
#line 1393 "parse.y"
    { yyval.ttype = build_m_component_ref (yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 264:
#line 1395 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 265:
#line 1397 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 266:
#line 1399 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 267:
#line 1401 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 268:
#line 1403 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 269:
#line 1405 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 270:
#line 1407 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 271:
#line 1409 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 272:
#line 1411 "parse.y"
    { yyval.ttype = build_x_binary_op (LT_EXPR, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 273:
#line 1413 "parse.y"
    { yyval.ttype = build_x_binary_op (GT_EXPR, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 274:
#line 1415 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 275:
#line 1417 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 276:
#line 1419 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 277:
#line 1421 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 278:
#line 1423 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 279:
#line 1425 "parse.y"
    { yyval.ttype = build_x_binary_op (TRUTH_ANDIF_EXPR, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 280:
#line 1427 "parse.y"
    { yyval.ttype = build_x_binary_op (TRUTH_ORIF_EXPR, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 281:
#line 1429 "parse.y"
    { yyval.ttype = build_x_conditional_expr (yyval.ttype, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 282:
#line 1431 "parse.y"
    { yyval.ttype = build_x_modify_expr (yyval.ttype, NOP_EXPR, yyvsp[0].ttype);
		  if (yyval.ttype != error_mark_node)
                    C_SET_EXP_ORIGINAL_CODE (yyval.ttype, MODIFY_EXPR); ;}
    break;

  case 283:
#line 1435 "parse.y"
    { yyval.ttype = build_x_modify_expr (yyval.ttype, yyvsp[-1].code, yyvsp[0].ttype); ;}
    break;

  case 284:
#line 1437 "parse.y"
    { yyval.ttype = build_throw (NULL_TREE); ;}
    break;

  case 285:
#line 1439 "parse.y"
    { yyval.ttype = build_throw (yyvsp[0].ttype); ;}
    break;

  case 287:
#line 1446 "parse.y"
    { yyval.ttype = build_x_binary_op (MEMBER_REF, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 288:
#line 1448 "parse.y"
    { yyval.ttype = build_m_component_ref (yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 289:
#line 1450 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 290:
#line 1452 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 291:
#line 1454 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 292:
#line 1456 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 293:
#line 1458 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 294:
#line 1460 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 295:
#line 1462 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 296:
#line 1464 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 297:
#line 1466 "parse.y"
    { yyval.ttype = build_x_binary_op (LT_EXPR, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 298:
#line 1468 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 299:
#line 1470 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 300:
#line 1472 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 301:
#line 1474 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 302:
#line 1476 "parse.y"
    { yyval.ttype = build_x_binary_op (yyvsp[-1].code, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 303:
#line 1478 "parse.y"
    { yyval.ttype = build_x_binary_op (TRUTH_ANDIF_EXPR, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 304:
#line 1480 "parse.y"
    { yyval.ttype = build_x_binary_op (TRUTH_ORIF_EXPR, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 305:
#line 1482 "parse.y"
    { yyval.ttype = build_x_conditional_expr (yyval.ttype, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 306:
#line 1484 "parse.y"
    { yyval.ttype = build_x_modify_expr (yyval.ttype, NOP_EXPR, yyvsp[0].ttype);
		  if (yyval.ttype != error_mark_node)
                    C_SET_EXP_ORIGINAL_CODE (yyval.ttype, MODIFY_EXPR); ;}
    break;

  case 307:
#line 1488 "parse.y"
    { yyval.ttype = build_x_modify_expr (yyval.ttype, yyvsp[-1].code, yyvsp[0].ttype); ;}
    break;

  case 308:
#line 1490 "parse.y"
    { yyval.ttype = build_throw (NULL_TREE); ;}
    break;

  case 309:
#line 1492 "parse.y"
    { yyval.ttype = build_throw (yyvsp[0].ttype); ;}
    break;

  case 310:
#line 1497 "parse.y"
    { yyval.ttype = build_nt (BIT_NOT_EXPR, yyvsp[0].ttype); ;}
    break;

  case 311:
#line 1499 "parse.y"
    { yyval.ttype = build_nt (BIT_NOT_EXPR, yyvsp[0].ttype); ;}
    break;

  case 317:
#line 1508 "parse.y"
    {
		  /* If lastiddecl is a TREE_LIST, it's a baselink, which
		     means that we're in an expression like S::f<int>, so
		     don't do_identifier; we only do that for unqualified
		     identifiers.  */
	          if (!lastiddecl || TREE_CODE (lastiddecl) != TREE_LIST)
		    yyval.ttype = do_identifier (yyvsp[-1].ttype, 3, NULL_TREE);
		  else
		    yyval.ttype = yyvsp[-1].ttype;
		;}
    break;

  case 318:
#line 1522 "parse.y"
    { yyval.ttype = lookup_template_function (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 319:
#line 1524 "parse.y"
    { yyval.ttype = lookup_template_function (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 320:
#line 1529 "parse.y"
    { yyval.ttype = lookup_template_function (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 321:
#line 1531 "parse.y"
    { yyval.ttype = lookup_template_function (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 322:
#line 1534 "parse.y"
    { yyval.ttype = lookup_template_function (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 327:
#line 1546 "parse.y"
    {
		  /* Provide support for '(' attributes '*' declarator ')'
		     etc */
		  yyval.ttype = tree_cons (yyvsp[-1].ttype, yyvsp[0].ttype, NULL_TREE);
		;}
    break;

  case 329:
#line 1556 "parse.y"
    { yyval.ttype = build_nt (INDIRECT_REF, yyvsp[0].ttype); ;}
    break;

  case 330:
#line 1558 "parse.y"
    { yyval.ttype = build_nt (ADDR_EXPR, yyvsp[0].ttype); ;}
    break;

  case 331:
#line 1560 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 332:
#line 1565 "parse.y"
    { yyval.ttype = lookup_template_function (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 333:
#line 1567 "parse.y"
    { yyval.ttype = lookup_template_function (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 337:
#line 1577 "parse.y"
    { yyval.ttype = finish_decl_parsing (yyvsp[-1].ttype); ;}
    break;

  case 338:
#line 1582 "parse.y"
    {
		  if (TREE_CODE (yyvsp[0].ttype) == BIT_NOT_EXPR)
		    yyval.ttype = build_x_unary_op (BIT_NOT_EXPR, TREE_OPERAND (yyvsp[0].ttype, 0));
		  else 
		    yyval.ttype = finish_id_expr (yyvsp[0].ttype);
		;}
    break;

  case 341:
#line 1591 "parse.y"
    {
		  yyval.ttype = combine_strings (yyval.ttype);
		  /* combine_strings doesn't set up TYPE_MAIN_VARIANT of
		     a const array the way we want, so fix it.  */
		  if (flag_const_strings)
		    TREE_TYPE (yyval.ttype) = build_cplus_array_type
		      (TREE_TYPE (TREE_TYPE (yyval.ttype)),
		       TYPE_DOMAIN (TREE_TYPE (yyval.ttype)));
		;}
    break;

  case 342:
#line 1601 "parse.y"
    {
		  yyval.ttype = fname_decl (C_RID_CODE (yyval.ttype), yyval.ttype);
		  if (processing_template_decl)
		    yyval.ttype = build_min_nt (LOOKUP_EXPR, DECL_NAME (yyval.ttype));
		;}
    break;

  case 343:
#line 1607 "parse.y"
    { yyval.ttype = finish_parenthesized_expr (yyvsp[-1].ttype); ;}
    break;

  case 344:
#line 1609 "parse.y"
    { yyvsp[-1].ttype = reparse_decl_as_expr (NULL_TREE, yyvsp[-1].ttype);
		  yyval.ttype = finish_parenthesized_expr (yyvsp[-1].ttype); ;}
    break;

  case 345:
#line 1612 "parse.y"
    { yyval.ttype = error_mark_node; ;}
    break;

  case 346:
#line 1614 "parse.y"
    { tree scope = current_scope ();
		  if (!scope || TREE_CODE (scope) != FUNCTION_DECL)
		    {
		      error ("braced-group within expression allowed only inside a function");
		      YYERROR;
		    }
		  if (pedantic)
		    pedwarn ("ISO C++ forbids braced-groups within expressions");  
		  yyval.ttype = begin_stmt_expr (); 
		;}
    break;

  case 347:
#line 1625 "parse.y"
    { yyval.ttype = finish_stmt_expr (yyvsp[-2].ttype); ;}
    break;

  case 348:
#line 1630 "parse.y"
    { yyval.ttype = finish_call_expr (yyvsp[-3].ttype, yyvsp[-1].ttype, 1); ;}
    break;

  case 349:
#line 1632 "parse.y"
    { yyval.ttype = finish_call_expr (yyvsp[-1].ttype, NULL_TREE, 1); ;}
    break;

  case 350:
#line 1634 "parse.y"
    { yyval.ttype = finish_call_expr (yyvsp[-3].ttype, yyvsp[-1].ttype, 0); ;}
    break;

  case 351:
#line 1636 "parse.y"
    { yyval.ttype = finish_call_expr (yyvsp[-1].ttype, NULL_TREE, 0); ;}
    break;

  case 352:
#line 1638 "parse.y"
    { yyval.ttype = build_x_va_arg (yyvsp[-3].ttype, groktypename (yyvsp[-1].ftype.t));
		  check_for_new_type ("__builtin_va_arg", yyvsp[-1].ftype); ;}
    break;

  case 353:
#line 1641 "parse.y"
    { yyval.ttype = grok_array_decl (yyval.ttype, yyvsp[-1].ttype); ;}
    break;

  case 354:
#line 1643 "parse.y"
    { yyval.ttype = finish_increment_expr (yyvsp[-1].ttype, POSTINCREMENT_EXPR); ;}
    break;

  case 355:
#line 1645 "parse.y"
    { yyval.ttype = finish_increment_expr (yyvsp[-1].ttype, POSTDECREMENT_EXPR); ;}
    break;

  case 356:
#line 1648 "parse.y"
    { yyval.ttype = finish_this_expr (); ;}
    break;

  case 357:
#line 1650 "parse.y"
    {
		  /* This is a C cast in C++'s `functional' notation
		     using the "implicit int" extension so that:
		     `const (3)' is equivalent to `const int (3)'.  */
		  tree type;

		  type = hash_tree_cons (NULL_TREE, yyvsp[-3].ttype, NULL_TREE);
		  type = groktypename (build_tree_list (type, NULL_TREE));
		  yyval.ttype = build_functional_cast (type, yyvsp[-1].ttype);
		;}
    break;

  case 359:
#line 1662 "parse.y"
    { tree type = groktypename (yyvsp[-4].ftype.t);
		  check_for_new_type ("dynamic_cast", yyvsp[-4].ftype);
		  yyval.ttype = build_dynamic_cast (type, yyvsp[-1].ttype); ;}
    break;

  case 360:
#line 1666 "parse.y"
    { tree type = groktypename (yyvsp[-4].ftype.t);
		  check_for_new_type ("static_cast", yyvsp[-4].ftype);
		  yyval.ttype = build_static_cast (type, yyvsp[-1].ttype); ;}
    break;

  case 361:
#line 1670 "parse.y"
    { tree type = groktypename (yyvsp[-4].ftype.t);
		  check_for_new_type ("reinterpret_cast", yyvsp[-4].ftype);
		  yyval.ttype = build_reinterpret_cast (type, yyvsp[-1].ttype); ;}
    break;

  case 362:
#line 1674 "parse.y"
    { tree type = groktypename (yyvsp[-4].ftype.t);
		  check_for_new_type ("const_cast", yyvsp[-4].ftype);
		  yyval.ttype = build_const_cast (type, yyvsp[-1].ttype); ;}
    break;

  case 363:
#line 1678 "parse.y"
    { yyval.ttype = build_typeid (yyvsp[-1].ttype); ;}
    break;

  case 364:
#line 1680 "parse.y"
    { tree type = groktypename (yyvsp[-1].ftype.t);
		  check_for_new_type ("typeid", yyvsp[-1].ftype);
		  yyval.ttype = get_typeid (type); ;}
    break;

  case 365:
#line 1684 "parse.y"
    { yyval.ttype = do_scoped_id (yyvsp[0].ttype, 1); ;}
    break;

  case 366:
#line 1686 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 367:
#line 1688 "parse.y"
    {
		  got_scope = NULL_TREE;
		  if (TREE_CODE (yyvsp[0].ttype) == IDENTIFIER_NODE)
		    yyval.ttype = do_scoped_id (yyvsp[0].ttype, 1);
		  else
		    yyval.ttype = yyvsp[0].ttype;
		;}
    break;

  case 368:
#line 1696 "parse.y"
    { yyval.ttype = build_offset_ref (OP0 (yyval.ttype), OP1 (yyval.ttype)); ;}
    break;

  case 369:
#line 1698 "parse.y"
    { yyval.ttype = finish_qualified_call_expr (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 370:
#line 1700 "parse.y"
    { yyval.ttype = finish_qualified_call_expr (yyvsp[-1].ttype, NULL_TREE); ;}
    break;

  case 371:
#line 1702 "parse.y"
    { 
		  yyval.ttype = build_x_component_ref (yyval.ttype, yyvsp[0].ttype, NULL_TREE, 1); 
		;}
    break;

  case 372:
#line 1706 "parse.y"
    { yyval.ttype = finish_object_call_expr (yyvsp[-3].ttype, yyvsp[-4].ttype, yyvsp[-1].ttype); ;}
    break;

  case 373:
#line 1708 "parse.y"
    { yyval.ttype = finish_object_call_expr (yyvsp[-1].ttype, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 374:
#line 1710 "parse.y"
    { yyval.ttype = build_x_component_ref (yyval.ttype, yyvsp[0].ttype, NULL_TREE, 1); ;}
    break;

  case 375:
#line 1712 "parse.y"
    { if (processing_template_decl)
		    yyval.ttype = build_min_nt (COMPONENT_REF, yyvsp[-1].ttype, yyvsp[0].ttype);
		  else
		    yyval.ttype = build_object_ref (yyval.ttype, OP0 (yyvsp[0].ttype), OP1 (yyvsp[0].ttype)); ;}
    break;

  case 376:
#line 1717 "parse.y"
    { yyval.ttype = finish_object_call_expr (yyvsp[-3].ttype, yyvsp[-4].ttype, yyvsp[-1].ttype); ;}
    break;

  case 377:
#line 1719 "parse.y"
    { yyval.ttype = finish_object_call_expr (yyvsp[-1].ttype, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 378:
#line 1721 "parse.y"
    { yyval.ttype = finish_qualified_object_call_expr (yyvsp[-3].ttype, yyvsp[-4].ttype, yyvsp[-1].ttype); ;}
    break;

  case 379:
#line 1723 "parse.y"
    { yyval.ttype = finish_qualified_object_call_expr (yyvsp[-1].ttype, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 380:
#line 1726 "parse.y"
    { yyval.ttype = finish_pseudo_destructor_call_expr (yyvsp[-3].ttype, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 381:
#line 1728 "parse.y"
    { yyval.ttype = finish_pseudo_destructor_call_expr (yyvsp[-5].ttype, yyvsp[-4].ttype, yyvsp[-1].ttype); ;}
    break;

  case 382:
#line 1730 "parse.y"
    {
		  yyval.ttype = error_mark_node;
		;}
    break;

  case 383:
#line 1775 "parse.y"
    { yyval.itype = 0; ;}
    break;

  case 384:
#line 1777 "parse.y"
    { got_scope = NULL_TREE; yyval.itype = 1; ;}
    break;

  case 385:
#line 1782 "parse.y"
    { yyval.itype = 0; ;}
    break;

  case 386:
#line 1784 "parse.y"
    { got_scope = NULL_TREE; yyval.itype = 1; ;}
    break;

  case 387:
#line 1789 "parse.y"
    { yyval.ttype = boolean_true_node; ;}
    break;

  case 388:
#line 1791 "parse.y"
    { yyval.ttype = boolean_false_node; ;}
    break;

  case 390:
#line 1798 "parse.y"
    { yyval.ttype = chainon (yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 391:
#line 1803 "parse.y"
    {
		  if (DECL_CONSTRUCTOR_P (current_function_decl))
		    finish_mem_initializers (NULL_TREE);
		;}
    break;

  case 392:
#line 1811 "parse.y"
    { got_object = TREE_TYPE (yyval.ttype); ;}
    break;

  case 393:
#line 1813 "parse.y"
    {
		  yyval.ttype = build_x_arrow (yyval.ttype); 
		  got_object = TREE_TYPE (yyval.ttype);
		;}
    break;

  case 394:
#line 1821 "parse.y"
    {
		  if (yyvsp[-2].ftype.t && IS_AGGR_TYPE_CODE (TREE_CODE (yyvsp[-2].ftype.t)))
		    note_got_semicolon (yyvsp[-2].ftype.t);
		;}
    break;

  case 395:
#line 1826 "parse.y"
    {
		  note_list_got_semicolon (yyvsp[-2].ftype.t);
		;}
    break;

  case 396:
#line 1830 "parse.y"
    {;}
    break;

  case 397:
#line 1832 "parse.y"
    {
		  shadow_tag (yyvsp[-1].ftype.t);
		  note_list_got_semicolon (yyvsp[-1].ftype.t);
		;}
    break;

  case 398:
#line 1837 "parse.y"
    { warning ("empty declaration"); ;}
    break;

  case 399:
#line 1839 "parse.y"
    { pedantic = yyvsp[-1].itype; ;}
    break;

  case 402:
#line 1853 "parse.y"
    { yyval.ttype = make_call_declarator (NULL_TREE, empty_parms (),
					     NULL_TREE, NULL_TREE); ;}
    break;

  case 403:
#line 1856 "parse.y"
    { yyval.ttype = make_call_declarator (yyval.ttype, empty_parms (), NULL_TREE,
					     NULL_TREE); ;}
    break;

  case 404:
#line 1863 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[-1].ftype.t, yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 405:
#line 1866 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[-1].ftype.t, yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 406:
#line 1869 "parse.y"
    { yyval.ftype.t = build_tree_list (build_tree_list (NULL_TREE, yyvsp[-1].ftype.t),
					  yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 407:
#line 1873 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[0].ftype.t, NULL_TREE);
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag;  ;}
    break;

  case 408:
#line 1876 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[0].ftype.t, NULL_TREE); 
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag; ;}
    break;

  case 409:
#line 1887 "parse.y"
    { yyval.ftype.lookups = type_lookups; ;}
    break;

  case 410:
#line 1889 "parse.y"
    { yyval.ftype.lookups = type_lookups; ;}
    break;

  case 411:
#line 1894 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[0].ftype.t, yyvsp[-1].ftype.t); 
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag; ;}
    break;

  case 412:
#line 1897 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[-1].ftype.t, yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 413:
#line 1900 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[-2].ftype.t, chainon (yyvsp[-1].ttype, yyvsp[0].ttype)); 
		  yyval.ftype.new_type_flag = yyvsp[-2].ftype.new_type_flag; ;}
    break;

  case 414:
#line 1903 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[-1].ftype.t, chainon (yyvsp[0].ttype, yyvsp[-2].ftype.t)); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 415:
#line 1906 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[-1].ftype.t, chainon (yyvsp[0].ttype, yyvsp[-2].ftype.t)); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 416:
#line 1909 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[-2].ftype.t,
				    chainon (yyvsp[-1].ttype, chainon (yyvsp[0].ttype, yyvsp[-3].ftype.t))); 
		  yyval.ftype.new_type_flag = yyvsp[-2].ftype.new_type_flag; ;}
    break;

  case 417:
#line 1916 "parse.y"
    { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyval.ttype));
		  yyval.ttype = build_tree_list (NULL_TREE, yyval.ttype); ;}
    break;

  case 418:
#line 1921 "parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ftype.t, yyval.ttype); ;}
    break;

  case 419:
#line 1923 "parse.y"
    { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyval.ttype); ;}
    break;

  case 420:
#line 1945 "parse.y"
    { yyval.ftype.lookups = NULL_TREE; TREE_STATIC (yyval.ftype.t) = 1; ;}
    break;

  case 421:
#line 1947 "parse.y"
    {
		  yyval.ftype.t = hash_tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE);
		  yyval.ftype.new_type_flag = 0; yyval.ftype.lookups = NULL_TREE;
		;}
    break;

  case 422:
#line 1952 "parse.y"
    {
		  yyval.ftype.t = hash_tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ftype.t);
		  TREE_STATIC (yyval.ftype.t) = 1;
		;}
    break;

  case 423:
#line 1957 "parse.y"
    {
		  if (extra_warnings && TREE_STATIC (yyval.ftype.t))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ftype.t = hash_tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ftype.t);
		  TREE_STATIC (yyval.ftype.t) = TREE_STATIC (yyvsp[-1].ftype.t);
		;}
    break;

  case 424:
#line 1965 "parse.y"
    { yyval.ftype.t = hash_tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ftype.t); ;}
    break;

  case 425:
#line 1976 "parse.y"
    { yyval.ftype.t = build_tree_list (NULL_TREE, yyvsp[0].ftype.t); 
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag; ;}
    break;

  case 426:
#line 1979 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[0].ftype.t, yyvsp[-1].ftype.t); 
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag; ;}
    break;

  case 427:
#line 1982 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[-1].ftype.t, yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 428:
#line 1985 "parse.y"
    { yyval.ftype.t = tree_cons (NULL_TREE, yyvsp[-1].ftype.t, chainon (yyvsp[0].ttype, yyvsp[-2].ftype.t)); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 429:
#line 1991 "parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ftype.t); ;}
    break;

  case 430:
#line 1993 "parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ftype.t, yyvsp[-1].ttype); ;}
    break;

  case 431:
#line 1995 "parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 432:
#line 1997 "parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, NULL_TREE); ;}
    break;

  case 433:
#line 2001 "parse.y"
    { skip_evaluation++; ;}
    break;

  case 434:
#line 2005 "parse.y"
    { skip_evaluation++; ;}
    break;

  case 435:
#line 2009 "parse.y"
    { skip_evaluation++; ;}
    break;

  case 436:
#line 2018 "parse.y"
    { yyval.ftype.lookups = NULL_TREE; ;}
    break;

  case 437:
#line 2020 "parse.y"
    { yyval.ftype.t = yyvsp[0].ttype; yyval.ftype.new_type_flag = 0; yyval.ftype.lookups = NULL_TREE; ;}
    break;

  case 438:
#line 2022 "parse.y"
    { yyval.ftype.t = yyvsp[0].ttype; yyval.ftype.new_type_flag = 0; yyval.ftype.lookups = NULL_TREE; ;}
    break;

  case 439:
#line 2024 "parse.y"
    { yyval.ftype.t = finish_typeof (yyvsp[-1].ttype);
		  yyval.ftype.new_type_flag = 0; yyval.ftype.lookups = NULL_TREE;
		  skip_evaluation--; ;}
    break;

  case 440:
#line 2028 "parse.y"
    { yyval.ftype.t = groktypename (yyvsp[-1].ftype.t);
		  yyval.ftype.new_type_flag = 0; yyval.ftype.lookups = NULL_TREE;
		  skip_evaluation--; ;}
    break;

  case 441:
#line 2032 "parse.y"
    { tree type = TREE_TYPE (yyvsp[-1].ttype);

                  yyval.ftype.new_type_flag = 0; yyval.ftype.lookups = NULL_TREE;
		  if (IS_AGGR_TYPE (type))
		    {
		      sorry ("sigof type specifier");
		      yyval.ftype.t = type;
		    }
		  else
		    {
		      error ("`sigof' applied to non-aggregate expression");
		      yyval.ftype.t = error_mark_node;
		    }
		;}
    break;

  case 442:
#line 2047 "parse.y"
    { tree type = groktypename (yyvsp[-1].ftype.t);

                  yyval.ftype.new_type_flag = 0; yyval.ftype.lookups = NULL_TREE;
		  if (IS_AGGR_TYPE (type))
		    {
		      sorry ("sigof type specifier");
		      yyval.ftype.t = type;
		    }
		  else
		    {
		      error("`sigof' applied to non-aggregate type");
		      yyval.ftype.t = error_mark_node;
		    }
		;}
    break;

  case 443:
#line 2067 "parse.y"
    { yyval.ftype.t = yyvsp[0].ttype; yyval.ftype.new_type_flag = 0; ;}
    break;

  case 444:
#line 2069 "parse.y"
    { yyval.ftype.t = yyvsp[0].ttype; yyval.ftype.new_type_flag = 0; ;}
    break;

  case 447:
#line 2076 "parse.y"
    { check_multiple_declarators (); ;}
    break;

  case 449:
#line 2082 "parse.y"
    { check_multiple_declarators (); ;}
    break;

  case 451:
#line 2088 "parse.y"
    { check_multiple_declarators (); ;}
    break;

  case 452:
#line 2093 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 453:
#line 2095 "parse.y"
    { if (TREE_CHAIN (yyvsp[-1].ttype)) yyvsp[-1].ttype = combine_strings (yyvsp[-1].ttype); yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 454:
#line 2100 "parse.y"
    { yyval.ttype = parse_decl (yyvsp[-3].ttype, yyvsp[-1].ttype, 1); ;}
    break;

  case 455:
#line 2103 "parse.y"
    { parse_end_decl (yyvsp[-1].ttype, yyvsp[0].ttype, yyvsp[-4].ttype); ;}
    break;

  case 456:
#line 2105 "parse.y"
    {
		  yyval.ttype = parse_decl (yyvsp[-2].ttype, yyvsp[0].ttype, 0);
		  parse_end_decl (yyval.ttype, NULL_TREE, yyvsp[-1].ttype);
		;}
    break;

  case 457:
#line 2119 "parse.y"
    { yyval.ttype = parse_decl0 (yyvsp[-3].ttype, yyvsp[-4].ftype.t,
					   yyvsp[-4].ftype.lookups, yyvsp[-1].ttype, 1); ;}
    break;

  case 458:
#line 2124 "parse.y"
    { parse_end_decl (yyvsp[-1].ttype, yyvsp[0].ttype, yyvsp[-4].ttype); ;}
    break;

  case 459:
#line 2126 "parse.y"
    { tree d = parse_decl0 (yyvsp[-2].ttype, yyvsp[-3].ftype.t,
					yyvsp[-3].ftype.lookups, yyvsp[0].ttype, 0);
		  parse_end_decl (d, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 460:
#line 2133 "parse.y"
    {;}
    break;

  case 461:
#line 2138 "parse.y"
    {;}
    break;

  case 462:
#line 2143 "parse.y"
    { /* Set things up as initdcl0_innards expects.  */
	      yyval.ttype = yyvsp[0].ttype;
	      yyvsp[0].ttype = yyvsp[-1].ttype; 
              yyvsp[-1].ftype.t = NULL_TREE;
	      yyvsp[-1].ftype.lookups = NULL_TREE; ;}
    break;

  case 463:
#line 2149 "parse.y"
    {;}
    break;

  case 464:
#line 2151 "parse.y"
    { tree d = parse_decl0 (yyvsp[-2].ttype, NULL_TREE, NULL_TREE, yyvsp[0].ttype, 0);
		  parse_end_decl (d, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 465:
#line 2159 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 466:
#line 2161 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 467:
#line 2166 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 468:
#line 2168 "parse.y"
    { yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 469:
#line 2173 "parse.y"
    { yyval.ttype = yyvsp[-2].ttype; ;}
    break;

  case 470:
#line 2178 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 471:
#line 2180 "parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 472:
#line 2185 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 473:
#line 2187 "parse.y"
    { yyval.ttype = build_tree_list (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 474:
#line 2189 "parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-3].ttype, build_tree_list (NULL_TREE, yyvsp[-1].ttype)); ;}
    break;

  case 475:
#line 2191 "parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-5].ttype, tree_cons (NULL_TREE, yyvsp[-3].ttype, yyvsp[-1].ttype)); ;}
    break;

  case 476:
#line 2193 "parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 481:
#line 2209 "parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 482:
#line 2211 "parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 483:
#line 2216 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 484:
#line 2218 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 486:
#line 2227 "parse.y"
    { yyval.ttype = build_nt (CONSTRUCTOR, NULL_TREE, NULL_TREE);
		  TREE_HAS_CONSTRUCTOR (yyval.ttype) = 1; ;}
    break;

  case 487:
#line 2230 "parse.y"
    { yyval.ttype = build_nt (CONSTRUCTOR, NULL_TREE, nreverse (yyvsp[-1].ttype));
		  TREE_HAS_CONSTRUCTOR (yyval.ttype) = 1; ;}
    break;

  case 488:
#line 2233 "parse.y"
    { yyval.ttype = build_nt (CONSTRUCTOR, NULL_TREE, nreverse (yyvsp[-2].ttype));
		  TREE_HAS_CONSTRUCTOR (yyval.ttype) = 1; ;}
    break;

  case 489:
#line 2236 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 490:
#line 2243 "parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyval.ttype); ;}
    break;

  case 491:
#line 2245 "parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyval.ttype); ;}
    break;

  case 492:
#line 2248 "parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 493:
#line 2250 "parse.y"
    { yyval.ttype = build_tree_list (yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 494:
#line 2252 "parse.y"
    { yyval.ttype = tree_cons (yyvsp[-2].ttype, yyvsp[0].ttype, yyval.ttype); ;}
    break;

  case 495:
#line 2257 "parse.y"
    {
		  expand_body (finish_function (2));
		  process_next_inline (yyvsp[-2].pi);
		;}
    break;

  case 496:
#line 2262 "parse.y"
    { 
		  expand_body (finish_function (2)); 
                  process_next_inline (yyvsp[-2].pi);
		;}
    break;

  case 497:
#line 2267 "parse.y"
    { 
		  finish_function (2); 
		  process_next_inline (yyvsp[-2].pi); ;}
    break;

  case 500:
#line 2281 "parse.y"
    { replace_defarg (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 501:
#line 2283 "parse.y"
    { replace_defarg (yyvsp[-2].ttype, error_mark_node); ;}
    break;

  case 503:
#line 2289 "parse.y"
    { do_pending_defargs (); ;}
    break;

  case 504:
#line 2291 "parse.y"
    { do_pending_defargs (); ;}
    break;

  case 505:
#line 2296 "parse.y"
    { yyval.ttype = current_enum_type;
		  current_enum_type = start_enum (yyvsp[-1].ttype); ;}
    break;

  case 506:
#line 2299 "parse.y"
    { yyval.ftype.t = current_enum_type;
		  finish_enum (current_enum_type);
		  yyval.ftype.new_type_flag = 1;
		  current_enum_type = yyvsp[-2].ttype;
		  check_for_missing_semicolon (yyval.ftype.t); ;}
    break;

  case 507:
#line 2305 "parse.y"
    { yyval.ttype = current_enum_type;
		  current_enum_type = start_enum (make_anon_name ()); ;}
    break;

  case 508:
#line 2308 "parse.y"
    { yyval.ftype.t = current_enum_type;
		  finish_enum (current_enum_type);
		  yyval.ftype.new_type_flag = 1;
		  current_enum_type = yyvsp[-2].ttype;
		  check_for_missing_semicolon (yyval.ftype.t); ;}
    break;

  case 509:
#line 2314 "parse.y"
    { yyval.ftype.t = xref_tag (enum_type_node, yyvsp[0].ttype, 1); 
		  yyval.ftype.new_type_flag = 0; ;}
    break;

  case 510:
#line 2317 "parse.y"
    { yyval.ftype.t = xref_tag (enum_type_node, yyvsp[0].ttype, 1); 
		  yyval.ftype.new_type_flag = 0; ;}
    break;

  case 511:
#line 2320 "parse.y"
    { yyval.ftype.t = yyvsp[0].ttype;
		  yyval.ftype.new_type_flag = 0; 
		  if (!processing_template_decl)
		    pedwarn ("using `typename' outside of template"); ;}
    break;

  case 512:
#line 2326 "parse.y"
    {
		  if (yyvsp[-1].ttype && yyvsp[-2].ftype.t != error_mark_node)
		    {
		      tree type = TREE_TYPE (yyvsp[-2].ftype.t);
		  
		      if (TREE_CODE (type) == TYPENAME_TYPE)
			/* In a definition of a member class template,
                           we will get here with an implicit typename,
                           a TYPENAME_TYPE with a type. */
			type = TREE_TYPE (type);
		      maybe_process_partial_specialization (type);
		      xref_basetypes (current_aggr, yyvsp[-2].ftype.t, type, yyvsp[-1].ttype);
		    }
		  yyvsp[-2].ftype.t = begin_class_definition (TREE_TYPE (yyvsp[-2].ftype.t)); 
		  check_class_key (current_aggr, yyvsp[-2].ftype.t);
                  current_aggr = NULL_TREE; ;}
    break;

  case 513:
#line 2343 "parse.y"
    { 
		  int semi;
		  tree t;

		  if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  semi = yychar == ';';

		  t = finish_class_definition (yyvsp[-6].ftype.t, yyvsp[0].ttype, semi, yyvsp[-6].ftype.new_type_flag);
		  yyval.ttype = t;

		  /* restore current_aggr */
		  current_aggr = TREE_CODE (t) != RECORD_TYPE
				 ? union_type_node
				 : CLASSTYPE_DECLARED_CLASS (t)
				 ? class_type_node : record_type_node;
		;}
    break;

  case 514:
#line 2361 "parse.y"
    {
		  done_pending_defargs ();
		  begin_inline_definitions ();
		;}
    break;

  case 515:
#line 2366 "parse.y"
    {
		  finish_inline_definitions ();
		  yyval.ftype.t = yyvsp[-3].ttype;
		  yyval.ftype.new_type_flag = 1; 
		;}
    break;

  case 516:
#line 2372 "parse.y"
    {
		  yyval.ftype.t = TREE_TYPE (yyvsp[0].ftype.t);
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag;
		  check_class_key (current_aggr, yyval.ftype.t);
		;}
    break;

  case 520:
#line 2387 "parse.y"
    { if (pedantic && !in_system_header)
		    pedwarn ("comma at end of enumerator list"); ;}
    break;

  case 522:
#line 2394 "parse.y"
    { error ("storage class specifier `%s' not allowed after struct or class", IDENTIFIER_POINTER (yyvsp[0].ttype)); ;}
    break;

  case 523:
#line 2396 "parse.y"
    { error ("type specifier `%s' not allowed after struct or class", IDENTIFIER_POINTER (yyvsp[0].ttype)); ;}
    break;

  case 524:
#line 2398 "parse.y"
    { error ("type qualifier `%s' not allowed after struct or class", IDENTIFIER_POINTER (yyvsp[0].ttype)); ;}
    break;

  case 525:
#line 2400 "parse.y"
    { error ("no body nor ';' separates two class, struct or union declarations"); ;}
    break;

  case 526:
#line 2402 "parse.y"
    { yyval.ttype = build_tree_list (yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 527:
#line 2407 "parse.y"
    {
		  current_aggr = yyvsp[-1].ttype;
		  yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype);
		;}
    break;

  case 528:
#line 2412 "parse.y"
    {
		  current_aggr = yyvsp[-2].ttype;
		  yyval.ttype = build_tree_list (yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 529:
#line 2417 "parse.y"
    {
		  current_aggr = yyvsp[-3].ttype;
		  yyval.ttype = build_tree_list (yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 530:
#line 2422 "parse.y"
    {
		  current_aggr = yyvsp[-2].ttype;
		  yyval.ttype = build_tree_list (global_namespace, yyvsp[0].ttype);
		;}
    break;

  case 531:
#line 2430 "parse.y"
    { 
		  current_aggr = yyvsp[-1].ttype; 
		  yyval.ttype = yyvsp[0].ttype;
		;}
    break;

  case 532:
#line 2435 "parse.y"
    { 
		  current_aggr = yyvsp[-2].ttype; 
		  yyval.ttype = yyvsp[0].ttype;
		;}
    break;

  case 533:
#line 2440 "parse.y"
    { 
		  current_aggr = yyvsp[-3].ttype; 
		  yyval.ttype = yyvsp[0].ttype;
		;}
    break;

  case 534:
#line 2448 "parse.y"
    {
		  yyval.ftype.t = handle_class_head (current_aggr,
					    TREE_PURPOSE (yyvsp[0].ttype), TREE_VALUE (yyvsp[0].ttype),
					    0, &yyval.ftype.new_type_flag);
		;}
    break;

  case 535:
#line 2454 "parse.y"
    {
		  current_aggr = yyvsp[-1].ttype;
		  yyval.ftype.t = TYPE_MAIN_DECL (xref_tag (current_aggr, yyvsp[0].ttype, 0));
		  yyval.ftype.new_type_flag = 1;
		;}
    break;

  case 536:
#line 2460 "parse.y"
    {
		  yyval.ftype.t = yyvsp[0].ttype;
		  yyval.ftype.new_type_flag = 0;
		;}
    break;

  case 537:
#line 2468 "parse.y"
    {
		  yyungetc ('{', 1);
		  yyval.ftype.t = handle_class_head (current_aggr,
					    TREE_PURPOSE (yyvsp[-1].ttype), TREE_VALUE (yyvsp[-1].ttype),
					    1, &yyval.ftype.new_type_flag);
		;}
    break;

  case 538:
#line 2475 "parse.y"
    {
		  yyungetc (':', 1);
		  yyval.ftype.t = handle_class_head (current_aggr,
					    TREE_PURPOSE (yyvsp[-1].ttype), TREE_VALUE (yyvsp[-1].ttype),
					    1, &yyval.ftype.new_type_flag);
		;}
    break;

  case 539:
#line 2482 "parse.y"
    {
		  yyungetc ('{', 1);
		  yyval.ftype.t = yyvsp[-1].ttype;
		  yyval.ftype.new_type_flag = 0;
		  if (TREE_CODE (TREE_TYPE (yyvsp[-1].ttype)) == RECORD_TYPE)
		    /* We might be specializing a template with a different
		       class-key.  */
		    CLASSTYPE_DECLARED_CLASS (TREE_TYPE (yyvsp[-1].ttype))
		      = (current_aggr == class_type_node);
		;}
    break;

  case 540:
#line 2493 "parse.y"
    {
		  yyungetc (':', 1);
		  yyval.ftype.t = yyvsp[-1].ttype;
		  yyval.ftype.new_type_flag = 0;
		  if (TREE_CODE (TREE_TYPE (yyvsp[-1].ttype)) == RECORD_TYPE)
		    /* We might be specializing a template with a different
		       class-key.  */
		    CLASSTYPE_DECLARED_CLASS (TREE_TYPE (yyvsp[-1].ttype))
		      = (current_aggr == class_type_node);
		;}
    break;

  case 541:
#line 2504 "parse.y"
    {
		  yyungetc ('{', 1);
		  current_aggr = yyvsp[-2].ttype;
		  yyval.ftype.t = handle_class_head (current_aggr,
					    NULL_TREE, yyvsp[-1].ttype,
					    1, &yyval.ftype.new_type_flag);
		;}
    break;

  case 542:
#line 2512 "parse.y"
    {
		  yyungetc (':', 1);
		  current_aggr = yyvsp[-2].ttype;
		  yyval.ftype.t = handle_class_head (current_aggr,
					    NULL_TREE, yyvsp[-1].ttype,
					    1, &yyval.ftype.new_type_flag);
		;}
    break;

  case 543:
#line 2520 "parse.y"
    {
		  current_aggr = yyvsp[-1].ttype;
		  yyval.ftype.t = TYPE_MAIN_DECL (xref_tag (yyvsp[-1].ttype, make_anon_name (), 0));
		  yyval.ftype.new_type_flag = 0;
		  CLASSTYPE_DECLARED_CLASS (TREE_TYPE (yyval.ftype.t))
		    = yyvsp[-1].ttype == class_type_node;
		  yyungetc ('{', 1);
		;}
    break;

  case 544:
#line 2532 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 545:
#line 2534 "parse.y"
    { error ("no bases given following `:'");
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 546:
#line 2537 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 548:
#line 2543 "parse.y"
    { yyval.ttype = chainon (yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 549:
#line 2548 "parse.y"
    { yyval.ttype = finish_base_specifier (access_default_node, yyvsp[0].ttype); ;}
    break;

  case 550:
#line 2550 "parse.y"
    { yyval.ttype = finish_base_specifier (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 551:
#line 2555 "parse.y"
    { if (!TYPE_P (yyval.ttype))
		    yyval.ttype = error_mark_node; ;}
    break;

  case 552:
#line 2558 "parse.y"
    { yyval.ttype = TREE_TYPE (yyval.ttype); ;}
    break;

  case 554:
#line 2564 "parse.y"
    { if (yyvsp[-1].ttype != ridpointers[(int)RID_VIRTUAL])
		    error ("`%D' access", yyvsp[-1].ttype);
		  yyval.ttype = access_default_virtual_node; ;}
    break;

  case 555:
#line 2568 "parse.y"
    {
		  if (yyvsp[-2].ttype != access_default_virtual_node)
		    error ("multiple access specifiers");
		  else if (yyvsp[-1].ttype == access_public_node)
		    yyval.ttype = access_public_virtual_node;
		  else if (yyvsp[-1].ttype == access_protected_node)
		    yyval.ttype = access_protected_virtual_node;
		  else /* $2 == access_private_node */
		    yyval.ttype = access_private_virtual_node;
		;}
    break;

  case 556:
#line 2579 "parse.y"
    { if (yyvsp[-1].ttype != ridpointers[(int)RID_VIRTUAL])
		    error ("`%D' access", yyvsp[-1].ttype);
		  else if (yyval.ttype == access_public_node)
		    yyval.ttype = access_public_virtual_node;
		  else if (yyval.ttype == access_protected_node)
		    yyval.ttype = access_protected_virtual_node;
		  else if (yyval.ttype == access_private_node)
		    yyval.ttype = access_private_virtual_node;
		  else
		    error ("multiple `virtual' specifiers");
		;}
    break;

  case 561:
#line 2600 "parse.y"
    {
		  current_access_specifier = yyvsp[-1].ttype;
                ;}
    break;

  case 562:
#line 2609 "parse.y"
    { 
		  finish_member_declaration (yyvsp[0].ttype);
		  current_aggr = NULL_TREE;
		  reset_type_access_control ();
		;}
    break;

  case 563:
#line 2615 "parse.y"
    { 
		  finish_member_declaration (yyvsp[0].ttype);
		  current_aggr = NULL_TREE;
		  reset_type_access_control ();
		;}
    break;

  case 565:
#line 2625 "parse.y"
    { error ("missing ';' before right brace");
		  yyungetc ('}', 0); ;}
    break;

  case 566:
#line 2630 "parse.y"
    { yyval.ttype = finish_method (yyval.ttype); ;}
    break;

  case 567:
#line 2632 "parse.y"
    { yyval.ttype = finish_method (yyval.ttype); ;}
    break;

  case 568:
#line 2634 "parse.y"
    { yyval.ttype = finish_method (yyval.ttype); ;}
    break;

  case 569:
#line 2636 "parse.y"
    { yyval.ttype = finish_method (yyval.ttype); ;}
    break;

  case 570:
#line 2638 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 571:
#line 2640 "parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  pedantic = yyvsp[-1].itype; ;}
    break;

  case 572:
#line 2643 "parse.y"
    {  
		  if (yyvsp[0].ttype)
		    yyval.ttype = finish_member_template_decl (yyvsp[0].ttype);
		  else
		    /* The component was already processed.  */
		    yyval.ttype = NULL_TREE;

		  finish_template_decl (yyvsp[-1].ttype);
		;}
    break;

  case 573:
#line 2653 "parse.y"
    { 
		  yyval.ttype = finish_member_class_template (yyvsp[-1].ftype.t); 
		  finish_template_decl (yyvsp[-2].ttype);
		;}
    break;

  case 574:
#line 2658 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 575:
#line 2666 "parse.y"
    {
		  /* Most of the productions for component_decl only
		     allow the creation of one new member, so we call
		     finish_member_declaration in component_decl_list.
		     For this rule and the next, however, there can be
		     more than one member, e.g.:

		       int i, j;

		     and we need the first member to be fully
		     registered before the second is processed.
		     Therefore, the rules for components take care of
		     this processing.  To avoid registering the
		     components more than once, we send NULL_TREE up
		     here; that lets finish_member_declaration know
		     that there is nothing to do.  */
		  if (!yyvsp[0].itype)
		    grok_x_components (yyvsp[-1].ftype.t);
		  yyval.ttype = NULL_TREE;
		;}
    break;

  case 576:
#line 2687 "parse.y"
    { 
		  if (!yyvsp[0].itype)
		    grok_x_components (yyvsp[-1].ftype.t);
		  yyval.ttype = NULL_TREE; 
		;}
    break;

  case 577:
#line 2693 "parse.y"
    { yyval.ttype = grokfield (yyval.ttype, NULL_TREE, yyvsp[0].ttype, yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 578:
#line 2695 "parse.y"
    { yyval.ttype = grokfield (yyval.ttype, NULL_TREE, yyvsp[0].ttype, yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 579:
#line 2697 "parse.y"
    { yyval.ttype = grokbitfield (NULL_TREE, NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 580:
#line 2699 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 581:
#line 2710 "parse.y"
    { tree specs, attrs;
		  split_specs_attrs (yyvsp[-4].ftype.t, &specs, &attrs);
		  yyval.ttype = grokfield (yyvsp[-3].ttype, specs, yyvsp[0].ttype, yyvsp[-2].ttype,
				  chainon (yyvsp[-1].ttype, attrs)); ;}
    break;

  case 582:
#line 2715 "parse.y"
    { yyval.ttype = grokfield (yyval.ttype, NULL_TREE, yyvsp[0].ttype, yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 583:
#line 2717 "parse.y"
    { yyval.ttype = do_class_using_decl (yyvsp[0].ttype); ;}
    break;

  case 584:
#line 2724 "parse.y"
    { yyval.itype = 0; ;}
    break;

  case 585:
#line 2726 "parse.y"
    { 
		  if (PROCESSING_REAL_TEMPLATE_DECL_P ())
		    yyvsp[0].ttype = finish_member_template_decl (yyvsp[0].ttype);
		  finish_member_declaration (yyvsp[0].ttype); 
		  yyval.itype = 1;
		;}
    break;

  case 586:
#line 2733 "parse.y"
    { 
		  check_multiple_declarators ();
		  if (PROCESSING_REAL_TEMPLATE_DECL_P ())
		    yyvsp[0].ttype = finish_member_template_decl (yyvsp[0].ttype);
		  finish_member_declaration (yyvsp[0].ttype);
		  yyval.itype = 2;
		;}
    break;

  case 587:
#line 2744 "parse.y"
    { yyval.itype = 0; ;}
    break;

  case 588:
#line 2746 "parse.y"
    { 
		  if (PROCESSING_REAL_TEMPLATE_DECL_P ())
		    yyvsp[0].ttype = finish_member_template_decl (yyvsp[0].ttype);
		  finish_member_declaration (yyvsp[0].ttype);
		  yyval.itype = 1;
		;}
    break;

  case 589:
#line 2753 "parse.y"
    { 
		  check_multiple_declarators ();
		  if (PROCESSING_REAL_TEMPLATE_DECL_P ())
		    yyvsp[0].ttype = finish_member_template_decl (yyvsp[0].ttype);
		  finish_member_declaration (yyvsp[0].ttype); 
		  yyval.itype = 2;
		;}
    break;

  case 594:
#line 2774 "parse.y"
    { yyval.ttype = parse_field0 (yyvsp[-3].ttype, yyvsp[-4].ftype.t, yyvsp[-4].ftype.lookups,
				     yyvsp[-1].ttype, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 595:
#line 2777 "parse.y"
    { yyval.ttype = parse_bitfield0 (yyvsp[-3].ttype, yyvsp[-4].ftype.t, yyvsp[-4].ftype.lookups,
					yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 596:
#line 2783 "parse.y"
    { yyval.ttype = parse_field0 (yyvsp[-3].ttype, yyvsp[-4].ftype.t, yyvsp[-4].ftype.lookups,
				     yyvsp[-1].ttype, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 597:
#line 2786 "parse.y"
    { yyval.ttype = parse_field0 (yyvsp[-3].ttype, yyvsp[-4].ftype.t, yyvsp[-4].ftype.lookups,
				     yyvsp[-1].ttype, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 598:
#line 2789 "parse.y"
    { yyval.ttype = parse_bitfield0 (yyvsp[-3].ttype, yyvsp[-4].ftype.t, yyvsp[-4].ftype.lookups,
					yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 599:
#line 2792 "parse.y"
    { yyval.ttype = parse_bitfield0 (NULL_TREE, yyvsp[-3].ftype.t,
					yyvsp[-3].ftype.lookups, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 600:
#line 2798 "parse.y"
    { yyval.ttype = parse_field (yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 601:
#line 2800 "parse.y"
    { yyval.ttype = parse_bitfield (yyvsp[-3].ttype, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 602:
#line 2805 "parse.y"
    { yyval.ttype = parse_field (yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 603:
#line 2807 "parse.y"
    { yyval.ttype = parse_bitfield (yyvsp[-3].ttype, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 604:
#line 2809 "parse.y"
    { yyval.ttype = parse_bitfield (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 609:
#line 2828 "parse.y"
    { build_enumerator (yyvsp[0].ttype, NULL_TREE, current_enum_type); ;}
    break;

  case 610:
#line 2830 "parse.y"
    { build_enumerator (yyvsp[-2].ttype, yyvsp[0].ttype, current_enum_type); ;}
    break;

  case 611:
#line 2836 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[-1].ftype.t, yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 612:
#line 2839 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[0].ftype.t, NULL_TREE); 
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag; ;}
    break;

  case 613:
#line 2844 "parse.y"
    {
		  if (pedantic)
		    pedwarn ("ISO C++ forbids array dimensions with parenthesized type in new");
		  yyval.ftype.t = build_nt (ARRAY_REF, TREE_VALUE (yyvsp[-4].ftype.t), yyvsp[-1].ttype);
		  yyval.ftype.t = build_tree_list (TREE_PURPOSE (yyvsp[-4].ftype.t), yyval.ftype.t);
		  yyval.ftype.new_type_flag = yyvsp[-4].ftype.new_type_flag;
		;}
    break;

  case 614:
#line 2855 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 615:
#line 2857 "parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyval.ttype); ;}
    break;

  case 616:
#line 2862 "parse.y"
    { yyval.ftype.t = hash_tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE);
		  yyval.ftype.new_type_flag = 0; ;}
    break;

  case 617:
#line 2865 "parse.y"
    { yyval.ftype.t = hash_tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ftype.t); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 618:
#line 2868 "parse.y"
    { yyval.ftype.t = hash_tree_cons (yyvsp[0].ttype, NULL_TREE, NULL_TREE); 
		  yyval.ftype.new_type_flag = 0; ;}
    break;

  case 619:
#line 2871 "parse.y"
    { yyval.ftype.t = hash_tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ftype.t); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 620:
#line 2881 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 621:
#line 2883 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 622:
#line 2885 "parse.y"
    { yyval.ttype = empty_parms (); ;}
    break;

  case 623:
#line 2887 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 625:
#line 2895 "parse.y"
    {
		  /* Provide support for '(' attributes '*' declarator ')'
		     etc */
		  yyval.ttype = tree_cons (yyvsp[-1].ttype, yyvsp[0].ttype, NULL_TREE);
		;}
    break;

  case 626:
#line 2905 "parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 627:
#line 2907 "parse.y"
    { yyval.ttype = make_reference_declarator (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 628:
#line 2909 "parse.y"
    { yyval.ttype = make_pointer_declarator (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 629:
#line 2911 "parse.y"
    { yyval.ttype = make_reference_declarator (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 630:
#line 2913 "parse.y"
    { tree arg = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype);
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-2].ttype, arg);
		;}
    break;

  case 632:
#line 2921 "parse.y"
    { yyval.ttype = make_call_declarator (yyval.ttype, yyvsp[-2].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 633:
#line 2923 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyval.ttype, yyvsp[-1].ttype); ;}
    break;

  case 634:
#line 2925 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyval.ttype, NULL_TREE); ;}
    break;

  case 635:
#line 2927 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 636:
#line 2929 "parse.y"
    { push_nested_class (yyvsp[-1].ttype, 3);
		  yyval.ttype = build_nt (SCOPE_REF, yyval.ttype, yyvsp[0].ttype);
		  TREE_COMPLEXITY (yyval.ttype) = current_class_depth; ;}
    break;

  case 638:
#line 2937 "parse.y"
    {
		  if (TREE_CODE (yyvsp[0].ttype) == IDENTIFIER_NODE)
		    {
		      yyval.ttype = lookup_name (yyvsp[0].ttype, 1);
		      maybe_note_name_used_in_class (yyvsp[0].ttype, yyval.ttype);
		    }
		  else
		    yyval.ttype = yyvsp[0].ttype;
		;}
    break;

  case 639:
#line 2947 "parse.y"
    {
		  if (TREE_CODE (yyvsp[0].ttype) == IDENTIFIER_NODE)
		    yyval.ttype = IDENTIFIER_GLOBAL_VALUE (yyvsp[0].ttype);
		  else
		    yyval.ttype = yyvsp[0].ttype;
		  got_scope = NULL_TREE;
		;}
    break;

  case 642:
#line 2960 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 643:
#line 2965 "parse.y"
    { yyval.ttype = get_type_decl (yyvsp[0].ttype); ;}
    break;

  case 645:
#line 2974 "parse.y"
    {
		  /* Provide support for '(' attributes '*' declarator ')'
		     etc */
		  yyval.ttype = tree_cons (yyvsp[-1].ttype, yyvsp[0].ttype, NULL_TREE);
		;}
    break;

  case 646:
#line 2983 "parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 647:
#line 2985 "parse.y"
    { yyval.ttype = make_reference_declarator (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 648:
#line 2987 "parse.y"
    { yyval.ttype = make_pointer_declarator (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 649:
#line 2989 "parse.y"
    { yyval.ttype = make_reference_declarator (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 650:
#line 2991 "parse.y"
    { tree arg = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype);
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-2].ttype, arg);
		;}
    break;

  case 652:
#line 2999 "parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 653:
#line 3001 "parse.y"
    { yyval.ttype = make_reference_declarator (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 654:
#line 3003 "parse.y"
    { yyval.ttype = make_pointer_declarator (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 655:
#line 3005 "parse.y"
    { yyval.ttype = make_reference_declarator (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 656:
#line 3007 "parse.y"
    { tree arg = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype);
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-2].ttype, arg);
		;}
    break;

  case 658:
#line 3015 "parse.y"
    { yyval.ttype = make_call_declarator (yyval.ttype, yyvsp[-2].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 659:
#line 3017 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 660:
#line 3019 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyval.ttype, yyvsp[-1].ttype); ;}
    break;

  case 661:
#line 3021 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyval.ttype, NULL_TREE); ;}
    break;

  case 662:
#line 3023 "parse.y"
    { enter_scope_of (yyvsp[0].ttype); ;}
    break;

  case 663:
#line 3025 "parse.y"
    { enter_scope_of (yyvsp[0].ttype); yyval.ttype = yyvsp[0].ttype;;}
    break;

  case 664:
#line 3027 "parse.y"
    { yyval.ttype = build_nt (SCOPE_REF, global_namespace, yyvsp[0].ttype);
		  enter_scope_of (yyval.ttype); 
		;}
    break;

  case 665:
#line 3031 "parse.y"
    { got_scope = NULL_TREE;
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-1].ttype, yyvsp[0].ttype);
		  enter_scope_of (yyval.ttype);
		;}
    break;

  case 666:
#line 3039 "parse.y"
    { got_scope = NULL_TREE;
		  yyval.ttype = build_nt (SCOPE_REF, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 667:
#line 3042 "parse.y"
    { got_scope = NULL_TREE;
 		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 668:
#line 3048 "parse.y"
    { got_scope = NULL_TREE;
		  yyval.ttype = build_nt (SCOPE_REF, yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 669:
#line 3051 "parse.y"
    { got_scope = NULL_TREE;
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 671:
#line 3058 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 672:
#line 3063 "parse.y"
    { yyval.ttype = build_functional_cast (yyvsp[-3].ftype.t, yyvsp[-1].ttype); ;}
    break;

  case 673:
#line 3065 "parse.y"
    { yyval.ttype = reparse_decl_as_expr (yyvsp[-3].ftype.t, yyvsp[-1].ttype); ;}
    break;

  case 674:
#line 3067 "parse.y"
    { yyval.ttype = reparse_absdcl_as_expr (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 679:
#line 3079 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 680:
#line 3081 "parse.y"
    { got_scope = yyval.ttype 
		    = make_typename_type (yyvsp[-3].ttype, yyvsp[-1].ttype, tf_error); ;}
    break;

  case 681:
#line 3085 "parse.y"
    { got_scope = yyval.ttype 
		    = make_typename_type (yyvsp[-2].ttype, yyvsp[-1].ttype, tf_error); ;}
    break;

  case 682:
#line 3088 "parse.y"
    { got_scope = yyval.ttype 
		    = make_typename_type (yyvsp[-2].ttype, yyvsp[-1].ttype, tf_error); ;}
    break;

  case 683:
#line 3096 "parse.y"
    {
		  if (TREE_CODE (yyvsp[-1].ttype) == IDENTIFIER_NODE)
		    {
		      yyval.ttype = lastiddecl;
		      maybe_note_name_used_in_class (yyvsp[-1].ttype, yyval.ttype);
		    }
		  got_scope = yyval.ttype =
		    complete_type (TYPE_MAIN_VARIANT (TREE_TYPE (yyval.ttype)));
		;}
    break;

  case 684:
#line 3106 "parse.y"
    {
		  if (TREE_CODE (yyvsp[-1].ttype) == IDENTIFIER_NODE)
		    yyval.ttype = lastiddecl;
		  got_scope = yyval.ttype = TREE_TYPE (yyval.ttype);
		;}
    break;

  case 685:
#line 3112 "parse.y"
    {
		  if (TREE_CODE (yyval.ttype) == IDENTIFIER_NODE)
		    yyval.ttype = lastiddecl;
		  got_scope = yyval.ttype;
		;}
    break;

  case 686:
#line 3118 "parse.y"
    { got_scope = yyval.ttype = complete_type (TREE_TYPE (yyvsp[-1].ttype)); ;}
    break;

  case 688:
#line 3124 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 689:
#line 3129 "parse.y"
    {
		  if (TYPE_P (yyvsp[-1].ttype))
		    yyval.ttype = make_typename_type (yyvsp[-1].ttype, yyvsp[0].ttype, tf_error);
		  else if (TREE_CODE (yyvsp[0].ttype) == IDENTIFIER_NODE)
		    error ("`%T' is not a class or namespace", yyvsp[0].ttype);
		  else
		    {
		      yyval.ttype = yyvsp[0].ttype;
		      if (TREE_CODE (yyval.ttype) == TYPE_DECL)
			yyval.ttype = TREE_TYPE (yyval.ttype);
		    }
		;}
    break;

  case 690:
#line 3142 "parse.y"
    { yyval.ttype = TREE_TYPE (yyvsp[0].ttype); ;}
    break;

  case 691:
#line 3144 "parse.y"
    { yyval.ttype = make_typename_type (yyvsp[-1].ttype, yyvsp[0].ttype, tf_error); ;}
    break;

  case 692:
#line 3146 "parse.y"
    { yyval.ttype = make_typename_type (yyvsp[-2].ttype, yyvsp[0].ttype, tf_error); ;}
    break;

  case 693:
#line 3151 "parse.y"
    {
		  if (TREE_CODE (yyvsp[0].ttype) == IDENTIFIER_NODE)
		    error ("`%T' is not a class or namespace", yyvsp[0].ttype);
		  else if (TREE_CODE (yyvsp[0].ttype) == TYPE_DECL)
		    yyval.ttype = TREE_TYPE (yyvsp[0].ttype);
		;}
    break;

  case 694:
#line 3158 "parse.y"
    {
		  if (TYPE_P (yyvsp[-1].ttype))
		    yyval.ttype = make_typename_type (yyvsp[-1].ttype, yyvsp[0].ttype, tf_error);
		  else if (TREE_CODE (yyvsp[0].ttype) == IDENTIFIER_NODE)
		    error ("`%T' is not a class or namespace", yyvsp[0].ttype);
		  else
		    {
		      yyval.ttype = yyvsp[0].ttype;
		      if (TREE_CODE (yyval.ttype) == TYPE_DECL)
			yyval.ttype = TREE_TYPE (yyval.ttype);
		    }
		;}
    break;

  case 695:
#line 3171 "parse.y"
    { got_scope = yyval.ttype 
		    = make_typename_type (yyvsp[-2].ttype, yyvsp[-1].ttype, tf_error); ;}
    break;

  case 696:
#line 3174 "parse.y"
    { got_scope = yyval.ttype 
		    = make_typename_type (yyvsp[-3].ttype, yyvsp[-1].ttype, tf_error); ;}
    break;

  case 697:
#line 3182 "parse.y"
    {
		  if (TREE_CODE (yyvsp[-1].ttype) != TYPE_DECL)
		    yyval.ttype = lastiddecl;

		  /* Retrieve the type for the identifier, which might involve
		     some computation. */
		  got_scope = complete_type (TREE_TYPE (yyval.ttype));

		  if (yyval.ttype == error_mark_node)
		    error ("`%T' is not a class or namespace", yyvsp[-1].ttype);
		;}
    break;

  case 698:
#line 3194 "parse.y"
    {
		  if (TREE_CODE (yyvsp[-1].ttype) != TYPE_DECL)
		    yyval.ttype = lastiddecl;
		  got_scope = complete_type (TREE_TYPE (yyval.ttype));
		;}
    break;

  case 699:
#line 3200 "parse.y"
    { got_scope = yyval.ttype = complete_type (TREE_TYPE (yyval.ttype)); ;}
    break;

  case 702:
#line 3204 "parse.y"
    {
		  if (TREE_CODE (yyval.ttype) == IDENTIFIER_NODE)
		    yyval.ttype = lastiddecl;
		  got_scope = yyval.ttype;
		;}
    break;

  case 703:
#line 3213 "parse.y"
    { yyval.ttype = build_min_nt (TEMPLATE_ID_EXPR, yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 704:
#line 3218 "parse.y"
    {
		  if (TREE_CODE (yyvsp[0].ttype) == IDENTIFIER_NODE)
		    yyval.ttype = IDENTIFIER_GLOBAL_VALUE (yyvsp[0].ttype);
		  else
		    yyval.ttype = yyvsp[0].ttype;
		  got_scope = NULL_TREE;
		;}
    break;

  case 706:
#line 3227 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 707:
#line 3232 "parse.y"
    { got_scope = NULL_TREE; ;}
    break;

  case 708:
#line 3234 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; got_scope = NULL_TREE; ;}
    break;

  case 709:
#line 3241 "parse.y"
    { got_scope = void_type_node; ;}
    break;

  case 710:
#line 3247 "parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 711:
#line 3249 "parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 712:
#line 3251 "parse.y"
    { yyval.ttype = make_reference_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 713:
#line 3253 "parse.y"
    { yyval.ttype = make_reference_declarator (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 714:
#line 3255 "parse.y"
    { tree arg = make_pointer_declarator (yyvsp[0].ttype, NULL_TREE);
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-1].ttype, arg);
		;}
    break;

  case 715:
#line 3259 "parse.y"
    { tree arg = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype);
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-2].ttype, arg);
		;}
    break;

  case 717:
#line 3268 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 718:
#line 3270 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyval.ttype, yyvsp[-1].ttype); ;}
    break;

  case 720:
#line 3276 "parse.y"
    {
		  /* Provide support for '(' attributes '*' declarator ')'
		     etc */
		  yyval.ttype = tree_cons (yyvsp[-1].ttype, yyvsp[0].ttype, NULL_TREE);
		;}
    break;

  case 721:
#line 3286 "parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 722:
#line 3288 "parse.y"
    { yyval.ttype = make_pointer_declarator (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 723:
#line 3290 "parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[0].ftype.t, NULL_TREE); ;}
    break;

  case 724:
#line 3292 "parse.y"
    { yyval.ttype = make_pointer_declarator (NULL_TREE, NULL_TREE); ;}
    break;

  case 725:
#line 3294 "parse.y"
    { yyval.ttype = make_reference_declarator (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 726:
#line 3296 "parse.y"
    { yyval.ttype = make_reference_declarator (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 727:
#line 3298 "parse.y"
    { yyval.ttype = make_reference_declarator (yyvsp[0].ftype.t, NULL_TREE); ;}
    break;

  case 728:
#line 3300 "parse.y"
    { yyval.ttype = make_reference_declarator (NULL_TREE, NULL_TREE); ;}
    break;

  case 729:
#line 3302 "parse.y"
    { tree arg = make_pointer_declarator (yyvsp[0].ttype, NULL_TREE);
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-1].ttype, arg);
		;}
    break;

  case 730:
#line 3306 "parse.y"
    { tree arg = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype);
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-2].ttype, arg);
		;}
    break;

  case 732:
#line 3315 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 733:
#line 3318 "parse.y"
    { yyval.ttype = make_call_declarator (yyval.ttype, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 734:
#line 3320 "parse.y"
    { yyval.ttype = make_call_declarator (yyval.ttype, empty_parms (), yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 735:
#line 3322 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyval.ttype, yyvsp[-1].ttype); ;}
    break;

  case 736:
#line 3324 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyval.ttype, NULL_TREE); ;}
    break;

  case 737:
#line 3326 "parse.y"
    { yyval.ttype = make_call_declarator (NULL_TREE, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 738:
#line 3328 "parse.y"
    { set_quals_and_spec (yyval.ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 739:
#line 3330 "parse.y"
    { set_quals_and_spec (yyval.ttype, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 740:
#line 3332 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 741:
#line 3334 "parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, NULL_TREE, NULL_TREE); ;}
    break;

  case 748:
#line 3357 "parse.y"
    { if (pedantic)
		    pedwarn ("ISO C++ forbids label declarations"); ;}
    break;

  case 751:
#line 3368 "parse.y"
    { 
		  while (yyvsp[-1].ttype)
		    {
		      finish_label_decl (TREE_VALUE (yyvsp[-1].ttype));
		      yyvsp[-1].ttype = TREE_CHAIN (yyvsp[-1].ttype);
		    }
		;}
    break;

  case 752:
#line 3379 "parse.y"
    { yyval.ttype = begin_compound_stmt (0); ;}
    break;

  case 753:
#line 3381 "parse.y"
    { STMT_LINENO (yyvsp[-1].ttype) = yyvsp[-3].itype;
		  finish_compound_stmt (0, yyvsp[-1].ttype); ;}
    break;

  case 754:
#line 3387 "parse.y"
    { last_expr_type = NULL_TREE; ;}
    break;

  case 755:
#line 3392 "parse.y"
    { yyval.ttype = begin_if_stmt ();
		  cond_stmt_keyword = "if"; ;}
    break;

  case 756:
#line 3395 "parse.y"
    { finish_if_stmt_cond (yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 757:
#line 3397 "parse.y"
    { yyval.ttype = yyvsp[-3].ttype;
		  finish_then_clause (yyvsp[-3].ttype); ;}
    break;

  case 759:
#line 3404 "parse.y"
    { yyval.ttype = begin_compound_stmt (0); ;}
    break;

  case 760:
#line 3406 "parse.y"
    { STMT_LINENO (yyvsp[-2].ttype) = yyvsp[-1].itype;
		  if (yyvsp[0].ttype) STMT_LINENO (yyvsp[0].ttype) = yyvsp[-1].itype;
		  finish_compound_stmt (0, yyvsp[-2].ttype); ;}
    break;

  case 762:
#line 3414 "parse.y"
    { if (yyvsp[0].ttype) STMT_LINENO (yyvsp[0].ttype) = yyvsp[-1].itype; ;}
    break;

  case 763:
#line 3419 "parse.y"
    { finish_stmt ();
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 764:
#line 3422 "parse.y"
    { yyval.ttype = finish_expr_stmt (yyvsp[-1].ttype); ;}
    break;

  case 765:
#line 3424 "parse.y"
    { begin_else_clause (); ;}
    break;

  case 766:
#line 3426 "parse.y"
    { 
		  yyval.ttype = yyvsp[-3].ttype;
		  finish_else_clause (yyvsp[-3].ttype); 
		  finish_if_stmt ();
		;}
    break;

  case 767:
#line 3432 "parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  finish_if_stmt (); ;}
    break;

  case 768:
#line 3435 "parse.y"
    {
		  yyval.ttype = begin_while_stmt ();
		  cond_stmt_keyword = "while";
		;}
    break;

  case 769:
#line 3440 "parse.y"
    { finish_while_stmt_cond (yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 770:
#line 3442 "parse.y"
    { yyval.ttype = yyvsp[-3].ttype;
		  finish_while_stmt (yyvsp[-3].ttype); ;}
    break;

  case 771:
#line 3445 "parse.y"
    { yyval.ttype = begin_do_stmt (); ;}
    break;

  case 772:
#line 3447 "parse.y"
    {
		  finish_do_body (yyvsp[-2].ttype);
		  cond_stmt_keyword = "do";
		;}
    break;

  case 773:
#line 3452 "parse.y"
    { yyval.ttype = yyvsp[-5].ttype;
		  finish_do_stmt (yyvsp[-1].ttype, yyvsp[-5].ttype); ;}
    break;

  case 774:
#line 3455 "parse.y"
    { yyval.ttype = begin_for_stmt (); ;}
    break;

  case 775:
#line 3457 "parse.y"
    { finish_for_init_stmt (yyvsp[-2].ttype); ;}
    break;

  case 776:
#line 3459 "parse.y"
    { finish_for_cond (yyvsp[-1].ttype, yyvsp[-5].ttype); ;}
    break;

  case 777:
#line 3461 "parse.y"
    { finish_for_expr (yyvsp[-1].ttype, yyvsp[-8].ttype); ;}
    break;

  case 778:
#line 3463 "parse.y"
    { yyval.ttype = yyvsp[-10].ttype;
		  finish_for_stmt (yyvsp[-10].ttype); ;}
    break;

  case 779:
#line 3466 "parse.y"
    { yyval.ttype = begin_switch_stmt (); ;}
    break;

  case 780:
#line 3468 "parse.y"
    { finish_switch_cond (yyvsp[-1].ttype, yyvsp[-3].ttype); ;}
    break;

  case 781:
#line 3470 "parse.y"
    { yyval.ttype = yyvsp[-5].ttype;
		  finish_switch_stmt (yyvsp[-5].ttype); ;}
    break;

  case 782:
#line 3473 "parse.y"
    { yyval.ttype = finish_case_label (yyvsp[-1].ttype, NULL_TREE); ;}
    break;

  case 783:
#line 3475 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 784:
#line 3477 "parse.y"
    { yyval.ttype = finish_case_label (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 785:
#line 3479 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 786:
#line 3481 "parse.y"
    { yyval.ttype = finish_case_label (NULL_TREE, NULL_TREE); ;}
    break;

  case 787:
#line 3483 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 788:
#line 3485 "parse.y"
    { yyval.ttype = finish_break_stmt (); ;}
    break;

  case 789:
#line 3487 "parse.y"
    { yyval.ttype = finish_continue_stmt (); ;}
    break;

  case 790:
#line 3489 "parse.y"
    { yyval.ttype = finish_return_stmt (NULL_TREE); ;}
    break;

  case 791:
#line 3491 "parse.y"
    { yyval.ttype = finish_return_stmt (yyvsp[-1].ttype); ;}
    break;

  case 792:
#line 3493 "parse.y"
    { yyval.ttype = finish_asm_stmt (yyvsp[-4].ttype, yyvsp[-2].ttype, NULL_TREE, NULL_TREE,
					NULL_TREE);
		  ASM_INPUT_P (yyval.ttype) = 1; ;}
    break;

  case 793:
#line 3498 "parse.y"
    { yyval.ttype = finish_asm_stmt (yyvsp[-6].ttype, yyvsp[-4].ttype, yyvsp[-2].ttype, NULL_TREE, NULL_TREE); ;}
    break;

  case 794:
#line 3502 "parse.y"
    { yyval.ttype = finish_asm_stmt (yyvsp[-8].ttype, yyvsp[-6].ttype, yyvsp[-4].ttype, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 795:
#line 3504 "parse.y"
    { yyval.ttype = finish_asm_stmt (yyvsp[-6].ttype, yyvsp[-4].ttype, NULL_TREE, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 796:
#line 3508 "parse.y"
    { yyval.ttype = finish_asm_stmt (yyvsp[-10].ttype, yyvsp[-8].ttype, yyvsp[-6].ttype, yyvsp[-4].ttype, yyvsp[-2].ttype); ;}
    break;

  case 797:
#line 3511 "parse.y"
    { yyval.ttype = finish_asm_stmt (yyvsp[-8].ttype, yyvsp[-6].ttype, NULL_TREE, yyvsp[-4].ttype, yyvsp[-2].ttype); ;}
    break;

  case 798:
#line 3514 "parse.y"
    { yyval.ttype = finish_asm_stmt (yyvsp[-8].ttype, yyvsp[-6].ttype, yyvsp[-4].ttype, NULL_TREE, yyvsp[-2].ttype); ;}
    break;

  case 799:
#line 3516 "parse.y"
    { 
		  if (pedantic)
		    pedwarn ("ISO C++ forbids computed gotos");
		  yyval.ttype = finish_goto_stmt (yyvsp[-1].ttype);
		;}
    break;

  case 800:
#line 3522 "parse.y"
    { yyval.ttype = finish_goto_stmt (yyvsp[-1].ttype); ;}
    break;

  case 801:
#line 3524 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 802:
#line 3526 "parse.y"
    { error ("label must be followed by statement");
		  yyungetc ('}', 0);
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 803:
#line 3530 "parse.y"
    { finish_stmt ();
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 804:
#line 3533 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 805:
#line 3535 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 806:
#line 3537 "parse.y"
    { do_local_using_decl (yyvsp[0].ttype);
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 807:
#line 3540 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 808:
#line 3545 "parse.y"
    { yyval.ttype = begin_function_try_block (); ;}
    break;

  case 809:
#line 3547 "parse.y"
    { finish_function_try_block (yyvsp[-1].ttype); ;}
    break;

  case 810:
#line 3549 "parse.y"
    { finish_function_handler_sequence (yyvsp[-3].ttype); ;}
    break;

  case 811:
#line 3554 "parse.y"
    { yyval.ttype = begin_try_block (); ;}
    break;

  case 812:
#line 3556 "parse.y"
    { finish_try_block (yyvsp[-1].ttype); ;}
    break;

  case 813:
#line 3558 "parse.y"
    { finish_handler_sequence (yyvsp[-3].ttype); ;}
    break;

  case 816:
#line 3565 "parse.y"
    { /* Generate a fake handler block to avoid later aborts. */
		  tree fake_handler = begin_handler ();
		  finish_handler_parms (NULL_TREE, fake_handler);
		  finish_handler (fake_handler);
		  yyval.ttype = fake_handler;

		  error ("must have at least one catch per try block");
		;}
    break;

  case 817:
#line 3577 "parse.y"
    { yyval.ttype = begin_handler (); ;}
    break;

  case 818:
#line 3579 "parse.y"
    { finish_handler_parms (yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 819:
#line 3581 "parse.y"
    { finish_handler (yyvsp[-3].ttype); ;}
    break;

  case 822:
#line 3591 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 823:
#line 3607 "parse.y"
    { 
		  check_for_new_type ("inside exception declarations", yyvsp[-1].ftype);
		  yyval.ttype = start_handler_parms (TREE_PURPOSE (yyvsp[-1].ftype.t),
					    TREE_VALUE (yyvsp[-1].ftype.t));
		;}
    break;

  case 824:
#line 3616 "parse.y"
    { finish_label_stmt (yyvsp[-1].ttype); ;}
    break;

  case 825:
#line 3618 "parse.y"
    { finish_label_stmt (yyvsp[-1].ttype); ;}
    break;

  case 826:
#line 3620 "parse.y"
    { finish_label_stmt (yyvsp[-1].ttype); ;}
    break;

  case 827:
#line 3622 "parse.y"
    { finish_label_stmt (yyvsp[-1].ttype); ;}
    break;

  case 828:
#line 3627 "parse.y"
    { finish_expr_stmt (yyvsp[-1].ttype); ;}
    break;

  case 830:
#line 3630 "parse.y"
    { if (pedantic)
		    pedwarn ("ISO C++ forbids compound statements inside for initializations");
		;}
    break;

  case 831:
#line 3639 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 833:
#line 3645 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 835:
#line 3648 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 836:
#line 3655 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 839:
#line 3662 "parse.y"
    { yyval.ttype = chainon (yyval.ttype, yyvsp[0].ttype); ;}
    break;

  case 840:
#line 3667 "parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (NULL_TREE, yyvsp[-3].ttype), yyvsp[-1].ttype); ;}
    break;

  case 841:
#line 3669 "parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (yyvsp[-5].ttype, yyvsp[-3].ttype), yyvsp[-1].ttype); ;}
    break;

  case 842:
#line 3674 "parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, combine_strings (yyvsp[0].ttype), NULL_TREE);;}
    break;

  case 843:
#line 3676 "parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, combine_strings (yyvsp[0].ttype), yyvsp[-2].ttype); ;}
    break;

  case 844:
#line 3687 "parse.y"
    {
		  yyval.ttype = empty_parms();
		;}
    break;

  case 846:
#line 3692 "parse.y"
    { yyval.ttype = finish_parmlist (build_tree_list (NULL_TREE, yyvsp[0].ftype.t), 0);
		  check_for_new_type ("inside parameter list", yyvsp[0].ftype); ;}
    break;

  case 847:
#line 3700 "parse.y"
    { yyval.ttype = finish_parmlist (yyval.ttype, 0); ;}
    break;

  case 848:
#line 3702 "parse.y"
    { yyval.ttype = finish_parmlist (yyvsp[-1].ttype, 1); ;}
    break;

  case 849:
#line 3705 "parse.y"
    { yyval.ttype = finish_parmlist (yyvsp[-1].ttype, 1); ;}
    break;

  case 850:
#line 3707 "parse.y"
    { yyval.ttype = finish_parmlist (build_tree_list (NULL_TREE,
							 yyvsp[-1].ftype.t), 1); ;}
    break;

  case 851:
#line 3710 "parse.y"
    { yyval.ttype = finish_parmlist (NULL_TREE, 1); ;}
    break;

  case 852:
#line 3712 "parse.y"
    {
		  /* This helps us recover from really nasty
		     parse errors, for example, a missing right
		     parenthesis.  */
		  yyerror ("possibly missing ')'");
		  yyval.ttype = finish_parmlist (yyvsp[-1].ttype, 0);
		  yyungetc (':', 0);
		  yychar = ')';
		;}
    break;

  case 853:
#line 3722 "parse.y"
    {
		  /* This helps us recover from really nasty
		     parse errors, for example, a missing right
		     parenthesis.  */
		  yyerror ("possibly missing ')'");
		  yyval.ttype = finish_parmlist (build_tree_list (NULL_TREE,
							 yyvsp[-1].ftype.t), 0); 
		  yyungetc (':', 0);
		  yychar = ')';
		;}
    break;

  case 854:
#line 3737 "parse.y"
    { maybe_snarf_defarg (); ;}
    break;

  case 855:
#line 3739 "parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 858:
#line 3750 "parse.y"
    { check_for_new_type ("in a parameter list", yyvsp[0].ftype);
		  yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ftype.t); ;}
    break;

  case 859:
#line 3753 "parse.y"
    { check_for_new_type ("in a parameter list", yyvsp[-1].ftype);
		  yyval.ttype = build_tree_list (yyvsp[0].ttype, yyvsp[-1].ftype.t); ;}
    break;

  case 860:
#line 3756 "parse.y"
    { check_for_new_type ("in a parameter list", yyvsp[0].ftype);
		  yyval.ttype = chainon (yyval.ttype, yyvsp[0].ftype.t); ;}
    break;

  case 861:
#line 3759 "parse.y"
    { yyval.ttype = chainon (yyval.ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 862:
#line 3761 "parse.y"
    { yyval.ttype = chainon (yyval.ttype, build_tree_list (yyvsp[0].ttype, yyvsp[-2].ttype)); ;}
    break;

  case 864:
#line 3767 "parse.y"
    { check_for_new_type ("in a parameter list", yyvsp[-1].ftype);
		  yyval.ttype = build_tree_list (NULL_TREE, yyvsp[-1].ftype.t); ;}
    break;

  case 865:
#line 3777 "parse.y"
    { yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag;
		  yyval.ftype.t = build_tree_list (yyvsp[-1].ftype.t, yyvsp[0].ttype); ;}
    break;

  case 866:
#line 3780 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[-1].ftype.t, yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 867:
#line 3783 "parse.y"
    { yyval.ftype.t = build_tree_list (build_tree_list (NULL_TREE, yyvsp[-1].ftype.t),
					  yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 868:
#line 3787 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[-1].ftype.t, yyvsp[0].ttype);
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag; ;}
    break;

  case 869:
#line 3790 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[0].ftype.t, NULL_TREE); 
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag; ;}
    break;

  case 870:
#line 3793 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[-1].ftype.t, yyvsp[0].ttype); 
		  yyval.ftype.new_type_flag = 0; ;}
    break;

  case 871:
#line 3799 "parse.y"
    { yyval.ftype.t = build_tree_list (NULL_TREE, yyvsp[0].ftype.t);
		  yyval.ftype.new_type_flag = yyvsp[0].ftype.new_type_flag;  ;}
    break;

  case 872:
#line 3802 "parse.y"
    { yyval.ftype.t = build_tree_list (yyvsp[0].ttype, yyvsp[-1].ftype.t);
		  yyval.ftype.new_type_flag = yyvsp[-1].ftype.new_type_flag;  ;}
    break;

  case 875:
#line 3813 "parse.y"
    { see_typename (); ;}
    break;

  case 876:
#line 3818 "parse.y"
    {
		  error ("type specifier omitted for parameter");
		  yyval.ttype = build_tree_list (integer_type_node, NULL_TREE);
		;}
    break;

  case 877:
#line 3823 "parse.y"
    {
		  if (TREE_CODE (yyval.ttype) == SCOPE_REF)
		    {
		      if (TREE_CODE (TREE_OPERAND (yyval.ttype, 0)) == TEMPLATE_TYPE_PARM
			  || TREE_CODE (TREE_OPERAND (yyval.ttype, 0)) == BOUND_TEMPLATE_TEMPLATE_PARM)
			error ("`%E' is not a type, use `typename %E' to make it one", yyval.ttype, yyval.ttype);
		      else
			error ("no type `%D' in `%T'", TREE_OPERAND (yyval.ttype, 1), TREE_OPERAND (yyval.ttype, 0));
		    }
		  else
		    error ("type specifier omitted for parameter `%E'", yyval.ttype);
		  yyval.ttype = build_tree_list (integer_type_node, yyval.ttype);
		;}
    break;

  case 878:
#line 3840 "parse.y"
    {
                  error("'%D' is used as a type, but is not defined as a type.", yyvsp[-4].ttype);
                  yyvsp[-2].ttype = error_mark_node;
		;}
    break;

  case 879:
#line 3848 "parse.y"
    { ;}
    break;

  case 881:
#line 3854 "parse.y"
    { ;}
    break;

  case 883:
#line 3860 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 884:
#line 3862 "parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 885:
#line 3864 "parse.y"
    { yyval.ttype = empty_except_spec; ;}
    break;

  case 886:
#line 3869 "parse.y"
    {
		  check_for_new_type ("exception specifier", yyvsp[0].ftype);
		  yyval.ttype = groktypename (yyvsp[0].ftype.t);
		;}
    break;

  case 887:
#line 3874 "parse.y"
    { yyval.ttype = error_mark_node; ;}
    break;

  case 888:
#line 3879 "parse.y"
    { yyval.ttype = add_exception_specifier (NULL_TREE, yyvsp[0].ttype, 1); ;}
    break;

  case 889:
#line 3881 "parse.y"
    { yyval.ttype = add_exception_specifier (yyvsp[-2].ttype, yyvsp[0].ttype, 1); ;}
    break;

  case 890:
#line 3886 "parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 891:
#line 3888 "parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 892:
#line 3890 "parse.y"
    { yyval.ttype = make_reference_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 893:
#line 3892 "parse.y"
    { tree arg = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype);
		  yyval.ttype = build_nt (SCOPE_REF, yyvsp[-2].ttype, arg);
		;}
    break;

  case 894:
#line 3899 "parse.y"
    {
	  saved_scopes = tree_cons (got_scope, got_object, saved_scopes);
	  TREE_LANG_FLAG_0 (saved_scopes) = looking_for_typename;
	  /* We look for conversion-type-id's in both the class and current
	     scopes, just as for ID in 'ptr->ID::'.  */
	  looking_for_typename = 1;
	  got_object = got_scope;
          got_scope = NULL_TREE;
	;}
    break;

  case 895:
#line 3911 "parse.y"
    { got_scope = TREE_PURPOSE (saved_scopes);
          got_object = TREE_VALUE (saved_scopes);
	  looking_for_typename = TREE_LANG_FLAG_0 (saved_scopes);
          saved_scopes = TREE_CHAIN (saved_scopes);
	;}
    break;

  case 896:
#line 3920 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (MULT_EXPR)); ;}
    break;

  case 897:
#line 3922 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (TRUNC_DIV_EXPR)); ;}
    break;

  case 898:
#line 3924 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (TRUNC_MOD_EXPR)); ;}
    break;

  case 899:
#line 3926 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (PLUS_EXPR)); ;}
    break;

  case 900:
#line 3928 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (MINUS_EXPR)); ;}
    break;

  case 901:
#line 3930 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (BIT_AND_EXPR)); ;}
    break;

  case 902:
#line 3932 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (BIT_IOR_EXPR)); ;}
    break;

  case 903:
#line 3934 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (BIT_XOR_EXPR)); ;}
    break;

  case 904:
#line 3936 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (BIT_NOT_EXPR)); ;}
    break;

  case 905:
#line 3938 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (COMPOUND_EXPR)); ;}
    break;

  case 906:
#line 3940 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (yyvsp[-1].code)); ;}
    break;

  case 907:
#line 3942 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (LT_EXPR)); ;}
    break;

  case 908:
#line 3944 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (GT_EXPR)); ;}
    break;

  case 909:
#line 3946 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (yyvsp[-1].code)); ;}
    break;

  case 910:
#line 3948 "parse.y"
    { yyval.ttype = frob_opname (ansi_assopname (yyvsp[-1].code)); ;}
    break;

  case 911:
#line 3950 "parse.y"
    { yyval.ttype = frob_opname (ansi_assopname (NOP_EXPR)); ;}
    break;

  case 912:
#line 3952 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (yyvsp[-1].code)); ;}
    break;

  case 913:
#line 3954 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (yyvsp[-1].code)); ;}
    break;

  case 914:
#line 3956 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (POSTINCREMENT_EXPR)); ;}
    break;

  case 915:
#line 3958 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (PREDECREMENT_EXPR)); ;}
    break;

  case 916:
#line 3960 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (TRUTH_ANDIF_EXPR)); ;}
    break;

  case 917:
#line 3962 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (TRUTH_ORIF_EXPR)); ;}
    break;

  case 918:
#line 3964 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (TRUTH_NOT_EXPR)); ;}
    break;

  case 919:
#line 3966 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (COND_EXPR)); ;}
    break;

  case 920:
#line 3968 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (yyvsp[-1].code)); ;}
    break;

  case 921:
#line 3970 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (COMPONENT_REF)); ;}
    break;

  case 922:
#line 3972 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (MEMBER_REF)); ;}
    break;

  case 923:
#line 3974 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (CALL_EXPR)); ;}
    break;

  case 924:
#line 3976 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (ARRAY_REF)); ;}
    break;

  case 925:
#line 3978 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (NEW_EXPR)); ;}
    break;

  case 926:
#line 3980 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (DELETE_EXPR)); ;}
    break;

  case 927:
#line 3982 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (VEC_NEW_EXPR)); ;}
    break;

  case 928:
#line 3984 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (VEC_DELETE_EXPR)); ;}
    break;

  case 929:
#line 3986 "parse.y"
    { yyval.ttype = frob_opname (grokoptypename (yyvsp[-2].ftype.t, yyvsp[-1].ttype)); ;}
    break;

  case 930:
#line 3988 "parse.y"
    { yyval.ttype = frob_opname (ansi_opname (ERROR_MARK)); ;}
    break;

  case 931:
#line 3995 "parse.y"
    { if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  yyval.itype = lineno; ;}
    break;


    }

/* Line 991 of yacc.c.  */
#line 10227 "p2092.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
 __attribute__ ((__unused__));
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 3999 "parse.y"


#ifdef SPEW_DEBUG
const char *
debug_yytranslate (value)
    int value;
{
  return yytname[YYTRANSLATE (value)];
}

#endif

