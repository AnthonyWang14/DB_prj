/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */

#include "main.h"	
#include <vector>
#include <stack>
#include <fcntl.h>
#include <unistd.h>          //chdir()
#include <sys/stat.h>        //mkdir()
#include <sys/types.h>       //mkdir()
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>           //perror()
#include "SystemManagement/def.h"



#include "RecordManagement/bufmanager/BufPageManager.h"
#include "RecordManagement/fileio/FileManager.h"
#include "RecordManagement/rm/RecordManager.h"
#include "RecordManagement/utils/pagedef.h"
#include <map>
#include <algorithm>

int a;
string type;
string dbName;
string tbName; 
string attrName; 
string attrName1; 
string attrName2; 
string attrName3; 
string selectType; 
string setName;
string primaryKey;
string currentDb = "orderDB";
vector<string>  attrNameList;
vector<string>  tbNameList;
vector<string> 	attrTypeList;
vector<string> 	attrNumList;
vector<vector<string> > 	attrValueList;
vector<string> 	tempList;
vector<string> 	exprValueList;
vector<char> 	exprOpList;
vector<int> 	attrNotNullList;
vector<int> 	nullList;

vector<string>  clauseNameList;
vector<string>	clauseOpList;
vector<string>	clauseRightList;
extern "C"			
{					
	void yyerror(const char *s);
	extern int yylex(void);
	extern int yylineno;
	extern char* yytext;
}


#line 124 "yacc.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    STRING = 259,
    NAME = 260,
    ATTRNAME = 261,
    ATTRNUM = 262,
    EXIT = 263,
    CREATE = 264,
    DROP = 265,
    USE = 266,
    SHOW = 267,
    DATABASE = 268,
    PRIMARY = 269,
    KEY = 270,
    INSERT = 271,
    INTO = 272,
    VALUES = 273,
    DELETE = 274,
    FROM = 275,
    WHERE = 276,
    AND = 277,
    UPDATE = 278,
    SET = 279,
    SELECT = 280,
    GROUP = 281,
    BY = 282,
    TABLE = 283,
    BLANK = 284,
    NOT = 285,
    NUL = 286
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 202 "yacc.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   924

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  371
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  858

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,     2,     2,     2,     2,     2,
      34,    35,    38,    36,    33,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    32,    42,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   111,   115,   121,   128,   134,   142,   148,
     154,   160,   168,   174,   180,   186,   194,   200,   206,   212,
     220,   226,   232,   238,   246,   252,   258,   264,   272,   278,
     287,   293,   299,   305,   313,   320,   327,   334,   341,   348,
     355,   362,   370,   375,   380,   385,   393,   401,   410,   418,
     427,   435,   444,   452,   464,   474,   484,   494,   504,   514,
     524,   534,   544,   554,   564,   574,   584,   594,   604,   614,
     626,   633,   640,   647,   654,   661,   668,   675,   684,   686,
     691,   697,   703,   709,   715,   720,   725,   730,   735,   741,
     747,   753,   759,   765,   771,   777,   783,   788,   793,   798,
     807,   809,   813,   817,   821,   825,   829,   833,   837,   841,
     845,   849,   853,   857,   861,   865,   869,   873,   877,   881,
     885,   889,   893,   897,   901,   905,   909,   913,   917,   921,
     925,   931,   933,   937,   941,   945,   949,   953,   959,   961,
     965,   969,   973,   977,   981,   987,   989,   993,   997,  1001,
    1005,  1009,  1013,  1018,  1023,  1028,  1033,  1038,  1043,  1048,
    1053,  1058,  1063,  1068,  1073,  1078,  1083,  1088,  1094,  1099,
    1104,  1109,  1114,  1119,  1124,  1129,  1134,  1139,  1144,  1149,
    1154,  1159,  1164,  1169,  1176,  1178,  1184,  1190,  1196,  1202,
    1208,  1214,  1220,  1226,  1232,  1238,  1244,  1251,  1257,  1263,
    1269,  1275,  1281,  1287,  1293,  1299,  1305,  1311,  1317,  1324,
    1330,  1336,  1342,  1348,  1354,  1360,  1366,  1372,  1378,  1384,
    1390,  1396,  1402,  1408,  1414,  1420,  1426,  1432,  1438,  1444,
    1450,  1456,  1462,  1468,  1474,  1480,  1486,  1492,  1498,  1504,
    1510,  1516,  1522,  1528,  1534,  1541,  1547,  1553,  1559,  1565,
    1571,  1577,  1583,  1589,  1595,  1601,  1607,  1613,  1619,  1625,
    1631,  1637,  1643,  1649,  1655,  1662,  1668,  1674,  1680,  1686,
    1692,  1698,  1704,  1710,  1716,  1722,  1728,  1734,  1740,  1746,
    1752,  1758,  1764,  1770,  1776,  1782,  1788,  1794,  1800,  1806,
    1812,  1818,  1824,  1830,  1836,  1842,  1848,  1854,  1860,  1866,
    1872,  1879,  1885,  1891,  1897,  1903,  1909,  1915,  1921,  1928,
    1934,  1940,  1946,  1952,  1958,  1964,  1970,  1976,  1982,  1988,
    1994,  2003,  2005,  2008,  2011,  2016,  2018,  2021,  2025,  2029,
    2033,  2039,  2041,  2048,  2055,  2062,  2069,  2076,  2083,  2090,
    2097,  2104,  2111,  2118,  2125,  2132,  2139,  2146,  2153,  2160,
    2167,  2174,  2181,  2188,  2195,  2202,  2209,  2216,  2223,  2230,
    2237,  2244,  2251,  2258,  2265,  2272,  2279,  2286,  2293,  2300,
    2307,  2314
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING", "NAME", "ATTRNAME",
  "ATTRNUM", "EXIT", "CREATE", "DROP", "USE", "SHOW", "DATABASE",
  "PRIMARY", "KEY", "INSERT", "INTO", "VALUES", "DELETE", "FROM", "WHERE",
  "AND", "UPDATE", "SET", "SELECT", "GROUP", "BY", "TABLE", "BLANK", "NOT",
  "NUL", "'='", "','", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'!'",
  "'<'", "'>'", "$accept", "file", "tokenlist", "insertDetail0",
  "insertDetail", "namelist", "namelist1", "expr", "whereclauses",
  "tableDetail", "tableDetail2", "tableDetail3", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    61,    44,    40,    41,    43,    45,    42,    47,
      33,    60,    62
};
# endif

#define YYPACT_NINF -283

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-283)))

