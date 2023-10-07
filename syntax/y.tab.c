/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

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
     TYPE_IDENTIFIER = 259,
     FLOAT_CONSTANT = 260,
     INTEGER_CONSTANT = 261,
     CHARACTER_CONSTANT = 262,
     STRING_LITERAL = 263,
     PLUS = 264,
     MINUS = 265,
     PLUSPLUS = 266,
     MINUSMINUS = 267,
     AMP = 268,
     BARBAR = 269,
     AMPAMP = 270,
     ARROW = 271,
     SEMICOLON = 272,
     LSS = 273,
     GTR = 274,
     LEQ = 275,
     GEQ = 276,
     EQL = 277,
     NEQ = 278,
     DOTDOTDOT = 279,
     LP = 280,
     RP = 281,
     LB = 282,
     RB = 283,
     LR = 284,
     RR = 285,
     PERIOD = 286,
     COMMA = 287,
     EXCL = 288,
     STAR = 289,
     SLASH = 290,
     PERCENT = 291,
     ASSIGN = 292,
     COLON = 293,
     AUTO_SYM = 294,
     STATIC_SYM = 295,
     TYPEDEF_SYM = 296,
     STRUCT_SYM = 297,
     ENUM_SYM = 298,
     SIZEOF_SYM = 299,
     UNION_SYM = 300,
     IF_SYM = 301,
     ELSE_SYM = 302,
     WHILE_SYM = 303,
     DO_SYM = 304,
     FOR_SYM = 305,
     CONTINUE_SYM = 306,
     BREAK_SYM = 307,
     RETURN_SYM = 308,
     SWITCH_SYM = 309,
     CASE_SYM = 310,
     DEFAULT_SYM = 311
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define AMP 268
#define BARBAR 269
#define AMPAMP 270
#define ARROW 271
#define SEMICOLON 272
#define LSS 273
#define GTR 274
#define LEQ 275
#define GEQ 276
#define EQL 277
#define NEQ 278
#define DOTDOTDOT 279
#define LP 280
#define RP 281
#define LB 282
#define RB 283
#define LR 284
#define RR 285
#define PERIOD 286
#define COMMA 287
#define EXCL 288
#define STAR 289
#define SLASH 290
#define PERCENT 291
#define ASSIGN 292
#define COLON 293
#define AUTO_SYM 294
#define STATIC_SYM 295
#define TYPEDEF_SYM 296
#define STRUCT_SYM 297
#define ENUM_SYM 298
#define SIZEOF_SYM 299
#define UNION_SYM 300
#define IF_SYM 301
#define ELSE_SYM 302
#define WHILE_SYM 303
#define DO_SYM 304
#define FOR_SYM 305
#define CONTINUE_SYM 306
#define BREAK_SYM 307
#define RETURN_SYM 308
#define SWITCH_SYM 309
#define CASE_SYM 310
#define DEFAULT_SYM 311




