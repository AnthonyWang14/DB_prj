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
#include <string.h>
#include <errno.h>           //perror()
#include "SystemManagement/def.h"


#include "RecordManagement/bufmanager/BufPageManager.h"
#include "RecordManagement/fileio/FileManager.h"
#include "RecordManagement/rm/RecordManager.h"
#include "RecordManagement/utils/pagedef.h"
#include <map>
#include <algorithm>
int cnt;
int a;
string type;
char DB_ROOT[MAXBUFSIZE];
string dbName;
string tbName; 
string attrName; 
string attrName1; 
string attrName2; 
string tempName; 
string attrName3; 
string selectType; 
string setName;
string primaryKey;
string currentDb;// = "orderDB";
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


#line 126 "yacc.tab.c" /* yacc.c:339  */

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
    ATTRNAME2 = 262,
    ATTRNUM = 263,
    EXIT = 264,
    CREATE = 265,
    HAHA = 266,
    DROP = 267,
    USE = 268,
    SHOW = 269,
    DATABASE = 270,
    PRIMARY = 271,
    KEY = 272,
    INSERT = 273,
    INTO = 274,
    VALUES = 275,
    DELETE = 276,
    FROM = 277,
    WHERE = 278,
    AND = 279,
    UPDATE = 280,
    SET = 281,
    SELECT = 282,
    GROUP = 283,
    BY = 284,
    IS = 285,
    NUL = 286,
    DESC = 287,
    TABLE = 288,
    TABLES = 289,
    BLANK = 290,
    NOT = 291
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 209 "yacc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   844

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  369
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  775

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,     2,     2,     2,     2,     2,
      42,    43,    38,    45,    44,    46,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    37,    41,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   117,   121,   127,   134,   140,   148,   154,
     160,   166,   174,   180,   186,   192,   200,   205,   210,   215,
     222,   227,   232,   237,   244,   250,   256,   262,   270,   276,
     282,   288,   297,   303,   311,   318,   325,   332,   339,   346,
     353,   360,   368,   375,   382,   389,   396,   401,   406,   411,
     419,   427,   435,   443,   453,   461,   474,   485,   491,   497,
     503,   509,   515,   521,   527,   537,   543,   549,   555,   563,
     565,   572,   578,   584,   590,   596,   602,   608,   614,   620,
     626,   632,   638,   645,   651,   657,   663,   669,   675,   681,
     687,   693,   699,   705,   711,   718,   724,   730,   736,   742,
     748,   754,   760,   766,   772,   778,   784,   790,   796,   802,
     808,   814,   820,   826,   832,   838,   844,   850,   856,   862,
     868,   874,   880,   886,   892,   898,   904,   910,   916,   922,
     928,   935,   941,   947,   953,   959,   965,   971,   977,   983,
     989,   995,  1001,  1007,  1013,  1019,  1025,  1031,  1037,  1043,
    1049,  1056,  1062,  1068,  1074,  1080,  1086,  1092,  1098,  1104,
    1110,  1116,  1122,  1128,  1134,  1140,  1146,  1152,  1158,  1164,
    1170,  1176,  1182,  1188,  1194,  1200,  1206,  1212,  1218,  1224,
    1230,  1236,  1242,  1248,  1254,  1260,  1266,  1273,  1279,  1285,
    1291,  1297,  1303,  1309,  1315,  1322,  1328,  1334,  1340,  1346,
    1352,  1358,  1364,  1370,  1376,  1382,  1388,  1394,  1403,  1405,
    1411,  1417,  1423,  1429,  1435,  1440,  1445,  1450,  1455,  1461,
    1467,  1473,  1479,  1485,  1491,  1497,  1503,  1508,  1513,  1518,
    1527,  1529,  1533,  1537,  1541,  1545,  1549,  1553,  1557,  1561,
    1565,  1569,  1573,  1577,  1581,  1585,  1589,  1593,  1597,  1601,
    1605,  1609,  1613,  1617,  1621,  1625,  1629,  1633,  1637,  1641,
    1645,  1651,  1653,  1657,  1661,  1665,  1669,  1673,  1679,  1681,
    1685,  1689,  1693,  1697,  1701,  1707,  1709,  1713,  1717,  1721,
    1725,  1729,  1733,  1738,  1743,  1748,  1753,  1758,  1763,  1768,
    1773,  1778,  1783,  1788,  1793,  1798,  1803,  1808,  1814,  1819,
    1824,  1829,  1834,  1839,  1844,  1849,  1854,  1859,  1864,  1869,
    1874,  1879,  1884,  1889,  1897,  1899,  1902,  1905,  1910,  1912,
    1915,  1918,  1922,  1926,  1930,  1936,  1940,  1944,  1948,  1954,
    1956,  1963,  1970,  1977,  1984,  1991,  1998,  2005,  2012,  2019,
    2026,  2033,  2040,  2047,  2054,  2061,  2068,  2075,  2082,  2089,
    2096,  2103,  2110,  2117,  2124,  2131,  2138,  2145,  2152,  2159,
    2166,  2173,  2180,  2187,  2194,  2201,  2208,  2215,  2222,  2229
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING", "NAME", "ATTRNAME",
  "ATTRNAME2", "ATTRNUM", "EXIT", "CREATE", "HAHA", "DROP", "USE", "SHOW",
  "DATABASE", "PRIMARY", "KEY", "INSERT", "INTO", "VALUES", "DELETE",
  "FROM", "WHERE", "AND", "UPDATE", "SET", "SELECT", "GROUP", "BY", "IS",
  "NUL", "DESC", "TABLE", "TABLES", "BLANK", "NOT", "'='", "'*'", "'!'",
  "'<'", "'>'", "'('", "')'", "','", "'+'", "'-'", "'/'", "$accept",
  "file", "tokenlist", "whereclauses", "insertDetail0", "insertDetail",
  "namelist", "namelist1", "expr", "tableDetail", "tableDetail2",
  "tableDetail3", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    61,    42,    33,
      60,    62,    40,    41,    44,    43,    45,    47
};
# endif

#define YYPACT_NINF -267

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-267)))