#define YYTABLE_NINF -332

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     347,   -12,    44,    74,    90,   100,   109,   127,   169,   391,
     270,  -283,   333,   336,   328,   339,   337,   319,   368,   129,
     356,   366,   395,   408,   426,   437,   448,   464,  -283,   470,
     565,   566,   569,   570,   573,   574,   577,   578,   581,    77,
     583,   205,   355,   381,   423,   392,   348,   584,   587,   201,
     588,   591,   592,   595,   596,   600,   603,   604,   606,   589,
     585,    26,   236,  -283,   349,   238,   586,   590,   593,   594,
     597,   598,   599,   601,   602,   605,    91,   461,     0,   314,
     264,   265,   266,   269,   271,   607,   608,   609,   612,   610,
     239,   611,   613,   614,   242,  -283,   615,   616,   619,   620,
     624,   628,   630,   635,   636,   637,   621,   617,    31,   246,
     386,  -283,   639,   314,    55,   272,  -283,   640,  -283,   641,
    -283,   642,  -283,   643,  -283,   644,   626,   632,   649,   627,
     638,   651,   650,   631,   653,   247,  -283,   656,  -283,   273,
     314,   274,   276,   279,   280,   282,   633,   634,   645,   646,
     647,   249,   658,   660,   648,  -283,   652,   654,   662,   -15,
     655,  -283,  -283,  -283,  -283,  -283,  -283,  -283,    34,   657,
     468,   663,   661,   664,   665,   659,   666,  -283,   667,   462,
    -283,  -283,   670,   284,  -283,   672,  -283,   674,  -283,   676,
    -283,   677,  -283,   679,   671,   673,   668,   669,   680,   685,
     687,   675,   690,   247,   692,   678,  -283,  -283,   235,  -283,
     681,    40,    58,   217,   694,   682,   108,   288,   696,   683,
     684,   686,   688,  -283,    88,   254,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,    64,   689,   469,   697,   691,   693,   699,
     701,   695,   463,   110,   704,   698,   700,     8,  -283,   702,
      68,    58,   224,  -283,  -283,    24,  -283,   -14,  -283,   703,
      70,   399,   289,   108,  -283,  -283,  -283,   429,   414,  -283,
     708,   291,   705,   706,   707,   709,   710,   256,  -283,   712,
      40,   227,   694,   711,   108,   296,   714,   713,   715,   716,
     717,   409,   415,   582,   143,   718,   720,   719,   721,  -283,
     722,    58,   388,  -283,   724,  -283,  -283,  -283,   723,    63,
     725,  -283,   726,   728,    84,    58,   433,   111,   727,     1,
      13,  -283,   114,   420,  -283,  -283,  -283,   341,   163,   166,
     182,   185,  -283,  -283,   732,   731,   729,   733,   736,   694,
    -283,   737,  -283,   229,  -283,   738,   298,   108,   425,  -283,
     739,   299,   734,   740,   744,   735,   741,   742,   745,   455,
     557,   746,   148,   257,   747,   750,  -283,   443,   748,  -283,
      76,   749,   751,    92,   752,  -283,  -283,  -283,   753,   754,
      58,   453,   122,   743,     2,    21,  -283,  -283,  -283,   499,
     128,  -283,  -283,   535,   188,   138,  -283,  -283,   536,   191,
    -283,   755,   350,   756,   194,   198,   199,   204,  -283,  -283,
     539,  -283,  -283,   540,  -283,  -283,   543,  -283,  -283,   544,
    -283,   757,   761,   762,   758,   302,  -283,  -283,   759,  -283,
    -283,   352,   431,   354,  -283,  -283,   760,   764,   763,   765,
     766,   694,   767,   730,   768,   770,   771,   773,   561,   774,
     769,  -283,   783,   262,   260,   775,  -283,   776,   777,    97,
     778,  -283,  -283,   779,   780,   781,  -283,  -283,  -283,   454,
     782,  -283,  -283,  -283,   502,   141,  -283,  -283,   547,   207,
     144,  -283,  -283,   548,   210,  -283,  -283,  -283,  -283,  -283,
    -283,   505,  -283,  -283,  -283,  -283,   551,  -283,  -283,  -283,
     508,  -283,  -283,  -283,  -283,   552,   785,   784,   694,  -283,
    -283,   555,  -283,  -283,   556,  -283,  -283,   559,  -283,  -283,
     560,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,   786,
     787,   788,   789,  -283,   396,  -283,  -283,   360,   790,  -283,
     791,   792,   795,   793,   304,   794,   797,   798,   799,   800,
     801,   803,   802,   804,   806,  -283,   807,   772,  -283,   808,
    -283,  -283,  -283,   809,   810,   811,  -283,  -283,  -283,  -283,
     812,  -283,  -283,  -283,  -283,  -283,  -283,  -283,   511,  -283,
    -283,  -283,  -283,   563,  -283,  -283,  -283,   514,  -283,  -283,
    -283,  -283,   564,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,   406,   694,   306,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,   813,   817,   796,   815,  -283,   816,
     694,   820,   818,   819,   823,  -283,   400,   821,  -283,   822,
     825,   824,   827,   828,   829,   830,   831,   832,   834,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,   439,   149,   805,     6,    49,   307,
    -283,   403,   837,   836,   838,   839,   694,   308,   840,   826,
     841,   842,  -283,  -283,   843,  -283,   844,  -283,   845,   846,
     847,   848,   850,   851,   157,   852,     7,    53,  -283,  -283,
    -283,   517,   160,  -283,  -283,   567,   213,   171,  -283,  -283,
     568,   216,  -283,   404,  -283,   853,   856,   865,   857,   311,
    -283,   405,   858,   859,   860,   863,  -283,  -283,   862,  -283,
     864,   849,   861,   866,  -283,  -283,  -283,   520,   176,  -283,
    -283,   571,   219,   179,  -283,  -283,   572,   226,  -283,  -283,
    -283,  -283,  -283,  -283,   523,  -283,  -283,  -283,  -283,   575,
    -283,  -283,  -283,   526,  -283,  -283,  -283,  -283,   576,  -283,
     869,   867,   313,   882,  -283,   407,  -283,   868,   871,   889,
     870,  -283,  -283,   872,   873,   874,  -283,  -283,  -283,  -283,
    -283,  -283,   529,  -283,  -283,  -283,  -283,   579,  -283,  -283,
    -283,   532,  -283,  -283,  -283,  -283,   580,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,   315,   895,  -283,
     896,   316,  -283,   898,   877,   318,   902,  -283,  -283,   879,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,   901,   321,  -283,  -283,   903,   322,   905,  -283,   904,
     324,  -283,  -283,  -283,   906,  -283,  -283,   907,   326,  -283,
    -283,   908,  -283,  -283,  -283,   909,  -283,  -283
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,   321,   325,     0,    10,     0,    26,     0,
      14,     0,    18,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   135,     0,   134,     0,
     321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,   323,     0,     0,     0,
       0,    29,   322,    11,    27,    15,    19,    23,    78,     0,
       0,     0,     0,     0,     0,     0,     0,   139,     0,     0,
     136,     4,     0,     0,     8,     0,    24,     0,    12,     0,
      16,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   138,     0,     0,   326,   324,     0,    79,
      80,    78,   100,     0,   184,     0,   145,     0,     0,     0,
       0,     0,     0,   140,     0,     0,     5,    28,     9,    25,
      13,    17,    21,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,    80,
       0,   100,     0,   101,   103,     0,   102,     0,    71,     0,
       0,     0,     0,   145,   147,   146,   148,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
      78,     0,   184,     0,   145,     0,     0,     0,     0,     0,
       0,     0,   332,     0,     0,     0,     0,     0,     0,    82,
      81,   100,     0,    70,     0,   104,   106,   105,     0,     0,
      84,    75,    92,    88,     0,   100,     0,     0,     0,     0,
       0,    30,     0,     0,   150,   149,   151,     0,     0,     0,
       0,     0,    50,    48,     0,     0,     0,     0,     0,   184,
     142,     0,   141,     0,    73,     0,     0,   145,     0,    47,
       0,     0,     0,     0,     0,     0,     0,   344,     0,   333,
     338,     0,     0,     0,     0,     0,    83,     0,    84,    74,
       0,   109,   107,     0,   108,    85,    94,    90,    93,    89,
     100,     0,     0,     0,     0,     0,   189,   185,   193,     0,
       0,   229,   233,     0,     0,     0,   221,   225,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,   152,   168,
       0,   153,   169,     0,   154,   170,     0,   155,   171,     0,
      52,     0,     0,     0,     0,     0,   143,    72,     0,    77,
      31,     0,     0,     0,    51,    49,     0,     0,     0,     0,
       0,   184,     0,     0,   345,     0,   350,     0,   339,   364,
       0,   327,     0,     0,     0,    86,    85,   121,   119,     0,
     120,   116,   110,   117,   111,   114,   113,    95,    91,     0,
      96,   190,   186,   194,     0,     0,   230,   234,     0,     0,
       0,   222,   226,     0,     0,   191,   187,   195,   201,   197,
     205,     0,   231,   235,   245,   249,     0,   213,   209,   217,
       0,   223,   227,   237,   241,     0,     0,     0,   184,   160,
     176,     0,   161,   177,     0,   162,   178,     0,   163,   179,
       0,   156,   172,   157,   173,   158,   174,   159,   175,     0,
       0,     0,     0,    42,     0,    76,    33,     0,     0,    53,
       0,     0,     0,     0,     0,     0,   334,     0,     0,     0,
       0,   351,     0,   356,   365,   328,   366,     0,   329,     0,
      87,   128,   122,   129,   123,   126,   125,   118,   112,   115,
      98,    97,   192,   188,   196,   202,   198,   206,     0,   232,
     236,   246,   250,     0,   214,   210,   218,     0,   224,   228,
     238,   242,     0,   203,   199,   207,   247,   251,   215,   211,
     219,   239,   243,     0,   184,     0,   164,   180,   165,   181,
     166,   182,   167,   183,     0,     0,     0,     0,    44,     0,
     184,     0,     0,     0,     0,    43,     0,   335,   346,     0,
     336,     0,   340,     0,     0,     0,   357,   358,   367,   330,
     130,   124,   127,    99,   204,   200,   208,   248,   252,   216,
     212,   220,   240,   244,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,   184,     0,     0,     0,
       0,     0,    45,   347,   337,   348,   341,   352,     0,   342,
       0,     0,     0,   359,     0,     0,     0,     0,   257,   253,
     261,     0,     0,   285,   289,     0,     0,     0,   277,   281,
       0,     0,    38,     0,    36,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,   349,   353,   343,   354,
     368,     0,     0,     0,   258,   255,   262,     0,     0,   288,
     290,     0,     0,     0,   278,   282,     0,     0,   259,   254,
     263,   269,   265,   273,     0,   286,   291,   301,   305,     0,
     313,   309,   317,     0,   279,   283,   293,   297,     0,    40,
       0,     0,     0,     0,    39,     0,    37,     0,     0,     0,
       0,   355,   360,   369,   370,     0,   260,   256,   264,   270,
     267,   274,     0,   287,   292,   302,   306,     0,   314,   311,
     318,     0,   280,   284,   294,   298,     0,   271,   266,   275,
     303,   307,   315,   310,   319,   295,   299,     0,     0,    54,
       0,     0,    41,     0,     0,     0,     0,   361,   362,   371,
     272,   268,   276,   304,   308,   316,   312,   320,   296,   300,
      58,     0,     0,    55,    62,     0,     0,     0,    56,     0,
       0,   363,    59,    66,     0,    63,    60,     0,     0,    57,
      64,     0,    67,    61,    68,     0,    65,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,  -283,  -283,  -208,  -250,   875,   413,  -261,  -282,    -5,
    -283,  -283
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,   213,   257,    41,   179,   268,   262,   115,
     159,   160
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     346,   302,   323,   252,   391,   476,   392,   477,   111,   693,
     729,   694,   730,   297,   206,   308,   396,    12,   397,   309,
     207,   310,   298,   348,   481,   281,   482,   305,   306,   112,
     393,   478,    89,   394,   479,   695,   731,   150,   696,   732,
     209,   210,   398,   395,   480,   399,   209,   249,   697,   733,
     483,   367,   698,   484,   699,   307,   734,   425,   735,    90,
     157,   253,   254,   211,   151,   381,   371,   372,   212,   250,
     209,   210,   343,    13,   251,   300,   312,   313,   700,   457,
     458,   701,   736,    60,   158,   737,   432,   255,  -331,   256,
     378,   379,   373,   280,   374,   463,   464,   107,   212,   314,
     563,   564,   301,    14,   315,   459,    61,   460,   156,   276,
      62,   264,   265,   266,   386,   387,   388,   292,   380,    15,
     108,   277,   400,   465,   109,   471,   472,   473,   565,    16,
     469,   488,   489,   490,    39,   183,   401,   267,    17,   293,
     389,   497,   498,   499,   575,   576,   577,   584,   585,   586,
     360,   474,   688,   689,   690,   449,    18,   491,    40,   544,
     724,   725,   726,   741,   742,   743,   408,   500,   409,   411,
     578,   412,   361,   587,   750,   751,   752,   450,   691,   779,
     780,   781,   788,   789,   790,   414,   727,   415,   417,   744,
     418,   494,   410,   495,   503,   413,   504,   509,    19,   510,
     753,   512,   515,   513,   516,   782,    76,   518,   791,   519,
     581,   416,   582,   590,   419,   591,   747,   496,   748,   756,
     505,   757,   785,   511,   786,   258,   605,   514,   517,   794,
      40,   795,   303,   520,    64,   344,   583,   427,    65,   592,
     245,    91,   749,    95,   131,   758,   259,   136,   787,   246,
     260,   152,   177,   304,   199,   796,   345,   260,   428,   278,
     260,   340,   260,   451,   247,    92,   558,    96,   132,   556,
      28,   137,   116,   118,   120,   153,   178,   122,   200,   124,
     161,   181,   184,   279,   186,   341,   452,   188,   190,   559,
     192,   557,   227,   117,   119,   121,   269,   321,   123,   333,
     125,   162,   182,   185,   349,   187,   430,   435,   189,   191,
     533,   193,   625,   162,   660,   702,   710,   270,   322,   764,
     334,   809,   659,   830,   834,   350,   838,   431,   436,   843,
     846,   534,   850,   626,   854,   661,   703,   711,   667,    37,
     765,    33,   810,   113,   831,   835,    29,   839,   114,    31,
     844,   847,    34,   851,    36,   855,     1,     2,     3,     4,
     536,    30,   403,     5,    32,    73,     6,    35,    66,    93,
       7,   507,     8,    38,   401,   538,     9,   404,   405,   406,
     407,   619,    94,    67,   709,    42,   404,   405,   406,   407,
     404,   405,   406,   407,    68,    43,   404,   405,   406,   407,
      20,    21,    22,    23,   618,    71,   154,    24,   672,    69,
      25,   704,   759,   766,    26,   812,    27,   308,   401,    94,
      72,   309,   401,   368,    44,   401,   401,   401,   316,   401,
     356,   317,   324,   325,   326,   654,    70,    45,   655,   318,
     319,   320,   277,   327,   357,   358,   656,   657,   658,   402,
     328,   329,   330,   331,   433,    46,   328,   329,   330,   331,
     537,   328,   329,   330,   331,   382,    47,   328,   329,   330,
     331,   684,   308,   383,   384,   385,   309,    48,   455,   685,
     686,   687,   308,   308,   444,   445,   309,   309,   470,   570,
     110,   224,   291,    49,    65,   225,   225,   215,   283,    50,
     216,   284,   485,   486,   487,   572,   573,   574,   593,   594,
     595,   598,   599,   600,   644,   645,   646,   649,   650,   651,
     738,   739,   740,   776,   777,   778,   797,   798,   799,   802,
     803,   804,   820,   821,   822,   825,   826,   827,   492,   501,
     493,   502,   521,   523,   522,   524,   525,   527,   526,   528,
     579,   588,   580,   589,   596,   601,   597,   602,   606,   608,
     607,   609,   610,   612,   611,   613,   647,   652,   648,   653,
     745,   754,   746,   755,   783,   792,   784,   793,   800,   805,
     801,   806,   823,   828,   824,   829,   446,   447,    63,   359,
     551,   552,    75,    78,    51,    52,    79,    80,    53,    54,
      81,    82,    55,    56,    74,    83,    57,    58,    84,    85,
      59,    86,     0,    87,    88,    97,   242,   133,   134,    98,
     138,   139,    99,   100,   140,   141,   101,   102,   103,   142,
     104,   105,   129,   143,   106,   144,   126,   127,   128,   130,
     145,   146,   147,   135,   168,   148,   149,   155,   163,   164,
     165,   166,   167,   169,   170,   174,   171,   173,   172,   176,
     175,   180,   194,   195,   201,   202,   197,   205,   217,     0,
       0,   220,   223,   235,   196,     0,   198,   203,   226,   221,
     228,   162,   229,   204,   230,   231,   214,   232,   208,   233,
     218,   238,   239,   219,   234,   222,   241,   243,   236,   261,
     237,   271,   285,   272,   240,   288,     0,   244,   275,   294,
     248,   311,   337,   273,   263,   274,   332,   342,   282,   351,
     286,   289,   287,   362,   290,     0,   336,   295,     0,   296,
       0,   299,   369,   352,   335,   363,   421,   355,   338,   339,
     420,   424,   426,   347,   353,   354,   429,   434,   364,   439,
     365,   366,   453,   448,   375,   376,   370,   377,   422,   390,
     438,   546,   423,   437,   440,   454,   530,   535,   539,   540,
     441,   543,   442,     0,   443,   475,   554,   456,   461,   638,
     462,   466,   467,   468,   506,   508,   529,   532,   531,   555,
     603,     0,   541,     0,   542,     0,   545,   622,   547,   548,
       0,   549,   550,   553,   560,   561,   562,   566,   567,   568,
     569,   571,   614,   604,   639,   617,   615,   616,     0,   620,
     621,   623,   624,   664,     0,   627,   628,   629,     0,   631,
     630,   634,   632,   633,   635,   636,   637,   692,   640,   641,
     642,   643,   662,   663,   665,   666,   668,   669,   670,   671,
     673,     0,   713,   674,   675,   676,   677,   678,     0,   680,
     679,   681,   682,   683,   705,   706,   708,   707,   714,   712,
     762,   715,   716,   717,   807,   719,   718,   721,   720,   722,
     773,   723,   760,   761,   728,   767,   763,   811,   768,   769,
     770,   771,   774,   772,   815,   775,   808,   813,   814,   816,
     832,   817,   818,   836,   833,   819,   837,   840,   841,   842,
     848,   845,   849,     0,   852,   853,   856,   857,     0,     0,
       0,     0,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
     282,   251,   263,   211,     3,     3,     5,     5,     8,     3,
       3,     5,     5,     5,    29,    29,     3,    29,     5,    33,
      35,    35,    14,   284,     3,   233,     5,     3,     4,    29,
      29,    29,     6,    32,    32,    29,    29,     6,    32,    32,
       6,     7,    29,    42,    42,    32,     6,     7,    42,    42,
      29,   301,     3,    32,     5,    31,     3,   339,     5,    33,
       5,     3,     4,    29,    33,   315,     3,     4,    34,    29,
       6,     7,   280,    29,    34,     7,     6,     7,    29,     3,
       4,    32,    29,     6,    29,    32,   347,    29,    33,    31,
       6,     7,    29,    29,    31,     3,     4,     6,    34,    29,
       3,     4,    34,    29,    34,    29,    29,    31,   113,    21,
      33,     3,     4,     5,     3,     4,     5,     7,    34,    29,
      29,    33,     8,    31,    33,     3,     4,     5,    31,    29,
     380,     3,     4,     5,     5,   140,    22,    29,    29,    29,
      29,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       7,    29,     3,     4,     5,     7,    29,    29,    29,   441,
       3,     4,     5,     3,     4,     5,     3,    29,     5,     3,
      29,     5,    29,    29,     3,     4,     5,    29,    29,     3,
       4,     5,     3,     4,     5,     3,    29,     5,     3,    29,
       5,     3,    29,     5,     3,    29,     5,     3,    29,     5,
      29,     3,     3,     5,     5,    29,     5,     3,    29,     5,
       3,    29,     5,     3,    29,     5,     3,    29,     5,     3,
      29,     5,     3,    29,     5,     8,   508,    29,    29,     3,
      29,     5,     8,    29,    29,     8,    29,     8,    33,    29,
       5,     5,    29,     5,     5,    29,    29,     5,    29,    14,
      33,     5,     5,    29,     5,    29,    29,    33,    29,     5,
      33,     5,    33,     6,    29,    29,     6,    29,    29,     7,
       0,    29,     8,     8,     8,    29,    29,     8,    29,     8,
       8,     8,     8,    29,     8,    29,    29,     8,     8,    29,
       8,    29,     8,    29,    29,    29,     8,     8,    29,     8,
      29,    29,    29,    29,     8,    29,     8,     8,    29,    29,
       8,    29,     8,    29,     8,     8,     8,    29,    29,     8,
      29,     8,   604,     8,     8,    29,     8,    29,    29,     8,
       8,    29,     8,    29,     8,    29,    29,    29,   620,    20,
      29,    13,    29,    29,    29,    29,    13,    29,    34,    13,
      29,    29,    13,    29,    17,    29,     9,    10,    11,    12,
       8,    28,    21,    16,    28,    17,    19,    28,    13,    20,
      23,    21,    25,     5,    22,    21,    29,    36,    37,    38,
      39,    21,    33,    28,   666,    29,    36,    37,    38,    39,
      36,    37,    38,    39,    13,    29,    36,    37,    38,    39,
       9,    10,    11,    12,     8,    13,    20,    16,     8,    28,
      19,     8,     8,     8,    23,     8,    25,    29,    22,    33,
      28,    33,    22,    35,    29,    22,    22,    22,    29,    22,
      21,    32,     3,     4,     5,    29,    13,    29,    32,    40,
      41,    42,    33,    29,    29,    30,    40,    41,    42,    29,
      36,    37,    38,    39,    29,    29,    36,    37,    38,    39,
      29,    36,    37,    38,    39,    32,    29,    36,    37,    38,
      39,    32,    29,    40,    41,    42,    33,    29,    35,    40,
      41,    42,    29,    29,    29,    30,    33,    33,    35,    35,
      29,    29,    29,    29,    33,    33,    33,    29,    29,    29,
      32,    32,     3,     4,     5,     3,     4,     5,     3,     4,
       5,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     3,     4,     5,     3,
       4,     5,     3,     4,     5,     3,     4,     5,     3,     3,
       5,     5,     3,     3,     5,     5,     3,     3,     5,     5,
       3,     3,     5,     5,     3,     3,     5,     5,     3,     3,
       5,     5,     3,     3,     5,     5,     3,     3,     5,     5,
       3,     3,     5,     5,     3,     3,     5,     5,     3,     3,
       5,     5,     3,     3,     5,     5,    29,    30,     5,     7,
      29,    30,     5,     5,    29,    29,     5,     5,    29,    29,
       5,     5,    29,    29,    20,     5,    29,    29,     5,     5,
      29,     5,    -1,    24,    29,    29,   203,     6,     5,    29,
       5,     5,    29,    29,     5,     5,    29,    29,    29,     5,
      29,    29,    20,     5,    29,     5,    29,    29,    29,    29,
       5,     5,     5,    29,    18,    24,    29,     8,     8,     8,
       8,     8,     8,    21,     5,     5,    29,     6,    20,     6,
      29,     5,    29,    29,     6,     5,    20,     5,     5,    -1,
      -1,     6,     5,     5,    29,    -1,    29,    29,     8,    20,
       8,    29,     8,    29,     8,     8,    29,     8,    33,    18,
      29,     6,     5,    29,    21,    29,     6,     5,    29,     5,
      20,     5,     5,    20,    29,     6,    -1,    29,    20,     5,
      29,     8,     5,    29,    32,    29,     8,     5,    29,     5,
      29,    20,    29,     5,    29,    -1,    20,    29,    -1,    29,
      -1,    29,     8,    20,    29,    15,     5,    20,    29,    29,
       8,     5,     5,    32,    29,    29,     8,     8,    29,     5,
      29,    29,     5,     7,    29,    29,    33,    29,    29,    32,
      20,    31,    29,    29,    29,    15,     5,     8,     8,     5,
      29,     5,    30,    -1,    29,    32,     7,    29,    29,     7,
      29,    29,    29,    29,    29,    29,    29,    29,    26,     6,
       5,    -1,    29,    -1,    29,    -1,    29,     5,    30,    29,
      -1,    30,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    26,    29,     6,    26,    29,    29,    -1,    29,
      29,    26,    29,    27,    -1,    31,    29,    29,    -1,    29,
      31,    29,    31,    30,    30,    29,    29,    32,    29,    29,
      29,    29,    29,    26,    29,    29,    26,    29,    29,    26,
      29,    -1,    26,    31,    29,    31,    29,    29,    -1,    29,
      31,    30,    30,    29,    27,    29,    27,    29,    27,    29,
       5,    29,    29,    29,     5,    29,    31,    29,    31,    29,
      31,    30,    29,    27,    32,    27,    29,     5,    29,    29,
      27,    29,    31,    29,     5,    29,    29,    29,    27,    29,
       5,    29,    29,     5,     8,    31,    29,     5,    29,     8,
       5,     8,     8,    -1,     8,     8,     8,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    12,    16,    19,    23,    25,    29,
      44,    45,    29,    29,    29,    29,    29,    29,    29,    29,
       9,    10,    11,    12,    16,    19,    23,    25,     0,    13,
      28,    13,    28,    13,    13,    28,    17,    20,     5,     5,
      29,    48,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
       6,    29,    33,     5,    29,    33,    13,    28,    13,    28,
      13,    13,    28,    17,    20,     5,     5,    48,     5,     5,
       5,     5,     5,     5,     5,     5,     5,    24,    29,     6,
      33,     5,    29,    20,    33,     5,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,     6,    29,    33,
      29,     8,    29,    29,    34,    52,     8,    29,     8,    29,
       8,    29,     8,    29,     8,    29,    29,    29,    29,    20,
      29,     5,    29,     6,     5,    29,     5,    29,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,    24,    29,
       6,    33,     5,    29,    20,     8,    52,     5,    29,    53,
      54,     8,    29,     8,     8,     8,     8,     8,    18,    21,
       5,    29,    20,     6,     5,    29,     6,     5,    29,    49,
       5,     8,    29,    52,     8,    29,     8,    29,     8,    29,
       8,    29,     8,    29,    29,    29,    29,    20,    29,     5,
      29,     6,     5,    29,    29,     5,    29,    35,    33,     6,
       7,    29,    34,    46,    29,    29,    32,     5,    29,    29,
       6,    20,    29,     5,    29,    33,     8,     8,     8,     8,
       8,     8,     8,    18,    21,     5,    29,    20,     6,     5,
      29,     6,    49,     5,    29,     5,    14,    29,    29,     7,
      29,    34,    46,     3,     4,    29,    31,    47,     8,    29,
      33,     5,    51,    32,     3,     4,     5,    29,    50,     8,
      29,     5,    20,    29,    29,    20,    21,    33,     5,    29,
      29,    46,    29,    29,    32,     5,    29,    29,     6,    20,
      29,    29,     7,    29,     5,    29,    29,     5,    14,    29,
       7,    34,    47,     8,    29,     3,     4,    31,    29,    33,
      35,     8,     6,     7,    29,    34,    29,    32,    40,    41,
      42,     8,    29,    50,     3,     4,     5,    29,    36,    37,
      38,    39,     8,     8,    29,    29,    20,     5,    29,    29,
       5,    29,     5,    46,     8,    29,    51,    32,    50,     8,
      29,     5,    20,    29,    29,    20,    21,    29,    30,     7,
       7,    29,     5,    15,    29,    29,    29,    47,    35,     8,
      33,     3,     4,    29,    31,    29,    29,    29,     6,     7,
      34,    47,    32,    40,    41,    42,     3,     4,     5,    29,
      32,     3,     5,    29,    32,    42,     3,     5,    29,    32,
       8,    22,    29,    21,    36,    37,    38,    39,     3,     5,
      29,     3,     5,    29,     3,     5,    29,     3,     5,    29,
       8,     5,    29,    29,     5,    51,     5,     8,    29,     8,
       8,    29,    50,    29,     8,     8,    29,    29,    20,     5,
      29,    29,    30,    29,    29,    30,    29,    30,     7,     7,
      29,     6,    29,     5,    15,    35,    29,     3,     4,    29,
      31,    29,    29,     3,     4,    31,    29,    29,    29,    47,
      35,     3,     4,     5,    29,    32,     3,     5,    29,    32,
      42,     3,     5,    29,    32,     3,     4,     5,     3,     4,
       5,    29,     3,     5,     3,     5,    29,     3,     4,     5,
      29,     3,     5,     3,     5,    29,    29,    21,    29,     3,
       5,    29,     3,     5,    29,     3,     5,    29,     3,     5,
      29,     3,     5,     3,     5,     3,     5,     3,     5,    29,
       5,    26,    29,     8,    29,     8,     8,    29,    21,     8,
       5,    29,    29,     5,    51,    29,    31,    30,    29,    30,
      29,    29,    30,    29,     7,     6,     7,    29,     6,    29,
      29,    29,    29,     3,     4,    31,    29,    29,    29,    29,
      35,    29,     3,     4,     5,     3,     4,     5,    29,     3,
       5,     3,     5,    29,     3,     4,     5,    29,     3,     5,
       3,     5,    29,     3,     4,     5,     3,     5,     3,     4,
       5,     3,     5,     5,    29,    51,     3,     5,     3,     5,
       3,     5,     3,     5,    26,    29,    29,    26,     8,    21,
      29,    29,     5,    26,    29,     8,    29,    31,    29,    29,
      31,    29,    31,    30,    29,    30,    29,    29,     7,     6,
      29,    29,    29,    29,     3,     4,     5,     3,     5,     3,
       4,     5,     3,     5,    29,    32,    40,    41,    42,    51,
       8,    29,    29,    26,    27,    29,    29,    51,    26,    29,
      29,    26,     8,    29,    31,    29,    31,    29,    29,    31,
      29,    30,    30,    29,    32,    40,    41,    42,     3,     4,
       5,    29,    32,     3,     5,    29,    32,    42,     3,     5,
      29,    32,     8,    29,     8,    27,    29,    29,    27,    51,
       8,    29,    29,    26,    27,    29,    29,    29,    31,    29,
      31,    29,    29,    30,     3,     4,     5,    29,    32,     3,
       5,    29,    32,    42,     3,     5,    29,    32,     3,     4,
       5,     3,     4,     5,    29,     3,     5,     3,     5,    29,
       3,     4,     5,    29,     3,     5,     3,     5,    29,     8,
      29,    27,     5,    29,     8,    29,     8,    27,    29,    29,
      27,    29,    29,    31,    31,    29,     3,     4,     5,     3,
       4,     5,    29,     3,     5,     3,     5,    29,     3,     4,
       5,    29,     3,     5,     3,     5,    29,     3,     4,     5,
       3,     5,     3,     4,     5,     3,     5,     5,    29,     8,
      29,     5,     8,    29,    27,     5,    29,    29,    29,    31,
       3,     4,     5,     3,     5,     3,     4,     5,     3,     5,
       8,    29,     5,     8,     8,    29,     5,    29,     8,    29,
       5,    29,     8,     8,    29,     8,     8,    29,     5,     8,
       8,    29,     8,     8,     8,    29,     8,     8
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    48,    48,    48,    48,    48,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     7,     8,     6,     7,     7,     8,
       6,     7,     7,     8,     6,     7,     7,     8,     6,     7,
       7,     8,     6,     7,     7,     8,     6,     7,     8,     7,
      10,    11,    11,    12,    14,    15,    15,    16,    15,    16,
      16,    17,    12,    13,    13,    14,     9,    10,    10,    11,
      10,    11,    11,    12,    17,    18,    18,    19,    18,    19,
      19,    20,    18,    19,    19,    20,    19,    20,    20,    21,
      10,     9,    11,    10,    11,    10,    12,    11,     0,     1,
       1,     2,     2,     3,     3,     4,     4,     5,     3,     4,
       4,     5,     3,     4,     4,     5,     5,     6,     6,     7,
       0,     1,     1,     1,     2,     2,     2,     3,     3,     3,
       4,     4,     5,     4,     4,     5,     4,     4,     5,     4,
       4,     4,     5,     5,     6,     5,     5,     6,     5,     5,
       6,     0,     1,     2,     4,     4,     5,     3,     0,     1,
       2,     4,     4,     5,     3,     0,     1,     1,     1,     2,
       2,     2,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     5,     5,     5,     3,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       5,     5,     5,     5,     0,     3,     4,     4,     5,     3,
       4,     4,     5,     3,     4,     4,     5,     4,     5,     5,
       6,     4,     5,     5,     6,     4,     5,     5,     6,     4,
       5,     5,     6,     4,     5,     5,     6,     4,     5,     5,
       6,     3,     4,     4,     5,     3,     4,     4,     5,     3,
       4,     4,     5,     3,     4,     4,     5,     4,     5,     5,
       6,     4,     5,     5,     6,     4,     5,     5,     6,     4,
       5,     5,     6,     7,     8,     8,     9,     7,     8,     8,
       9,     7,     8,     8,     9,     8,     9,     9,    10,     8,
       9,     9,    10,     8,     9,     9,    10,     7,     8,     8,
       9,     7,     8,     8,     9,     7,     8,     9,     8,     7,
       8,     8,     9,     8,     9,     9,    10,     8,     9,     9,
      10,     8,     9,     9,    10,     8,     9,     9,    10,     8,
       9,     9,    10,     8,     9,     9,    10,     8,     9,     9,
      10,     0,     2,     2,     3,     0,     2,     6,     7,     7,
       8,     0,     4,     5,     7,     8,     8,     9,     5,     6,
       8,     9,     9,    10,     5,     6,     8,     9,     9,    10,
       6,     7,     9,    10,    10,    11,     7,     8,     8,     9,
      11,    12,    12,    13,     6,     7,     7,     8,    10,    11,
      11,    12
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 108 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 1833 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 1840 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 116 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";		
		YYACCEPT;
	}
