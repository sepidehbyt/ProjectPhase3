/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "yacc.y"

#include<stdio.h>
#include "stack.h"

extern FILE *yyin;
FILE *fout;
extern int yylineno;
extern char* yytext;
int yylex();
void yyerror(char* error);

/* Line 371 of yacc.c  */
#line 80 "yacc.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc.tab.h".  */
#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Real = 258,
     Int = 259,
     RIGHTP = 260,
     LEFTP = 261,
     SEMICOLON = 262,
     ASSIGNMENT = 263,
     COLON = 264,
     COMMA = 265,
     If = 266,
     Procedure = 267,
     Function = 268,
     Begin = 269,
     End = 270,
     True = 271,
     False = 272,
     While = 273,
     Do = 274,
     For = 275,
     To = 276,
     Downto = 277,
     IDtoken = 278,
     Bool = 279,
     INTtoken = 280,
     REALtoken = 281,
     Program = 282,
     Case = 283,
     Return = 284,
     Then = 285,
     Else = 286,
     OrElse = 287,
     AndThen = 288,
     NE = 289,
     EQ = 290,
     GE = 291,
     LE = 292,
     GT = 293,
     LT = 294,
     SUB = 295,
     ADD = 296,
     DIV = 297,
     MUL = 298
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 14 "yacc.y"

	char *sval;
	char *temp;