#define YYTABLE_NINF -330

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     316,   -11,    -7,    47,    85,   120,   143,   211,   229,   260,
     364,   323,  -267,     1,   347,   304,   318,   362,   399,   404,
      78,   411,   550,   551,   554,   555,   558,   559,   562,   563,
     566,  -267,   567,   568,   569,   570,   571,     0,    83,   572,
     573,   574,   420,   575,   454,   576,   -24,   168,   355,   360,
     577,   332,   580,   578,   579,    74,   582,   583,   586,   590,
     591,   607,  -267,   604,  -267,   605,   610,   611,   592,   584,
     595,  -267,   598,   300,    93,  -267,   612,   587,   588,   589,
     593,   594,   179,   246,   596,   597,   599,   619,   600,    43,
     258,   261,   393,   262,   265,   267,  -267,  -267,   601,   602,
     603,   608,   606,   609,   613,   105,  -267,   621,  -267,   622,
     628,   634,   635,   637,  -267,   636,  -267,   638,   641,   644,
     617,   615,   629,   317,  -267,   643,  -267,   645,   393,    -2,
     268,  -267,   646,  -267,   647,  -267,   648,   633,   639,   653,
     624,   655,   656,   106,  -267,   658,  -267,   269,   393,   270,
     273,   274,  -267,  -267,   630,   631,   632,   642,   640,   649,
    -267,  -267,   650,   651,   663,   -17,   527,  -267,  -267,  -267,
    -267,  -267,     6,   652,   369,   664,   654,   275,  -267,   665,
     379,  -267,  -267,   662,   276,  -267,   667,  -267,   668,  -267,
     669,   659,   657,   676,   660,   677,   106,   678,   661,  -267,
    -267,   233,  -267,   666,    21,    86,    27,   683,   535,    92,
     278,   547,  -267,   394,  -267,   -13,   216,  -267,  -267,  -267,
    -267,  -267,    24,   670,   449,   685,   671,   438,   160,   686,
     672,   539,   673,   408,  -267,   674,    72,    86,    49,  -267,
    -267,  -267,   249,   401,  -267,   684,    46,   448,   280,    92,
    -267,  -267,  -267,   444,   373,  -267,   688,   675,  -267,   679,
     680,   221,  -267,   687,    21,    56,   683,   543,    92,   281,
     681,   319,   406,   690,   234,   689,   176,   682,   691,   692,
    -267,   693,    86,   423,  -267,   694,  -267,  -267,  -267,   695,
     696,   119,  -267,   697,   698,    11,    86,   416,   121,   699,
       2,    64,  -267,   370,   387,  -267,  -267,  -267,   308,   159,
     162,   184,   188,  -267,   700,   683,   683,  -267,   706,  -267,
      59,  -267,   703,   282,    92,   392,  -267,   704,   702,   705,
     707,   709,   538,   542,   708,   237,   710,   701,    80,   713,
     717,  -267,   425,   711,  -267,   126,  -267,   712,   714,   715,
     255,  -267,  -267,   716,   718,    86,   427,   719,   128,   720,
       3,    67,  -267,  -267,  -267,   471,   131,  -267,  -267,   426,
     193,   134,  -267,  -267,   488,   196,  -267,   721,   312,   723,
     201,   204,   205,   212,  -267,  -267,   524,  -267,  -267,   525,
    -267,  -267,   528,  -267,  -267,   529,   724,   283,   285,  -267,
    -267,   726,  -267,  -267,   374,   405,   322,  -267,   683,   683,
     725,   730,   727,   729,   731,   733,   546,   734,   722,   735,
     736,  -267,   732,   240,   194,   737,  -267,   738,   739,   740,
     257,  -267,  -267,  -267,   741,   742,   743,  -267,  -267,   437,
     744,   749,  -267,  -267,  -267,   474,   141,  -267,  -267,   532,
     215,   144,  -267,  -267,   533,   219,  -267,  -267,  -267,  -267,
    -267,  -267,   494,  -267,  -267,  -267,  -267,   536,  -267,  -267,
    -267,   497,  -267,  -267,  -267,  -267,   537,   750,   746,   683,
    -267,  -267,   540,  -267,  -267,   541,  -267,  -267,   544,  -267,
    -267,   545,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
     757,  -267,   375,  -267,   377,  -267,  -267,   326,   747,   289,
     290,   752,   751,   753,   754,   755,   756,   748,   758,   759,
     761,   228,   772,  -267,   762,   783,  -267,   760,  -267,  -267,
    -267,  -267,   763,   764,   765,  -267,  -267,  -267,   766,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,   500,  -267,  -267,
    -267,  -267,   548,  -267,  -267,  -267,   503,  -267,  -267,  -267,
    -267,   549,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,   455,   683,   292,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,   785,  -267,  -267,   767,   683,  -267,   378,
    -267,   381,   768,  -267,   773,   770,   775,   774,   776,   777,
     778,   771,  -267,   786,   231,   779,   781,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,   424,   148,   728,    10,    70,   297,  -267,   383,
    -267,   683,   303,  -267,  -267,  -267,   782,  -267,   784,  -267,
     787,   788,   789,   790,  -267,  -267,   804,   791,   792,   794,
     155,   793,    20,    71,  -267,  -267,  -267,   506,   167,  -267,
    -267,   552,   222,   170,  -267,  -267,   553,   227,  -267,   386,
    -267,   305,  -267,   388,  -267,  -267,   796,  -267,   797,   802,
    -267,   803,   800,   805,  -267,  -267,  -267,   509,   177,  -267,
    -267,   556,   230,   181,  -267,  -267,   557,   238,  -267,  -267,
    -267,  -267,  -267,  -267,   512,  -267,  -267,  -267,  -267,   560,
    -267,  -267,  -267,   515,  -267,  -267,  -267,  -267,   561,  -267,
    -267,   391,  -267,  -267,  -267,   806,   807,   808,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,   518,  -267,  -267,  -267,  -267,
     564,  -267,  -267,  -267,   521,  -267,  -267,  -267,  -267,   565,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,   809,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -267
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
     261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   261,     0,     0,     0,     0,
       0,     0,    18,     0,    22,     0,     0,     0,     0,     0,
       0,   263,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   262,     0,     0,
       0,     0,   314,     0,     0,     0,    19,    23,     0,     0,
       0,     0,     0,     0,     0,     0,   267,     0,    29,     0,
       0,     0,     0,     0,    16,     0,    20,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     6,     0,   314,   318,
       0,    10,     0,    26,     0,    14,     0,     0,     0,     0,
       0,     0,     0,   268,   265,     0,   264,     0,   314,     0,
       0,     0,    17,    21,     0,     0,     0,     0,     0,     0,
      31,     7,   316,     0,     0,     0,   320,    33,   315,    11,
      27,    15,   208,     0,     0,     0,     0,     0,   269,     0,
       0,   266,     4,     0,     0,     8,     0,    24,     0,    12,
       0,     0,     0,     0,     0,     0,   268,     0,     0,   319,
     317,     0,   209,   210,   208,   230,     0,    69,     0,   275,
       0,     0,    50,     0,   270,     0,     0,     5,    32,     9,
      25,    13,   208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   212,   210,     0,   230,     0,   231,
     233,   232,     0,     0,    58,     0,     0,     0,     0,   275,
     277,   276,   278,     0,     0,    52,     0,     0,    51,     0,
       0,     0,   274,     0,   208,     0,    69,     0,   275,     0,
       0,     0,   330,     0,     0,     0,     0,     0,     0,     0,
     212,   211,   230,     0,    57,     0,   234,   236,   235,     0,
     214,     0,    62,   222,   218,     0,   230,     0,     0,     0,
       0,     0,    65,     0,     0,   280,   279,   281,     0,     0,
       0,     0,     0,    54,     0,    69,    69,   272,     0,   271,
       0,    60,     0,     0,   275,     0,    53,     0,     0,     0,
     342,     0,   331,   336,     0,     0,     0,     0,     0,     0,
       0,   213,     0,   214,    61,     0,   215,   239,   237,   238,
       0,   224,   220,   223,   219,   230,     0,     0,     0,     0,
       0,     0,    75,    71,    79,     0,     0,   115,   119,     0,
       0,     0,   107,   111,     0,     0,    67,     0,     0,     0,
       0,     0,     0,     0,   284,   300,     0,   282,   298,     0,
     283,   299,     0,   285,   301,     0,     0,     0,     0,   273,
      59,     0,    64,    66,     0,     0,     0,    55,    69,    69,
       0,     0,   343,     0,   348,     0,   337,   362,     0,     0,
       0,   321,     0,     0,     0,   216,   215,   251,   249,   250,
       0,   246,   240,   243,   247,   241,   244,   225,   221,     0,
     226,     0,    76,    72,    80,     0,     0,   116,   120,     0,
       0,     0,   108,   112,     0,     0,    77,    73,    81,    87,
      83,    91,     0,   117,   121,   131,   135,     0,    99,    95,
     103,     0,   109,   113,   123,   127,     0,     0,     0,    69,
     292,   308,     0,   290,   306,     0,   291,   307,     0,   293,
     309,     0,   288,   304,   286,   302,   287,   303,   289,   305,
       0,    42,     0,    46,     0,    63,    68,     0,     0,     0,
       0,     0,   332,     0,     0,     0,     0,   349,     0,   354,
     363,     0,     0,   322,   364,     0,   323,     0,   217,   258,
     252,   255,   259,   253,   256,   248,   242,   245,   228,   227,
      70,    78,    74,    82,    88,    84,    92,     0,   118,   122,
     132,   136,     0,   100,    96,   104,     0,   110,   114,   124,
     128,     0,    89,    85,    93,   133,   137,   101,    97,   105,
     125,   129,     0,    69,     0,   296,   312,   294,   310,   295,
     311,   297,   313,     0,    44,    48,     0,    69,    43,     0,
      47,     0,   333,   344,     0,   334,     0,   338,     0,     0,
       0,   355,   325,     0,     0,   356,   365,   324,   260,   254,
     257,   229,    90,    86,    94,   134,   138,   102,    98,   106,
     126,   130,     0,     0,     0,     0,     0,     0,    34,     0,
      56,    69,     0,    45,    49,   345,   335,   346,   339,   350,
       0,   340,     0,     0,   326,   327,     0,     0,   357,     0,
       0,     0,     0,     0,   143,   139,   147,     0,     0,   171,
     175,     0,     0,     0,   163,   167,     0,     0,    38,     0,
      36,     0,    35,     0,   347,   351,   341,   352,   366,     0,
     328,     0,     0,     0,   144,   141,   148,     0,     0,   174,
     176,     0,     0,     0,   164,   168,     0,     0,   145,   140,
     149,   155,   151,   159,     0,   172,   177,   187,   191,     0,
     199,   195,   203,     0,   165,   169,   179,   183,     0,    40,
      39,     0,    37,   353,   358,   367,   368,     0,   207,   146,
     142,   150,   156,   153,   160,     0,   173,   178,   188,   192,
       0,   200,   197,   204,     0,   166,   170,   180,   184,     0,
     157,   152,   161,   189,   193,   201,   196,   205,   181,   185,
      41,   359,   360,   369,   158,   154,   162,   190,   194,   202,
     198,   206,   182,   186,   361
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -267,  -267,  -267,  -266,  -200,  -236,   618,   380,  -247,   208,
    -267,  -267
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,   248,   206,   243,    46,   180,   254,   130,
     165,   166
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     323,   283,   304,   163,   238,   367,   447,   368,   448,    62,
     260,    73,   202,   659,   203,   660,    32,   353,   199,   354,
      74,   325,   265,   689,    13,   690,   200,   202,    14,   235,
     202,   261,   203,   164,    33,    63,   244,   369,   449,   370,
     450,   204,  -329,   371,   451,   661,   342,   662,   205,   397,
     398,   663,   293,   355,   294,   691,   236,   692,   284,   264,
     356,   693,   245,   237,   320,   321,   205,   372,   400,   373,
     452,   246,   453,   664,   694,   665,   695,   405,   123,    87,
     281,   295,    15,    42,   285,    43,   421,    74,   296,   239,
     240,   322,    64,   246,   401,   250,   251,   252,   106,   374,
     246,   375,   454,   246,   455,   666,   696,   667,   697,    44,
     144,   178,    88,    44,   282,   422,    45,   241,    65,   439,
      16,   242,   347,   348,   362,   363,   364,   253,   107,   427,
     428,   442,   443,   444,   459,   460,   461,   468,   469,   470,
     145,   179,   509,   510,   544,   545,   546,   553,   554,   555,
     349,   654,   655,   656,   350,    17,   365,   429,   684,   685,
     686,   430,   384,   445,   385,   387,   462,   388,   272,   471,
     701,   702,   703,   710,   711,   712,   547,    75,    18,   556,
     732,   733,   734,   657,   741,   742,   743,   390,   114,   391,
     687,   393,   336,   394,   386,   273,   465,   389,   466,   474,
     526,   475,   704,    76,   480,   713,   481,   483,   486,   484,
     487,   337,   735,   574,   115,   489,   744,   490,   550,   392,
     551,   262,   559,   395,   560,   707,   317,   708,   467,   527,
     716,   476,   717,   738,   602,   739,   482,   645,   230,   485,
     488,   747,   333,   748,   231,   417,    19,   491,   524,   232,
     552,   263,   286,   287,   561,   116,   318,   709,   434,   435,
     532,   533,   718,   603,    20,   740,   646,   124,   233,   334,
     126,   131,   418,   749,   133,   525,   135,   167,   182,   185,
     288,   117,   187,   189,   212,   218,   436,   255,   534,   302,
     326,   403,   501,   125,   503,    21,   127,   132,   588,   590,
     134,   628,   136,   168,   183,   186,   668,   627,   188,   190,
     213,   168,   672,   256,   720,   303,   327,   404,   502,    36,
     504,   632,   104,    31,   589,   591,     1,   629,     2,     3,
       4,   379,   669,    37,     5,   478,   162,     6,   673,   159,
     721,     7,   329,     8,   105,   508,   380,    82,     9,   586,
     380,    10,    38,   381,   382,   383,   184,   381,   382,   383,
     380,   105,    34,   261,   380,   671,    83,   381,   382,   383,
      77,   381,   382,   383,    22,    79,    23,    24,    25,   376,
      35,    39,    26,   506,   584,    27,   585,   633,    78,    28,
     634,    29,   670,    80,   377,   719,    30,   722,   377,   377,
     760,   377,   377,   258,   208,   377,   209,   377,   308,    41,
     377,   309,   377,   278,   215,   377,    47,   259,   310,   311,
     312,    40,   378,   216,   279,   309,    69,   406,   128,   463,
     309,   464,   310,   311,   312,   129,   289,   310,   311,   312,
     507,   330,   331,   309,   290,   291,   357,   305,   306,   307,
     310,   311,   312,   358,   649,   359,   360,   361,   289,    71,
     289,   650,   289,   651,   652,   653,   343,   291,   425,   291,
     440,   291,   289,   271,   456,   457,   458,   541,   542,   543,
     538,   291,   216,   297,   267,   298,   268,   299,   300,   301,
     622,   472,   623,   473,   624,   625,   626,   562,   563,   564,
     567,   568,   569,   612,   613,   614,   617,   618,   619,   698,
     699,   700,   729,   730,   731,   750,   751,   752,   755,   756,
     757,   764,   765,   766,   769,   770,   771,   492,   494,   493,
     495,   496,   498,   497,   499,   548,   557,   549,   558,   565,
     570,   566,   571,   575,   577,   576,   578,   579,   581,   580,
     582,   615,   620,   616,   621,   705,   714,   706,   715,   736,
     745,   737,   746,   753,   758,   754,   759,   767,   772,   768,
     773,   201,   249,   412,   413,   257,   227,   414,   415,     0,
     324,   517,   518,   276,    86,    48,    49,    90,    91,    50,
      51,    92,    81,    52,    53,    93,    94,    54,    55,    84,
      85,    56,    57,    58,    59,    60,    61,    66,    67,    68,
      70,    72,    95,    96,    97,    98,    99,   102,   100,   101,
     103,   108,   109,   110,   111,   121,   146,   147,   112,   113,
     140,   118,   119,   148,   120,   122,   137,   138,   139,   149,
     150,   141,   151,   156,   142,   152,   154,   153,   143,   155,
     157,   158,   160,   172,   161,   169,   170,   171,   174,   175,
     176,   177,   173,   181,   194,   191,   192,   193,   198,   210,
     214,   217,     0,    89,     0,   195,   219,   220,   221,   222,
     223,   224,   226,   228,   196,   168,   197,   207,   247,   211,
     269,   274,   319,   292,   335,   225,   229,   313,   332,   338,
       0,   234,     0,   344,   328,   266,   270,   275,   277,   280,
     314,   399,   402,   407,   315,   316,   416,   420,   423,     0,
       0,     0,     0,     0,     0,     0,   339,   340,   341,   396,
     520,   346,   351,   352,   424,   505,   366,   408,   523,   345,
     409,     0,     0,   410,   411,   419,   426,   431,     0,   432,
     433,   437,   521,   438,   441,   572,   477,   446,   479,   500,
     511,   512,   583,   513,   514,   658,   607,   515,   516,   519,
       0,   522,   528,   529,   530,   531,   535,   536,   537,   539,
     540,   573,   587,   592,   598,   595,   593,   597,   594,   604,
     596,   606,   644,   599,   630,   600,   601,   605,   608,   609,
     610,   611,   631,   635,   636,   637,   638,   643,   641,   639,
     680,   640,     0,   642,     0,   647,   648,   674,   676,   675,
     678,     0,     0,   677,     0,   679,   681,     0,   682,   683,
     688,   723,   724,   725,   726,   727,   728,     0,     0,   763,
       0,   761,   762,     0,   774
};