#line 1850 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		cout << "CREATE database" << endl;
		type = "create database";
		YYACCEPT;
	}
#line 1861 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 129 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1871 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 135 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1881 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 143 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1891 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 149 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1901 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 155 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1911 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 161 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1921 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 169 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1931 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 175 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1941 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 181 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1951 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 187 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1961 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 195 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1971 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 201 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1981 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 207 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1991 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 213 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 2001 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 221 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 2011 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 227 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 2021 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 233 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 2031 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 239 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 2041 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 247 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2051 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 253 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2061 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 259 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2071 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 265 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2081 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 273 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 2091 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 279 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 2101 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 288 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2111 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 294 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2121 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 300 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2131 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 306 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2141 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 314 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2152 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 321 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2163 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 328 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2174 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 335 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2185 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 342 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2196 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 349 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2207 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 356 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2218 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 363 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2229 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 371 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2238 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 376 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2247 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 381 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2256 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 386 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2265 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 394 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-6].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2277 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 402 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-6].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2289 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 411 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2301 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 419 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2313 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 428 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2325 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 436 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2337 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 445 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-8].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2349 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 453 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-8].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2361 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 465 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-14].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2375 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 475 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2389 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 485 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-14].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2403 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 495 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2417 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 505 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2431 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 515 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2445 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 525 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2459 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 535 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2473 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 545 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2487 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 555 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2501 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 565 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2515 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 575 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2529 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 585 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2543 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 595 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-17].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2557 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 605 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2571 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 615 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-17].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2585 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 627 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2596 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 634 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2607 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 641 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2618 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 648 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2629 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 655 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2640 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 662 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2651 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 669 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2662 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 676 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2673 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 684 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2680 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 687 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
	}
