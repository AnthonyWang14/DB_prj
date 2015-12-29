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
#define YYLAST   944

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  375
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  882

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
      35,    36,    33,    37,    34,    38,     2,    39,     2,     2,
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
     355,   362,   370,   377,   384,   391,   398,   403,   408,   413,
     421,   429,   438,   446,   455,   463,   472,   480,   492,   502,
     512,   522,   532,   542,   552,   562,   572,   582,   592,   602,
     612,   622,   632,   642,   654,   660,   666,   672,   678,   684,
     690,   696,   704,   706,   712,   718,   724,   730,   736,   741,
     746,   751,   756,   762,   768,   774,   780,   786,   792,   798,
     804,   809,   814,   819,   828,   830,   834,   838,   842,   846,
     850,   854,   858,   862,   866,   870,   874,   878,   882,   886,
     890,   894,   898,   902,   906,   910,   914,   918,   922,   926,
     930,   934,   938,   942,   946,   952,   954,   958,   962,   966,
     970,   974,   980,   982,   986,   990,   994,   998,  1002,  1008,
    1010,  1014,  1018,  1022,  1026,  1030,  1034,  1039,  1044,  1049,
    1054,  1059,  1064,  1069,  1074,  1079,  1084,  1089,  1094,  1099,
    1104,  1109,  1115,  1120,  1125,  1130,  1135,  1140,  1145,  1150,
    1155,  1160,  1165,  1170,  1175,  1180,  1185,  1190,  1197,  1199,
    1205,  1211,  1217,  1223,  1229,  1235,  1241,  1247,  1253,  1259,
    1265,  1272,  1278,  1284,  1290,  1296,  1302,  1308,  1314,  1320,
    1326,  1332,  1338,  1345,  1351,  1357,  1363,  1369,  1375,  1381,
    1387,  1393,  1399,  1405,  1411,  1417,  1423,  1429,  1435,  1441,
    1447,  1453,  1459,  1465,  1471,  1477,  1483,  1489,  1495,  1501,
    1507,  1513,  1519,  1525,  1531,  1537,  1543,  1549,  1555,  1562,
    1568,  1574,  1580,  1586,  1592,  1598,  1604,  1610,  1616,  1622,
    1628,  1634,  1640,  1646,  1652,  1658,  1664,  1670,  1676,  1683,
    1689,  1695,  1701,  1707,  1713,  1719,  1725,  1731,  1737,  1743,
    1749,  1755,  1761,  1767,  1773,  1779,  1785,  1791,  1797,  1803,
    1809,  1815,  1821,  1827,  1833,  1839,  1845,  1851,  1857,  1863,
    1869,  1875,  1881,  1887,  1893,  1900,  1906,  1912,  1918,  1924,
    1930,  1936,  1942,  1949,  1955,  1961,  1967,  1973,  1979,  1985,
    1991,  1997,  2003,  2009,  2015,  2024,  2026,  2029,  2032,  2037,
    2039,  2042,  2046,  2050,  2054,  2060,  2062,  2069,  2076,  2083,
    2090,  2097,  2104,  2111,  2118,  2125,  2132,  2139,  2146,  2153,
    2160,  2167,  2174,  2181,  2188,  2195,  2202,  2209,  2216,  2223,
    2230,  2237,  2244,  2251,  2258,  2265,  2272,  2279,  2286,  2293,
    2300,  2307,  2314,  2321,  2328,  2335
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
  "NUL", "'='", "'*'", "','", "'('", "')'", "'+'", "'-'", "'/'", "'!'",
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
     285,   286,    61,    42,    44,    40,    41,    43,    45,    47,
      33,    60,    62
};
# endif

#define YYPACT_NINF -295

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-295)))

