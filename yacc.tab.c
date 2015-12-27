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


int a;
string type;
string dbName;
string tbName; 
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


#line 117 "yacc.tab.c" /* yacc.c:339  */

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
    TABLE = 281,
    BLANK = 282,
    NOT = 283,
    NUL = 284
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "yacc.tab.c" /* yacc.c:358  */

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
#define YYLAST   724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  659

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,     2,     2,     2,     2,     2,
      39,    40,    34,    32,    31,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      37,    30,    38,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   103,   107,   113,   120,   126,   134,   140,
     146,   152,   160,   166,   172,   178,   186,   192,   198,   204,
     212,   218,   224,   230,   238,   244,   250,   256,   264,   270,
     278,   284,   290,   296,   302,   308,   314,   320,   328,   334,
     340,   346,   354,   361,   368,   375,   382,   389,   396,   403,
     411,   416,   421,   426,   433,   435,   439,   443,   447,   451,
     455,   459,   463,   469,   471,   475,   479,   483,   487,   491,
     495,   499,   505,   507,   512,   517,   522,   526,   531,   536,
     541,   546,   551,   556,   561,   566,   571,   576,   581,   586,
     591,   596,   601,   608,   610,   616,   622,   628,   634,   640,
     646,   652,   658,   664,   670,   676,   683,   689,   695,   701,
     707,   713,   719,   725,   731,   737,   743,   749,   756,   762,
     768,   774,   780,   786,   792,   798,   804,   810,   816,   822,
     828,   834,   840,   846,   852,   858,   864,   870,   876,   882,
     888,   894,   900,   906,   912,   918,   924,   930,   936,   942,
     948,   954,   960,   966,   973,   979,   985,   991,   997,  1003,
    1009,  1015,  1021,  1027,  1033,  1039,  1045,  1051,  1057,  1063,
    1069,  1075,  1081,  1087,  1094,  1100,  1106,  1112,  1118,  1124,
    1130,  1136,  1142,  1148,  1154,  1160,  1166,  1172,  1178,  1184,
    1190,  1196,  1202,  1208,  1214,  1220,  1226,  1232,  1238,  1244,
    1250,  1256,  1262,  1268,  1274,  1280,  1286,  1292,  1298,  1304,
    1311,  1317,  1323,  1329,  1335,  1341,  1347,  1353,  1360,  1366,
    1372,  1378,  1384,  1390,  1396,  1402,  1408,  1414,  1420,  1426,
    1434,  1436,  1442,  1448,  1454,  1460,  1465,  1470,  1475,  1480,
    1486,  1492,  1498,  1504,  1509,  1514,  1519,  1528,  1530,  1534,
    1538,  1542,  1546,  1550,  1554,  1558,  1562,  1566,  1570,  1574,
    1578,  1582,  1586,  1590,  1597,  1599,  1602,  1605,  1610,  1612,
    1615,  1619,  1623,  1627,  1633,  1635,  1642,  1649,  1656,  1663,
    1670,  1677,  1684,  1691,  1698,  1705,  1712,  1719,  1726,  1733,
    1740,  1747,  1754,  1761,  1768,  1775,  1782,  1789,  1796,  1803,
    1810,  1817,  1824,  1831,  1838,  1845,  1852,  1859,  1866,  1873,
    1880,  1887,  1894,  1901,  1908
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
  "AND", "UPDATE", "SET", "SELECT", "TABLE", "BLANK", "NOT", "NUL", "'='",
  "','", "'+'", "'-'", "'*'", "'/'", "'!'", "'<'", "'>'", "'('", "')'",
  "$accept", "file", "tokenlist", "namelist", "namelist1", "expr",
  "whereclauses", "insertDetail0", "insertDetail", "tableDetail",
  "tableDetail2", "tableDetail3", YY_NULLPTR
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
      61,    44,    43,    45,    42,    47,    33,    60,    62,    40,
      41
};
# endif

#define YYPACT_NINF -230

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-230)))