static const yytype_int16 yycheck[] =
{
     266,   237,   249,     5,   204,     3,     3,     5,     5,     9,
      23,    35,     6,     3,     8,     5,    15,     6,    35,     8,
      44,   268,   222,     3,    35,     5,    43,     6,    35,     8,
       6,    44,     8,    35,    33,    35,     9,    35,    35,    37,
      37,    35,    44,    41,    41,    35,   282,    37,    42,   315,
     316,    41,     6,    42,     8,    35,    35,    37,     9,    35,
     296,    41,    35,    42,   264,     9,    42,     3,     9,     5,
       3,    44,     5,     3,     3,     5,     5,   324,    35,     5,
       8,    35,    35,     5,    35,     7,     6,    44,    42,     3,
       4,    35,     9,    44,    35,     3,     4,     5,     5,    35,
      44,    37,    35,    44,    37,    35,    35,    37,    37,    35,
       5,     5,    38,    35,    42,    35,    38,    31,    35,   355,
      35,    35,     3,     4,     3,     4,     5,    35,    35,     3,
       4,     3,     4,     5,     3,     4,     5,     3,     4,     5,
      35,    35,   408,   409,     3,     4,     5,     3,     4,     5,
      31,     3,     4,     5,    35,    35,    35,    31,     3,     4,
       5,    35,     3,    35,     5,     3,    35,     5,     8,    35,
       3,     4,     5,     3,     4,     5,    35,     9,    35,    35,
       3,     4,     5,    35,     3,     4,     5,     3,     9,     5,
      35,     3,    16,     5,    35,    35,     3,    35,     5,     3,
       6,     5,    35,    35,     3,    35,     5,     3,     3,     5,
       5,    35,    35,   479,    35,     3,    35,     5,     3,    35,
       5,     5,     3,    35,     5,     3,     5,     5,    35,    35,
       3,    35,     5,     3,     6,     5,    35,     6,     5,    35,
      35,     3,     8,     5,    11,     8,    35,    35,     8,    16,
      35,    35,     3,     4,    35,     9,    35,    35,     3,     4,
       3,     4,    35,    35,    35,    35,    35,     9,    35,    35,
       9,     9,    35,    35,     9,    35,     9,     9,     9,     9,
      31,    35,     9,     9,     9,     9,    31,     9,    31,     9,
       9,     9,     9,    35,     9,    35,    35,    35,     9,     9,
      35,     9,    35,    35,    35,    35,     9,   573,    35,    35,
      35,    35,     9,    35,     9,    35,    35,    35,    35,    15,
      35,   587,    22,     0,    35,    35,    10,    35,    12,    13,
      14,    23,    35,    15,    18,    23,   128,    21,    35,    22,
      35,    25,    23,    27,    44,    23,    38,    15,    32,    23,
      38,    35,    34,    45,    46,    47,   148,    45,    46,    47,
      38,    44,    15,    44,    38,   631,    34,    45,    46,    47,
      15,    45,    46,    47,    10,    15,    12,    13,    14,     9,
      33,    19,    18,     9,     9,    21,     9,     9,    33,    25,
       9,    27,     9,    33,    24,     9,    32,     9,    24,    24,
       9,    24,    24,     9,    35,    24,    37,    24,    35,     5,
      24,    38,    24,     5,    35,    24,     5,    23,    45,    46,
      47,    22,    35,    44,    16,    38,     6,    35,    35,     3,
      38,     5,    45,    46,    47,    42,    35,    45,    46,    47,
      35,    35,    36,    38,    43,    44,    30,     3,     4,     5,
      45,    46,    47,    37,    30,    39,    40,    41,    35,     5,
      35,    37,    35,    39,    40,    41,    43,    44,    43,    44,
      43,    44,    35,    35,     3,     4,     5,     3,     4,     5,
      43,    44,    44,    35,    35,    37,    37,    39,    40,    41,
      35,     3,    37,     5,    39,    40,    41,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     3,     4,     5,     3,
       4,     5,     3,     4,     5,     3,     4,     5,     3,     4,
       5,     3,     4,     5,     3,     4,     5,     3,     3,     5,
       5,     3,     3,     5,     5,     3,     3,     5,     5,     3,
       3,     5,     5,     3,     3,     5,     5,     3,     3,     5,
       5,     3,     3,     5,     5,     3,     3,     5,     5,     3,
       3,     5,     5,     3,     3,     5,     5,     3,     3,     5,
       5,    44,    37,    35,    36,    28,   196,    35,    36,    -1,
      37,    35,    36,    44,     5,    35,    35,     5,     5,    35,
      35,     5,    15,    35,    35,     5,     5,    35,    35,    19,
      22,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      35,    35,     5,     9,     9,     5,     5,    22,    26,    35,
      22,     9,    35,    35,    35,     6,     5,     5,    35,    35,
      22,    35,    35,     5,    35,    35,    35,    35,    35,     5,
       5,    35,     5,    26,    35,     9,     5,     9,    35,     5,
      35,    22,     9,    20,     9,     9,     9,     9,     5,    35,
       5,     5,    23,     5,    22,    35,    35,    35,     5,     5,
       5,     9,    -1,    55,    -1,    35,     9,     9,     9,    20,
      23,     5,     5,     5,    35,    35,    35,    35,     5,    35,
       5,     5,     5,     9,     5,    35,    35,     9,     8,    17,
      -1,    35,    -1,     9,    23,    35,    35,    35,    35,    35,
      35,     5,     9,     9,    35,    35,     8,    16,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    35,    35,    29,
       8,    35,    35,    35,    17,     9,    37,    35,     6,    44,
      35,    -1,    -1,    36,    35,    35,    35,    35,    -1,    35,
      35,    35,    17,    35,    35,     5,    35,    37,    35,    35,
      35,    31,     5,    36,    35,    37,     6,    36,    35,    35,
      -1,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      31,    35,    35,    31,    36,    31,    35,    31,    35,    17,
      35,     8,     6,    35,     9,    36,    35,    35,    35,    35,
      35,    35,    35,    35,    31,    35,    31,    36,    31,    35,
       6,    35,    -1,    35,    -1,    36,    35,    35,    31,    35,
      31,    -1,    -1,    35,    -1,    35,    35,    -1,    36,    35,
      37,    35,    35,    31,    31,    35,    31,    -1,    -1,    31,
      -1,    35,    35,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    13,    14,    18,    21,    25,    27,    32,
      35,    49,    50,    35,    35,    35,    35,    35,    35,    35,
      35,    35,    10,    12,    13,    14,    18,    21,    25,    27,
      32,     0,    15,    33,    15,    33,    15,    15,    34,    19,
      22,     5,     5,     7,    35,    38,    54,     5,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      35,    35,     9,    35,     9,    35,    35,    35,    35,     6,
      35,     5,    35,    35,    44,     9,    35,    15,    33,    15,
      33,    15,    15,    34,    19,    22,     5,     5,    38,    54,
       5,     5,     5,     5,     5,     5,     9,     9,     5,     5,
      26,    35,    22,    22,    22,    44,     5,    35,     9,    35,
      35,    35,    35,    35,     9,    35,     9,    35,    35,    35,
      35,     6,    35,    35,     9,    35,     9,    35,    35,    42,
      57,     9,    35,     9,    35,     9,    35,    35,    35,    35,
      22,    35,    35,    35,     5,    35,     5,     5,     5,     5,
       5,     5,     9,     9,     5,     5,    26,    35,    22,    22,
       9,     9,    57,     5,    35,    58,    59,     9,    35,     9,
       9,     9,    20,    23,     5,    35,     5,     5,     5,    35,
      55,     5,     9,    35,    57,     9,    35,     9,    35,     9,
      35,    35,    35,    35,    22,    35,    35,    35,     5,    35,
      43,    44,     6,     8,    35,    42,    52,    35,    35,    37,
       5,    35,     9,    35,     5,    35,    44,     9,     9,     9,
       9,     9,    20,    23,     5,    35,     5,    55,     5,    35,
       5,    11,    16,    35,    35,     8,    35,    42,    52,     3,
       4,    31,    35,    53,     9,    35,    44,     5,    51,    37,
       3,     4,     5,    35,    56,     9,    35,    28,     9,    23,
      23,    44,     5,    35,    35,    52,    35,    35,    37,     5,
      35,    35,     8,    35,     5,    35,    44,    35,     5,    16,
      35,     8,    42,    53,     9,    35,     3,     4,    31,    35,
      43,    44,     9,     6,     8,    35,    42,    35,    37,    39,
      40,    41,     9,    35,    56,     3,     4,     5,    35,    38,
      45,    46,    47,     9,    35,    35,    35,     5,    35,     5,
      52,     9,    35,    51,    37,    56,     9,    35,    23,    23,
      35,    36,     8,     8,    35,     5,    16,    35,    17,    35,
      35,    35,    53,    43,     9,    44,    35,     3,     4,    31,
      35,    35,    35,     6,     8,    42,    53,    30,    37,    39,
      40,    41,     3,     4,     5,    35,    37,     3,     5,    35,
      37,    41,     3,     5,    35,    37,     9,    24,    35,    23,
      38,    45,    46,    47,     3,     5,    35,     3,     5,    35,
       3,     5,    35,     3,     5,    35,    29,    51,    51,     5,
       9,    35,     9,     9,    35,    56,    35,     9,    35,    35,
      36,    35,    35,    36,    35,    36,     8,     8,    35,    35,
      16,     6,    35,     5,    17,    43,    35,     3,     4,    31,
      35,    35,    35,    35,     3,     4,    31,    35,    35,    53,
      43,    35,     3,     4,     5,    35,    37,     3,     5,    35,
      37,    41,     3,     5,    35,    37,     3,     4,     5,     3,
       4,     5,    35,     3,     5,     3,     5,    35,     3,     4,
       5,    35,     3,     5,     3,     5,    35,    35,    23,    35,
       3,     5,    35,     3,     5,    35,     3,     5,    35,     3,
       5,    35,     3,     5,     3,     5,     3,     5,     3,     5,
      35,     9,    35,     9,    35,     9,     9,    35,    23,    51,
      51,    35,    31,    36,    35,    36,    35,    35,    36,    35,
       8,    17,    35,     6,     8,    35,     6,    35,    35,    35,
      35,    35,     3,     4,    31,    35,    35,    35,    43,    35,
      31,     3,     4,     5,     3,     4,     5,    35,     3,     5,
       3,     5,    35,     3,     4,     5,    35,     3,     5,     3,
       5,    35,     3,     4,     5,     3,     5,     3,     4,     5,
       3,     5,     5,    35,    51,     3,     5,     3,     5,     3,
       5,     3,     5,     5,     9,     9,    23,    35,     9,    35,
       9,    35,    31,    35,    35,    31,    35,    31,    36,    35,
      36,    35,     6,    35,    17,    35,     8,     6,    35,    35,
      35,    35,     3,     4,     5,     3,     5,     3,     4,     5,
       3,     5,    35,    37,    39,    40,    41,    51,     9,    35,
       9,    35,    51,     9,     9,    35,    31,    35,    31,    35,
      35,    31,    35,    36,     6,     6,    35,    36,    35,    30,
      37,    39,    40,    41,     3,     4,     5,    35,    37,     3,
       5,    35,    37,    41,     3,     5,    35,    37,     9,    35,
       9,    51,     9,    35,    35,    35,    31,    35,    31,    35,
       6,    35,    36,    35,     3,     4,     5,    35,    37,     3,
       5,    35,    37,    41,     3,     5,    35,    37,     3,     4,
       5,     3,     4,     5,    35,     3,     5,     3,     5,    35,
       3,     4,     5,    35,     3,     5,     3,     5,    35,     9,
       9,    35,     9,    35,    35,    31,    31,    35,    31,     3,
       4,     5,     3,     4,     5,    35,     3,     5,     3,     5,
      35,     3,     4,     5,    35,     3,     5,     3,     5,    35,
       3,     4,     5,     3,     5,     3,     4,     5,     3,     5,
       9,    35,    35,    31,     3,     4,     5,     3,     5,     3,
       4,     5,     3,     5,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    51,
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
      51,    51,    51,    51,    51,    51,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     7,     8,     6,     7,     7,     8,
       6,     7,     7,     8,     6,     7,     5,     6,     4,     5,
       5,     6,     4,     5,     7,     8,     6,     7,     4,     5,
       5,     6,     8,     7,    14,    15,    15,    16,    15,    16,
      16,    17,    12,    13,    13,    14,    12,    13,    13,    14,
       8,     9,     9,    10,    10,    11,    14,    10,     9,    11,
      10,    11,    10,    12,    11,    10,    11,    11,    12,     0,
       5,     3,     4,     4,     5,     3,     4,     4,     5,     3,
       4,     4,     5,     4,     5,     5,     6,     4,     5,     5,
       6,     4,     5,     5,     6,     4,     5,     5,     6,     4,
       5,     5,     6,     4,     5,     5,     6,     3,     4,     4,
       5,     3,     4,     4,     5,     3,     4,     4,     5,     3,
       4,     4,     5,     4,     5,     5,     6,     4,     5,     5,
       6,     4,     5,     5,     6,     4,     5,     5,     6,     7,
       8,     8,     9,     7,     8,     8,     9,     7,     8,     8,
       9,     8,     9,     9,    10,     8,     9,     9,    10,     8,
       9,     9,    10,     7,     8,     8,     9,     7,     8,     8,
       9,     7,     8,     9,     8,     7,     8,     8,     9,     8,
       9,     9,    10,     8,     9,     9,    10,     8,     9,     9,
      10,     8,     9,     9,    10,     8,     9,     9,    10,     8,
       9,     9,    10,     8,     9,     9,    10,     9,     0,     1,
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
       5,     5,     5,     5,     0,     2,     2,     3,     0,     2,
       1,     6,     7,     7,     8,     8,     9,     9,    10,     0,
       4,     5,     7,     8,     8,     9,     5,     6,     8,     9,
       9,    10,     5,     6,     8,     9,     9,    10,     6,     7,
       9,    10,    10,    11,     7,     8,     8,     9,    11,    12,
      12,    13,     6,     7,     7,     8,    10,    11,    11,    12
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
#line 114 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 1799 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 117 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 1806 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 122 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";		
		YYACCEPT;
	}