#define YYTABLE_NINF -336

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     368,   -15,   -13,    -4,    26,    33,   133,   143,   248,   414,
     326,  -295,    52,   115,   348,   147,   350,   365,   404,    55,
     359,   409,   413,   430,   444,   447,   468,   472,  -295,   575,
     576,   579,   580,   583,   584,   587,   588,   591,   592,    73,
     457,   593,   144,   353,   355,   594,   358,   597,   595,   598,
      91,   601,   605,   606,   613,   614,   618,   619,   620,   621,
     603,   599,    13,   101,  -295,   609,   156,   234,   602,   604,
     607,   608,   610,   611,   612,   615,   616,   617,    93,   622,
     329,   271,   -14,   274,   275,   276,   279,   280,   623,   624,
     625,   627,   626,   235,   596,   629,   628,   630,   261,  -295,
     633,   637,   638,   643,   644,   645,   651,   653,   655,   656,
     639,   635,    23,   262,   642,   339,  -295,   657,   -14,     3,
     281,  -295,   658,  -295,   659,  -295,   660,  -295,   661,  -295,
     662,   654,   650,   668,   646,   663,   670,   669,   648,   672,
     674,   263,  -295,   675,  -295,   285,   -14,   291,   293,   294,
     298,   299,   652,   664,   665,   666,   667,   265,   676,   679,
     671,   673,  -295,   677,   678,   680,   -16,   564,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,    11,   681,   204,   682,   683,
     684,   685,   688,   686,   687,  -295,   690,   432,  -295,  -295,
     689,   303,  -295,   691,  -295,   693,  -295,   695,  -295,   696,
    -295,   697,   699,   698,   704,   692,   694,   705,   713,   700,
     714,   717,   263,   718,   701,  -295,  -295,   251,  -295,   702,
      16,    79,   104,   719,   600,   132,   304,   720,   706,   703,
     707,   708,   712,  -295,   371,   266,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,    21,   709,   328,   722,   710,   711,   728,
     715,   716,   721,   443,    62,   732,   723,   724,   165,  -295,
     725,    94,    79,   173,  -295,  -295,   100,  -295,    89,  -295,
     733,    35,   411,   305,   132,  -295,  -295,  -295,   483,   431,
    -295,   734,   307,   726,   727,   738,   729,   730,   731,   268,
    -295,   739,    16,   174,   719,   735,   132,   308,   741,   736,
     737,   740,   742,   743,   433,   382,   744,   162,   752,   746,
     745,   747,  -295,   748,    79,   429,  -295,   755,  -295,  -295,
    -295,   749,    82,   750,  -295,   751,   753,    70,    79,   458,
     136,   754,     1,    49,  -295,   381,   442,  -295,  -295,  -295,
     361,   201,   206,   209,   212,  -295,  -295,   757,   763,   756,
     758,   765,   719,   719,  -295,   766,  -295,   208,  -295,   764,
     309,   132,   445,  -295,   767,   310,   759,   761,   768,   760,
     762,   769,   770,   772,   462,   567,   771,   267,   103,   779,
     775,  -295,   473,   773,  -295,    90,   774,   776,   111,   777,
    -295,  -295,  -295,   778,   780,    79,   474,   142,   781,     2,
      58,  -295,  -295,  -295,   509,   145,  -295,  -295,    69,   215,
     148,  -295,  -295,   512,   218,  -295,   782,   369,   783,   221,
     224,   229,   240,  -295,  -295,   549,  -295,  -295,   550,  -295,
    -295,   553,  -295,  -295,   554,  -295,   785,   787,   784,   786,
     311,   313,  -295,  -295,   788,  -295,  -295,   388,   456,   380,
    -295,  -295,   789,   790,   791,   792,   794,   719,   719,   793,
     568,   795,   797,   798,   800,   571,   801,   809,  -295,   802,
     269,   199,   803,  -295,   804,   805,   113,   806,  -295,  -295,
     807,   808,   810,  -295,  -295,  -295,   482,   811,  -295,  -295,
    -295,   516,   151,  -295,  -295,   557,   243,   154,  -295,  -295,
     558,   246,  -295,  -295,  -295,  -295,  -295,  -295,   519,  -295,
    -295,  -295,  -295,   561,  -295,  -295,  -295,   522,  -295,  -295,
    -295,  -295,   562,   799,   812,   719,  -295,  -295,   565,  -295,
    -295,   566,  -295,  -295,   569,  -295,  -295,   570,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,   816,   814,   815,   819,
    -295,   406,  -295,   407,  -295,  -295,   383,   817,  -295,   818,
     813,   822,   820,   316,   317,   796,   821,   823,   824,   825,
     826,   828,   827,   829,   831,  -295,   832,   844,  -295,   847,
    -295,  -295,  -295,   833,   834,   835,  -295,  -295,  -295,  -295,
     836,  -295,  -295,  -295,  -295,  -295,  -295,  -295,   525,  -295,
    -295,  -295,  -295,   573,  -295,  -295,  -295,   528,  -295,  -295,
    -295,  -295,   574,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,   415,   719,   321,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,   837,   841,   842,   839,  -295,  -295,
     843,   719,   845,   846,   848,   850,  -295,   419,  -295,   423,
     849,  -295,   851,   852,   853,   854,   856,   855,   858,   840,
     859,   861,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,   464,   163,   860,
       6,    63,   323,  -295,   424,   864,   865,   866,   869,   719,
     327,   868,   862,   871,   870,  -295,  -295,  -295,   872,  -295,
     873,  -295,   874,   875,   876,   877,   879,   863,   181,   878,
       7,    68,  -295,  -295,  -295,   531,   184,  -295,  -295,   577,
     249,   190,  -295,  -295,   578,   252,  -295,   426,  -295,   880,
     884,   895,   883,   333,  -295,   427,   886,   885,   887,   888,
    -295,  -295,   889,  -295,   890,   891,   892,   896,  -295,  -295,
    -295,   534,   193,  -295,  -295,   581,   256,   196,  -295,  -295,
     582,   257,  -295,  -295,  -295,  -295,  -295,  -295,   537,  -295,
    -295,  -295,  -295,   585,  -295,  -295,  -295,   540,  -295,  -295,
    -295,  -295,   586,  -295,   898,   897,   335,   912,  -295,   428,
    -295,   899,   893,   916,   900,  -295,  -295,   901,   902,   903,
    -295,  -295,  -295,  -295,  -295,  -295,   543,  -295,  -295,  -295,
    -295,   589,  -295,  -295,  -295,   546,  -295,  -295,  -295,  -295,
     590,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,   336,   919,  -295,   830,   340,  -295,   922,   904,   341,
     927,  -295,  -295,   906,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,   928,   343,  -295,  -295,   929,
     345,   933,  -295,   931,   346,  -295,  -295,  -295,   932,  -295,
    -295,   934,   347,  -295,  -295,   935,  -295,  -295,  -295,   936,
    -295,  -295
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   325,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,   325,   329,
       0,    10,     0,    26,     0,    14,     0,    18,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,   139,     0,   138,     0,   325,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,   327,     0,     0,     0,     0,    29,   326,
      11,    27,    15,    19,    23,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,   140,     4,
       0,     0,     8,     0,    24,     0,    12,     0,    16,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,   330,   328,     0,    83,    84,
      82,   104,     0,   188,     0,   149,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     5,    28,     9,    25,
      13,    17,    21,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      84,     0,   104,     0,   105,   107,     0,   106,     0,    75,
       0,     0,     0,     0,   149,   151,   150,   152,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,    82,     0,   188,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,     0,    86,    85,   104,     0,    74,     0,   108,   110,
     109,     0,     0,    88,    79,    96,    92,     0,   104,     0,
       0,     0,     0,     0,    30,     0,     0,   154,   153,   155,
       0,     0,     0,     0,     0,    54,    52,     0,     0,     0,
       0,     0,   188,   188,   146,     0,   145,     0,    77,     0,
       0,   149,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,   337,   342,     0,     0,     0,     0,
       0,    87,     0,    88,    78,     0,   113,   111,     0,   112,
      89,    98,    94,    97,    93,   104,     0,     0,     0,     0,
       0,   193,   189,   197,     0,     0,   233,   237,     0,     0,
       0,   225,   229,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,   158,   174,     0,   156,   172,     0,   157,
     173,     0,   159,   175,     0,    56,     0,     0,     0,     0,
       0,     0,   147,    76,     0,    81,    31,     0,     0,     0,
      55,    53,     0,     0,     0,     0,     0,   188,   188,     0,
       0,   349,     0,   354,     0,   343,   368,     0,   331,     0,
       0,     0,    90,    89,   125,   123,     0,   124,   120,   114,
     121,   115,   118,   117,    99,    95,     0,   100,   194,   190,
     198,     0,     0,   234,   238,     0,     0,     0,   226,   230,
       0,     0,   195,   191,   199,   205,   201,   209,     0,   235,
     239,   249,   253,     0,   217,   213,   221,     0,   227,   231,
     241,   245,     0,     0,     0,   188,   166,   182,     0,   164,
     180,     0,   165,   181,     0,   167,   183,     0,   162,   178,
     160,   176,   161,   177,   163,   179,     0,     0,     0,     0,
      42,     0,    46,     0,    80,    33,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,   338,     0,     0,     0,
       0,   355,     0,   360,   369,   332,   370,     0,   333,     0,
      91,   132,   126,   133,   127,   130,   129,   122,   116,   119,
     102,   101,   196,   192,   200,   206,   202,   210,     0,   236,
     240,   250,   254,     0,   218,   214,   222,     0,   228,   232,
     242,   246,     0,   207,   203,   211,   251,   255,   219,   215,
     223,   243,   247,     0,   188,     0,   170,   186,   168,   184,
     169,   185,   171,   187,     0,     0,     0,     0,    44,    48,
       0,   188,     0,     0,     0,     0,    43,     0,    47,     0,
     339,   350,     0,   340,     0,   344,     0,     0,     0,   361,
     362,   371,   334,   134,   128,   131,   103,   208,   204,   212,
     252,   256,   220,   216,   224,   244,   248,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,   188,
       0,     0,     0,     0,     0,    45,    49,   351,   341,   352,
     345,   356,     0,   346,     0,     0,     0,   363,     0,     0,
       0,     0,   261,   257,   265,     0,     0,   289,   293,     0,
       0,     0,   281,   285,     0,     0,    38,     0,    36,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
     353,   357,   347,   358,   372,     0,     0,     0,   262,   259,
     266,     0,     0,   292,   294,     0,     0,     0,   282,   286,
       0,     0,   263,   258,   267,   273,   269,   277,     0,   290,
     295,   305,   309,     0,   317,   313,   321,     0,   283,   287,
     297,   301,     0,    40,     0,     0,     0,     0,    39,     0,
      37,     0,     0,     0,     0,   359,   364,   373,   374,     0,
     264,   260,   268,   274,   271,   278,     0,   291,   296,   306,
     310,     0,   318,   315,   322,     0,   284,   288,   298,   302,
       0,   275,   270,   279,   307,   311,   319,   314,   323,   299,
     303,     0,     0,    58,     0,     0,    41,     0,     0,     0,
       0,   365,   366,   375,   276,   272,   280,   308,   312,   320,
     316,   324,   300,   304,    62,     0,     0,    59,    66,     0,
       0,     0,    60,     0,     0,   367,    63,    70,     0,    67,
      64,     0,     0,    61,    68,     0,    71,    65,    72,     0,
      69,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -295,  -295,  -295,  -217,  -261,   640,   418,  -272,  -294,   -20,
    -295,  -295
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,   222,   268,    42,   187,   279,   273,   120,
     166,   167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     360,   315,   336,   263,   406,   493,   407,   494,   164,   717,
     753,   718,   754,   215,    12,   118,    13,   218,   219,    92,
     216,   119,   218,   260,   362,    14,   293,   218,   219,   156,
     408,   495,   165,   409,   496,   719,   755,  -335,   720,   756,
     220,   325,   326,   410,   497,   261,   221,    93,   721,   757,
     292,   262,   411,   382,   412,    15,   221,   157,   440,   441,
      39,   498,    16,   499,   327,    29,   722,   396,   723,   305,
     328,   758,   509,   759,   510,   357,   393,   394,   413,    61,
      30,   414,   264,   265,    40,   386,   387,   500,    41,   448,
     501,   306,   724,   474,   475,   725,    78,   760,   163,   111,
     761,   313,    62,   318,   319,   395,    94,    63,   266,   468,
     267,   388,   269,   389,   480,   481,   583,   584,   321,   476,
      40,   477,   112,   322,    79,   323,   191,   113,    31,   314,
      95,   320,   469,   270,   486,   275,   276,   277,   271,   401,
     402,   403,   482,    32,   585,   488,   489,   490,   505,   506,
     507,   514,   515,   516,   595,   596,   597,   604,   605,   606,
      34,   278,    17,   563,   564,   404,   712,   713,   714,   375,
     310,   491,    18,    66,   508,    35,    97,   517,    67,   311,
     598,   316,   358,   607,   748,   749,   750,   765,   766,   767,
      98,   376,   715,   774,   775,   776,   803,   804,   805,   812,
     813,   814,   317,   359,   423,   578,   424,   271,   271,   426,
     751,   427,   429,   768,   430,   432,   443,   433,   511,   777,
     512,   520,   806,   521,   526,   815,   527,   529,   579,   530,
     425,   625,   532,   224,   533,   428,   225,   444,   431,    99,
     136,   434,   271,   535,   513,   536,   601,   522,   602,   610,
     528,   611,   771,   531,   772,   780,   256,   781,   534,   809,
     818,   810,   819,   100,   137,   257,   142,   158,   185,   537,
     207,   290,   603,   354,   466,   612,   576,    19,   773,   116,
     258,   782,   121,   123,   125,   811,   820,   127,   129,   168,
     143,   159,   186,   189,   208,   291,   467,   355,   577,   192,
     117,   194,   196,   122,   124,   126,   198,   200,   128,   130,
     169,   237,   280,   334,   190,   346,   363,   446,   451,   550,
     193,   552,   195,   197,   646,   648,    28,   199,   201,   683,
     682,   726,   169,   281,   335,   734,   347,   364,   447,   452,
     551,   788,   553,   833,   854,   647,   649,   690,   858,   862,
     684,   867,   727,   870,   874,   878,   735,   295,   115,   161,
     296,    33,   789,    67,   834,   855,    68,    36,    70,   859,
     863,    73,   868,    98,   871,   875,   879,     1,     2,     3,
       4,    69,   418,    71,     5,    37,    74,     6,    43,   415,
     524,     7,   288,     8,   419,   733,   555,     9,   420,   421,
     422,   557,   419,   416,   640,   289,   420,   421,   422,    38,
     416,   372,   373,   419,   638,   639,   419,   420,   421,   422,
     420,   421,   422,    20,    21,    22,    23,   695,   416,   416,
      24,   696,   728,    25,   783,   790,   836,    26,    44,    27,
     329,   416,    45,   330,   677,   416,   416,   678,   416,   416,
     416,   331,   332,   333,   371,   679,   680,   681,   321,    46,
     340,   234,    64,   322,   341,   383,   235,   289,   342,   343,
     344,   417,   304,    47,   449,   341,    48,   235,   341,   342,
     343,   344,   342,   343,   344,   556,   337,   338,   339,   341,
     397,   461,   462,   342,   343,   344,   708,    49,   398,   399,
     400,    50,   321,   321,   709,   710,   711,   322,   322,   472,
     487,   321,   502,   503,   504,   518,   322,   519,   590,   592,
     593,   594,   613,   614,   615,   618,   619,   620,   667,   668,
     669,   672,   673,   674,   762,   763,   764,   800,   801,   802,
     821,   822,   823,   826,   827,   828,   844,   845,   846,   849,
     850,   851,   538,   540,   539,   541,   542,   544,   543,   545,
     599,   608,   600,   609,   616,   621,   617,   622,   626,   628,
     627,   629,   630,   632,   631,   633,   670,   675,   671,   676,
     769,   778,   770,   779,   807,   816,   808,   817,   824,   829,
     825,   830,   847,   852,   848,   853,   463,   464,   217,   566,
     571,   572,   138,    77,    51,    52,    81,    72,    53,    54,
      82,    83,    55,    56,    75,    76,    57,    58,    84,    85,
      59,    60,    65,    86,    87,    88,    89,    90,    91,    96,
     253,   101,   274,   102,   139,     0,   103,   104,   144,   105,
     106,   107,   145,   146,   108,   109,   110,   134,   147,   148,
     149,   114,   131,   132,   133,   135,   150,   140,   151,   141,
     152,   153,   160,   154,   155,   162,   170,   171,   172,   173,
     174,   176,   175,   177,   181,   178,   180,   182,   183,   184,
     188,   202,   209,   179,   210,   214,   205,   226,     0,     0,
      80,   229,     0,   203,   204,   233,   206,   236,     0,   238,
     211,   239,   212,   240,   241,   242,   169,   213,   230,   245,
     223,   248,   227,   228,   247,   231,   232,   243,   249,   244,
     251,   246,   252,   254,   272,   282,   283,   297,   286,   250,
     255,   259,   284,   287,   300,   301,   285,   307,   294,   298,
     299,   324,   345,   350,   356,   302,   365,   349,     0,     0,
     303,   374,   308,   309,   312,   348,   366,   377,   351,   352,
     353,   378,   369,   384,   370,   435,   367,   361,   436,   368,
     439,   442,   445,   455,   379,   450,   380,   381,   465,   390,
     391,   454,   392,   385,   470,   437,   405,   438,   453,   456,
     471,   457,   547,     0,     0,   559,   554,   558,   458,   562,
     459,   460,   473,   478,   623,   479,   483,   484,   575,   485,
     548,   523,   525,   492,   546,   549,   574,     0,   643,     0,
     560,   561,   565,     0,     0,   567,   568,   650,   569,   570,
     573,     0,   580,   581,   582,   586,   587,   588,   857,   589,
     591,   624,   634,   635,   636,   637,   641,   642,   644,   645,
     651,   661,   652,   662,   654,   653,   657,   655,   656,   658,
     659,   660,   663,   664,   665,   666,   685,   686,   688,   687,
     705,   691,   689,     0,     0,   692,   694,   693,   697,     0,
       0,   699,   698,   701,   700,   702,   703,   704,   737,   706,
     707,   729,   716,   747,   730,   731,   732,   736,   738,   739,
     786,   740,   741,   831,   743,   742,   745,   744,   746,   784,
     752,   785,   787,   791,   792,   794,   793,   835,   795,   796,
     838,   839,   797,   798,   856,   799,   832,   860,   837,   840,
     841,   842,   864,   861,   843,   865,   866,   869,   872,   873,
     876,     0,   877,   880,   881
};