#define YYTABLE_NINF -275

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     277,    28,    67,   100,   111,   118,   128,   205,   247,   296,
     298,  -230,    -3,    75,   323,   284,   286,   325,   347,    21,
     345,   367,   391,   469,   470,   473,   474,   477,  -230,   478,
     480,   481,   482,   483,   484,   485,   486,   488,   489,   490,
     359,   -13,   288,   328,   493,   329,   466,   494,   497,    21,
     498,   513,   514,   515,   516,   517,   518,   519,   520,   502,
    -230,   500,   330,    64,   501,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   241,   215,    58,   217,   218,   219,
     220,   221,   512,   521,   522,  -230,   523,   191,  -230,   524,
     535,   536,   537,   538,   539,   540,   541,   542,   546,   528,
     342,  -230,   491,    58,     3,   222,  -230,   545,  -230,   547,
    -230,   548,  -230,   549,  -230,   550,   543,   533,   554,   192,
    -230,   555,  -230,   223,    58,   226,   227,   228,   230,   231,
     544,   551,   552,   553,  -230,   556,   557,   558,   316,   531,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,     8,   559,   389,
     560,   561,   242,  -230,  -230,   562,   233,  -230,   564,  -230,
     565,  -230,   566,  -230,   567,  -230,   568,   563,   569,   572,
     192,   577,   570,  -230,  -230,   189,   571,    18,    48,    55,
     580,   457,   129,  -230,   573,    -9,   194,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,    31,   574,   390,   378,   197,   583,
     575,   576,   265,  -230,   578,    10,    48,   179,   579,   581,
     314,   313,  -230,   584,    34,   321,   235,   129,  -230,  -230,
     343,   351,  -230,   582,   195,  -230,   586,    18,   181,   580,
     534,   129,   108,   365,   587,   206,   588,   589,   585,   590,
    -230,   591,    48,   334,  -230,   599,  -230,  -230,   592,   593,
     132,   594,  -230,   595,    17,    48,   374,    73,   596,     1,
      57,  -230,     5,   355,  -230,  -230,   290,    56,    68,    99,
     127,   580,  -230,   605,  -230,   184,  -230,   603,   244,   129,
     364,   597,   600,   598,   458,   461,   606,   210,   178,   609,
     601,  -230,   335,   602,  -230,  -230,  -230,   604,   607,   487,
    -230,  -230,   608,    48,   336,    76,   610,     2,    62,  -230,
    -230,  -230,   376,   101,  -230,  -230,   403,   155,   104,  -230,
    -230,   451,   158,  -230,   611,   295,   612,   143,   154,   174,
     180,  -230,   492,  -230,   495,  -230,   620,  -230,   624,   248,
    -230,  -230,   622,  -230,  -230,   259,   368,   299,   580,   614,
     613,   615,   617,   618,   621,   465,   623,   625,  -230,   627,
     213,   182,   626,  -230,  -230,  -230,   628,   629,  -230,   337,
     630,  -230,  -230,  -230,   418,   107,  -230,  -230,   452,   159,
     110,  -230,  -230,   455,   163,  -230,  -230,  -230,  -230,  -230,
    -230,   421,  -230,  -230,  -230,  -230,   456,  -230,  -230,  -230,
     424,  -230,  -230,  -230,  -230,   459,   631,   632,   580,  -230,
     634,  -230,   642,  -230,   644,  -230,   646,  -230,  -230,  -230,
    -230,  -230,   268,  -230,  -230,   305,   633,   253,   635,   636,
     638,   637,   640,   639,   641,   643,   645,   647,  -230,   648,
     651,  -230,   655,  -230,  -230,  -230,   649,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,   427,  -230,  -230,  -230,  -230,   460,
    -230,  -230,  -230,   430,  -230,  -230,  -230,  -230,   463,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,   333,
     580,   255,  -230,  -230,  -230,  -230,  -230,   650,   580,  -230,
     269,   652,  -230,   653,   654,   656,   657,   659,   658,   661,
     662,   663,   665,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,   377,   113,   664,     6,    63,
     256,  -230,   270,   580,   257,  -230,  -230,   666,  -230,   668,
    -230,   660,   669,   670,   671,   673,   674,   117,   667,    16,
      69,  -230,  -230,  -230,   433,   120,  -230,  -230,   464,   164,
     138,  -230,  -230,   467,   168,  -230,   287,  -230,   258,  -230,
     291,  -230,  -230,   676,  -230,   677,   672,   678,   679,  -230,
    -230,  -230,   436,   145,  -230,  -230,   468,   171,   148,  -230,
    -230,   471,   175,  -230,  -230,  -230,  -230,  -230,  -230,   439,
    -230,  -230,  -230,  -230,   472,  -230,  -230,  -230,   442,  -230,
    -230,  -230,  -230,   475,  -230,  -230,   327,  -230,  -230,  -230,
     681,   682,   683,  -230,  -230,  -230,  -230,  -230,  -230,   445,
    -230,  -230,  -230,  -230,   476,  -230,  -230,  -230,   448,  -230,
    -230,  -230,  -230,   479,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,   684,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,   264,   268,     0,    10,     0,    26,     0,
      14,     0,    18,     0,    22,     0,     0,     0,     0,    63,
      60,     0,    59,     0,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,   266,     0,     0,     0,     0,
      29,   265,    11,    27,    15,    19,    23,   230,     0,     0,
      64,     0,     0,    61,     4,     0,     0,     8,     0,    24,
       0,    12,     0,    16,     0,    20,     0,     0,     0,     0,
      63,     0,     0,   269,   267,     0,   231,   230,   247,     0,
      93,     0,    72,    65,    66,     0,     0,     5,    28,     9,
      25,    13,    17,    21,   230,     0,     0,     0,     0,     0,
       0,     0,     0,   233,   231,     0,   247,     0,   248,   249,
       0,     0,    31,     0,     0,     0,     0,    72,    74,    73,
       0,     0,    67,     0,     0,    71,     0,   230,     0,    93,
       0,    72,     0,   275,     0,     0,     0,     0,     0,     0,
     233,   232,   247,     0,    30,     0,   250,   251,   252,   253,
       0,   235,    35,   239,     0,   247,     0,     0,     0,     0,
       0,    38,     0,     0,    76,    75,     0,     0,     0,     0,
       0,    93,    69,     0,    68,     0,    33,     0,     0,    72,
       0,     0,   287,     0,   276,   281,     0,     0,     0,     0,
       0,   234,     0,   235,    34,   254,   255,   257,   256,     0,
     236,   241,   240,   247,     0,     0,     0,     0,     0,    98,
      94,   102,     0,     0,   138,   142,     0,     0,     0,   130,
     134,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,    77,     0,    78,     0,    79,     0,    80,     0,     0,
      70,    32,     0,    37,    39,     0,     0,     0,    93,     0,
       0,   288,     0,   293,     0,   282,   307,     0,   270,     0,
       0,     0,   237,   236,   261,   258,   262,   259,   242,     0,
     243,    99,    95,   103,     0,     0,   139,   143,     0,     0,
       0,   131,   135,     0,     0,   100,    96,   104,   110,   106,
     114,     0,   140,   144,   154,   158,     0,   122,   118,   126,
       0,   132,   136,   146,   150,     0,     0,     0,    93,    85,
       0,    86,     0,    87,     0,    88,     0,    81,    82,    83,
      84,    50,     0,    36,    41,     0,     0,     0,     0,   277,
       0,     0,     0,     0,   294,     0,   299,   308,   271,   309,
       0,   272,     0,   238,   263,   260,   245,   244,   101,    97,
     105,   111,   107,   115,     0,   141,   145,   155,   159,     0,
     123,   119,   127,     0,   133,   137,   147,   151,     0,   112,
     108,   116,   156,   160,   124,   120,   128,   148,   152,     0,
      93,     0,    89,    90,    91,    92,    52,     0,    93,    51,
       0,   278,   289,     0,   279,     0,   283,     0,     0,     0,
     300,   301,   310,   273,   246,   113,   109,   117,   157,   161,
     125,   121,   129,   149,   153,     0,     0,     0,     0,     0,
       0,    42,     0,    93,     0,    53,   290,   280,   291,   284,
     295,     0,   285,     0,     0,     0,   302,     0,     0,     0,
       0,   166,   162,   170,     0,     0,   194,   198,     0,     0,
       0,   186,   190,     0,     0,    46,     0,    44,     0,    43,
       0,   292,   296,   286,   297,   311,     0,     0,     0,   167,
     164,   171,     0,     0,   197,   199,     0,     0,     0,   187,
     191,     0,     0,   168,   163,   172,   178,   174,   182,     0,
     195,   200,   210,   214,     0,   222,   218,   226,     0,   188,
     192,   202,   206,     0,    48,    47,     0,    45,   298,   303,
     312,   313,     0,   169,   165,   173,   179,   176,   183,     0,
     196,   201,   211,   215,     0,   223,   220,   227,     0,   189,
     193,   203,   207,     0,   180,   175,   184,   212,   216,   224,
     219,   228,   204,   208,    49,   304,   305,   314,   181,   177,
     185,   213,   217,   225,   221,   229,   205,   209,   306
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,   675,   324,  -215,  -229,  -174,  -205,    90,
    -230,  -230
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    41,   152,   221,   216,   179,   211,   105,
     138,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     278,   243,   263,   207,   314,   376,   315,   377,   136,   546,
      29,   547,   223,   323,    62,   176,   280,   241,    63,   574,
     228,   575,   224,    30,   302,   204,    39,   324,   316,   378,
     137,   317,   379,   548,  -274,   177,   549,   292,   176,   318,
     380,   253,   339,   576,   550,   205,   577,   178,    40,   242,
     304,   208,   209,   275,   578,    12,   303,   206,   227,   331,
     319,   254,   320,   212,   346,   381,   551,   382,   552,    88,
     178,   333,   579,   255,   580,   210,   309,   310,   311,   371,
     372,   373,   213,   332,   321,   103,   214,   322,    31,   383,
     553,    89,   384,   554,    13,   334,   581,   104,   369,   582,
     312,    32,   335,   374,   388,   389,   390,   397,   398,   399,
     451,   452,   453,   460,   461,   462,   541,   542,   543,   427,
     569,   570,   571,   586,   587,   588,   336,    14,   391,   281,
     337,   400,   218,   219,   454,   297,   298,   463,    15,   224,
     544,   595,   596,   597,   572,    16,   409,   589,   616,   617,
     618,   625,   626,   627,   338,    17,   220,   411,   394,   299,
     395,   403,   457,   404,   458,   598,   466,   592,   467,   593,
     410,   601,   619,   602,   622,   628,   623,   413,   631,   481,
     632,   412,   396,   415,   358,   405,   459,   244,   441,   276,
     468,   594,   341,   135,   200,   603,   120,   150,   624,   225,
     272,   414,   633,   201,   233,   359,   245,   416,   277,   442,
     214,   342,   214,   285,   156,   214,   202,   356,   121,   151,
     439,   226,   273,   101,   234,   106,   108,   110,   112,   114,
     140,   154,    18,   286,   157,   159,   161,   357,   163,   165,
     440,   188,   102,   261,   107,   109,   111,   113,   115,   141,
     155,   520,   344,   158,   160,   162,   421,   164,   166,   524,
     141,   489,   262,   521,   555,   559,   605,   424,   100,   185,
     238,   345,    63,   186,    19,   422,   486,   525,   557,   239,
     490,   324,   522,   556,   560,   606,     1,     2,     3,     4,
     324,   324,   324,     5,   558,   604,     6,    34,    28,   607,
       7,    64,     8,    36,     9,    20,    21,    22,    23,   324,
      35,   326,    24,   324,    65,    25,   407,   248,   249,    26,
     426,    27,   327,   328,   329,   330,   487,   327,   328,   329,
     330,   327,   328,   329,   330,   644,    33,   327,   328,   329,
     330,    66,    69,   173,   250,    37,   264,   265,   256,   324,
      86,   257,    38,   251,    67,    70,   174,   258,   259,   260,
     515,    87,   133,   516,    61,   250,   250,   250,   250,   517,
     518,   519,    42,    87,   293,   362,   370,   446,   266,   385,
     386,   387,   325,   267,   268,   269,   270,   267,   268,   269,
     270,   347,   282,   283,    43,   425,   267,   268,   269,   270,
     267,   268,   269,   270,   305,   232,   392,   537,   393,   186,
     306,   307,   308,   538,   539,   540,   181,   230,    44,   182,
     231,   448,   449,   450,   469,   470,   471,   474,   475,   476,
     505,   506,   507,   510,   511,   512,   583,   584,   585,   613,
     614,   615,   634,   635,   636,   639,   640,   641,   648,   649,
     650,   653,   654,   655,   401,   455,   402,   456,   464,   472,
     465,   473,   477,   508,   478,   509,   513,   590,   514,   591,
     599,   620,   600,   621,   629,   637,   630,   638,   642,   651,
     643,   652,   656,    71,   657,   351,   352,   217,   353,   354,
     366,   367,   434,   435,   197,   417,    45,    46,   418,   134,
      47,    48,    73,    75,    49,    50,    68,    51,    52,    53,
      54,    55,    56,    57,    72,    58,    59,    60,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    90,   122,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   116,
     123,   124,   125,   126,   127,   128,   129,   130,   117,   118,
     119,   131,   132,   142,   148,   143,   144,   145,   146,   149,
     153,   147,   175,   172,   279,     0,   184,     0,     0,     0,
     187,   167,   189,   190,   191,   192,   193,   196,   168,   169,
     170,   194,   198,   141,   171,   215,   180,   183,   235,     0,
     195,   274,   252,   287,   284,     0,     0,   199,   203,     0,
     222,   229,   236,   237,   288,   240,   246,   294,   247,   271,
     340,   343,   289,   355,   360,     0,   361,   290,   291,   295,
     296,   300,   301,   419,   348,   350,   313,   420,   349,   363,
     423,   364,   437,   438,   365,   368,   479,   482,   406,   408,
     375,   428,   429,   430,   431,   483,   432,   484,   433,   485,
     436,     0,     0,   443,     0,   444,   445,   447,   502,   480,
     488,   503,     0,   492,   491,   493,   494,   495,   496,   497,
     498,     0,     0,   499,   500,   501,   504,   523,     0,   526,
       0,   528,   527,     0,   530,   529,   531,   532,   533,   563,
     534,   535,   536,   561,   545,   562,   564,   573,   566,   565,
     567,   610,   568,   608,   609,     0,   612,   611,   645,   646,
       0,   658,   647,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
     229,   206,   217,   177,     3,     3,     5,     5,     5,     3,
      13,     5,    21,     8,    27,     7,   231,     7,    31,     3,
     194,     5,    31,    26,     7,     7,     5,    22,    27,    27,
      27,    30,    30,    27,    31,    27,    30,   242,     7,    38,
      38,     7,   271,    27,    38,    27,    30,    39,    27,    39,
     255,     3,     4,   227,    38,    27,    39,    39,    27,     3,
       3,    27,     5,     8,   279,     3,     3,     5,     5,     5,
      39,     3,     3,    39,     5,    27,     3,     4,     5,     3,
       4,     5,    27,    27,    27,    27,    31,    30,    13,    27,
      27,    27,    30,    30,    27,    27,    27,    39,   303,    30,
      27,    26,     3,    27,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     3,     4,     5,   348,
       3,     4,     5,     3,     4,     5,    27,    27,    27,    21,
       3,    27,     3,     4,    27,     3,     4,    27,    27,    31,
      27,     3,     4,     5,    27,    27,     3,    27,     3,     4,
       5,     3,     4,     5,    27,    27,    27,     3,     3,    27,
       5,     3,     3,     5,     5,    27,     3,     3,     5,     5,
      27,     3,    27,     5,     3,    27,     5,     3,     3,   408,
       5,    27,    27,     3,     6,    27,    27,     8,     6,     8,
      27,    27,     8,   103,     5,    27,     5,     5,    27,     5,
       5,    27,    27,    14,     7,    27,    27,    27,    27,    27,
      31,    27,    31,     7,   124,    31,    27,     7,    27,    27,
       7,    27,    27,     8,    27,     8,     8,     8,     8,     8,
       8,     8,    27,    27,     8,     8,     8,    27,     8,     8,
      27,     8,    27,     8,    27,    27,    27,    27,    27,    27,
      27,   480,     8,    27,    27,    27,     8,    27,    27,   488,
      27,     8,    27,     8,     8,     8,     8,     8,    27,    27,
       5,    27,    31,    31,    27,    27,     8,     8,     8,    14,
      27,    22,    27,    27,    27,    27,     9,    10,    11,    12,
      22,    22,    22,    16,   523,     8,    19,    13,     0,     8,
      23,    13,    25,    17,    27,     9,    10,    11,    12,    22,
      26,    21,    16,    22,    26,    19,    21,     3,     4,    23,
      21,    25,    32,    33,    34,    35,    21,    32,    33,    34,
      35,    32,    33,    34,    35,     8,    13,    32,    33,    34,
      35,    13,    13,    27,    31,    20,     3,     4,    27,    22,
      20,    30,     5,    40,    26,    26,    40,    36,    37,    38,
      27,    31,    20,    30,     5,    31,    31,    31,    31,    36,
      37,    38,    27,    31,    40,    40,    40,    40,    27,     3,
       4,     5,    27,    32,    33,    34,    35,    32,    33,    34,
      35,    27,    27,    28,    27,    27,    32,    33,    34,    35,
      32,    33,    34,    35,    30,    27,     3,    30,     5,    31,
      36,    37,    38,    36,    37,    38,    27,    27,    27,    30,
      30,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     3,     4,     5,     3,
       4,     5,     3,     4,     5,     3,     4,     5,     3,     4,
       5,     3,     4,     5,     3,     3,     5,     5,     3,     3,
       5,     5,     3,     3,     5,     5,     3,     3,     5,     5,
       3,     3,     5,     5,     3,     3,     5,     5,     3,     3,
       5,     5,     3,    17,     5,    27,    28,    30,    27,    28,
       3,     4,    27,    28,   170,     3,    27,    27,     3,     8,
      27,    27,     5,     5,    27,    27,    13,    27,    27,    27,
      27,    27,    27,    27,    20,    27,    27,    27,     5,     5,
       5,     5,     5,     5,     5,     5,    24,    27,    27,     5,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
       5,     5,     5,     5,     5,     5,     5,     5,    27,    27,
      27,     5,    24,     8,    21,     8,     8,     8,     8,     5,
       5,    18,    31,     5,    30,    -1,     5,    -1,    -1,    -1,
       8,    27,     8,     8,     8,     8,     8,     5,    27,    27,
      27,    18,     5,    27,    27,     5,    27,    27,     5,    -1,
      21,     5,     8,     5,     7,    -1,    -1,    27,    27,    -1,
      27,    27,    27,    27,    15,    27,    27,     8,    27,    27,
       5,     8,    27,     7,     5,    -1,    15,    27,    27,    27,
      27,    27,    27,     3,    27,    27,    30,     3,    28,    27,
       8,    27,     7,     6,    27,    27,     5,     3,    27,    27,
      30,    27,    29,    28,    27,     3,    28,     3,    27,     3,
      27,    -1,    -1,    27,    -1,    27,    27,    27,     7,    27,
      27,     6,    -1,    27,    29,    27,    29,    27,    29,    28,
      27,    -1,    -1,    28,    27,    27,    27,    27,    -1,    27,
      -1,    27,    29,    -1,    27,    29,    27,    29,    27,    29,
      28,    28,    27,    27,    30,    27,    27,    30,    27,    29,
      27,    29,    28,    27,    27,    -1,    27,    29,    27,    27,
      -1,    27,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    12,    16,    19,    23,    25,    27,
      42,    43,    27,    27,    27,    27,    27,    27,    27,    27,
       9,    10,    11,    12,    16,    19,    23,    25,     0,    13,
      26,    13,    26,    13,    13,    26,    17,    20,     5,     5,
      27,    44,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,     5,    27,    31,    13,    26,    13,    26,    13,    13,
      26,    17,    20,     5,    44,     5,     5,     5,     5,     5,
       5,     5,     5,     5,    24,    27,    20,    31,     5,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,     8,    27,    27,    39,    50,     8,    27,     8,    27,
       8,    27,     8,    27,     8,    27,    27,    27,    27,    27,
       5,    27,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,    24,    20,     8,    50,     5,    27,    51,    52,
       8,    27,     8,     8,     8,     8,     8,    18,    21,     5,
       5,    27,    45,     5,     8,    27,    50,     8,    27,     8,
      27,     8,    27,     8,    27,     8,    27,    27,    27,    27,
      27,    27,     5,    27,    40,    31,     7,    27,    39,    48,
      27,    27,    30,    27,     5,    27,    31,     8,     8,     8,
       8,     8,     8,     8,    18,    21,     5,    45,     5,    27,
       5,    14,    27,    27,     7,    27,    39,    48,     3,     4,
      27,    49,     8,    27,    31,     5,    47,    30,     3,     4,
      27,    46,    27,    21,    31,     5,    27,    27,    48,    27,
      27,    30,    27,     7,    27,     5,    27,    27,     5,    14,
      27,     7,    39,    49,     8,    27,    27,    27,     3,     4,
      31,    40,     8,     7,    27,    39,    27,    30,    36,    37,
      38,     8,    27,    46,     3,     4,    27,    32,    33,    34,
      35,    27,     5,    27,     5,    48,     8,    27,    47,    30,
      46,    21,    27,    28,     7,     7,    27,     5,    15,    27,
      27,    27,    49,    40,     8,    27,    27,     3,     4,    27,
      27,    27,     7,    39,    49,    30,    36,    37,    38,     3,
       4,     5,    27,    30,     3,     5,    27,    30,    38,     3,
       5,    27,    30,     8,    22,    27,    21,    32,    33,    34,
      35,     3,    27,     3,    27,     3,    27,     3,    27,    47,
       5,     8,    27,     8,     8,    27,    46,    27,    27,    28,
      27,    27,    28,    27,    28,     7,     7,    27,     6,    27,
       5,    15,    40,    27,    27,    27,     3,     4,    27,    49,
      40,     3,     4,     5,    27,    30,     3,     5,    27,    30,
      38,     3,     5,    27,    30,     3,     4,     5,     3,     4,
       5,    27,     3,     5,     3,     5,    27,     3,     4,     5,
      27,     3,     5,     3,     5,    27,    27,    21,    27,     3,
      27,     3,    27,     3,    27,     3,    27,     3,     3,     3,
       3,     8,    27,     8,     8,    27,    21,    47,    27,    29,
      28,    27,    28,    27,    27,    28,    27,     7,     6,     7,
      27,     6,    27,    27,    27,    27,    40,    27,     3,     4,
       5,     3,     4,     5,    27,     3,     5,     3,     5,    27,
       3,     4,     5,    27,     3,     5,     3,     5,    27,     3,
       4,     5,     3,     5,     3,     4,     5,     3,     5,     5,
      27,    47,     3,     3,     3,     3,     8,    21,    27,     8,
      27,    29,    27,    27,    29,    27,    29,    28,    27,    28,
      27,    27,     7,     6,    27,     3,     4,     5,     3,     5,
       3,     4,     5,     3,     5,    27,    30,    36,    37,    38,
      47,     8,    27,    27,    47,     8,    27,    29,    27,    29,
      27,    27,    29,    27,    28,    28,    27,    30,    36,    37,
      38,     3,     4,     5,    27,    30,     3,     5,    27,    30,
      38,     3,     5,    27,    30,     8,    27,     8,    47,     8,
      27,    27,    27,    29,    27,    29,    27,    27,    28,     3,
       4,     5,    27,    30,     3,     5,    27,    30,    38,     3,
       5,    27,    30,     3,     4,     5,     3,     4,     5,    27,
       3,     5,     3,     5,    27,     3,     4,     5,    27,     3,
       5,     3,     5,    27,     8,     8,    27,     8,    27,    27,
      29,    29,    27,     3,     4,     5,     3,     4,     5,    27,
       3,     5,     3,     5,    27,     3,     4,     5,    27,     3,
       5,     3,     5,    27,     3,     4,     5,     3,     5,     3,
       4,     5,     3,     5,     8,    27,    27,    29,     3,     4,
       5,     3,     5,     3,     4,     5,     3,     5,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    50,    50,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     7,     8,     6,     7,     7,     8,
       6,     7,     7,     8,     6,     7,     7,     8,     6,     7,
       7,     8,     6,     7,     7,     8,     6,     7,     8,     7,
      10,     9,    11,    10,    11,    10,    12,    11,    10,    11,
      11,    12,    14,    15,    15,    16,    15,    16,    16,    17,
      12,    13,    13,    14,     0,     1,     2,     2,     3,     4,
       4,     5,     3,     0,     1,     2,     2,     3,     4,     4,
       5,     3,     0,     1,     1,     2,     2,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     5,
       5,     5,     5,     0,     3,     4,     4,     5,     3,     4,
       4,     5,     3,     4,     4,     5,     4,     5,     5,     6,
       4,     5,     5,     6,     4,     5,     5,     6,     4,     5,
       5,     6,     4,     5,     5,     6,     4,     5,     5,     6,
       3,     4,     4,     5,     3,     4,     4,     5,     3,     4,
       4,     5,     3,     4,     4,     5,     4,     5,     5,     6,
       4,     5,     5,     6,     4,     5,     5,     6,     4,     5,
       5,     6,     7,     8,     8,     9,     7,     8,     8,     9,
       7,     8,     8,     9,     8,     9,     9,    10,     8,     9,
       9,    10,     8,     9,     9,    10,     7,     8,     8,     9,
       7,     8,     8,     9,     7,     8,     9,     8,     7,     8,
       8,     9,     8,     9,     9,    10,     8,     9,     9,    10,
       8,     9,     9,    10,     8,     9,     9,    10,     8,     9,
       9,    10,     8,     9,     9,    10,     8,     9,     9,    10,
       0,     1,     2,     2,     3,     3,     4,     4,     5,     3,
       4,     4,     5,     5,     6,     6,     7,     0,     1,     1,
       2,     2,     2,     2,     3,     3,     3,     3,     4,     4,
       5,     4,     4,     5,     0,     2,     2,     3,     0,     2,
       6,     7,     7,     8,     0,     4,     5,     7,     8,     8,
       9,     5,     6,     8,     9,     9,    10,     5,     6,     8,
       9,     9,    10,     6,     7,     9,    10,    10,    11,     7,
       8,     8,     9,    11,    12,    12,    13,     6,     7,     7,
       8,    10,    11,    11,    12
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
#line 100 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 1706 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 103 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 1713 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";		
		YYACCEPT;
	}