#line 2689 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 692 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2699 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 698 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2709 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 704 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2719 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 710 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2729 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 716 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2738 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 721 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2747 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 726 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2756 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 731 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2765 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 736 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2775 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 742 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2785 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 748 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2795 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 754 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2805 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 760 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2815 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 766 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2825 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 772 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2835 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 778 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2845 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 784 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2854 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 789 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2863 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 794 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2872 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 799 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2881 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 807 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2888 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 810 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2896 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 814 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 2904 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 818 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2912 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 822 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2920 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 826 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 2928 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 830 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2936 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 834 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2944 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 838 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 2952 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 842 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2960 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 846 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 2968 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 850 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2976 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 854 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 2984 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 858 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 2992 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 862 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3000 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 866 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3008 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 870 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3016 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 874 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3024 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 878 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3032 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 882 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3040 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 886 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3048 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 890 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3056 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 894 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3064 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 898 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3072 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 902 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3080 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 906 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3088 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 910 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3096 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 914 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3104 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 918 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3112 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 922 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3120 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 926 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3128 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 931 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3135 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 934 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3143 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 938 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3151 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 942 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3159 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 946 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3167 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 950 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3175 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 954 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3183 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 959 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3190 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 962 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3198 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 966 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3206 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 970 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3214 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 974 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3222 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 978 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3230 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 982 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3238 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 987 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3245 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 990 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3253 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 994 "yacc.y" /* yacc.c:1646  */
    {	
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3261 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 998 "yacc.y" /* yacc.c:1646  */
    {	
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3269 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3277 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3285 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3293 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1014 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3302 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3311 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1024 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3320 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1029 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3329 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3338 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1039 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3347 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1044 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3356 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1049 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3365 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1054 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3374 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3383 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3392 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3401 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3410 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3419 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3428 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1089 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3437 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3446 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3455 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3464 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3473 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1115 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3482 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3491 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1125 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3500 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3509 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3518 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1140 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3527 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1145 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3536 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3545 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1155 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3554 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1160 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3563 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3572 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3581 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3588 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3598 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3608 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3618 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3628 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3638 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3648 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1215 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3658 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3668 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3678 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1233 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3688 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3698 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1245 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3708 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1252 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3718 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3728 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1264 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3738 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1270 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3748 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3758 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1282 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3768 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1288 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3778 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1294 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3788 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1300 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3798 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1306 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3808 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3818 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3828 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1325 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3838 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1331 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3848 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1337 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3858 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1343 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3868 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1349 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3878 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1355 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3888 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1361 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3898 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3908 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1373 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3918 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1379 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3928 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1385 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3938 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1391 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3948 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1397 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3958 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1403 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3968 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1409 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3978 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1415 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3988 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1421 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3998 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1427 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4008 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1433 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4018 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1439 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4028 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1445 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4038 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1451 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4048 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1457 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4058 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1463 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4068 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1469 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4078 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1475 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4088 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1481 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4098 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1487 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4108 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1493 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4118 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1499 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4128 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1505 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4138 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1511 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4148 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1517 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4158 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1523 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4168 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1529 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4178 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1535 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4188 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1542 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4198 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1548 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4208 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1554 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4218 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1560 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4228 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1566 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4238 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1572 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4248 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1578 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4258 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1584 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4268 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1590 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4278 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1596 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4288 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1602 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4298 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1608 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4308 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1614 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4318 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1620 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4328 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1626 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4338 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1632 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4348 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1638 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4358 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1644 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4368 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1650 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4378 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1656 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4388 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1663 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4398 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1669 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4408 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1675 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4418 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1681 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4428 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1687 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4438 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1693 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4448 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1699 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4458 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1705 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4468 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1711 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4478 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1717 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4488 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1723 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4498 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1729 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4508 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1735 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4518 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1741 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4528 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1747 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4538 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1753 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4548 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1759 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4558 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1765 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4568 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1771 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4578 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1777 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4588 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1783 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4598 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1789 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4608 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1795 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4618 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1801 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4628 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1807 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4638 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1813 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4648 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1819 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4658 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1825 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4668 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1831 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4678 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1837 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4688 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1843 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4698 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1849 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4708 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1855 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4718 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1861 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4728 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1867 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4738 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1873 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4748 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1880 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4758 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1886 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4768 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1892 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4778 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1898 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4788 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1904 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4798 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1910 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4808 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1916 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4818 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1922 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4828 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1929 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4838 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1935 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4848 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1941 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4858 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1947 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4868 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1953 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4878 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1959 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4888 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1965 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4898 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1971 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4908 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1977 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4918 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1983 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4928 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1989 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4938 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1995 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4948 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2003 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4955 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2006 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4962 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2009 "yacc.y" /* yacc.c:1646  */
    {	
	}
#line 4969 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2012 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4976 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2016 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4983 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2019 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4990 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2022 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4998 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2026 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 5006 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2030 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 5014 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2034 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 5022 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2039 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 5029 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2042 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5040 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2049 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5051 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2056 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5062 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2063 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5073 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2070 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5084 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2077 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5095 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2084 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5106 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2091 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5117 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2098 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5128 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2105 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5139 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2112 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5150 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2119 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5161 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2126 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5172 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2133 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5183 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2140 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5194 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2147 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5205 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2154 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5216 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2161 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5227 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2168 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5238 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2175 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5249 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2182 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5260 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2189 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5271 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2196 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5282 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 2203 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5293 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2210 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5304 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2217 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5315 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2224 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5326 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2231 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5337 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2238 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5348 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2245 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5359 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2252 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5370 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2259 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5381 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2266 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5392 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2273 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5403 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2280 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5414 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2287 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5425 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2294 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5436 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2301 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5447 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2308 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5458 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2315 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5469 "yacc.tab.c" /* yacc.c:1646  */
    break;


#line 5473 "yacc.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 2323 "yacc.y" /* yacc.c:1906  */


/*void yyerror(const char *s)			
{
	cerr<<s<<endl;		
}
*/
void yyerror(const char* s) {
     	fprintf(stderr, "%s ", s);    
     	fprintf(stderr, "in line %d \n", yylineno);
}	

void errorReport(char* s) {
	printf("%s", s);
}

void createDb() {
	string temp0 = "/";
	string path = DB_ROOT+temp0+dbName;
	int isCreate = mkdir(path.c_str(), S_IRUSR | S_IWUSR | S_IXUSR | S_IRWXG |S_IRWXO);
   	if( !isCreate )
    		printf("successfully create database: %s \n",dbName.c_str());
   	else
  	 	printf("create database %s failed! error code : %d \n",dbName.c_str(),isCreate);
}

void useDb() {
	DIR *dp;
	string temp0 = "/";
	string path = DB_ROOT+temp0+dbName;
    	if ((dp = opendir(path.c_str())) == NULL)
    	{
		printf("database %s doesn't exist! \n", dbName.c_str());
    	    	return;
    	}
	currentDb = dbName;
 	printf("successfully check to database: %s \n", dbName.c_str()); 	
   	closedir(dp);
    	return;
}


void dropDb() {
	string temp0 = "/";	
	string temp1 = "rm -rf ";
	string path1 = DB_ROOT+temp0+dbName;
	string path = temp1 + DB_ROOT+temp0+dbName;
	if (dbName == currentDb) currentDb = "";
	if ((!access(path1.c_str(), F_OK))==0) {
		printf("database doens't exist... \n");
		return;
	} 
    	if (!system(path.c_str()))
		printf("successfully drop database: %s \n",dbName.c_str());
}

void showDb() {
	printf("the work is not completed now \n");
}

void createTb() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}
	string temp0 = "/";
	string temp1 = ".txt";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK))==0)
	{
		printf("table is already exist... \n");
	} 
	else {
		int fd=open(path.c_str(),O_RDWR | O_CREAT, S_IRWXU);
		printf("success... \n");
		FileManager* fm = new FileManager();
		BufPageManager* bpm = new BufPageManager(fm); 

		RecordManager* rm = new RecordManager(fm);
		int fileID;
		fm->openFile(path.c_str(), fileID); 
		int attr_num = attrNameList.size();
		vector<string> attr_name;
		int attr_len[attr_num*3]; // {1, 10, 1, 0, 25, 1, 0, 1, 1};
		int primary_key = 0;
		string temp0 = "\"";
		for (int i=0; i<attr_num; i++) {
			if (attrTypeList[i]=="INT"  || attrTypeList[i]=="int" )attr_len[i*3] = 1; else
			if (attrTypeList[i]=="CHAR" || attrTypeList[i]=="char" )attr_len[i*3] = 0; else {
				errorReport("Type error! \n");
				cout << attrTypeList[i] << endl;
				return;
			}
			attr_len[i*3+1] = atoi(attrNumList[i].c_str());
			attr_len[i*3+2] = 1-attrNotNullList[i];
			string temp = temp0+attrNameList[i]+temp0;
			attr_name.push_back(attrNameList[i]);
			if (attrNameList[i] == primaryKey) primary_key = i;		
		}
		cout << primary_key << endl;
		rm->init(fileID, attr_num, attr_len, primary_key, attr_name);
	}
}