static const yytype_int16 yycheck[] =
{
     294,   262,   274,   220,     3,     3,     5,     5,     5,     3,
       3,     5,     5,    29,    29,    29,    29,     6,     7,     6,
      36,    35,     6,     7,   296,    29,   243,     6,     7,     6,
      29,    29,    29,    32,    32,    29,    29,    34,    32,    32,
      29,     6,     7,    42,    42,    29,    35,    34,    42,    42,
      29,    35,     3,   314,     5,    29,    35,    34,   352,   353,
       5,     3,    29,     5,    29,    13,     3,   328,     5,     7,
      35,     3,     3,     5,     5,   292,     6,     7,    29,     6,
      28,    32,     3,     4,    29,     3,     4,    29,    33,   361,
      32,    29,    29,     3,     4,    32,     5,    29,   118,     6,
      32,     7,    29,     3,     4,    35,     5,    34,    29,     6,
      31,    29,     8,    31,     3,     4,     3,     4,    29,    29,
      29,    31,    29,    34,    33,    36,   146,    34,    13,    35,
      29,    31,    29,    29,   395,     3,     4,     5,    34,     3,
       4,     5,    31,    28,    31,     3,     4,     5,     3,     4,
       5,     3,     4,     5,     3,     4,     5,     3,     4,     5,
      13,    29,    29,   457,   458,    29,     3,     4,     5,     7,
       5,    29,    29,    29,    29,    28,    20,    29,    34,    14,
      29,     8,     8,    29,     3,     4,     5,     3,     4,     5,
      34,    29,    29,     3,     4,     5,     3,     4,     5,     3,
       4,     5,    29,    29,     3,     6,     5,    34,    34,     3,
      29,     5,     3,    29,     5,     3,     8,     5,     3,    29,
       5,     3,    29,     5,     3,    29,     5,     3,    29,     5,
      29,   525,     3,    29,     5,    29,    32,    29,    29,     5,
       5,    29,    34,     3,    29,     5,     3,    29,     5,     3,
      29,     5,     3,    29,     5,     3,     5,     5,    29,     3,
       3,     5,     5,    29,    29,    14,     5,     5,     5,    29,
       5,     5,    29,     5,     7,    29,     7,    29,    29,     8,
      29,    29,     8,     8,     8,    29,    29,     8,     8,     8,
      29,    29,    29,     8,    29,    29,    29,    29,    29,     8,
      29,     8,     8,    29,    29,    29,     8,     8,    29,    29,
      29,     8,     8,     8,    29,     8,     8,     8,     8,     8,
      29,     8,    29,    29,     8,     8,     0,    29,    29,     8,
     624,     8,    29,    29,    29,     8,    29,    29,    29,    29,
      29,     8,    29,     8,     8,    29,    29,   641,     8,     8,
      29,     8,    29,     8,     8,     8,    29,    29,    29,    20,
      32,    13,    29,    34,    29,    29,    13,    17,    13,    29,
      29,    13,    29,    34,    29,    29,    29,     9,    10,    11,
      12,    28,    21,    28,    16,    20,    28,    19,    29,     8,
      21,    23,    21,    25,    33,   689,     8,    29,    37,    38,
      39,    21,    33,    22,    21,    34,    37,    38,    39,     5,
      22,    29,    30,    33,     8,     8,    33,    37,    38,    39,
      37,    38,    39,     9,    10,    11,    12,     8,    22,    22,
      16,     8,     8,    19,     8,     8,     8,    23,    29,    25,
      29,    22,    29,    32,    29,    22,    22,    32,    22,    22,
      22,    40,    41,    42,    21,    40,    41,    42,    29,    29,
      29,    29,     5,    34,    33,    36,    34,    34,    37,    38,
      39,    29,    29,    29,    29,    33,    29,    34,    33,    37,
      38,    39,    37,    38,    39,    29,     3,     4,     5,    33,
      32,    29,    30,    37,    38,    39,    32,    29,    40,    41,
      42,    29,    29,    29,    40,    41,    42,    34,    34,    36,
      36,    29,     3,     4,     5,     3,    34,     5,    36,     3,
       4,     5,     3,     4,     5,     3,     4,     5,     3,     4,
       5,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     3,     4,     5,     3,
       4,     5,     3,     3,     5,     5,     3,     3,     5,     5,
       3,     3,     5,     5,     3,     3,     5,     5,     3,     3,
       5,     5,     3,     3,     5,     5,     3,     3,     5,     5,
       3,     3,     5,     5,     3,     3,     5,     5,     3,     3,
       5,     5,     3,     3,     5,     5,    29,    30,    34,    31,
      29,    30,     6,     5,    29,    29,     5,    13,    29,    29,
       5,     5,    29,    29,    17,    20,    29,    29,     5,     5,
      29,    29,    29,     5,     5,     5,     5,    24,    29,    20,
     212,    29,    32,    29,     5,    -1,    29,    29,     5,    29,
      29,    29,     5,     5,    29,    29,    29,    20,     5,     5,
       5,    29,    29,    29,    29,    29,     5,    29,     5,    29,
       5,     5,    20,    24,    29,     8,     8,     8,     8,     8,
       8,    21,    18,     5,     5,    29,     6,    29,     6,     5,
       5,    29,     6,    20,     5,     5,    20,     5,    -1,    -1,
      50,     6,    -1,    29,    29,     5,    29,     8,    -1,     8,
      29,     8,    29,     8,     8,     8,    29,    29,    20,     5,
      29,     6,    29,    29,    20,    29,    29,    18,     5,    21,
       6,    29,     5,     5,     5,     5,    20,     5,    20,    29,
      29,    29,    29,    21,     6,    20,    29,     5,    29,    29,
      29,     8,     8,     5,     5,    29,     5,    20,    -1,    -1,
      29,     7,    29,    29,    29,    29,    20,     5,    29,    29,
      29,    15,    20,     8,    21,     8,    29,    32,     5,    29,
       5,     5,     8,     5,    29,     8,    29,    29,     7,    29,
      29,    20,    29,    34,     5,    29,    32,    29,    29,    29,
      15,    29,     5,    -1,    -1,     5,     8,     8,    29,     5,
      30,    29,    29,    29,     5,    29,    29,    29,     6,    29,
      26,    29,    29,    32,    29,    29,     7,    -1,     5,    -1,
      29,    29,    29,    -1,    -1,    30,    29,    31,    30,    29,
      29,    -1,    29,    29,    29,    29,    29,    29,     8,    29,
      29,    29,    26,    29,    29,    26,    29,    29,    26,    29,
      29,     7,    29,     6,    29,    31,    29,    31,    30,    30,
      29,    29,    29,    29,    29,    29,    29,    26,    29,    27,
      30,    26,    29,    -1,    -1,    29,    26,    29,    29,    -1,
      -1,    29,    31,    29,    31,    29,    31,    29,    26,    30,
      29,    27,    32,    30,    29,    29,    27,    29,    27,    29,
       5,    29,    29,     5,    29,    31,    29,    31,    29,    29,
      32,    27,    29,    27,    29,    27,    29,     5,    29,    29,
      27,     5,    31,    31,     5,    29,    29,     5,    29,    29,
      29,    29,     5,    29,    31,    29,     8,     8,     5,     8,
       8,    -1,     8,     8,     8
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    12,    16,    19,    23,    25,    29,
      44,    45,    29,    29,    29,    29,    29,    29,    29,    29,
       9,    10,    11,    12,    16,    19,    23,    25,     0,    13,
      28,    13,    28,    13,    13,    28,    17,    20,     5,     5,
      29,    33,    48,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,     6,    29,    34,     5,    29,    29,    34,    13,    28,
      13,    28,    13,    13,    28,    17,    20,     5,     5,    33,
      48,     5,     5,     5,     5,     5,     5,     5,     5,     5,
      24,    29,     6,    34,     5,    29,    20,    20,    34,     5,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,     6,    29,    34,    29,    29,     8,    29,    29,    35,
      52,     8,    29,     8,    29,     8,    29,     8,    29,     8,
      29,    29,    29,    29,    20,    29,     5,    29,     6,     5,
      29,    29,     5,    29,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,    24,    29,     6,    34,     5,    29,
      20,    20,     8,    52,     5,    29,    53,    54,     8,    29,
       8,     8,     8,     8,     8,    18,    21,     5,    29,    20,
       6,     5,    29,     6,     5,     5,    29,    49,     5,     8,
      29,    52,     8,    29,     8,    29,     8,    29,     8,    29,
       8,    29,    29,    29,    29,    20,    29,     5,    29,     6,
       5,    29,    29,    29,     5,    29,    36,    34,     6,     7,
      29,    35,    46,    29,    29,    32,     5,    29,    29,     6,
      20,    29,    29,     5,    29,    34,     8,     8,     8,     8,
       8,     8,     8,    18,    21,     5,    29,    20,     6,     5,
      29,     6,     5,    49,     5,    29,     5,    14,    29,    29,
       7,    29,    35,    46,     3,     4,    29,    31,    47,     8,
      29,    34,     5,    51,    32,     3,     4,     5,    29,    50,
       8,    29,     5,    20,    29,    29,    20,    21,    21,    34,
       5,    29,    29,    46,    29,    29,    32,     5,    29,    29,
       6,    20,    29,    29,    29,     7,    29,     5,    29,    29,
       5,    14,    29,     7,    35,    47,     8,    29,     3,     4,
      31,    29,    34,    36,     8,     6,     7,    29,    35,    29,
      32,    40,    41,    42,     8,    29,    50,     3,     4,     5,
      29,    33,    37,    38,    39,     8,     8,    29,    29,    20,
       5,    29,    29,    29,     5,    29,     5,    46,     8,    29,
      51,    32,    50,     8,    29,     5,    20,    29,    29,    20,
      21,    21,    29,    30,     7,     7,    29,     5,    15,    29,
      29,    29,    47,    36,     8,    34,     3,     4,    29,    31,
      29,    29,    29,     6,     7,    35,    47,    32,    40,    41,
      42,     3,     4,     5,    29,    32,     3,     5,    29,    32,
      42,     3,     5,    29,    32,     8,    22,    29,    21,    33,
      37,    38,    39,     3,     5,    29,     3,     5,    29,     3,
       5,    29,     3,     5,    29,     8,     5,    29,    29,     5,
      51,    51,     5,     8,    29,     8,     8,    29,    50,    29,
       8,     8,    29,    29,    20,     5,    29,    29,    29,    30,
      29,    29,    30,    29,    30,     7,     7,    29,     6,    29,
       5,    15,    36,    29,     3,     4,    29,    31,    29,    29,
       3,     4,    31,    29,    29,    29,    47,    36,     3,     4,
       5,    29,    32,     3,     5,    29,    32,    42,     3,     5,
      29,    32,     3,     4,     5,     3,     4,     5,    29,     3,
       5,     3,     5,    29,     3,     4,     5,    29,     3,     5,
       3,     5,    29,    29,    21,    29,     3,     5,    29,     3,
       5,    29,     3,     5,    29,     3,     5,    29,     3,     5,
       3,     5,     3,     5,     3,     5,    29,     5,    26,    29,
       8,    29,     8,    29,     8,     8,    29,    21,     8,     5,
      29,    29,     5,    51,    51,    29,    31,    30,    29,    30,
      29,    29,    30,    29,     7,     6,     7,    29,     6,    29,
      29,    29,    29,     3,     4,    31,    29,    29,    29,    29,
      36,    29,     3,     4,     5,     3,     4,     5,    29,     3,
       5,     3,     5,    29,     3,     4,     5,    29,     3,     5,
       3,     5,    29,     3,     4,     5,     3,     5,     3,     4,
       5,     3,     5,     5,    29,    51,     3,     5,     3,     5,
       3,     5,     3,     5,    26,    29,    29,    26,     8,     8,
      21,    29,    29,     5,    26,    29,     8,    29,     8,    29,
      31,    29,    29,    31,    29,    31,    30,    29,    30,    29,
      29,     7,     6,    29,    29,    29,    29,     3,     4,     5,
       3,     5,     3,     4,     5,     3,     5,    29,    32,    40,
      41,    42,    51,     8,    29,    29,    26,    27,    29,    29,
      51,    26,    29,    29,    26,     8,     8,    29,    31,    29,
      31,    29,    29,    31,    29,    30,    30,    29,    32,    40,
      41,    42,     3,     4,     5,    29,    32,     3,     5,    29,
      32,    42,     3,     5,    29,    32,     8,    29,     8,    27,
      29,    29,    27,    51,     8,    29,    29,    26,    27,    29,
      29,    29,    31,    29,    31,    29,    29,    30,     3,     4,
       5,    29,    32,     3,     5,    29,    32,    42,     3,     5,
      29,    32,     3,     4,     5,     3,     4,     5,    29,     3,
       5,     3,     5,    29,     3,     4,     5,    29,     3,     5,
       3,     5,    29,     8,    29,    27,     5,    29,     8,    29,
       8,    27,    29,    29,    27,    29,    29,    31,    31,    29,
       3,     4,     5,     3,     4,     5,    29,     3,     5,     3,
       5,    29,     3,     4,     5,    29,     3,     5,     3,     5,
      29,     3,     4,     5,     3,     5,     3,     4,     5,     3,
       5,     5,    29,     8,    29,     5,     8,    29,    27,     5,
      29,    29,    29,    31,     3,     4,     5,     3,     5,     3,
       4,     5,     3,     5,     8,    29,     5,     8,     8,    29,
       5,    29,     8,    29,     5,    29,     8,     8,    29,     8,
       8,    29,     5,     8,     8,    29,     8,     8,     8,    29,
       8,     8
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
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    49,    49,    49,    49,    49,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
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
      51,    51,    51,    51,    51,    52,    52,    52,    52,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     7,     8,     6,     7,     7,     8,
       6,     7,     7,     8,     6,     7,     7,     8,     6,     7,
       7,     8,     6,     7,     7,     8,     6,     7,     8,     7,
      10,    11,    11,    12,    14,    15,    15,    16,    15,    16,
      16,    17,    12,    13,    13,    14,    12,    13,    13,    14,
       9,    10,    10,    11,    10,    11,    11,    12,    17,    18,
      18,    19,    18,    19,    19,    20,    18,    19,    19,    20,
      19,    20,    20,    21,    10,     9,    11,    10,    11,    10,
      12,    11,     0,     1,     1,     2,     2,     3,     3,     4,
       4,     5,     3,     4,     4,     5,     3,     4,     4,     5,
       5,     6,     6,     7,     0,     1,     1,     1,     2,     2,
       2,     3,     3,     3,     4,     4,     5,     4,     4,     5,
       4,     4,     5,     4,     4,     4,     5,     5,     6,     5,
       5,     6,     5,     5,     6,     0,     1,     2,     4,     4,
       5,     3,     0,     1,     2,     4,     4,     5,     3,     0,
       1,     1,     1,     2,     2,     2,     3,     3,     3,     3,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     5,
       5,     5,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     5,     5,     5,     0,     3,
       4,     4,     5,     3,     4,     4,     5,     3,     4,     4,
       5,     4,     5,     5,     6,     4,     5,     5,     6,     4,
       5,     5,     6,     4,     5,     5,     6,     4,     5,     5,
       6,     4,     5,     5,     6,     3,     4,     4,     5,     3,
       4,     4,     5,     3,     4,     4,     5,     3,     4,     4,
       5,     4,     5,     5,     6,     4,     5,     5,     6,     4,
       5,     5,     6,     4,     5,     5,     6,     7,     8,     8,
       9,     7,     8,     8,     9,     7,     8,     8,     9,     8,
       9,     9,    10,     8,     9,     9,    10,     8,     9,     9,
      10,     7,     8,     8,     9,     7,     8,     8,     9,     7,
       8,     9,     8,     7,     8,     8,     9,     8,     9,     9,
      10,     8,     9,     9,    10,     8,     9,     9,    10,     8,
       9,     9,    10,     8,     9,     9,    10,     8,     9,     9,
      10,     8,     9,     9,    10,     0,     2,     2,     3,     0,
       2,     6,     7,     7,     8,     0,     4,     5,     7,     8,
       8,     9,     5,     6,     8,     9,     9,    10,     5,     6,
       8,     9,     9,    10,     6,     7,     9,    10,    10,    11,
       7,     8,     8,     9,    11,    12,    12,    13,     6,     7,
       7,     8,    10,    11,    11,    12
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
#line 1846 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 1853 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 116 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";		
		YYACCEPT;
	}