#line 1816 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 128 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		cout << "CREATE database" << endl;
		type = "create database";
		YYACCEPT;
	}
#line 1827 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 135 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1837 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 141 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1847 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 149 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1857 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 155 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1867 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 161 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1877 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 167 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1887 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 175 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1897 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 181 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1907 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 187 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1917 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 193 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1927 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 201 "yacc.y" /* yacc.c:1646  */
    {
		type = "show database";
		YYACCEPT;
	}
#line 1936 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 206 "yacc.y" /* yacc.c:1646  */
    {
		type = "show database";
		YYACCEPT;
	}
#line 1945 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 211 "yacc.y" /* yacc.c:1646  */
    {
		type = "show database";
		YYACCEPT;
	}
#line 1954 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 216 "yacc.y" /* yacc.c:1646  */
    {
		type = "show database";
		YYACCEPT;
	}
#line 1963 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 223 "yacc.y" /* yacc.c:1646  */
    {
		type = "show table";
		YYACCEPT;
	}
#line 1972 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 228 "yacc.y" /* yacc.c:1646  */
    {
		type = "show table";
		YYACCEPT;
	}
#line 1981 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 233 "yacc.y" /* yacc.c:1646  */
    {
		type = "show table";
		YYACCEPT;
	}
#line 1990 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 238 "yacc.y" /* yacc.c:1646  */
    {
		type = "show table";
		YYACCEPT;
	}