void dropTb() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}	
	string temp0 = "/";	
	string temp1 = "rm -rf ";
	string path1 = DB_ROOT+temp0+currentDb+temp0+tbName;
	string path = temp1 + DB_ROOT+temp0+currentDb+temp0+tbName;
    	if ((access(path1.c_str(), F_OK)))
	{
		printf("table %s doesb't exist... \n", tbName.c_str());
		return;
	} 
    	if (!system(path.c_str()))
		printf("successfully drop table: %s \n",dbName.c_str());
}

void showTb() {
	printf("the work is not completed now \n");
}

void insertInto() {
	if (currentDb == "") { 
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt"; 
	string temp2 = "'"; 
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesb't exist... \n", tbName.c_str());
		return;
	} 
	int fileID; 
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	vector<string> newRecord;
	int now = 0;
	cout << attrValueList.size() << endl;
	for (int i=0; i<attrValueList.size(); i++) { 
		newRecord.clear();
		for (int j=0; j<attrValueList[i].size(); j++) {
			if (attrValueList[i][j]=="null" || attrValueList[i][j]=="NULL")
				newRecord.push_back(temp2+attrValueList[i][j]+temp2);
			else newRecord.push_back(attrValueList[i][j]);
		}
		rm->insert_record(fileID, newRecord );
	}
	rm->print_all_record();
}