#line 1863 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		cout << "CREATE database" << endl;
		type = "create database";
		YYACCEPT;
	}
#line 1874 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 129 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1884 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 135 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1894 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 143 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1904 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 149 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1914 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 155 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1924 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 161 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1934 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 169 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1944 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 175 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1954 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 181 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1964 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 187 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1974 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 195 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1984 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 201 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1994 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 207 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 2004 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 213 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 2014 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 221 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 2024 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 227 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 2034 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 233 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 2044 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 239 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 2054 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 247 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2064 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 253 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2074 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 259 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2084 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 265 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 2094 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 273 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 2104 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 279 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 2114 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 288 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2124 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 294 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2134 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 300 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2144 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 306 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2154 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 314 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2165 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 321 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2176 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 328 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2187 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 335 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2198 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 342 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2209 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 349 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2220 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 356 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2231 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 363 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2242 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 371 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-5].m_sId));
		type = "select from";
		YYACCEPT;
	}
#line 2253 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 378 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-5].m_sId));
		type = "select from";
		YYACCEPT;
	}
#line 2264 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 385 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-6].m_sId));
		type = "select from";
		YYACCEPT;
	}
#line 2275 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 392 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[-6].m_sId));
		type = "select from";
		YYACCEPT;
	}
#line 2286 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 399 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2295 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 404 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2304 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 409 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2313 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 414 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2322 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 422 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-6].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2334 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 430 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-6].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2346 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 439 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2358 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 447 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-5].m_sId);
		tbName = (yyvsp[-1].m_sId);
		YYACCEPT;
	}