/* Line 387 of yacc.c  */
#line 172 "yacc.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 200 "yacc.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   355

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    16,    18,    21,    23,    25,    27,
      29,    31,    33,    35,    39,    41,    45,    49,    58,    66,
      77,    87,    89,    93,    96,    98,   102,   106,   108,   110,
     114,   116,   118,   120,   122,   126,   131,   138,   143,   152,
     161,   167,   170,   172,   176,   180,   184,   188,   192,   196,
     200,   204,   208,   212,   216,   220,   224,   226,   228,   230,
     232,   234,   239,   244,   250,   252
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    27,    23,     7,    46,    57,     7,    -1,
      27,    23,     7,    57,     7,    -1,    47,    -1,    46,    47,
      -1,    51,    -1,    52,    -1,    53,    -1,     4,    -1,     3,
      -1,    24,    -1,    23,    -1,    23,     8,    64,    -1,    49,
      -1,    50,    10,    49,    -1,    48,    50,     7,    -1,    12,
      23,     6,    54,     5,    46,    57,     7,    -1,    12,    23,
       6,    54,     5,    57,     7,    -1,    13,    61,     6,    54,
       5,     9,    48,    46,    57,     7,    -1,    13,    61,     6,
      54,     5,     9,    48,    57,     7,    -1,    55,    -1,    54,
       7,    55,    -1,    48,    56,    -1,    23,    -1,    56,    10,
      23,    -1,    14,    58,    15,    -1,    63,    -1,    63,    -1,
      58,     7,    63,    -1,    23,    -1,    25,    -1,    23,    -1,
      23,    -1,    59,     8,    64,    -1,    11,    64,    30,    57,
      -1,    11,    64,    30,    57,    31,    57,    -1,    18,    64,
      19,    57,    -1,    20,    59,     8,    64,    21,    64,    19,
      57,    -1,    20,    59,     8,    64,    22,    64,    19,    57,
      -1,    28,    64,     9,    65,    15,    -1,    29,    64,    -1,
      64,    -1,    64,    33,    64,    -1,    64,    32,    64,    -1,
      64,    41,    64,    -1,    64,    40,    64,    -1,    64,    43,
      64,    -1,    64,    42,    64,    -1,     6,    64,     5,    -1,
      64,    38,    64,    -1,    64,    36,    64,    -1,    64,    34,
      64,    -1,    64,    35,    64,    -1,    64,    39,    64,    -1,
      64,    37,    64,    -1,    25,    -1,    26,    -1,    16,    -1,
      17,    -1,    59,    -1,    62,     6,    66,     5,    -1,    60,
       9,    57,     7,    -1,    65,    60,     9,    57,     7,    -1,
      64,    -1,    66,    10,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Real", "Int", "RIGHTP", "LEFTP",
  "SEMICOLON", "ASSIGNMENT", "COLON", "COMMA", "If", "Procedure",
  "Function", "Begin", "End", "True", "False", "While", "Do", "For", "To",
  "Downto", "IDtoken", "Bool", "INTtoken", "REALtoken", "Program", "Case",
  "Return", "Then", "Else", "OrElse", "AndThen", "NE", "EQ", "GE", "LE",
  "GT", "LT", "SUB", "ADD", "DIV", "MUL", "$accept", "program", "declist",
  "dec", "type", "iddec", "idlist", "vardec", "procdec", "funcdec",
  "paramdecs", "paramdec", "paramlist", "block", "stmtlist", "lvalue",
  "caseValue", "funcValue", "funcCallValue", "stmt", "exp", "caseelement",
  "explist", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    47,    47,    47,    48,
      48,    48,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    54,    54,    55,    56,    56,    57,    57,    58,    58,
      59,    60,    61,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     5,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     8,     7,    10,
       9,     1,     3,     2,     1,     3,     3,     1,     1,     3,
       1,     1,     1,     1,     3,     4,     6,     4,     8,     8,
       5,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     4,     4,     5,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    10,     9,     0,     0,
       0,     0,     0,    58,    59,     0,     0,    30,    11,    56,
      57,     0,     0,     0,     4,     0,     6,     7,     8,     0,
      60,     0,    27,    42,    60,     0,     0,     0,    32,     0,
       0,    28,     0,    30,     0,     0,    41,     5,     0,    12,
      14,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
       0,     0,    26,     0,     0,     0,     2,     0,    16,     0,
      34,    64,     0,    44,    43,    52,    53,    51,    55,    50,
      54,    46,    45,    48,    47,    35,     0,     0,    21,     0,
      29,    37,     0,    31,     0,     0,    13,    15,    61,     0,
       0,    24,    23,     0,     0,     0,     0,     0,     0,    40,
       0,    65,    36,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    25,     0,    18,     0,     0,     0,    62,     0,
      17,     0,     0,    38,    39,    63,     0,    20,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    23,    24,    25,    50,    51,    26,    27,    28,
      97,    98,   112,    29,    40,    34,   104,    39,    31,    32,
      33,   105,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
       0,    27,    54,    57,  -106,   152,  -106,  -106,   293,   293,
      38,    44,   246,  -106,  -106,   293,    58,    59,  -106,  -106,
    -106,   293,   293,   152,  -106,    63,  -106,  -106,  -106,    80,
      82,    89,  -106,   302,  -106,     1,   290,    90,  -106,    92,
      41,  -106,   171,  -106,    83,    37,   302,  -106,    81,    91,
    -106,     6,  -106,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,  -106,     3,    21,
      21,   246,  -106,     3,   293,    76,  -106,   293,  -106,    63,
     302,   302,     5,   183,   312,    42,    42,    42,    42,    42,
      42,    16,    16,  -106,  -106,    71,    86,    46,  -106,    50,
    -106,  -106,   255,  -106,   102,    -3,   302,  -106,  -106,   293,
       3,  -106,   107,   152,    21,   103,   293,   293,     3,  -106,
     109,   302,  -106,    99,   152,   116,  -106,    21,   196,   208,
     117,     3,  -106,   118,  -106,   152,     3,     3,  -106,   120,
    -106,   152,   121,  -106,  -106,  -106,   122,  -106,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -106,  -106,  -105,   -20,   -65,    55,  -106,  -106,  -106,  -106,
      65,    19,  -106,   -21,  -106,    -5,    32,  -106,  -106,   -11,
      85,  -106,  -106
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const yytype_int16 yytable[] =
{
      30,    41,    48,    47,    96,    96,    67,    30,   124,     8,
     108,    44,   119,    78,     9,   109,    79,    12,    30,    13,
      14,    15,   103,    16,     6,     7,    17,     1,    19,    20,
     141,    21,    22,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    18,    75,    95,    71,    96,
       3,   113,   101,   114,     4,   115,    72,   114,    65,    66,
     100,    37,   135,    30,     5,   -33,    30,    38,    30,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    43,    63,    64,    65,    66,    49,    52,    76,   122,
      53,    74,   125,    35,    36,    54,    69,   130,    70,    77,
      42,   103,   110,   133,    47,    30,    45,    46,    30,   111,
     139,   118,   127,    30,   142,   143,   144,   123,   131,    30,
     146,    47,   132,   134,   138,   140,    30,   145,   147,   148,
      30,    30,    30,   126,   107,    99,    30,   120,    80,    81,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     6,     7,     0,     8,   102,
       0,     0,   106,     9,    10,    11,    12,     0,    13,    14,
      15,     0,    16,     0,     0,    17,    18,    19,    20,     0,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,   128,   129,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,   136,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,   137,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,    13,    14,    15,     0,    16,     0,     0,    17,
       0,    19,    20,     0,    21,    22,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,     0,     0,     0,     0,     0,    17,     0,    19,    20,
      68,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-106)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,    12,    23,    23,    69,    70,     5,    12,   113,     6,
       5,    16,    15,     7,    11,    10,    10,    14,    23,    16,
      17,    18,    25,    20,     3,     4,    23,    27,    25,    26,
     135,    28,    29,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    24,     9,    68,     7,   114,
      23,     5,    73,     7,     0,     5,    15,     7,    42,    43,
      71,    23,   127,    68,     7,     6,    71,    23,    73,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    23,    40,    41,    42,    43,    23,     7,     7,   110,
       8,     8,   113,     8,     9,     6,     6,   118,     6,     8,
      15,    25,    31,   124,   124,   110,    21,    22,   113,    23,
     131,     9,     9,   118,   135,   136,   137,    10,     9,   124,
     141,   141,    23,     7,     7,     7,   131,     7,     7,     7,
     135,   136,   137,   114,    79,    70,   141,   105,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,     3,     4,    -1,     6,    74,
      -1,    -1,    77,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    19,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    19,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    23,
      -1,    25,    26,    -1,    28,    29,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    45,    23,     0,     7,     3,     4,     6,    11,
      12,    13,    14,    16,    17,    18,    20,    23,    24,    25,
      26,    28,    29,    46,    47,    48,    51,    52,    53,    57,
      59,    62,    63,    64,    59,    64,    64,    23,    23,    61,
      58,    63,    64,    23,    59,    64,    64,    47,    57,    23,
      49,    50,     7,     8,     6,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     5,    30,     6,
       6,     7,    15,    19,     8,     9,     7,     8,     7,    10,
      64,    64,    66,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    57,    48,    54,    55,    54,
      63,    57,    64,    25,    60,    65,    64,    49,     5,    10,
      31,    23,    56,     5,     7,     5,    21,    22,     9,    15,
      60,    64,    57,    10,    46,    57,    55,     9,    64,    64,
      57,     9,    23,    57,     7,    48,    19,    19,     7,    57,
       7,    46,    57,    57,    57,     7,    57,     7,     7
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
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
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 37 "yacc.y"
    {fprintf(fout, "Program IDtoken SEMICOLON declist block SEMICOLON -> program yytext = %s \n",  yytext);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 38 "yacc.y"
    {fprintf(fout, "Program IDtoken SEMICOLON block SEMICOLON -> program yytext = %s \n",  yytext);}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 39 "yacc.y"
    {fprintf(fout, "declist -> dec yytext = %s \n",  yytext);}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 40 "yacc.y"
    {fprintf(fout, "declist dec -> declist yytext = %s \n",  yytext);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 41 "yacc.y"
    {fprintf(fout, "vardec -> dec yytext = %s \n",  yytext);}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 42 "yacc.y"
    {fprintf(fout, "procdec -> dec yytext = %s \n",  yytext);}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 43 "yacc.y"
    {fprintf(fout, "funcdec -> dec yytext = %s \n",  yytext);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 44 "yacc.y"
    {fprintf(fout, "Int -> type yytext = %s \n",  yytext);}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 45 "yacc.y"
    {fprintf(fout, "Real -> type yytext = %s \n",  yytext);}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 46 "yacc.y"
    {fprintf(fout, "Bool -> type yytext = %s \n",  yytext);}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 47 "yacc.y"
    {fprintf(fout, "IDtoken -> iddec yytext = %s \n", yylval.sval);}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 48 "yacc.y"
    {fprintf(fout, "iddec -> IDtoken ASSIGNMENT exp yytext = %s \n",  yytext);}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 49 "yacc.y"
    {fprintf(fout, "iddec -> idlist yytext = %s \n",  yytext);}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 50 "yacc.y"
    {fprintf(fout, "idlist -> idlist COMMA iddec yytext = %s \n",  yytext);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 51 "yacc.y"
    {fprintf(fout, "vardec -> type idlist SEMICOLON yytext = %s \n",  yytext);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 52 "yacc.y"
    {fprintf(fout, "Procedure IDtoken LEFTP paramdecs RIGHTP declist block SEMICOLON -> procdec yytext = %s \n",  yytext);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 53 "yacc.y"
    {fprintf(fout, "Procedure IDtoken LEFTP paramdecs RIGHTP block SEMICOLON -> procdec yytext = %s \n",  yytext);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 54 "yacc.y"
    {fprintf(fout, "Function funcValue LEFTP paramdecs RIGHTP COLON type declist block SEMICOLON ->  funcdec yytext = %s \n",  yytext);}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 55 "yacc.y"
    {fprintf(fout, "Function funcValue LEFTP paramdecs RIGHTP COLON type block SEMICOLON ->  funcdec yytext = %s \n",  yytext);}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 56 "yacc.y"
    {fprintf(fout, "paramdec -> paramdecs yytext = %s \n",  yytext);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 57 "yacc.y"
    {fprintf(fout, "paramdecs -> paramdecs SEMICOLON paramdec yytext = %s \n",  yytext);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 58 "yacc.y"
    {fprintf(fout, "paramdec -> type paramlist yytext = %s \n",  yytext);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 59 "yacc.y"
    {fprintf(fout, "IDtoken -> paramlist yytext = %s \n",  yytext);}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 60 "yacc.y"
    {fprintf(fout, "paramlist COMMA IDtoken -> paramlist yytext = %s \n",  yytext);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 61 "yacc.y"
    {fprintf(fout, "Begin stmtlist End -> block yytext = %s \n",  yytext);}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 62 "yacc.y"
    {fprintf(fout, "stmt -> block yytext = %s \n",  yytext);}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 63 "yacc.y"
    {fprintf(fout, "stmt -> stmtlist yytext = %s \n",  yytext);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 64 "yacc.y"
    {fprintf(fout, "stmtlist SEMICOLON stmt -> stmtlist yytext = %s \n",  yytext);}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 65 "yacc.y"
    {fprintf(fout, "IDtoken -> lvalue yytext = %s \n",  yylval.sval);}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 66 "yacc.y"
    {fprintf(fout, "INTtoken -> caseValue yytext = %s \n",  yylval.sval);}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 67 "yacc.y"
    {fprintf(fout, "IDtoken -> funcValue yytext = %s \n",  yylval.sval);}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 68 "yacc.y"
    {fprintf(fout, "IDtoken -> funcCallValue yytext = %s \n",  yylval.sval);}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 69 "yacc.y"
    {fprintf(fout, "lvalue ASSIGNMENT exp -> stmt yytext = %s \n",  yylval.sval);}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 70 "yacc.y"
    {fprintf(fout, "If exp Then block -> stmt yytext = %s \n",  yytext);}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 71 "yacc.y"
    {fprintf(fout, "If exp Then block Else block -> stmt yytext = %s \n",  yytext);}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 72 "yacc.y"
    {fprintf(fout, "While exp Do block -> stmt yytext = %s \n",  yytext);}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 73 "yacc.y"
    {fprintf(fout, "For lvalue ASSIGNMENT exp To exp Do block -> stmt yytext = %s \n",  yytext);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 74 "yacc.y"
    {fprintf(fout, "For lvalue ASSIGNMENT exp Downto exp Do block -> stmt yytext = %s \n",  yytext);}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 75 "yacc.y"
    {fprintf(fout, "Case exp caseelement End -> stmt yytext = %s \n",  yytext);}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 76 "yacc.y"
    {fprintf(fout, "Return exp -> stmt yytext = %s \n",  yytext);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 77 "yacc.y"
    {fprintf(fout, "exp -> stmt yytext = %s \n",  yytext);}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 78 "yacc.y"
    {fprintf(fout, "exp AndThen exp -> exp yytext = %s \n",  yytext);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 79 "yacc.y"
    {fprintf(fout, "exp OrElse exp -> exp yytext = %s \n",  yytext);}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 80 "yacc.y"
    {fprintf(fout, "exp ADD exp -> exp yytext = %s \n",  yytext);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 81 "yacc.y"
    {fprintf(fout, "exp SUB exp -> exp yytext = %s \n",  yytext);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 82 "yacc.y"
    {fprintf(fout, "exp MUL exp -> exp yytext = %s \n",  yytext);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 83 "yacc.y"
    {fprintf(fout, "exp DIV exp -> exp yytext = %s \n",  yytext);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 84 "yacc.y"
    {fprintf(fout, "LEFTP exp RIGHTP -> exp yytext = %s \n",  yytext);}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 85 "yacc.y"
    {fprintf(fout, "exp GT exp -> exp yytext = %s \n",  yytext);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 86 "yacc.y"
    {fprintf(fout, "exp GE exp -> exp yytext = %s \n",  yytext);}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 87 "yacc.y"
    {fprintf(fout, "exp NE exp -> exp yytext = %s \n",  yytext);}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 88 "yacc.y"
    {fprintf(fout, "exp EQ exp -> exp yytext = %s \n",  yytext);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 89 "yacc.y"
    {fprintf(fout, "exp LT exp -> exp yytext = %s \n",  yytext);}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 90 "yacc.y"
    {fprintf(fout, "exp LE exp -> exp yytext = %s \n",  yytext);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 91 "yacc.y"
    {fprintf(fout, "INTtoken -> exp yytext = %s \n",  yytext);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 92 "yacc.y"
    {fprintf(fout, "REALtoken -> exp yytext = %s \n",  yytext);}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 93 "yacc.y"
    {fprintf(fout, "True -> exp yytext = %s \n",  yytext);}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 94 "yacc.y"
    {fprintf(fout, "False -> exp yytext = %s \n",  yytext);}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 95 "yacc.y"
    {fprintf(fout, "lvalue -> exp yytext = %s \n",  yylval.sval);}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 96 "yacc.y"
    {fprintf(fout, "funcCallValue LEFTP explist RIGHTP -> exp yytext = %s \n",  yytext);}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 97 "yacc.y"
    {fprintf(fout, "caseValue COLON block SEMICOLON -> caseelement yytext = %s \n",  yytext);}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 98 "yacc.y"
    {fprintf(fout, "caseelement caseValue COLON block SEMICOLON -> caseelement yytext = %s \n",  yytext);}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 99 "yacc.y"
    {fprintf(fout, "exp -> explist yytext = %s \n",  yytext);}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 100 "yacc.y"
    {fprintf(fout, "explist COMMA exp -> explist yytext = %s \n",  yytext);}
    break;


/* Line 1792 of yacc.c  */
#line 1940 "yacc.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 102 "yacc.y"


int main(){
    yyin = fopen("input.txt", "r");
	fout = fopen("output.txt", "w");
	yyparse();
	return 0;
}

void yyerror(char *s) {
	fprintf(fout, "**Error: Line %d near token '%s' --> Message: %s **\n", yylineno,yytext, s);
}