void deleteFrom() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesb't exist... \n", tbName.c_str());
		return;
	}

	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	
	vector<vector<string> > record = rm->get_all_record();
	
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();
	vector<int> clauseLeft, clauseRight;
	clauseLeft.clear();
	clauseRight.clear();
	int flag;
	for (int i=0; i<clauseNameList.size(); i++) {
		flag = 0;
		for (int j=0; j<attr.size(); j++)
			if (attr[j] == clauseNameList[i]) {
				flag = j+1;
				break;
			}
		if (flag == 0) {
			printf("attrName %s doesn't exist.. \n", clauseNameList[i].c_str());
			return;	
		}
		clauseLeft.push_back(flag);
		flag = 0;
		if (clauseRightList[i][0] == '\'' || (clauseRightList[i][0]>='0' && clauseRightList[i][0]<='9')) {
			clauseRight.push_back(0);
			continue;
		}
		for (int j=0; j<attr.size(); j++)
			if (attr[j] == clauseRightList[i]) {
				flag = j+1;
				break;
			}
		if (flag == 0) {
			printf("attrName %s doesn't exist.. \n", clauseRightList[i].c_str());
			return;	
		}
		clauseRight.push_back(flag);
	}

	flag = 0;
	vector<string> delList;
	delList.clear();
	string temp = "";
	for (int i=0; i<record.size(); i++) { 
		flag = 0;
		for (int j=0; j<clauseOpList.size(); j++) {		
			if (clauseOpList[j] == "=") {
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]>0 && type[clauseRight[j]-1]==0) {
					if (record[i][clauseLeft[j]] != record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]==0 && clauseRightList[j][0]=='\'') {
					temp = temp2+record[i][clauseLeft[j]]+temp2;
					cout << "a " << record[i][clauseLeft[j]] << endl;
					if (temp != clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (record[i][clauseLeft[j]] != record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (record[i][clauseLeft[j]] != clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
				
			}
			if (clauseOpList[j] == ">") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) <= atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) <= atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "<") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) >= atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) >= atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == ">=") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) < atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) < atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "<=") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) > atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) > atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "!=") {
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]>0 && type[clauseRight[j]-1]==0) {
					if (record[i][clauseLeft[j]] == record[i][clauseRight[j]]) {
						flag = 1;
						break;
					} 
				} else
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]==0 && clauseRightList[j][0]=='\'') {
					temp = temp2+record[i][clauseLeft[j]]+temp2;
					if (temp == clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (record[i][clauseLeft[j]] == record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (record[i][clauseLeft[j]] == clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
		}
		if (flag == 0) {
			delList.push_back(record[i][0]);
		}	
	}
	for (int i=0; i<delList.size(); i++) 
		rm->delete_record(fileID, atoi(delList[i].c_str()));
	rm->print_all_record(); 
}

char orderBetween(char top, char now) {
	if (now=='\0' && top =='\0') return '=';
	if (now=='\0') return '>';
	if ((top == '+' || top == '-') && (now == '*' || now == '/')) return '<';
	if (top == '\0') return '<';
	return '>';
}

string to_string(int a)
{
   ostringstream ostr;
   ostr << a;
   string astr = ostr.str();
   //cout << astr <<endl;
   return astr ;
}

void updateSet() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesb't exist... \n", tbName.c_str());
		return;
	}

	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	
	vector<vector<string> > record = rm->get_all_record();
	
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();
	vector<int> clauseLeft, clauseRight;
	clauseLeft.clear();
	clauseRight.clear();
	int flag;
	for (int i=0; i<clauseNameList.size(); i++) {
		flag = 0;
		for (int j=0; j<attr.size(); j++)
			if (attr[j] == clauseNameList[i]) {
				flag = j+1;
				break;
			}
		if (flag == 0) {
			printf("attrName %s doesn't exist.. \n", clauseNameList[i].c_str());
			return;	
		}
		clauseLeft.push_back(flag);
		flag = 0;
		if (clauseRightList[i][0] == '\'' || (clauseRightList[i][0]>='0' && clauseRightList[i][0]<='9')) {
			clauseRight.push_back(0);
			continue;
		}
		for (int j=0; j<attr.size(); j++)
			if (attr[j] == clauseRightList[i]) {
				flag = j+1;
				break;
			}
		if (flag == 0) {
			printf("attrName %s doesn't exist.. \n", clauseRightList[i].c_str());
			return;	
		}
		clauseRight.push_back(flag);
	}

	flag = 0;
	vector<string> delList;
	delList.clear();
	string temp = "";
	int set = -1;
	for (int i=0; i<attr.size(); i++) {
		if (attr[i] == setName) {
			set = i;
			break;
		}	
	}
	cout << "attr[set]: " << attr[set] << endl;
	if (set == -1) {
		printf("attrName %s doesn't exist.. \n", setName.c_str());
		return;
	}	
	string ans = "";
	for (int i=0; i<record.size(); i++) { 
		flag = 0;
		for (int j=0; j<clauseOpList.size(); j++) {		
			if (clauseOpList[j] == "=") {
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]>0 && type[clauseRight[j]-1]==0) {
					if (record[i][clauseLeft[j]] != record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]==0 && clauseRightList[j][0]=='\'') {
					temp = temp2+record[i][clauseLeft[j]]+temp2;
					if (temp != clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (record[i][clauseLeft[j]] != record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (record[i][clauseLeft[j]] != clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
				
			}
			if (clauseOpList[j] == ">") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) <= atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) <= atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "<") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) >= atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) >= atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == ">=") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) < atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) < atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "<=") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) > atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) > atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "!=") {
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]>0 && type[clauseRight[j]-1]==0) {
					if (record[i][clauseLeft[j]] == record[i][clauseRight[j]]) {
						flag = 1;
						break;
					} 
				} else
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]==0 && clauseRightList[j][0]=='\'') {
					temp = temp2+record[i][clauseLeft[j]]+temp2;
					if (temp == clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (record[i][clauseLeft[j]] == record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (record[i][clauseLeft[j]] == clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
		}
		if (flag == 0) {
			ans = "";
			int flag1 = 0;
			vector<string> tempexprValueList;
			tempexprValueList.clear();
			for (int k=0; k<exprValueList.size(); k++) {
				if (exprValueList[k][0]!='\'' && (exprValueList[k][0]<'0' || exprValueList[k][0]>'9')) {//is a attrName
					for (int k2=0; k2<attr.size(); k2++)	
						if (attr[k2] == exprValueList[k]) {
							flag1 = 1;
							tempexprValueList.push_back(record[i][k2+1]);
							if (type[k2] == 0) tempexprValueList[k] = temp2 + tempexprValueList[k] + temp2;
							break;
						}	
					if (flag1 == 0)	{
						printf("attrName error! \n");
						return;
					}		 
				} else
				tempexprValueList.push_back(exprValueList[k]);
					
			}
			cout << tempexprValueList.size() << endl;
			if (tempexprValueList[0][0] != '\'' && type[set]==0) {
				printf("Operator error! \n");
				return;
			}
			if (tempexprValueList[0][0] == '\'' && exprOpList.size()==0 && type[set]==0) {
				string tempa = "";
				for (int k=1; k<tempexprValueList[0].length()-1; k++) tempa += tempexprValueList[0][k];
				cout << fileID << " " << atoi(record[i][0].c_str()) << " " << attr[set] << " " << tempexprValueList[0] << endl;
				if (rm->update_record(fileID, atoi(record[i][0].c_str()), attr[set], tempexprValueList[0])) {
					cout << "wrong update" << endl;
				}
				else {
					cout << "success update" << endl;
				}
				rm->print_all_record();	
				return;		
			} else
			if (type[set]==1) {
				for (int k=0; k<tempexprValueList.size(); k++)
					if (tempexprValueList[k][0] == '\'') {
						printf("type error! \n");
						return;					
					}				
				stack<int> opnd;
				stack<char> optr;
				while( !opnd.empty() ) opnd.pop(); 
				while( !optr.empty() ) optr.pop(); 
				optr.push('\0');
				int now=0,valuePos=0,opPos=0;
				exprOpList.push_back('\0');
				int pOpnd1, pOpnd2;
				while (!optr.empty()) {

					if (now==0) {
						opnd.push(atoi(tempexprValueList[valuePos].c_str()));
						valuePos++;
						now = 1;
						if (exprOpList[opPos] == '\0') now = 2; 
					} else {
						if (now!=2)now = 0;
						switch (orderBetween(optr.top(), exprOpList[opPos])) {
						case '<':
							optr.push(exprOpList[opPos]); opPos++;
	
							break;
						case '=':
							optr.pop();		
							break;
						case '>':
							now = 1; 
							char op = optr.top();
							optr.pop();
							if (op=='+') {
								pOpnd2 = opnd.top();
								opnd.pop();
								pOpnd1 = opnd.top();
								opnd.pop();
								opnd.push(pOpnd1+pOpnd2);
							}
							if (op=='-') {
								pOpnd2 = opnd.top();
								opnd.pop();
								pOpnd1 = opnd.top();
								opnd.pop();
								opnd.push(pOpnd1-pOpnd2);
							}
							if (op=='*') {
								pOpnd2 = opnd.top();
								opnd.pop();
								pOpnd1 = opnd.top();
								opnd.pop();
								opnd.push(pOpnd1*pOpnd2);
							}
							if (op=='/') {
								pOpnd2 = opnd.top();
								opnd.pop();
								pOpnd1 = opnd.top();
								opnd.pop();
								opnd.push(pOpnd1/pOpnd2);
							}
							break;
						}
					}	
				}
				int ans = opnd.top();
				cout << fileID << " " << atoi(record[i][0].c_str()) << " " << attr[set] << " " << to_string(ans) << endl;
				if (rm->update_record(fileID, atoi(record[i][0].c_str()), attr[set], to_string(ans))) {
					cout << "wrong update" << endl;
				}
				else {
					cout << "success update" << endl;
				}
				rm->print_all_record();	
			}
			
		}	
	}
} 


void selectFrom() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	FileManager* fm[tbNameList.size()];
	RecordManager* rm[tbNameList.size()];
	int fileID[tbNameList.size()];
	vector<vector<string> > record[tbNameList.size()];
	vector<string> attr[tbNameList.size()];
	vector<int> type[tbNameList.size()];
	for (int i=0; i<tbNameList.size(); i++) {
		string path = DB_ROOT+temp0+currentDb+temp0+tbNameList[i];
		if((access(path.c_str(),F_OK)))
		{
			printf("table %s doesb't exist... \n", tbName.c_str());
			return;
		}
		fm[i] = new FileManager();
		fm[i]->openFile(path.c_str(), fileID[i]);
		rm[i] = new RecordManager(fm[i]);
		rm[i]->load_table_info(fileID[i]);
		record[i] = rm[i]->get_all_record();
		attr[i] = rm[i]->get_attr_name();
		type[i] = rm[i]->get_attr_type();
	}
	
	vector<int> clauseLeftAttr, clauseRightAttr;
	vector<int> clauseLeft, clauseRight;
	vector<int> ans, ansAttr;
	clauseLeftAttr.clear();
	clauseRightAttr.clear();
	clauseLeft.clear();
	clauseRight.clear();
	ans.clear();
	ansAttr.clear();
	for (int i=0; i<clauseNameList.size();i++) {
		int now=0;
		while (clauseNameList[i][now] != '.' && now<clauseNameList[i].length()-1) now++;
		if (now==clauseNameList[i].length()-1) {
			printf("table name lost!");
			return;
		}
		string temp = "";
		for (int j=0; j<now; j++) temp += clauseNameList[i][j];
		int now2=-1;
		for (int j=0; j<tbNameList.size(); j++)
			if (tbNameList[j] == temp) {
				now2 = j;
				break;
			}
		if (now2==-1) {
			printf("table name doesn't exist!");
			return;	
		}
		clauseLeft.push_back(now2);
		temp = "";
		for (int j=now+1; j<clauseNameList[i].length(); j++) temp += clauseNameList[i][j];
		now2=-1;
		for (int j=0; j<attr[clauseLeft[i]].size(); j++)
			if (attr[clauseLeft[i]][j] == temp) {
				now2 = j;
				break;
			}
		if (now2==-1) {
			printf("attr name doesn't exist!");
			return;	
		}
		clauseLeftAttr.push_back(now2);
	}
        
	for (int i=0; i<clauseRightList.size();i++) {
		if (clauseRightList[i][0]=='\'' || (clauseRightList[i][0]>'0' && clauseRightList[i][0]<'9')) {
			clauseRight.push_back(-1);
			clauseRightAttr.push_back(-1);
			continue;
		}
		int now=0;
		while (clauseRightList[i][now] != '.' && now<clauseRightList[i].length()-1) now++;
		if (now==clauseRightList[i].length()-1) {
			printf("table name lost!");
			return;
		}
		string temp = "";
		for (int j=0; j<now; j++) temp += clauseRightList[i][j];
		int now2=-1;
		for (int j=0; j<tbNameList.size(); j++)
			if (tbNameList[j] == temp) {
				now2 = j;
				break;
			}
		if (now2==-1) {
			printf("table name doesn't exist!");
			return;	
		}
		clauseRight.push_back(now2);
		temp = "";
		for (int j=now+1; j<clauseRightList[i].length(); j++) temp += clauseRightList[i][j];
		now2=-1;
		for (int j=0; j<attr[clauseRight[i]].size(); j++)
			if (attr[clauseRight[i]][j] == temp) {
				now2 = j;
				break;
			}
		if (now2==-1) {
			printf("attr name doesn't exist!");
			return;	
		}
		clauseRightAttr.push_back(now2);
	}

	for (int i=0; i<attrNameList.size();i++) {
		int now=0;
		while (attrNameList[i][now] != '.' && now<attrNameList[i].length()-1) now++;
		if (now==attrNameList[i].length()-1) {
			printf("table name lost!");
			return;
		}
		string temp = "";
		for (int j=0; j<now; j++) temp += attrNameList[i][j];
		int now2=-1;
		for (int j=0; j<tbNameList.size(); j++)
			if (tbNameList[j] == temp) {
				now2 = j;
				break;
			}
		if (now2==-1) {
			printf("table name doesn't exist!");
			return;	
		}
		ans.push_back(now2);
		temp = "";
		for (int j=now+1; j<attrNameList[i].length(); j++) temp += attrNameList[i][j];
		now2=-1;
		for (int j=0; j<attr[ans[i]].size(); j++)
			if (attr[ans[i]][j] == temp) {
				now2 = j;
				break;
			}
		if (now2==-1) {
			printf("attr name doesn't exist!");
			return;	
		}
		ansAttr.push_back(now2);
	}        
	
	if (tbNameList.size() == 1) {
		//cout << "start...  " << record[0].size() << endl;
		for (int i=0; i<record[0].size(); i++) { 
			int flag = 0;
			string temp = "";
			//cout << clauseOpList.size() << endl;
			for (int j=0; j<clauseOpList.size(); j++) {
				//cout << clauseLeftAttr.size() << " " << clauseRightAttr.size() << endl;	
				//cout << clauseLeftAttr[j] << " " << clauseRightAttr[j] << endl;
				if (clauseOpList[j] == "=") {
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==0) {
						if (record[0][i][clauseLeftAttr[j]+1] != record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
						//cout << clauseRightList[j] << " "<< record[0][i][clauseLeftAttr[j]+1] << endl;
						temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2;
						if (temp != clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (record[0][i][clauseLeftAttr[j]+1] != record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (record[0][i][clauseLeftAttr[j]+1] != clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				
				}
				if (clauseOpList[j] == ">") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) <= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) <= atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "<") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == ">=") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) < atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) < atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "<=") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) > atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) > atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "!=") {
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==0) {
						if (record[0][i][clauseLeftAttr[j]+1] == record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						} 
					} else
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
						temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2;
						if (temp == clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (record[0][i][clauseLeftAttr[j]+1] == record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (record[0][i][clauseLeftAttr[j]+1] == clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
			}
			if (flag == 0) {
				cout << "ans: " << record[0][i][ansAttr[0]+1] << endl;
			}
		}
	}
	if (tbNameList.size() == 2) {
		for (int i=0; i<record[0].size(); i++) {

			for (int i2=0; i2<record[1].size(); i2++) { 
				int flag = 0;
				string temp = "";
				//cout << clauseOpList.size() << endl;
				for (int j=0; j<clauseOpList.size(); j++) {
					cout << clauseLeftAttr[j] << " " << clauseRightAttr[j] << endl;	
					//cout << clauseLeftAttr[j] << " " << clauseRightAttr[j] << endl;
					if (clauseOpList[j] == "=") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
							
						if (tp1==0 && clauseRightAttr[j]>-1 && tp2==0) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (str1 != str2) {
								flag = 1;
								break;
							}
						} else
						if (tp1==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
							//cout << clauseRightList[j] << " "<< record[0][i][clauseLeftAttr[j]+1] << endl;
							if (clauseLeft[j]==0) temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2; else temp = temp2+record[1][i2][clauseLeftAttr[j]+1]+temp2;
							if (temp != clauseRightList[j]) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
														
							if (str1 != str2) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (record[0][i][clauseLeftAttr[j]+1] != clauseRightList[j]) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					
					}
					if (clauseOpList[j] == ">") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (atoi(str1.c_str()) <= atoi(str2.c_str())) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (atoi(temp.c_str()) <= atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
					if (clauseOpList[j] == "<") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (atoi(temp.c_str()) >= atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
					if (clauseOpList[j] == ">=") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (atoi(str1.c_str()) < atoi(str2.c_str())) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (atoi(temp.c_str()) < atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
					if (clauseOpList[j] == "<=") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (atoi(str1.c_str()) > atoi(str2.c_str())) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (atoi(temp.c_str()) > atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
					if (clauseOpList[j] == "!=") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						if (tp1==0 && clauseRightAttr[j]>-1 && tp2==0) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (str1 == str2) {
								flag = 1;
								break;
							} 
						} else
						if (tp1==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (temp == clauseRightList[j]) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (str1 == str2) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (temp == clauseRightList[j]) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
				}
				if (flag == 0) {
					cout << "ans: ";
					for (int p=0; p<ans.size(); p++)
						if (ans[p]==0) cout << record[ans[p]][i][ansAttr[p]+1] << " "; else cout << record[ans[p]][i2][ansAttr[p]+1];
					cout << endl;
				}
			}
		}
	} 
	if (tbNameList.size() == 3) {
		for (int i=0; i<record[0].size(); i++) {
			for (int i2=0; i2<record[1].size(); i2++) { 
				for (int i3=0; i3<record[2].size(); i3++) { 
					int flag = 0;
					string temp = "";
					//cout << clauseOpList.size() << endl;
					for (int j=0; j<clauseOpList.size(); j++) {
						//cout << clauseLeftAttr[j] << " " << clauseRightAttr[j] << endl;
						if (clauseOpList[j] == "=") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
								
							if (tp1==0 && clauseRightAttr[j]>-1 && tp2==0) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (str1 != str2) {
									flag = 1;
									break;
								}
							} else
							if (tp1==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
								//cout << clauseRightList[j] << " "<< record[0][i][clauseLeftAttr[j]+1] << endl;
								if (clauseLeft[j]==0) temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2; else
								if (clauseLeft[j]==1) temp = temp2+record[1][i2][clauseLeftAttr[j]+1]+temp2; else temp = temp2+record[2][i3][clauseLeftAttr[j]+1]+temp2;
								if (temp != clauseRightList[j]) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
															
								if (str1 != str2) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (record[0][i][clauseLeftAttr[j]+1] != clauseRightList[j]) {
									flag = 1;
									break;
								}
							} else {
								printf("compare error! \n");
								return;
							}
						
						}
						if (clauseOpList[j] == ">") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (atoi(str1.c_str()) <= atoi(str2.c_str())) {
									flag = 1;
									break;
									}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (atoi(temp.c_str()) <= atoi(clauseRightList[j].c_str())) {
									flag = 1;
									break;
								}
							} else {
								printf("compare error! \n");
								return;
							}
						}
						if (clauseOpList[j] == "<") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (atoi(temp.c_str()) >= atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
							} else {
								printf("compare error! \n");
								return;
							}
						}
						if (clauseOpList[j] == ">=") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (atoi(str1.c_str()) < atoi(str2.c_str())) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (atoi(temp.c_str()) < atoi(clauseRightList[j].c_str())) {
									flag = 1;
									break;
								}
							} else {
								printf("compare error! \n");
								return;
							}
						}
						if (clauseOpList[j] == "<=") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (atoi(str1.c_str()) > atoi(str2.c_str())) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (atoi(temp.c_str()) > atoi(clauseRightList[j].c_str())) {
									flag = 1;
									break;
								}
							} else {
								printf("compare error! \n");
								return;
							}
						}
						if (clauseOpList[j] == "!=") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							if (tp1==0 && clauseRightAttr[j]>-1 && tp2==0) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (str1 == str2) {
									flag = 1;
									break;
								} 
							} else
							if (tp1==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (temp == clauseRightList[j]) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (str1 == str2) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (temp == clauseRightList[j]) {
									flag = 1;
									break;
								}
								} else {
								printf("compare error! \n");
								return;
							}
						}
					}
					if (flag == 0) {
						cout << "ans: ";
						for (int p=0; p<ans.size(); p++)
							if (ans[p]==0) cout << record[ans[p]][i][ansAttr[p]+1] << " "; else
							if (ans[p]==1) cout << record[ans[p]][i2][ansAttr[p]+1] << " "; else
								 cout << record[ans[p]][i3][ansAttr[p]+1];
						cout << endl;
					}
				}
			}
		}                                                                                                                      
	}
}