/* Copy the first part of user declarations.  */
#line 1 "minjae.y"

	#include <stdio.h>
	int yylex(void);
	int yyerror(char *message);


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

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 224 "y.tab.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
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
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   521

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNRULES -- Number of states.  */
#define YYNSTATES  272

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    18,    21,
      24,    28,    30,    32,    35,    38,    40,    42,    44,    46,
      50,    52,    56,    58,    60,    62,    68,    73,    76,    78,
      80,    82,    85,    89,    91,    95,    97,   103,   108,   111,
     113,   117,   119,   123,   126,   128,   130,   133,   135,   139,
     144,   149,   150,   152,   153,   155,   157,   161,   163,   167,
     170,   173,   175,   177,   179,   182,   186,   190,   195,   199,
     204,   206,   210,   212,   216,   218,   220,   222,   224,   226,
     228,   233,   237,   242,   243,   246,   247,   250,   252,   255,
     262,   268,   269,   272,   278,   286,   292,   298,   299,   301,
     305,   308,   311,   313,   315,   317,   321,   323,   327,   329,
     333,   335,   339,   343,   345,   349,   353,   357,   361,   363,
     367,   371,   373,   377,   381,   385,   387,   392,   394,   397,
     400,   403,   406,   409,   412,   415,   418,   423,   425,   430,
     435,   439,   443,   446,   449,   451,   453,   455,   457,   459,
     463,   464,   466,   468,   472,   474
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    -1,    60,    -1,    59,    60,    -1,
      61,    -1,    62,    -1,    63,    77,    91,    -1,    77,    91,
      -1,    63,    17,    -1,    63,    65,    17,    -1,    67,    -1,
      64,    -1,    67,    63,    -1,    64,    63,    -1,    39,    -1,
      40,    -1,    41,    -1,    66,    -1,    65,    32,    66,    -1,
      77,    -1,    77,    37,    87,    -1,    68,    -1,    74,    -1,
       4,    -1,    69,     3,    29,    70,    30,    -1,    69,    29,
      70,    30,    -1,    69,     3,    -1,    42,    -1,    45,    -1,
      71,    -1,    70,    71,    -1,    67,    72,    17,    -1,    73,
      -1,    72,    32,    73,    -1,    77,    -1,    43,     3,    29,
      75,    30,    -1,    43,    29,    75,    30,    -1,    43,     3,
      -1,    76,    -1,    75,    32,    76,    -1,     3,    -1,     3,
      37,   102,    -1,    78,    79,    -1,    79,    -1,    34,    -1,
      34,    78,    -1,     3,    -1,    25,    77,    26,    -1,    79,
      27,    80,    28,    -1,    79,    25,    81,    26,    -1,    -1,
     101,    -1,    -1,    82,    -1,    83,    -1,    83,    32,    24,
      -1,    84,    -1,    83,    32,    84,    -1,    63,    77,    -1,
      63,    85,    -1,    63,    -1,    86,    -1,    78,    -1,    78,
      86,    -1,    25,    85,    26,    -1,    27,    80,    28,    -1,
      86,    27,    80,    28,    -1,    25,    81,    26,    -1,    86,
      25,    81,    26,    -1,   101,    -1,    29,    88,    30,    -1,
      87,    -1,    88,    32,    87,    -1,    90,    -1,    95,    -1,
      91,    -1,    94,    -1,    97,    -1,   100,    -1,    55,   101,
      38,    89,    -1,    56,    38,    89,    -1,    29,    92,    93,
      30,    -1,    -1,    92,    62,    -1,    -1,    93,    89,    -1,
      17,    -1,   102,    17,    -1,    46,    25,   102,    26,    89,
      96,    -1,    54,    25,   102,    26,    89,    -1,    -1,    47,
      89,    -1,    48,    25,   102,    26,    89,    -1,    49,    89,
      48,    25,   102,    26,    17,    -1,    50,    25,    98,    26,
      89,    -1,    99,    17,    99,    17,    99,    -1,    -1,   102,
      -1,    53,    99,    17,    -1,    51,    17,    -1,    52,    17,
      -1,   102,    -1,   103,    -1,   104,    -1,   111,    37,   102,
      -1,   105,    -1,   104,    14,   105,    -1,   106,    -1,   105,
      15,   106,    -1,   107,    -1,   106,    22,   107,    -1,   106,
      23,   107,    -1,   108,    -1,   107,    18,   108,    -1,   107,
      19,   108,    -1,   107,    20,   108,    -1,   107,    21,   108,
      -1,   109,    -1,   108,     9,   109,    -1,   108,    10,   109,
      -1,   110,    -1,   109,    34,   110,    -1,   109,    35,   110,
      -1,   109,    36,   110,    -1,   111,    -1,    25,   116,    26,
     110,    -1,   112,    -1,    11,   111,    -1,    12,   111,    -1,
      13,   110,    -1,    34,   110,    -1,    33,   110,    -1,    10,
     110,    -1,     9,   110,    -1,    44,   111,    -1,    44,    25,
     116,    26,    -1,   113,    -1,   112,    27,   102,    28,    -1,
     112,    25,   114,    26,    -1,   112,    31,     3,    -1,   112,
      16,     3,    -1,   112,    11,    -1,   112,    12,    -1,     3,
      -1,     6,    -1,     5,    -1,     7,    -1,     8,    -1,    25,
     102,    26,    -1,    -1,   115,    -1,   103,    -1,   115,    32,
     103,    -1,    63,    -1,    63,    85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    18,    18,    21,    22,    25,    26,    29,    30,    33,
      34,    37,    38,    39,    40,    43,    44,    45,    48,    49,
      51,    52,    55,    56,    57,    60,    61,    62,    65,    66,
      69,    70,    73,    76,    77,    80,    83,    84,    85,    88,
      89,    92,    93,    96,    97,   100,   101,   104,   105,   106,
     107,   109,   111,   113,   115,   118,   119,   122,   123,   126,
     127,   128,   131,   132,   133,   136,   137,   138,   139,   140,
     143,   144,   147,   148,   151,   152,   153,   154,   155,   156,
     159,   160,   163,   165,   167,   169,   171,   174,   175,   178,
     179,   181,   183,   186,   187,   188,   191,   193,   195,   198,
     199,   200,   203,   206,   209,   210,   213,   214,   217,   218,
     221,   222,   223,   226,   227,   228,   229,   230,   233,   234,
     235,   238,   239,   240,   241,   244,   245,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   260,   261,   262,
     263,   264,   265,   266,   269,   270,   271,   272,   273,   274,
     276,   278,   281,   282,   285,   286
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS", "MINUSMINUS", "AMP",
  "BARBAR", "AMPAMP", "ARROW", "SEMICOLON", "LSS", "GTR", "LEQ", "GEQ",
  "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR", "PERIOD",
  "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "ASSIGN", "COLON",
  "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM", "ENUM_SYM",
  "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM", "DO_SYM",
  "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM",
  "CASE_SYM", "DEFAULT_SYM", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "enumerator_list", "enumerator", "declarator",
  "pointer", "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "else_opt_statment", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "constant_expression", "expression", "assginment_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "postfix_expression", "primary_expression", "arg_expression_list_opt",
  "arg_expression_list", "type_name", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    63,    64,    64,    64,    65,    65,
      66,    66,    67,    67,    67,    68,    68,    68,    69,    69,
      70,    70,    71,    72,    72,    73,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    85,    85,    85,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    97,    98,    99,    99,   100,
     100,   100,   101,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   107,   107,   107,   107,   107,   108,   108,
     108,   109,   109,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   116
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     2,
       3,     1,     1,     2,     2,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     1,     3,     1,     5,     4,     2,     1,
       3,     1,     3,     2,     1,     1,     2,     1,     3,     4,
       4,     0,     1,     0,     1,     1,     3,     1,     3,     2,
       2,     1,     1,     1,     2,     3,     3,     4,     3,     4,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     0,     2,     0,     2,     1,     2,     6,
       5,     0,     2,     5,     7,     5,     5,     0,     1,     3,
       2,     2,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     4,     4,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     3,
       0,     1,     1,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    47,    24,     0,    45,    15,    16,    17,    28,     0,
      29,     0,     2,     3,     5,     6,     0,    12,    11,    22,
       0,    23,     0,     0,    44,     0,    46,    38,     0,     1,
       4,     9,     0,    18,    20,    14,    13,    27,     0,    83,
       8,    43,    53,    51,    48,     0,    41,     0,    39,    10,
       0,     0,     7,     0,     0,     0,    30,    85,    61,     0,
      54,    55,    57,   144,   146,   145,   147,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,   102,
     103,   104,   106,   108,   110,   113,   118,   121,   125,   127,
     137,     0,     0,    37,     0,    19,    20,     0,    21,    70,
       0,     0,    33,    35,    26,    31,    84,     0,     0,    53,
      51,    59,    63,    60,    62,    50,     0,   134,   125,   133,
       0,   128,   129,   130,   154,     0,     0,   132,   131,     0,
     135,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,   143,     0,   150,
       0,     0,    36,    42,    40,    72,     0,    25,    32,     0,
      87,    82,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,    86,    74,    76,    77,    75,    78,    79,     0,
       0,     0,     0,    64,    53,    51,    56,    58,    53,    63,
     155,   149,     0,     0,   107,   109,   111,   112,   114,   115,
     116,   117,   119,   120,   122,   123,   124,   105,   141,   152,
       0,   151,     0,   140,    71,     0,    34,     0,     0,     0,
      97,   100,   101,     0,    98,     0,     0,     0,    88,    68,
      65,    66,     0,     0,   126,   136,   139,     0,   138,    73,
       0,     0,     0,     0,     0,    99,     0,     0,    81,    69,
      67,   153,     0,     0,     0,     0,    97,     0,    80,    91,
      93,     0,    95,     0,    90,     0,    89,     0,    97,    92,
      94,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    58,    17,    32,    33,
      18,    19,    20,    55,    56,   101,   102,    21,    47,    48,
      22,    23,    24,    77,   180,    60,    61,    62,   181,   114,
      98,   156,   172,   173,   174,    57,   108,   175,   176,   266,
     177,   243,   223,   178,    78,   179,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   210,   211,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -206