#line 2370 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 456 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2382 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 464 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-7].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2394 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 473 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-8].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2406 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 481 "yacc.y" /* yacc.c:1646  */
    {
		type = "select";
		selectType = (yyvsp[-8].m_sId);
		attrName = (yyvsp[-6].m_sId);
		tbName = (yyvsp[-2].m_sId);
		YYACCEPT;
	}
#line 2418 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 493 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-14].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2432 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 503 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2446 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 513 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-14].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2460 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 523 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2474 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 533 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2488 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 543 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2502 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 553 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2516 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 563 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2530 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 573 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2544 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 583 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2558 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 593 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-15].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2572 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 603 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2586 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 613 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2600 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 623 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-17].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2614 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 633 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-12].m_sId);
		attrName1 = (yyvsp[-16].m_sId);
		attrName2 = (yyvsp[-11].m_sId);
		attrName3 = (yyvsp[-1].m_sId);
		tbName = (yyvsp[-7].m_sId);
		YYACCEPT;
	}
#line 2628 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 643 "yacc.y" /* yacc.c:1646  */
    {
		type = "select group";
		selectType = (yyvsp[-13].m_sId);
		attrName1 = (yyvsp[-17].m_sId);
		attrName2 = (yyvsp[-12].m_sId);
		attrName3 = (yyvsp[-2].m_sId);
		tbName = (yyvsp[-8].m_sId);
		YYACCEPT;
	}