void select() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	}

	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	
	vector<vector<string> > record = rm->get_all_record();
	
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();
	int pos=-1;
	for (int i=0; i<attr.size(); i++) 
		if (attr[i] == attrName) {
			pos = i;
			break;
		}
	if (pos == -1) {
		printf("attrName %s dosent exist... \n", attrName.c_str());
		return;
	}	
	if (type[pos]==0) {
		printf("Type error! \n");
		return;
	}
	if (selectType == "SUM" || selectType == "sum") {
		int ans = 0;
		for (int i=0; i<record.size(); i++) ans += atoi(record[i][pos+1].c_str());
		cout << "sum: " << ans << endl;
		return;
	}
	if (selectType == "AVG" || selectType == "avg") {
		int ans = 0;
		for (int i=0; i<record.size(); i++) ans += atoi(record[i][pos+1].c_str());
		ans/=record.size();
		cout << "avg: " << ans << endl;
		return;
	}
	if (selectType == "MAX" || selectType == "max") {
		int ans = atoi(record[0][pos+1].c_str());
		for (int i=1; i<record.size(); i++) 
			if (atoi(record[i][pos+1].c_str()) > ans) ans = atoi(record[i][pos+1].c_str());
		cout << "max: " << ans << endl;
		return;
	}
	if (selectType == "MIN" || selectType == "min") {
		int ans = atoi(record[0][pos+1].c_str());
		for (int i=1; i<record.size(); i++) 
			if (atoi(record[i][pos+1].c_str()) < ans) ans = atoi(record[i][pos+1].c_str());
		cout << "min: " << ans << endl;
		return;
	}
	printf("select type error! \n");
	return;
	
	
}