static const yytype_int16 yypact[] =
{
     306,  -206,  -206,   105,    -2,  -206,  -206,  -206,  -206,    18,
    -206,    43,   306,  -206,  -206,  -206,    11,   124,   124,  -206,
      36,  -206,    50,    37,    85,    71,  -206,   109,   156,  -206,
    -206,  -206,     9,  -206,     5,  -206,  -206,   141,   158,  -206,
    -206,    85,   124,   397,  -206,   156,   139,   111,  -206,  -206,
     105,   357,  -206,   158,   105,   179,  -206,   124,    32,   173,
    -206,   180,  -206,  -206,  -206,  -206,  -206,  -206,   397,   397,
     437,   437,   397,   293,   397,   397,   477,   176,  -206,  -206,
    -206,   206,   208,    15,   160,   207,   172,  -206,   193,   249,
    -206,   128,   397,  -206,   156,  -206,   195,   357,  -206,  -206,
     224,    12,  -206,  -206,  -206,  -206,  -206,    11,   185,   316,
     397,  -206,    91,  -206,   146,  -206,    29,  -206,  -206,  -206,
     397,  -206,  -206,  -206,    95,   217,   227,  -206,  -206,   293,
    -206,  -206,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,  -206,  -206,   252,   397,
     397,   254,  -206,  -206,  -206,  -206,   154,  -206,  -206,   105,
    -206,  -206,   233,   234,   239,   237,   246,   253,   397,   250,
     397,   240,  -206,  -206,  -206,  -206,  -206,  -206,  -206,   260,
     245,   255,   251,   146,   124,   397,  -206,  -206,    92,   162,
    -206,  -206,   397,   256,   208,    15,   160,   160,   207,   207,
     207,   207,   172,   172,  -206,  -206,  -206,  -206,  -206,  -206,
     258,   275,   280,  -206,  -206,   357,  -206,   397,   397,   238,
     397,  -206,  -206,   298,  -206,   397,   278,   239,  -206,  -206,
    -206,  -206,   291,   294,  -206,  -206,  -206,   397,  -206,  -206,
     295,   297,   299,   302,   308,  -206,   303,   239,  -206,  -206,
    -206,  -206,   239,   239,   397,   239,   397,   239,  -206,   283,
    -206,   313,  -206,   325,  -206,   239,  -206,   327,   397,  -206,
    -206,  -206
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,  -206,   340,  -206,   296,     7,  -206,  -206,   304,
      -7,  -206,  -206,   318,   -42,  -206,   213,  -206,   328,   281,
       2,    -3,   -14,  -107,   -40,  -206,  -206,   261,   -48,   -85,
     -91,  -206,  -152,  -206,    39,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -205,  -206,   -47,   -43,  -138,  -206,   242,   243,
     -20,   175,    86,   -52,    13,  -206,  -206,  -206,  -206,   259
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      79,    26,    59,   182,    99,    25,   155,    16,    79,    41,
     113,   209,   219,   105,     1,   244,   117,   119,    34,    16,
     123,    27,   127,   128,    35,    36,    49,   183,    31,   158,
     125,    54,     4,     2,    39,     1,     3,   134,   135,    37,
       1,    50,    51,    29,   159,     4,    54,    28,    54,   153,
      99,   263,    96,   186,    79,   112,   103,   109,   105,   110,
     111,    40,     3,   271,   107,    38,     4,    79,     5,     6,
       7,     8,     9,    52,    10,   248,   190,   125,   233,    39,
     124,   118,   118,   121,   122,   118,   125,   118,   118,   130,
     204,   205,   206,    54,     1,   258,     2,    44,    41,   251,
     259,   260,   207,   262,   183,   264,   112,   212,     1,    96,
      42,    25,    43,   269,   196,   197,   109,   188,   110,   110,
     188,   189,   110,   226,   239,   224,     4,    79,     2,     4,
       3,     5,     6,     7,     8,     9,   124,    10,    45,     4,
     234,    93,    79,    94,   232,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   152,    46,
      94,   103,     2,     5,     6,     7,     8,     9,    99,    10,
      53,   184,    79,   185,   240,   241,    92,   224,   136,   137,
     138,   139,   246,     2,   214,   189,   215,   188,    63,   110,
      64,    65,    66,    67,    68,    69,    70,    71,    72,   115,
       8,     9,   160,    10,   131,   118,   142,   143,   144,   104,
      73,   261,   116,   224,    39,   161,   140,   141,    74,    75,
     132,     8,     9,   133,    10,   224,   202,   203,     2,    76,
     145,   162,    51,   163,   164,   165,   166,   167,   168,   169,
     170,   171,    63,   191,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   192,   157,   208,   160,   213,   217,   218,
     146,   147,   220,   221,    73,   148,     8,     9,    39,    10,
     222,   229,    74,    75,   149,   225,   150,   228,   227,   231,
     151,   230,   235,    76,   236,   162,   242,   163,   164,   165,
     166,   167,   168,   169,   170,   171,    63,     2,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   237,   238,     1,
       2,   198,   199,   200,   201,   245,   247,   249,    73,     1,
       2,   252,   250,   253,   254,   256,    74,    75,   255,   257,
     265,     3,     5,     6,     7,     8,     9,    76,    10,   267,
       4,   109,   268,   110,   270,     5,     6,     7,     8,     9,
       4,    10,    30,   106,    95,     5,     6,     7,     8,     9,
      63,    10,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   100,   216,    91,   194,   154,   195,   187,     0,     0,
       0,     0,    73,     0,     0,     0,    97,     0,   193,     0,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    76,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,     0,     0,     0,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    76,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    76,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76
};