#line 1999 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 245 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2009 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 251 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2019 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 257 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2029 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 263 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2039 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 271 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "desc";
		YYACCEPT;
	}
#line 2049 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 277 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "desc";
		YYACCEPT;
	}
#line 2059 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 283 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "desc";
		YYACCEPT;
	}
#line 2069 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 289 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "desc";
		YYACCEPT;
	}
#line 2079 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 298 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 2089 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 304 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 2099 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 312 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2110 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 319 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2121 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 326 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2132 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 333 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2143 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 340 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2154 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 347 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2165 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 354 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2176 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 361 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2187 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 369 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-5].m_sId));
		type = "select from";
		YYACCEPT;
	}
#line 2198 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 376 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-5].m_sId));
		type = "select from";
		YYACCEPT;
	}
#line 2209 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 383 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-6].m_sId));
		type = "select from";
		YYACCEPT;
	}
#line 2220 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 390 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-6].m_sId));
		type = "select from";
		YYACCEPT;
	}
#line 2231 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 397 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2240 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 402 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2249 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 407 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2258 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 412 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2267 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 420 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-1].m_sId));
		type = "select from";
		YYACCEPT;
		
	}
#line 2279 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 428 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-2].m_sId));
		type = "select from";
		YYACCEPT;
		
	}