void selectGroup() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	}

	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	vector<vector<string> > record = rm->get_all_record();
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();	
	if (attrName1 != attrName3) {
		printf("group name error! \n");
		return;	
	}
	int pos1 = -1, pos2 = -1;
	for (int i=0; i<attr.size(); i++) {
		if (attr[i] == attrName1) {
			pos1 = i;
		}
		if (attr[i] == attrName2) {
			pos2 = i;
		}
	}
	if (pos1 == -1) {
		printf("attrName %s dosent exist... \n", attrName1.c_str());
		return;
	}	
	if (pos2 == -1) {
		printf("attrName %s dosent exist... \n", attrName2.c_str());
		return;
	}	
	if (type[pos2]==0) {
		printf("Type error! \n");
		return;
	}
	vector<string> name;
	name.clear();
	vector<int> ans;
	vector<int> tim;
	ans.clear();
	for (int i=0; i<record.size(); i++) {
		vector<string>::iterator iter = find(name.begin(), name.end(), record[i][pos1+1]);
		if (iter == name.end()) {
			name.push_back(record[i][pos1+1]);
			ans.push_back(atoi(record[i][pos2+1].c_str()));
			tim.push_back(1);
		} else {
			if (selectType == "SUM" || selectType == "sum") {
				ans[iter-name.begin()] += atoi(record[i][pos2+1].c_str());
			} else
			if (selectType == "AVG" || selectType == "avg") {
				ans[iter-name.begin()] += atoi(record[i][pos2+1].c_str());
				tim[iter-name.begin()]++;
			} else
			if (selectType == "MAX" || selectType == "max") {
				if (atoi(record[i][pos2+1].c_str())>ans[iter-name.begin()]) ans[iter-name.begin()] = atoi(record[i][pos2+1].c_str());
			} else
			if (selectType == "MIN" || selectType == "min") {
				if (atoi(record[i][pos2+1].c_str())<ans[iter-name.begin()]) ans[iter-name.begin()] = atoi(record[i][pos2+1].c_str());
			} else {
				printf("select type error! \n");
				return;
			}
		}
	}
	if (selectType == "AVG" || selectType == "avg") 
		for (int i=0; i<ans.size(); i++) ans[i] /= tim[i];
	cout << attrName1 << "   " << attrName2 << endl;
	for (int i=0; i<name.size(); i++)
		cout << name[i] << "  " << selectType << ": " << ans[i] << endl; 
}

void work() {
	if (type == "create database") 	createDb();
	if (type == "drop database")    dropDb();
	if (type == "use database") 	useDb();
	if (type == "show database") 	showDb();
	if (type == "create table") 	createTb();
	if (type == "drop table") 	dropTb();
	if (type == "show table") 	showTb();
	if (type == "insert into") 	insertInto();
	if (type == "delete from") 	deleteFrom();
	if (type == "update set") 	updateSet();
	if (type == "select from")	selectFrom();
	if (type == "select")		select();
	if (type == "select group")	selectGroup();
}

int make() {
	int now = 0;
	string temp = "";	
	for (int i=0; i<attrNumList.size(); i++) {
		now = 0;
		temp = "";
		while (attrNumList[i][now]=='(' || attrNumList[i][now]==' ') now++;
		for (int j=now; j<attrNumList[i].length(); j++)
			if (attrNumList[i][j] != ' ' && attrNumList[i][j] != ')') temp += attrNumList[i][j]; else break;
		attrNumList[i] = temp;
	}

	for (int i=0; i<attrValueList.size(); i++) {
		for (int j=0; j<attrValueList[i].size(); j++) {
			now = 0;
			temp = "";
			while (attrValueList[i][j][now]=='(' || attrValueList[i][j][now]==' ') now++;
			if (attrValueList[i][j][now]=='\'') continue;
			for (int k=now; k<attrValueList[i][j].length(); k++)
				if (attrValueList[i][j][k] != ' ' && attrValueList[i][j][k] != ')') temp += attrValueList[i][j][k]; else break;
			attrValueList[i][j] = temp;
		}			
	}
	now = 0;
	temp = "";	
	while (primaryKey[now]=='(' || primaryKey[now]==' ') now++;
	for (int j=now; j<primaryKey.length(); j++)
		if (primaryKey[j] != ' ' && primaryKey[j] != ')') temp += primaryKey[j]; else break;
	primaryKey = temp;

	now = 0;
	temp = "";
	while (attrName[now]=='(' || attrName[now]==' ') now++;\
	for (int k=now; k<attrName.length(); k++)
		if (attrName[k] != ' ' && attrName[k] != ')') temp += attrName[k]; else break;
	attrName = temp;
	now = 0;
	temp = "";
	while (attrName2[now]=='(' || attrName2[now]==' ') now++;\
	for (int k=now; k<attrName2.length(); k++)
		if (attrName2[k] != ' ' && attrName2[k] != ')') temp += attrName2[k]; else break;
	attrName2 = temp;
		
}

int main()						
{	
	int i=0;
	while(1) {
		cout << "  >> ";	
		type = "";
		dbName = "";
		tbName = "";
		setName = "";
		attrNameList.clear();
		nullList.clear();
 		tbNameList.clear();	
 		attrTypeList.clear();	
 		attrNumList.clear();	
 		attrNotNullList.clear();	
 		attrValueList.clear();	
 		exprValueList.clear();	
 		exprOpList.clear();	
		clauseNameList.clear();
		clauseOpList.clear();
		clauseRightList.clear();
		while( yyparse()) {};
	
		make();
		cout << "type: " << type << endl;	
		cout << "selectType: " << selectType << endl; 	
		cout << "tbName: " << tbName << endl;	
		cout << "attrName1: " << attrName1 << endl;
		cout << "attrName2: " << attrName2 << endl;	
		cout << "attrName3: " << attrName3 << endl;	
		/*vector<string>::iterator iter;
		vector<int>::iterator iterInt;
		vector<char>::iterator iterCh;
		cout << "attrValueList:" << endl;
		for (int i=0; i<attrValueList.size(); i++) {
			cout << "tempList: ";
			for (int j=0; j<attrValueList[i].size(); j++)
				cout << attrValueList[i][j] << " ";
			cout << endl;
		} */

		if (type != "") work();	
		/*
		cout << "type: " << type << endl;	
		cout << "selectType: " << selectType << endl; 	
		cout << "attrName: " << attrName << endl;
		cout << "dbName: " << dbName << endl;	
		cout << "tbName: " << tbName << endl;	
		cout << "setName: " << setName << endl;	
		cout << "primaryKey: " << primaryKey << endl;	
		vector<string>::iterator iter;
		vector<int>::iterator iterInt;
		vector<char>::iterator iterCh;
		cout << "attrValueList:" << endl;
		for (int i=0; i<attrValueList.size(); i++) {
			cout << "tempList: ";
			for (int j=0; j<attrValueList[i].size(); j++)
				cout << attrValueList[i][j] << " ";
			cout << endl;
		} 

		cout << "attrNameList:";  
    		for (iter=attrNameList.begin();iter!=attrNameList.end();iter++)  
        		cout << " " << *iter;   	
		cout << endl;
		cout << "tbNameList:";  
		for (iter=tbNameList.begin();iter!=tbNameList.end();iter++)  
        		cout << " " << *iter;  
		cout << endl; 
		cout << "attrTypeList:";   
		for (iter=attrTypeList.begin();iter!=attrTypeList.end();iter++)  
        		cout << " " << *iter;  
		cout << endl;
		cout << "attrNumList:";  
		for (iter=attrNumList.begin();iter!=attrNumList.end();iter++)  
        		cout << " " << *iter;  
		cout << endl;
		cout << "attrNotNullList:";  
		for (iterInt=attrNotNullList.begin();iterInt!=attrNotNullList.end();iterInt++)  
        		cout << " " << *iterInt;  
		cout << endl;
		cout << "exprValueList:";  
		for (iter=exprValueList.begin();iter!=exprValueList.end();iter++)  
        		cout << " " << *iter;  
		cout << endl;
		cout << "exprOpList:";  
		for (iterCh=exprOpList.begin();iterCh!=exprOpList.end();iterCh++)  
        		cout << " " << *iterCh;  
		cout << endl;
		cout << "clauseNameList:";  
		for (iter=clauseNameList.begin();iter!=clauseNameList.end();iter++)  
        		cout << " " << *iter;  
		cout << endl;
		cout << "clauseOpList:";  
		for (iter=clauseOpList.begin();iter!=clauseOpList.end();iter++)  
        		cout << " " << *iter;  
		cout << endl;
		cout << "clauseRightList:";  
		for (iter=clauseRightList.begin();iter!=clauseRightList.end();iter++)  
        		cout << " " << *iter;  
		cout << endl;
		*/
	}	
	return 0;
}