#line 1723 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 114 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		cout << "CREATE database" << endl;
		type = "create database";
		YYACCEPT;
	}
#line 1734 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 121 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1744 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 127 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1754 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 135 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1764 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 141 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1774 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 147 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1784 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 153 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1794 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 161 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1804 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 167 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1814 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 173 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1824 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 179 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1834 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 187 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1844 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 193 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1854 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 199 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1864 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1874 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 213 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 1884 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 219 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 1894 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 225 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 1904 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 231 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 1914 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 239 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 1924 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 245 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 1934 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 251 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 1944 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 257 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 1954 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 265 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 1964 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 271 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 1974 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 279 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 1984 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 285 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 1994 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 291 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2004 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 297 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2014 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 303 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2024 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 309 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2034 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 315 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2044 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 321 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2054 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 329 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2064 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 335 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2074 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 341 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2084 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 347 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2094 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 355 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2105 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 362 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2116 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 369 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2127 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 376 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2138 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 383 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2149 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 390 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2160 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 397 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2171 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 404 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2182 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 412 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2191 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 417 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2200 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 422 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2209 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 427 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2218 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 433 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2225 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 436 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2233 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 440 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-1].m_sId));
	}
#line 2241 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 444 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2249 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 448 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-1].m_sId));
	}
#line 2257 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 452 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2265 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 456 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2273 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 460 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2281 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 464 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2289 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 469 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2296 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 472 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2304 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 476 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[-1].m_sId));
	}