static const yytype_int16 yycheck[] =
{
      43,     4,    42,   110,    51,     3,    97,     0,    51,    23,
      58,   149,   164,    55,     3,   220,    68,    69,    16,    12,
      72,     3,    74,    75,    17,    18,    17,   112,    17,    17,
      73,    38,    34,     4,    29,     3,    25,    22,    23,     3,
       3,    32,    37,     0,    32,    34,    53,    29,    55,    92,
      97,   256,    50,    24,    97,    58,    54,    25,   100,    27,
      58,    22,    25,   268,    57,    29,    34,   110,    39,    40,
      41,    42,    43,    34,    45,   227,   124,   120,   185,    29,
      73,    68,    69,    70,    71,    72,   129,    74,    75,    76,
     142,   143,   144,   100,     3,   247,     4,    26,   112,   237,
     252,   253,   145,   255,   189,   257,   109,   150,     3,   107,
      25,   109,    27,   265,   134,   135,    25,    25,    27,    27,
      25,   124,    27,   170,   215,   168,    34,   170,     4,    34,
      25,    39,    40,    41,    42,    43,   129,    45,    29,    34,
     192,    30,   185,    32,   184,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    30,     3,
      32,   159,     4,    39,    40,    41,    42,    43,   215,    45,
      29,    25,   215,    27,   217,   218,    37,   220,    18,    19,
      20,    21,   225,     4,    30,   188,    32,    25,     3,    27,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    26,
      42,    43,    17,    45,    28,   192,    34,    35,    36,    30,
      25,   254,    32,   256,    29,    30,     9,    10,    33,    34,
      14,    42,    43,    15,    45,   268,   140,   141,     4,    44,
      37,    46,    37,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     3,    26,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    26,    30,     3,    17,     3,    25,    25,
      11,    12,    25,    17,    25,    16,    42,    43,    29,    45,
      17,    26,    33,    34,    25,    25,    27,    17,    38,    28,
      31,    26,    26,    44,    26,    46,    48,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    32,    28,     3,
       4,   136,   137,   138,   139,    17,    38,    26,    25,     3,
       4,    26,    28,    26,    25,    17,    33,    34,    26,    26,
      47,    25,    39,    40,    41,    42,    43,    44,    45,    26,
      34,    25,    17,    27,    17,    39,    40,    41,    42,    43,
      34,    45,    12,    57,    50,    39,    40,    41,    42,    43,
       3,    45,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    53,   159,    45,   132,    94,   133,   116,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    29,    -1,   129,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    44,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    44,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    44,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    25,    34,    39,    40,    41,    42,    43,
      45,    58,    59,    60,    61,    62,    63,    64,    67,    68,
      69,    74,    77,    78,    79,    77,    78,     3,    29,     0,
      60,    17,    65,    66,    77,    63,    63,     3,    29,    29,
      91,    79,    25,    27,    26,    29,     3,    75,    76,    17,
      32,    37,    91,    29,    67,    70,    71,    92,    63,    81,
      82,    83,    84,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    25,    33,    34,    44,    80,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    75,    37,    30,    32,    66,    77,    29,    87,   101,
      70,    72,    73,    77,    30,    71,    62,    63,    93,    25,
      27,    77,    78,    85,    86,    26,    32,   110,   111,   110,
      25,   111,   111,   110,    63,   102,   116,   110,   110,    25,
     111,    28,    14,    15,    22,    23,    18,    19,    20,    21,
       9,    10,    34,    35,    36,    37,    11,    12,    16,    25,
      27,    31,    30,   102,    76,    87,    88,    30,    17,    32,
      17,    30,    46,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    89,    90,    91,    94,    95,    97,   100,   102,
      81,    85,    80,    86,    25,    27,    24,    84,    25,    78,
      85,    26,    26,   116,   105,   106,   107,   107,   108,   108,
     108,   108,   109,   109,   110,   110,   110,   102,     3,   103,
     114,   115,   102,     3,    30,    32,    73,    25,    25,    89,
      25,    17,    17,    99,   102,    25,   101,    38,    17,    26,
      26,    28,    81,    80,   110,    26,    26,    32,    28,    87,
     102,   102,    48,    98,    99,    17,   102,    38,    89,    26,
      28,   103,    26,    26,    25,    26,    17,    26,    89,    89,
      89,   102,    89,    99,    89,    47,    96,    26,    17,    89,
      17,    99
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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
      
/* Line 1267 of yacc.c.  */
#line 1744 "y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 288 "minjae.y"


int yyerror(char *message)
{
	printf("%s\n", message);
	return (1);
}

int main()
{
	printf("\n%d\n", yyparse());
}