#line 2291 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 436 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-6].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2303 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 444 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-6].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2315 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 454 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2327 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 462 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2339 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 475 "yacc.y" /* yacc.c:1646  */
    {
		tempName =(yyvsp[-11].m_sId);
		type = "select group";
		tbName = (yyvsp[-7].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2351 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 486 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2361 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 492 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2371 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 498 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2381 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 504 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2391 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 510 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2401 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 516 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2411 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 522 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2421 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 528 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2431 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 538 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);	
		type = "delete from";
		YYACCEPT;
	}
#line 2441 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 544 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2451 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 550 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2461 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 556 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2471 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 563 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2478 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 566 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("is");
		clauseRightList.push_back("''");
	}
#line 2489 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 573 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2499 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 579 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2509 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 585 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2519 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 591 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2529 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 597 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2539 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 603 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2549 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 609 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2559 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 615 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2569 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 621 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2579 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 627 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2589 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 633 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2599 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 639 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2609 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 646 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2619 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 652 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2629 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 658 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2639 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 664 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2649 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 670 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2659 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 676 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2669 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 682 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2679 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 688 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2689 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 694 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2699 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 700 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2709 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 706 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2719 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 712 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2729 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 719 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2739 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 725 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2749 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 731 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2759 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 737 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2769 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 743 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2779 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 749 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2789 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 755 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2799 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 761 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2809 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 767 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2819 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 773 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2829 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 779 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2839 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 785 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2849 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 791 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2859 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 797 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2869 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 803 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2879 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 809 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2889 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 815 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2899 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 821 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2909 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 827 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2919 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 833 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2929 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 839 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2939 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 845 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2949 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 851 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2959 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 857 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2969 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 863 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2979 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 869 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2989 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 875 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2999 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 881 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3009 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 887 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3019 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 893 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3029 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 899 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3039 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 905 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3049 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 911 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3059 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 917 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3069 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 923 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3079 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 929 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3089 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 936 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3099 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 942 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3109 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 948 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3119 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 954 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3129 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 960 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3139 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 966 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3149 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 972 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3159 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 978 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3169 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 984 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3179 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 990 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3189 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 996 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3199 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3209 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1008 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3219 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1014 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3229 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1020 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3239 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1026 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3249 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1032 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3259 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1038 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3269 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1044 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3279 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3289 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1057 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3299 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3309 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3319 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3329 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3339 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3349 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1093 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3359 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1099 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3369 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3379 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1111 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3389 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1117 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3399 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1123 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3409 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3419 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3429 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3439 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1147 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3449 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3459 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1159 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3469 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3479 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3489 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3499 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3509 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3519 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3529 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3539 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3549 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3559 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3569 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3579 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1231 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3589 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1237 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3599 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3609 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3619 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3629 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1261 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3639 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1267 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3649 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1274 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3659 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1280 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3669 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1286 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3679 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1292 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3689 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1298 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3699 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1304 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3709 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1310 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3719 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1316 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3729 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1323 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3739 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1329 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3749 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1335 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3759 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1341 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3769 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1347 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3779 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1353 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3789 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1359 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3799 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1365 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3809 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1371 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3819 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1377 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3829 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1383 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3839 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1389 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3849 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1395 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("is");
		clauseRightList.push_back("''");
	}
#line 3859 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1403 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3866 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1406 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3876 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1412 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3886 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1418 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3896 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1424 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3906 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1430 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3916 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1436 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3925 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1441 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3934 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1446 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3943 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1451 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3952 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1456 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3962 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1462 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3972 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1468 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3982 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1474 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3992 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1480 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4002 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1486 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4012 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1492 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4022 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1498 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4032 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1504 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4041 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1509 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4050 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1514 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4059 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1519 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4068 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1527 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4075 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1530 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4083 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1534 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4091 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1538 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4099 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1542 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4107 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1546 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4115 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1550 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4123 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1554 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4131 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1558 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4139 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1562 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4147 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1566 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4155 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1570 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4163 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1574 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4171 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1578 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4179 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1582 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4187 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1586 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4195 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1590 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4203 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1594 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4211 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1598 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4219 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1602 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4227 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1606 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4235 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1610 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4243 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1614 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4251 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1618 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4259 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1622 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4267 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1626 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4275 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1630 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4283 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1634 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 4291 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1638 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4299 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1642 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4307 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1646 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4315 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1651 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4322 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1654 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 4330 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1658 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 4338 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1662 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 4346 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1666 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 4354 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1670 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 4362 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1674 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 4370 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1679 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4377 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1682 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 4385 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1686 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 4393 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1690 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 4401 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1694 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 4409 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1698 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 4417 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1702 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 4425 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1707 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4432 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1710 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4440 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1714 "yacc.y" /* yacc.c:1646  */
    {	
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4448 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1718 "yacc.y" /* yacc.c:1646  */
    {	
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4456 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1722 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4464 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1726 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4472 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1730 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4480 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1734 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4489 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1739 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4498 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1744 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4507 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1749 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4516 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1754 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4525 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1759 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4534 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1764 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4543 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1769 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4552 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1774 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4561 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1779 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4570 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1784 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4579 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1789 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4588 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1794 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4597 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1799 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4606 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1804 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4615 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1809 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4624 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1815 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4633 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1820 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4642 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1825 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4651 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1830 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4660 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1835 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4669 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1840 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4678 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1845 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4687 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1850 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4696 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1855 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4705 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1860 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4714 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1865 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4723 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1870 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4732 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1875 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4741 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1880 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4750 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1885 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4759 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1890 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 4768 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1897 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4775 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1900 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4782 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1903 "yacc.y" /* yacc.c:1646  */
    {	
	}
#line 4789 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1906 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4796 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1910 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4803 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1913 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4810 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1916 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4817 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1919 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4825 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1923 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4833 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1927 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4841 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1931 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4849 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1937 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4857 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1941 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4865 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1945 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4873 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1949 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4881 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1954 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4888 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1957 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4899 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1964 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4910 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1971 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4921 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1978 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4932 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1985 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4943 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1992 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4954 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1999 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4965 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2006 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4976 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2013 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4987 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2020 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4998 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2027 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5009 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2034 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5020 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2041 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5031 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2048 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5042 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2055 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5053 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2062 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5064 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2069 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5075 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2076 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5086 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2083 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5097 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2090 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5108 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2097 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5119 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2104 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5130 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2111 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5141 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2118 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5152 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2125 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5163 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 2132 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5174 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2139 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5185 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2146 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5196 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2153 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5207 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2160 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5218 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2167 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5229 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2174 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5240 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2181 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5251 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2188 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5262 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2195 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5273 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2202 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5284 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2209 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5295 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2216 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5306 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2223 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5317 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2230 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5328 "yacc.tab.c" /* yacc.c:1646  */
    break;


#line 5332 "yacc.tab.c" /* yacc.c:1646  */
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
#line 2238 "yacc.y" /* yacc.c:1906  */


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

void printdir(char *dir, int depth)
{
    	DIR *dp;
    	struct dirent *entry;
    	struct stat statbuf;
   	if((dp = opendir(dir)) == NULL) {
    		fprintf(stderr,"cannot open directory: %s\n", dir);
        	return;
    	}
   	chdir(dir);
    	while((entry = readdir(dp)) != NULL) {
        	lstat(entry->d_name,&statbuf);
        		if(S_ISDIR(statbuf.st_mode)) {
           
            		if(strcmp(".",entry->d_name) == 0 ||
               		 	strcmp("..",entry->d_name) == 0)
               		 	continue;
           		printf("%*s%s/\n",depth,"",entry->d_name);
           
            		printdir(entry->d_name,depth+4);
       		}
       		else printf("%*s%s\n",depth,"",entry->d_name);
  	}
   	chdir("..");
    	closedir(dp);
}

void showDb() {
	printdir(DB_ROOT,0);
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
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	} 
    	if (!system(path.c_str()))
		printf("successfully drop table: %s \n",dbName.c_str());
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
		int primary_key = -1;
		string temp0 = "\"";
		for (int i=0; i<attr_num; i++) {
			if (attrTypeList[i]=="INT"  || attrTypeList[i]=="int" )attr_len[i*3] = 1; else
			if (attrTypeList[i]=="VARCHAR" || attrTypeList[i]=="varchar" )attr_len[i*3] = 0; else {
				errorReport("Type error! \n");
				dropTb();
				return;
			}
			attr_len[i*3+1] = atoi(attrNumList[i].c_str());
			attr_len[i*3+2] = attrNotNullList[i];
			string temp = temp0+attrNameList[i]+temp0;
			attr_name.push_back(attrNameList[i]);
			if (attrNameList[i] == primaryKey) primary_key = i;		
		}
		rm->init(fileID, attr_num, attr_len, primary_key, attr_name);
	}
}