#line 2312 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 480 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2320 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 484 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[-1].m_sId));
	}
#line 2328 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 488 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2336 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 492 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2344 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 496 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2352 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 500 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2360 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 505 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2367 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 508 "yacc.y" /* yacc.c:1646  */
    {
		cout << 1 << endl;
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2376 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 513 "yacc.y" /* yacc.c:1646  */
    {	
		cout << 2 << endl;
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2385 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 518 "yacc.y" /* yacc.c:1646  */
    {
		cout << 5 << endl;
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2394 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 523 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2402 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 527 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2411 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 532 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2420 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 537 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2429 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 542 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2438 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 547 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2447 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 552 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2456 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 557 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2465 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 562 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2474 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 567 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2483 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 572 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2492 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 577 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2501 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 582 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2510 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 587 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2519 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 592 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2528 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 597 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2537 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 602 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2546 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 608 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2553 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 611 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2563 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 617 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2573 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 623 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2583 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 629 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2593 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 635 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2603 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 641 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2613 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 647 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2623 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 653 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2633 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 659 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2643 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 665 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2653 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 671 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2663 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 677 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2673 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 684 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2683 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 690 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2693 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 696 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2703 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 702 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2713 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 708 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2723 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 714 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2733 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 720 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2743 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 726 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2753 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 732 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2763 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 738 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2773 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 744 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2783 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 750 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2793 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 757 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2803 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 763 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2813 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 769 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2823 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 775 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2833 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 781 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2843 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 787 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2853 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 793 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2863 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 799 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2873 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 805 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2883 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 811 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2893 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 817 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2903 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 823 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2913 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 829 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2923 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 835 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2933 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 841 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2943 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 847 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2953 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 853 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2963 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 859 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2973 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 865 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2983 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 871 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2993 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 877 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3003 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 883 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3013 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 889 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3023 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 895 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3033 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 901 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3043 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 907 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3053 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 913 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3063 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 919 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3073 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 925 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3083 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 931 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3093 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 937 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3103 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 943 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3113 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 949 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3123 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 955 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3133 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 961 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3143 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 967 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3153 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 974 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3163 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 980 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3173 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 986 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3183 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 992 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3193 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 998 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3203 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1004 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3213 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3223 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1016 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3233 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3243 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1028 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3253 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3263 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1040 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3273 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1046 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3283 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1052 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3293 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1058 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3303 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3313 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3323 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1076 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3333 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3343 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1088 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3353 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3363 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1101 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3373 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1107 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3383 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1113 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3393 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1119 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3403 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1125 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3413 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3423 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1137 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3433 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1143 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3443 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1149 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3453 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1155 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3463 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3473 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3483 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3493 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3503 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3513 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3523 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3533 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3543 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3553 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1215 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3563 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3573 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3583 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1233 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3593 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3603 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1245 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3613 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1251 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3623 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1257 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3633 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1263 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3643 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1269 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3653 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1275 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3663 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1281 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3673 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1287 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3683 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1293 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3693 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1299 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3703 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1305 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3713 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3723 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3733 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1324 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3743 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1330 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3753 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1336 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3763 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1342 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3773 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1348 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3783 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1354 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3793 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1361 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3803 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3813 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1373 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3823 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1379 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3833 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1385 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3843 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1391 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3853 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1397 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3863 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1403 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3873 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1409 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3883 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1415 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3893 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1421 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3903 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1427 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3913 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1434 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3920 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1437 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3930 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1443 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3940 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1449 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3950 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1455 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3960 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1461 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3969 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1466 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3978 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1471 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3987 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1476 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3996 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1481 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4006 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1487 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4016 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1493 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4026 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1499 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4036 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1505 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4045 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1510 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4054 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1515 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4063 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1520 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4072 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1528 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4079 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1531 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4087 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1535 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4095 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1539 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4103 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1543 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4111 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1547 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4119 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1551 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4127 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1555 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4135 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1559 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4143 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1563 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4151 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1567 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4159 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1571 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4167 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1575 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4175 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1579 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4183 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1583 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4191 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1587 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4199 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1591 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4207 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1597 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4214 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1600 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4221 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1603 "yacc.y" /* yacc.c:1646  */
    {	
	}
#line 4228 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1606 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4235 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1610 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4242 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1613 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4249 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1616 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4257 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1620 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4265 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1624 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4273 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1628 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4281 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1633 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4288 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1636 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4299 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1643 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4310 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1650 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4321 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1657 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4332 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1664 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4343 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1671 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4354 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1678 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4365 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1685 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4376 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1692 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4387 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1699 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4398 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1706 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4409 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1713 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4420 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1720 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4431 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1727 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4442 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1734 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4453 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1741 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4464 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1748 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4475 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1755 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4486 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1762 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4497 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1769 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4508 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1776 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4519 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1783 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4530 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1790 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4541 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1797 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4552 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1804 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4563 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1811 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4574 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1818 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4585 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1825 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4596 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1832 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4607 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1839 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4618 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1846 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4629 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1853 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4640 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1860 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4651 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1867 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4662 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1874 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4673 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1881 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4684 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1888 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4695 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1895 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4706 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1902 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4717 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1909 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4728 "yacc.tab.c" /* yacc.c:1646  */
    break;


#line 4732 "yacc.tab.c" /* yacc.c:1646  */
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
#line 1917 "yacc.y" /* yacc.c:1906  */


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
	for (int i=0; i<attrValueList.size(); i++) {
		newRecord.clear();
		for (int j=0; j<attrValueList[i].size(); j++)
			newRecord.push_back(attrValueList[i][j]);
		
		rm->insert_record(fileID, newRecord);
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
			cout << exprValueList[0][0] << " " << set << endl;
			if (exprValueList[0][0] == '\'' && exprOpList.size()>0) {
				printf("Operator error! \n");
				return;
			}
			if (exprValueList[0][0] == '\'' && type[set]==1) {
				printf("Operator error! \n");
				return;
			}
			if (exprValueList[0][0] != '\'' && type[set]==0) {
				printf("Operator error! \n");
				return;
			}
			if (exprValueList[0][0] == '\'') {
				string tempa = "";
				for (int k=1; k<exprValueList[0].length()-1; k++) tempa += exprValueList[0][k];
				cout << fileID << " " << atoi(record[i][0].c_str()) << " " << attr[set] << " " << exprValueList[0] << endl;
				if (rm->update_record(fileID, atoi(record[i][0].c_str()), attr[set], exprValueList[0])) {
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
	cout << "selectFrom" << endl;
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
		
		
		if (type != "") work();
		
		cout << "type: " << type << endl;	
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

	}	
	return 0;
}