#line 2642 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 655 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2652 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 661 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2662 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 667 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2672 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 673 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2682 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 679 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2692 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 685 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2702 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 691 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2712 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 697 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2722 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 704 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2729 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 707 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2739 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 713 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2749 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 719 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2759 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 725 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2769 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 731 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2779 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 737 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2788 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 742 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2797 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 747 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2806 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 752 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2815 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 757 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2825 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 763 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2835 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 769 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2845 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 775 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2855 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 781 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2865 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 787 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2875 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 793 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2885 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 799 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2895 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 805 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2904 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 810 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2913 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 815 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2922 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 820 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 2931 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 828 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2938 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 831 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2946 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 835 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 2954 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 839 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2962 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 843 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2970 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 847 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 2978 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 851 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2986 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 855 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 2994 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 859 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3002 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 863 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3010 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 867 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3018 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 871 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3026 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 875 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3034 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 879 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3042 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 883 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3050 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 887 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3058 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 891 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3066 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 895 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3074 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 899 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3082 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 903 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3090 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 907 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3098 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 911 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3106 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 915 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3114 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 919 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3122 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 923 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3130 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 927 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3138 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 931 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3146 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 935 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back("NULL");
	}
#line 3154 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 939 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3162 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 943 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 3170 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 947 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 3178 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 952 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3185 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 955 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3193 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 959 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3201 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 963 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3209 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 967 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3217 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 971 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3225 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 975 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 3233 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 980 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3240 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 983 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3248 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 987 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3256 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 991 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3264 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 995 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3272 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 999 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3280 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 3288 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1008 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3295 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3303 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {	
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3311 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {	
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3319 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3327 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3335 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1031 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3343 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3352 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1040 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3361 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3370 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3379 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3388 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3397 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3406 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3415 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3424 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3433 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1085 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3442 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1090 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3451 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3460 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3469 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3478 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3487 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1116 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3496 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3505 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1126 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3514 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3523 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1136 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3532 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3541 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1146 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3550 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3559 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3568 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3577 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3586 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3595 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3604 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3613 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3622 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 3631 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3638 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3648 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3658 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3668 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1218 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3678 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1224 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3688 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3698 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3708 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1242 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3718 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1248 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3728 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3738 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1260 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3748 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1266 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3758 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1273 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3768 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1279 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3778 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1285 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3788 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1291 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3798 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1297 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3808 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1303 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3818 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1309 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3828 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3838 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1321 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3848 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1327 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3858 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1333 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3868 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1339 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3878 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1346 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3888 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1352 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3898 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1358 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3908 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1364 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3918 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1370 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3928 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1376 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3938 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1382 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3948 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1388 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3958 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1394 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3968 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1400 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3978 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1406 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3988 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1412 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3998 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1418 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4008 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1424 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4018 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1430 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4028 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1436 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4038 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1442 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4048 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1448 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4058 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1454 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4068 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1460 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4078 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1466 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4088 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1472 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4098 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1478 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4108 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1484 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4118 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1490 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4128 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1496 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4138 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1502 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4148 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1508 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4158 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1514 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4168 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1520 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4178 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1526 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4188 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1532 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4198 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1538 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4208 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1544 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4218 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1550 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4228 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1556 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4238 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1563 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4248 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1569 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4258 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1575 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4268 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1581 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4278 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1587 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4288 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1593 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4298 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1599 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4308 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1605 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4318 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1611 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4328 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1617 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4338 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1623 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4348 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1629 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4358 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1635 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4368 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1641 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4378 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1647 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4388 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1653 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4398 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1659 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4408 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1665 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4418 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1671 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4428 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1677 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4438 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1684 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4448 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1690 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4458 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1696 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4468 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1702 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4478 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1708 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4488 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1714 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4498 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1720 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4508 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1726 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4518 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1732 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4528 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1738 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4538 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1744 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4548 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1750 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4558 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1756 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4568 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1762 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4578 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1768 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4588 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1774 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4598 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1780 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4608 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1786 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4618 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1792 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4628 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1798 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4638 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1804 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4648 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1810 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4658 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1816 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4668 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1822 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4678 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1828 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4688 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1834 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4698 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1840 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4708 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1846 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4718 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1852 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4728 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1858 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4738 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1864 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4748 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1870 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4758 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1876 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4768 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1882 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4778 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1888 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4788 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1894 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4798 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1901 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4808 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1907 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4818 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1913 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4828 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1919 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4838 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1925 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4848 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1931 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4858 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1937 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4868 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1943 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4878 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1950 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4888 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1956 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4898 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1962 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4908 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1968 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4918 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1974 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4928 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1980 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4938 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1986 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4948 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1992 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4958 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1998 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4968 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2004 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4978 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2010 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4988 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2016 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 4998 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2024 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 5005 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2027 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 5012 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2030 "yacc.y" /* yacc.c:1646  */
    {	
	}
#line 5019 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2033 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 5026 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2037 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 5033 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2040 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 5040 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2043 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 5048 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2047 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 5056 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2051 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 5064 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2055 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 5072 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2060 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 5079 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2063 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5090 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2070 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5101 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2077 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5112 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2084 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5123 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2091 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5134 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2098 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5145 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2105 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5156 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2112 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5167 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2119 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5178 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2126 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5189 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2133 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5200 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2140 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5211 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2147 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5222 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2154 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5233 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2161 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5244 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2168 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5255 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2175 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5266 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2182 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5277 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2189 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5288 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 2196 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5299 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2203 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5310 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2210 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5321 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2217 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5332 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2224 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5343 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2231 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5354 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2238 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5365 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2245 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5376 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2252 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5387 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2259 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5398 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2266 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5409 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2273 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5420 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2280 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5431 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2287 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5442 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2294 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5453 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2301 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5464 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2308 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 5475 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2315 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5486 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2322 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5497 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2329 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5508 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2336 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 5519 "yacc.tab.c" /* yacc.c:1646  */
    break;


#line 5523 "yacc.tab.c" /* yacc.c:1646  */
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
#line 2344 "yacc.y" /* yacc.c:1906  */


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
		//cout << i << endl;
	}
	//delete fm;
	//delete rm;
	rm->print_all_record();
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
	if (attrNameList.size() == 1 && attrNameList[0] == "*") {
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
				for (int ii=0; ii<attr[0].size(); ii++) cout << record[0][i][ii+1] << " ";
				cout << endl;
			}
		}
		return;
	}
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
	while (attrName[now]=='(' || attrName[now]==' ') now++;
	for (int k=now; k<attrName.length(); k++)
		if (attrName[k] != ' ' && attrName[k] != ')') temp += attrName[k]; else break;
	attrName = temp;
	now = 0;
	temp = "";
	while (attrName2[now]=='(' || attrName2[now]==' ') now++;
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
		while( yyparse()) {
			
		}
		make();
		/*vector<string>::iterator iter;
		cout << "attrNameList:";  
    		for (iter=attrNameList.begin();iter!=attrNameList.end();iter++)  
        		cout << " " << *iter;   	
		cout << endl;
		*/
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