void showTb() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}
	string temp0 = "/";
	string temp1 = ".txt";
	string path = DB_ROOT+temp0+currentDb+temp0;
	char * ch = (char*)path.c_str();
	printdir(ch,0);
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
	
	vector<vector<string> > record = rm->get_all_record(fileID);
	
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
			if (clauseOpList[j] == "is") {
				if (record[i][clauseLeft[j]] != "NULL") { flag = 1; break;} 
			}			
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
	cout << endl;
	for (int i=0; i<delList.size(); i++) 
		rm->delete_record(fileID, atoi(delList[i].c_str()));
	//rm->print_all_record(fileID); 
}

char orderBetween(char top, char now) {
	if (now=='\0' && top =='\0') return '=';
	if (now=='\0') return '>';
	if ((top == '+' || top == '-') && (now == '*' || now == '/')) return '<';
	if (top == '\0') return '<';
	return '>';
}

string to_string_my(int a)
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
	string path2 = path;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesb't exist... \n", tbName.c_str());
		return;
	}
	string set1 = "", set2 = "";
	int now = 0;
	while (setName[now]!='_' && now < setName.length()-1) now++;
	if (now!=setName.length()-1) {
		for (int i=0; i<now; i++) set1 += setName[i];
		for (int i=now+1; i<setName.length(); i++) set2 += setName[i];
	}
	path = DB_ROOT+temp0+currentDb+temp0+set1;

	int ofileID;
	FileManager* ofm = new FileManager();
	RecordManager* orm;
	
	vector<vector<string> > orecord;
	
	vector<string> oattr; 
	vector<int> otype; 
	int okey = -1;
	if(set1!="" && !(access(path.c_str(),F_OK)))
	{
		ofm->openFile(path.c_str(), ofileID);
		orm = new RecordManager(ofm);
		orm -> load_table_info(ofileID);
		orecord = orm->get_all_record(ofileID);
		oattr = orm->get_attr_name();
		otype = orm->get_attr_type();
		for (int i=0; i<oattr.size(); i++)
			if (set2 == oattr[i]) { okey = i; break;} 
	}
	cout << "okey: " << okey << endl;
	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path2.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	
	vector<vector<string> > record = rm->get_all_record(fileID);
	
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();
	vector<int> clauseLeft, clauseRight;
	clauseLeft.clear();
	clauseRight.clear();
	int flag;
	for (int i=0; i<clauseNameList.size(); i++) {
		
		flag = 0;
		for (int j=0; j<attr.size(); j++) {
			if (attr[j] == clauseNameList[i]) {
				flag = j+1;
				break;
			}
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
	if (set == -1) {
		printf("attrName %s doesn't exist.. \n", setName.c_str());
		return;
	}	
	string ans = "";
	for (int i=0; i<record.size(); i++) { 
		flag = 0;
		for (int j=0; j<clauseOpList.size(); j++) {
			if (clauseOpList[j] == "is") {
				if (record[i][clauseLeft[j]] != "NULL") { flag = 1; break;} 
			}			
					
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
				if (rm->update_record(fileID, atoi(record[i][0].c_str()), attr[set], tempexprValueList[0],1)) {
					cout << "wrong update" << endl;
				}
				else {
					cout << "success update" << endl;
				}
				//rm->print_all_record(fileID);	
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
				int flag2 = 0;
				for (int j1=0; j1<orecord.size(); j1++)
					if (orecord[j1][okey+1]==to_string_my(ans)) { flag2=1;break;}
				if (flag2 == 0) {
					cout << "out key error!" << endl;
					return;
				}
				if (rm->update_record(fileID, atoi(record[i][0].c_str()), attr[set], to_string_my(ans),1)) {
					cout << "wrong update" << endl;
				}
				else {
					cout << "success update" << endl;
				}
				//
				//rm->print_all_record(fileID);	
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
	
	vector<vector<string> > record = rm->get_all_record(fileID);
	
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
	vector<vector<string> > record = rm->get_all_record(fileID);
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
	vector<int> nulls;
	int now = 0;
	if (cnt%100==0) cout << cnt<<endl;
	cnt++;
	for (int i=0; i<attrValueList.size(); i++) { 
		newRecord.clear();
		nulls.clear();
		for (int j=0; j<attrValueList[i].size(); j++) {
			if (attrValueList[i][j]=="null" || attrValueList[i][j]=="NULL") {
				nulls.push_back(0);
				if (type[j]==0) newRecord.push_back(temp2+attrValueList[i][j]+temp2); else newRecord.push_back("0");
			}
			else {
				newRecord.push_back(attrValueList[i][j]);
				nulls.push_back(1);			
			}	
		}
		rm->insert_record(fileID, newRecord, nulls );
		//cout << i << endl;
	}
	//delete fm;
	//delete rm;
	//rm->print_all_record(fileID);
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
	vector<vector<string> > * record = new vector<vector<string> >[tbNameList.size()];
	vector<string> * attr = new vector<string>[tbNameList.size()];
	vector<int>* type = new vector<int>[tbNameList.size()];
	for (int i=0; i<tbNameList.size(); i++) {
		string path = DB_ROOT+temp0+currentDb+temp0+tbNameList[i];
		if((access(path.c_str(),F_OK)))
		{
			printf("table %s doesn't exist... \n", tbName.c_str());
			return;
		}
		fm[i] = new FileManager();
		fm[i]->openFile(path.c_str(), fileID[i]);
		rm[i] = new RecordManager(fm[i]);
		rm[i]->load_table_info(fileID[i]);
		record[i] = rm[i]->get_all_record(fileID[i]);
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
	if (tbNameList.size() == 1) {
		for (int i=0; i<clauseNameList.size();i++) {
			int now;
			string temp = "";
			clauseLeft.push_back(0);
			temp = clauseNameList[i];
			now=-1;
			for (int j=0; j<attr[clauseLeft[i]].size(); j++) {
				if (attr[clauseLeft[i]][j] == temp) {
					now = j;
					break;
				}
			}
			if (now==-1) {
				printf("attr name doesn't exist!");
				return;	
			}
			clauseLeftAttr.push_back(now);
		}
		for (int i=0; i<clauseRightList.size();i++) {
			if (clauseRightList[i][0]=='\'' || (clauseRightList[i][0]>='0' && clauseRightList[i][0]<='9')) {
				clauseRight.push_back(-1);
				clauseRightAttr.push_back(-1);
				continue;
			}
			int now=0;
			clauseRight.push_back(0);
			string temp = "";
			temp = clauseRightList[i];
			now=-1;
			for (int j=0; j<attr[clauseRight[i]].size(); j++)
				if (attr[clauseRight[i]][j] == temp) {
					now = j;
					break;
				}
			if (now==-1) {
				printf("attr name doesn't exist! \n");
				return;	
			}
			clauseRightAttr.push_back(now);
		}
	} else {
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
				printf("attr name doesn't exist! \n");
				return;	
			}
			clauseLeftAttr.push_back(now2);
		}
        	
		for (int i=0; i<clauseRightList.size();i++) {
			if (clauseRightList[i][0]=='\'' || (clauseRightList[i][0]>='0' && clauseRightList[i][0]<='9')) {
				clauseRight.push_back(-1);
				clauseRightAttr.push_back(-1);
				continue;
			}
			int now=0;
			while (clauseRightList[i][now] != '.' && now<clauseRightList[i].length()-1) now++;
			if (now==clauseRightList[i].length()-1) {
				printf("table name lost1! \n");
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
				printf("table name doesn't exist! \n");
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
				printf("attr name doesn't exist! \n");
				return;	
			}
			clauseRightAttr.push_back(now2);
		}
	}
	if (attrNameList.size() == 1 && attrNameList[0] == "*") {
		for (int i=0; i<record[0].size(); i++) { 
			int flag = 0;
			string temp = "";
			for (int j=0; j<clauseOpList.size(); j++) {
				if (clauseOpList[j] == "is") {
					if (record[0][i][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
				}			
			
				if (clauseOpList[j] == "=") {
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==0) {
						if (record[0][i][clauseLeftAttr[j]+1] != record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
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
				for (int ii=0; ii<attr[0].size(); ii++) cout << record[0][i][ii+1] << "      ";
				cout << endl;
			}
		}
		return;
	}
	if (tbNameList.size() == 1) {
		for (int i=0; i<attrNameList.size();i++) {
			string temp = "";
			temp = attrNameList[i];
			ans.push_back(0);
			int now2=-1;
			for (int j=0; j<attr[ans[i]].size(); j++)
				if (attr[ans[i]][j] == temp) {
					now2 = j;
					break;
				}
			if (now2==-1) {
				printf("attr name doesn't exist1! \n");
				return;	
			}
			ansAttr.push_back(now2);
		}	
	} else {

		for (int i=0; i<attrNameList.size();i++) {
			int now=0;
			while (attrNameList[i][now] != '.' && now<attrNameList[i].length()-1) now++;
			if (now==attrNameList[i].length()-1) {
				printf("table name lost! \n");
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
				printf("table name doesn't exist! \n");
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
				printf("attr name doesn't exist! \n");
				return;	
			}
			ansAttr.push_back(now2);
		}
	}        
		
	if (tbNameList.size() == 1) {
		for (int i=0; i<record[0].size(); i++) { 
			int flag = 0;
			string temp = "";
			for (int j=0; j<clauseOpList.size(); j++) {
				if (clauseOpList[j] == "is") {
					if (record[0][i][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
				}			
				if (clauseOpList[j] == "=") {
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==0) {
						if (record[0][i][clauseLeftAttr[j]+1] != record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
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
				for (int j=0; j<clauseOpList.size(); j++) {
					if (clauseOpList[j] == "is") {
						if (clauseLeft[j]==0)
							if (record[clauseLeft[j]][i][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
						if (clauseLeft[j]==1)
							if (record[clauseLeft[j]][i2][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
					}			
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
		cout << record[0].size() << " " << record[1].size() << " " << record[2].size() << endl;
		for (int i=0; i<record[0].size(); i++) {
			for (int i2=0; i2<record[1].size(); i2++) {
				for (int i3=0; i3<record[2].size(); i3++) { 
				//if (i3%10000==0) cout << "i3: " << i3 << endl; 
					int flag = 0;
					string temp = "";
					for (int j=0; j<clauseOpList.size(); j++) {
						if (clauseOpList[j] == "is") {
							if (clauseLeft[j]==0)
								if (record[clauseLeft[j]][i][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
							if (clauseLeft[j]==1)
								if (record[clauseLeft[j]][i2][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
							if (clauseLeft[j]==2)
								if (record[clauseLeft[j]][i3][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
						}			
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


void desc() {
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
	
}


void work() {
	if (type == "create database") 	createDb();
	if (type == "drop database")    dropDb();
	if (type == "use database") 	useDb();
	if (type == "show database") 	showDb();
	if (type == "create table") 	createTb();
	if (type == "drop table") 	dropTb();
	if (type == "show table") 	showTb();
	if (type == "desc") 		desc();
	if (type == "insert into") 	insertInto();
	if (type == "delete from") 	deleteFrom();
	if (type == "update set") 	updateSet();
	if (type == "select from")	selectFrom();
	if (type == "select")		select(); 
	if (type == "select group")	selectGroup();
}
int make() {
	if (tempName != "") {
		int now = 0;
		string temp = "";	
		while (tempName[now]!=',') {
			temp+=tempName[now];			
			now++;
		}
		attrName1 = temp;
		temp = "";
		now++;
		while (tempName[now]!='(') {
			temp+=tempName[now];			
			now++;
		}
		selectType = temp;
		now++;
		temp = "";
		while (tempName[now]!=')') {
			temp+=tempName[now];			
			now++;
		}
		attrName2 = temp;
	}
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
	while (attrName[now]=='(' || attrName[now]==' ') now++;
	if (now!=0) {
		for (int k=now; k<attrName.length(); k++)
			if (attrName[k] != ' ' && attrName[k] != ')') temp += attrName[k]; else break;
		attrName = temp;
	}
	now = 0;
	temp = "";
	while (attrName2[now]=='(' || attrName2[now]==' ') now++;
	if (now!=0) {
		for (int k=now; k<attrName2.length(); k++)
			if (attrName2[k] != ' ' && attrName2[k] != ')') temp += attrName2[k]; else break;
		attrName2 = temp;
	}
		
}

int main()						
{	
	while(1) {
		cout << "  >> ";	
		type = "";
		dbName = "";
		tbName = "";
		setName = "";
		cnt = 0;
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
		char buf[MAXBUFSIZE];
		getcwd(buf, MAXBUFSIZE);
		string tempdb(buf);
		tempdb += "/database";
		strcpy(DB_ROOT, tempdb.c_str());
		//DB_ROOT = tempdb.c_str();
		//printf("%s", DB_ROOT);
		while( yyparse()) {
			type = "";
			dbName = "";
			tbName = "";
			setName = "";
			cnt = 0;
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
		}
		make();
		if (type != "") work();	
	}
	return 0;
}

