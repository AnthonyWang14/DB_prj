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
/* Tokens.  */
#define NUMBER 258
#define STRING 259
#define NAME 260
#define ATTRNAME 261
#define ATTRNUM 262
#define EXIT 263
#define CREATE 264
#define DROP 265
#define USE 266
#define SHOW 267
#define DATABASE 268
#define PRIMARY 269
#define KEY 270
#define INSERT 271
#define INTO 272
#define VALUES 273
#define DELETE 274
#define FROM 275
#define WHERE 276
#define AND 277
#define UPDATE 278
#define SET 279
#define SELECT 280
#define GROUP 281
#define BY 282
#define TABLE 283
#define BLANK 284
#define NOT 285
#define NUL 286




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

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
int cnt;
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
#line 225 "yacc.tab.c"

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   944

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  375
/* YYNRULES -- Number of states.  */
#define YYNSTATES  882

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    14,    23,    30,    38,    46,
      55,    62,    70,    78,    87,    94,   102,   110,   119,   126,
     134,   142,   151,   158,   166,   174,   183,   190,   198,   207,
     215,   226,   238,   250,   263,   278,   294,   310,   327,   343,
     360,   377,   395,   408,   422,   436,   451,   464,   478,   492,
     507,   517,   528,   539,   551,   562,   574,   586,   599,   617,
     636,   655,   675,   694,   714,   734,   755,   774,   794,   814,
     835,   855,   876,   897,   919,   930,   940,   952,   963,   975,
     986,   999,  1011,  1012,  1014,  1016,  1019,  1022,  1026,  1030,
    1035,  1040,  1046,  1050,  1055,  1060,  1066,  1070,  1075,  1080,
    1086,  1092,  1099,  1106,  1114,  1115,  1117,  1119,  1121,  1124,
    1127,  1130,  1134,  1138,  1142,  1147,  1152,  1158,  1163,  1168,
    1174,  1179,  1184,  1190,  1195,  1200,  1205,  1211,  1217,  1224,
    1230,  1236,  1243,  1249,  1255,  1262,  1263,  1265,  1268,  1273,
    1278,  1284,  1288,  1289,  1291,  1294,  1299,  1304,  1310,  1314,
    1315,  1317,  1319,  1321,  1324,  1327,  1330,  1334,  1338,  1342,
    1346,  1351,  1356,  1361,  1366,  1371,  1376,  1381,  1386,  1392,
    1398,  1404,  1410,  1414,  1418,  1422,  1426,  1431,  1436,  1441,
    1446,  1451,  1456,  1461,  1466,  1472,  1478,  1484,  1490,  1491,
    1495,  1500,  1505,  1511,  1515,  1520,  1525,  1531,  1535,  1540,
    1545,  1551,  1556,  1562,  1568,  1575,  1580,  1586,  1592,  1599,
    1604,  1610,  1616,  1623,  1628,  1634,  1640,  1647,  1652,  1658,
    1664,  1671,  1676,  1682,  1688,  1695,  1699,  1704,  1709,  1715,
    1719,  1724,  1729,  1735,  1739,  1744,  1749,  1755,  1759,  1764,
    1769,  1775,  1780,  1786,  1792,  1799,  1804,  1810,  1816,  1823,
    1828,  1834,  1840,  1847,  1852,  1858,  1864,  1871,  1879,  1888,
    1897,  1907,  1915,  1924,  1933,  1943,  1951,  1960,  1969,  1979,
    1988,  1998,  2008,  2019,  2028,  2038,  2048,  2059,  2068,  2078,
    2088,  2099,  2107,  2116,  2125,  2135,  2143,  2152,  2161,  2171,
    2179,  2188,  2198,  2207,  2215,  2224,  2233,  2243,  2252,  2262,
    2272,  2283,  2292,  2302,  2312,  2323,  2332,  2342,  2352,  2363,
    2372,  2382,  2392,  2403,  2412,  2422,  2432,  2443,  2452,  2462,
    2472,  2483,  2492,  2502,  2512,  2523,  2524,  2527,  2530,  2534,
    2535,  2538,  2545,  2553,  2561,  2570,  2571,  2576,  2582,  2590,
    2599,  2608,  2618,  2624,  2631,  2640,  2650,  2660,  2671,  2677,
    2684,  2693,  2703,  2713,  2724,  2731,  2739,  2749,  2760,  2771,
    2783,  2791,  2800,  2809,  2819,  2831,  2844,  2857,  2871,  2878,
    2886,  2894,  2903,  2914,  2926,  2938
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    -1,    -1,    29,     9,    29,    13,
      29,     5,     8,    -1,    29,     9,    29,    13,    29,     5,
      29,     8,    -1,     9,    29,    13,    29,     5,     8,    -1,
       9,    29,    13,    29,     5,    29,     8,    -1,    29,    10,
      29,    13,    29,     5,     8,    -1,    29,    10,    29,    13,
      29,     5,    29,     8,    -1,    10,    29,    13,    29,     5,
       8,    -1,    10,    29,    13,    29,     5,    29,     8,    -1,
      29,    11,    29,    13,    29,     5,     8,    -1,    29,    11,
      29,    13,    29,     5,    29,     8,    -1,    11,    29,    13,
      29,     5,     8,    -1,    11,    29,    13,    29,     5,    29,
       8,    -1,    29,    12,    29,    13,    29,     5,     8,    -1,
      29,    12,    29,    13,    29,     5,    29,     8,    -1,    12,
      29,    13,    29,     5,     8,    -1,    12,    29,    13,    29,
       5,    29,     8,    -1,    29,    12,    29,    28,    29,     5,
       8,    -1,    29,    12,    29,    28,    29,     5,    29,     8,
      -1,    12,    29,    28,    29,     5,     8,    -1,    12,    29,
      28,    29,     5,    29,     8,    -1,    29,    10,    29,    28,
      29,     5,     8,    -1,    29,    10,    29,    28,    29,     5,
      29,     8,    -1,    10,    29,    28,    29,     5,     8,    -1,
      10,    29,    28,    29,     5,    29,     8,    -1,    29,     9,
      29,    28,    29,     5,    52,     8,    -1,     9,    29,    28,
      29,     5,    52,     8,    -1,    19,    29,    20,    29,     5,
      29,    21,    29,    51,     8,    -1,    29,    19,    29,    20,
      29,     5,    29,    21,    29,    51,     8,    -1,    19,    29,
      20,    29,     5,    29,    21,    29,    51,    29,     8,    -1,
      29,    19,    29,    20,    29,     5,    29,    21,    29,    51,
      29,     8,    -1,    23,    29,     5,    29,    24,    29,     5,
      32,    50,    29,    21,    29,    51,     8,    -1,    29,    23,
      29,     5,    29,    24,    29,     5,    32,    50,    29,    21,
      29,    51,     8,    -1,    23,    29,     5,    29,    24,    29,
       5,    32,    50,    29,    21,    29,    51,    29,     8,    -1,
      29,    23,    29,     5,    29,    24,    29,     5,    32,    50,
      29,    21,    29,    51,    29,     8,    -1,    23,    29,     5,
      29,    24,    29,     5,    29,    32,    50,    29,    21,    29,
      51,     8,    -1,    29,    23,    29,     5,    29,    24,    29,
       5,    29,    32,    50,    29,    21,    29,    51,     8,    -1,
      23,    29,     5,    29,    24,    29,     5,    29,    32,    50,
      29,    21,    29,    51,    29,     8,    -1,    29,    23,    29,
       5,    29,    24,    29,     5,    29,    32,    50,    29,    21,
      29,    51,    29,     8,    -1,    25,    29,    33,    29,    20,
      29,     5,    29,    21,    29,    51,     8,    -1,    29,    25,
      29,    33,    29,    20,    29,     5,    29,    21,    29,    51,
       8,    -1,    25,    29,    33,    29,    20,    29,     5,    29,
      21,    29,    51,    29,     8,    -1,    29,    25,    29,    33,
      29,    20,    29,     5,    29,    21,    29,    51,    29,     8,
      -1,    25,    29,    48,    29,    20,    29,    49,    29,    21,
      29,    51,     8,    -1,    29,    25,    29,    48,    29,    20,
      29,    49,    29,    21,    29,    51,     8,    -1,    25,    29,
      48,    29,    20,    29,    49,    29,    21,    29,    51,    29,
       8,    -1,    29,    25,    29,    48,    29,    20,    29,    49,
      29,    21,    29,    51,    29,     8,    -1,    25,    29,     5,
       6,    29,    20,    29,     5,     8,    -1,    29,    25,    29,
       5,     6,    29,    20,    29,     5,     8,    -1,    25,    29,
       5,    29,     6,    29,    20,    29,     5,     8,    -1,    29,
      25,    29,     5,    29,     6,    29,    20,    29,     5,     8,
      -1,    25,    29,     5,     6,    29,    20,    29,     5,    29,
       8,    -1,    29,    25,    29,     5,     6,    29,    20,    29,
       5,    29,     8,    -1,    25,    29,     5,    29,     6,    29,
      20,    29,     5,    29,     8,    -1,    29,    25,    29,     5,
      29,     6,    29,    20,    29,     5,    29,     8,    -1,    25,
      29,     5,    34,     5,     6,    29,    20,    29,     5,    29,
      26,    29,    27,    29,     5,     8,    -1,    25,    29,     5,
      34,     5,     6,    29,    20,    29,     5,    29,    26,    29,
      27,    29,     5,    29,     8,    -1,    29,    25,    29,     5,
      34,     5,     6,    29,    20,    29,     5,    29,    26,    29,
      27,    29,     5,     8,    -1,    29,    25,    29,     5,    34,
       5,     6,    29,    20,    29,     5,    29,    26,    29,    27,
      29,     5,    29,     8,    -1,    25,    29,     5,    29,    34,
       5,     6,    29,    20,    29,     5,    29,    26,    29,    27,
      29,     5,     8,    -1,    25,    29,     5,    29,    34,     5,
       6,    29,    20,    29,     5,    29,    26,    29,    27,    29,
       5,    29,     8,    -1,    29,    25,    29,     5,    29,    34,
       5,     6,    29,    20,    29,     5,    29,    26,    29,    27,
      29,     5,     8,    -1,    29,    25,    29,     5,    29,    34,
       5,     6,    29,    20,    29,     5,    29,    26,    29,    27,
      29,     5,    29,     8,    -1,    25,    29,     5,    34,    29,
       5,     6,    29,    20,    29,     5,    29,    26,    29,    27,
      29,     5,     8,    -1,    25,    29,     5,    34,    29,     5,
       6,    29,    20,    29,     5,    29,    26,    29,    27,    29,
       5,    29,     8,    -1,    29,    25,    29,     5,    34,    29,
       5,     6,    29,    20,    29,     5,    29,    26,    29,    27,
      29,     5,     8,    -1,    29,    25,    29,     5,    34,    29,
       5,     6,    29,    20,    29,     5,    29,    26,    29,    27,
      29,     5,    29,     8,    -1,    25,    29,     5,    29,    34,
      29,     5,     6,    29,    20,    29,     5,    29,    26,    29,
      27,    29,     5,     8,    -1,    25,    29,     5,    29,    34,
      29,     5,     6,    29,    20,    29,     5,    29,    26,    29,
      27,    29,     5,    29,     8,    -1,    29,    25,    29,     5,
      29,    34,    29,     5,     6,    29,    20,    29,     5,    29,
      26,    29,    27,    29,     5,     8,    -1,    29,    25,    29,
       5,    29,    34,    29,     5,     6,    29,    20,    29,     5,
      29,    26,    29,    27,    29,     5,    29,     8,    -1,    16,
      29,    17,    29,     5,    29,    18,    29,    46,     8,    -1,
      16,    29,    17,    29,     5,    29,    18,    46,     8,    -1,
      29,    16,    29,    17,    29,     5,    29,    18,    29,    46,
       8,    -1,    29,    16,    29,    17,    29,     5,    29,    18,
      46,     8,    -1,    16,    29,    17,    29,     5,    29,    18,
      29,    46,    29,     8,    -1,    16,    29,    17,    29,     5,
      29,    18,    46,    29,     8,    -1,    29,    16,    29,    17,
      29,     5,    29,    18,    29,    46,    29,     8,    -1,    29,
      16,    29,    17,    29,     5,    29,    18,    46,    29,     8,
      -1,    -1,     6,    -1,     7,    -1,    29,     7,    -1,     7,
      29,    -1,    29,     7,    29,    -1,    35,    47,    36,    -1,
      35,    47,    36,    29,    -1,    29,    35,    47,    36,    -1,
      29,    35,    47,    36,    29,    -1,    46,    34,     7,    -1,
      46,    34,    29,     7,    -1,    46,    34,     7,    29,    -1,
      46,    34,    29,     7,    29,    -1,    46,    34,     6,    -1,
      46,    34,    29,     6,    -1,    46,    34,     6,    29,    -1,
      46,    34,    29,     6,    29,    -1,    46,    34,    35,    47,
      36,    -1,    46,    34,    35,    47,    36,    29,    -1,    46,
      34,    29,    35,    47,    36,    -1,    46,    34,    29,    35,
      47,    36,    29,    -1,    -1,     3,    -1,    31,    -1,     4,
      -1,    29,     3,    -1,    29,    31,    -1,    29,     4,    -1,
      47,    34,     4,    -1,    47,    34,    31,    -1,    47,    34,
       3,    -1,    47,    34,     4,    29,    -1,    47,    34,    29,
       4,    -1,    47,    34,    29,     4,    29,    -1,    47,    34,
      31,    29,    -1,    47,    34,    29,    31,    -1,    47,    34,
      29,    31,    29,    -1,    47,    34,     3,    29,    -1,    47,
      34,    29,     3,    -1,    47,    34,    29,     3,    29,    -1,
      47,    29,    34,     4,    -1,    47,    29,    34,    31,    -1,
      47,    29,    34,     3,    -1,    47,    29,    34,     4,    29,
      -1,    47,    29,    34,    29,     4,    -1,    47,    29,    34,
      29,     4,    29,    -1,    47,    29,    34,    31,    29,    -1,
      47,    29,    34,    29,    31,    -1,    47,    29,    34,    29,
      31,    29,    -1,    47,    29,    34,     3,    29,    -1,    47,
      29,    34,    29,     3,    -1,    47,    29,    34,    29,     3,
      29,    -1,    -1,     5,    -1,    29,     5,    -1,    48,    34,
      29,     5,    -1,    48,    29,    34,     5,    -1,    48,    29,
      34,    29,     5,    -1,    48,    34,     5,    -1,    -1,     5,
      -1,    29,     5,    -1,    49,    34,    29,     5,    -1,    49,
      29,    34,     5,    -1,    49,    29,    34,    29,     5,    -1,
      49,    34,     5,    -1,    -1,     4,    -1,     3,    -1,     5,
      -1,    29,     4,    -1,    29,     3,    -1,    29,     5,    -1,
      50,    37,     3,    -1,    50,    38,     3,    -1,    50,    33,
       3,    -1,    50,    39,     3,    -1,    50,    37,    29,     3,
      -1,    50,    38,    29,     3,    -1,    50,    33,    29,     3,
      -1,    50,    39,    29,     3,    -1,    50,    29,    37,     3,
      -1,    50,    29,    38,     3,    -1,    50,    29,    33,     3,
      -1,    50,    29,    39,     3,    -1,    50,    29,    37,    29,
       3,    -1,    50,    29,    38,    29,     3,    -1,    50,    29,
      33,    29,     3,    -1,    50,    29,    39,    29,     3,    -1,
      50,    37,     5,    -1,    50,    38,     5,    -1,    50,    33,
       5,    -1,    50,    39,     5,    -1,    50,    37,    29,     5,
      -1,    50,    38,    29,     5,    -1,    50,    33,    29,     5,
      -1,    50,    39,    29,     5,    -1,    50,    29,    37,     5,
      -1,    50,    29,    38,     5,    -1,    50,    29,    33,     5,
      -1,    50,    29,    39,     5,    -1,    50,    29,    37,    29,
       5,    -1,    50,    29,    38,    29,     5,    -1,    50,    29,
      33,    29,     5,    -1,    50,    29,    39,    29,     5,    -1,
      -1,     5,    32,     4,    -1,     5,    29,    32,     4,    -1,
       5,    32,    29,     4,    -1,     5,    29,    32,    29,     4,
      -1,     5,    32,     3,    -1,     5,    29,    32,     3,    -1,
       5,    32,    29,     3,    -1,     5,    29,    32,    29,     3,
      -1,     5,    32,     5,    -1,     5,    29,    32,     5,    -1,
       5,    32,    29,     5,    -1,     5,    29,    32,    29,     5,
      -1,     5,    40,    32,     4,    -1,     5,    29,    40,    32,
       4,    -1,     5,    40,    32,    29,     4,    -1,     5,    29,
      40,    32,    29,     4,    -1,     5,    40,    32,     3,    -1,
       5,    29,    40,    32,     3,    -1,     5,    40,    32,    29,
       3,    -1,     5,    29,    40,    32,    29,     3,    -1,     5,
      40,    32,     5,    -1,     5,    29,    40,    32,     5,    -1,
       5,    40,    32,    29,     5,    -1,     5,    29,    40,    32,
      29,     5,    -1,     5,    41,    42,     4,    -1,     5,    29,
      41,    42,     4,    -1,     5,    41,    42,    29,     4,    -1,
       5,    29,    41,    42,    29,     4,    -1,     5,    41,    42,
       3,    -1,     5,    29,    41,    42,     3,    -1,     5,    41,
      42,    29,     3,    -1,     5,    29,    41,    42,    29,     3,
      -1,     5,    41,    42,     5,    -1,     5,    29,    41,    42,
       5,    -1,     5,    41,    42,    29,     5,    -1,     5,    29,
      41,    42,    29,     5,    -1,     5,    42,     3,    -1,     5,
      29,    42,     3,    -1,     5,    42,    29,     3,    -1,     5,
      29,    42,    29,     3,    -1,     5,    42,     5,    -1,     5,
      29,    42,     5,    -1,     5,    42,    29,     5,    -1,     5,
      29,    42,    29,     5,    -1,     5,    41,     3,    -1,     5,
      29,    41,     3,    -1,     5,    41,    29,     3,    -1,     5,
      29,    41,    29,     3,    -1,     5,    41,     5,    -1,     5,
      29,    41,     5,    -1,     5,    41,    29,     5,    -1,     5,
      29,    41,    29,     5,    -1,     5,    42,    32,     3,    -1,
       5,    29,    42,    32,     3,    -1,     5,    42,    32,    29,
       3,    -1,     5,    29,    42,    32,    29,     3,    -1,     5,
      42,    32,     5,    -1,     5,    29,    42,    32,     5,    -1,
       5,    42,    32,    29,     5,    -1,     5,    29,    42,    32,
      29,     5,    -1,     5,    41,    32,     3,    -1,     5,    29,
      41,    32,     3,    -1,     5,    41,    32,    29,     3,    -1,
       5,    29,    41,    32,    29,     3,    -1,     5,    41,    32,
       5,    -1,     5,    29,    41,    32,     5,    -1,     5,    41,
      32,    29,     5,    -1,     5,    29,    41,    32,    29,     5,
      -1,    51,    29,    22,    29,     5,    32,     4,    -1,    51,
      29,    22,    29,     5,    32,    29,     4,    -1,    51,    29,
      22,    29,     5,    29,    32,     4,    -1,    51,    29,    22,
      29,     5,    29,    32,    29,     4,    -1,    51,    29,    22,
      29,     5,    32,     3,    -1,    51,    29,    22,    29,     5,
      29,    32,     3,    -1,    51,    29,    22,    29,     5,    32,
      29,     3,    -1,    51,    29,    22,    29,     5,    29,    32,
      29,     3,    -1,    51,    29,    22,    29,     5,    32,     5,
      -1,    51,    29,    22,    29,     5,    29,    32,     5,    -1,
      51,    29,    22,    29,     5,    32,    29,     5,    -1,    51,
      29,    22,    29,     5,    29,    32,    29,     5,    -1,    51,
      29,    22,    29,     5,    40,    32,     4,    -1,    51,    29,
      22,    29,     5,    40,    32,    29,     4,    -1,    51,    29,
      22,    29,     5,    29,    40,    32,     4,    -1,    51,    29,
      22,    29,     5,    29,    40,    32,    29,     4,    -1,    51,
      29,    22,    29,     5,    40,    32,     3,    -1,    51,    29,
      22,    29,     5,    29,    40,    32,     3,    -1,    51,    29,
      22,    29,     5,    40,    32,    29,     3,    -1,    51,    29,
      22,    29,     5,    29,    40,    32,    29,     3,    -1,    51,
      29,    22,    29,     5,    40,    32,     5,    -1,    51,    29,
      22,    29,     5,    29,    40,    32,     5,    -1,    51,    29,
      22,    29,     5,    40,    32,    29,     5,    -1,    51,    29,
      22,    29,     5,    29,    40,    32,    29,     5,    -1,    51,
      29,    22,    29,     5,    42,     3,    -1,    51,    29,    22,
      29,     5,    29,    42,     3,    -1,    51,    29,    22,    29,
       5,    42,    29,     3,    -1,    51,    29,    22,    29,     5,
      29,    42,    29,     3,    -1,    51,    29,    22,    29,     5,
      42,     5,    -1,    51,    29,    22,    29,     5,    29,    42,
       5,    -1,    51,    29,    22,    29,     5,    42,    29,     5,
      -1,    51,    29,    22,    29,     5,    29,    42,    29,     5,
      -1,    51,    29,    22,    29,     5,    41,     3,    -1,    51,
      29,    22,    29,     5,    41,    29,     3,    -1,    51,    29,
      22,    29,     5,    29,    41,    29,     3,    -1,    51,    29,
      22,    29,     5,    29,    41,     3,    -1,    51,    29,    22,
      29,     5,    41,     5,    -1,    51,    29,    22,    29,     5,
      29,    41,     5,    -1,    51,    29,    22,    29,     5,    41,
      29,     5,    -1,    51,    29,    22,    29,     5,    29,    41,
      29,     5,    -1,    51,    29,    22,    29,     5,    42,    32,
       3,    -1,    51,    29,    22,    29,     5,    29,    42,    32,
       3,    -1,    51,    29,    22,    29,     5,    42,    32,    29,
       3,    -1,    51,    29,    22,    29,     5,    29,    42,    32,
      29,     3,    -1,    51,    29,    22,    29,     5,    42,    32,
       5,    -1,    51,    29,    22,    29,     5,    29,    42,    32,
       5,    -1,    51,    29,    22,    29,     5,    42,    32,    29,
       5,    -1,    51,    29,    22,    29,     5,    29,    42,    32,
      29,     5,    -1,    51,    29,    22,    29,     5,    41,    32,
       3,    -1,    51,    29,    22,    29,     5,    29,    41,    32,
       3,    -1,    51,    29,    22,    29,     5,    41,    32,    29,
       3,    -1,    51,    29,    22,    29,     5,    29,    41,    32,
      29,     3,    -1,    51,    29,    22,    29,     5,    41,    32,
       5,    -1,    51,    29,    22,    29,     5,    29,    41,    32,
       5,    -1,    51,    29,    22,    29,     5,    41,    32,    29,
       5,    -1,    51,    29,    22,    29,     5,    29,    41,    32,
      29,     5,    -1,    51,    29,    22,    29,     5,    41,    42,
       4,    -1,    51,    29,    22,    29,     5,    41,    42,    29,
       4,    -1,    51,    29,    22,    29,     5,    29,    41,    42,
       4,    -1,    51,    29,    22,    29,     5,    29,    41,    42,
      29,     4,    -1,    51,    29,    22,    29,     5,    41,    42,
       3,    -1,    51,    29,    22,    29,     5,    29,    41,    42,
       3,    -1,    51,    29,    22,    29,     5,    41,    42,    29,
       3,    -1,    51,    29,    22,    29,     5,    29,    41,    42,
      29,     3,    -1,    51,    29,    22,    29,     5,    41,    42,
       5,    -1,    51,    29,    22,    29,     5,    29,    41,    42,
       5,    -1,    51,    29,    22,    29,     5,    41,    42,    29,
       5,    -1,    51,    29,    22,    29,     5,    29,    41,    42,
      29,     5,    -1,    -1,    52,    29,    -1,    29,    52,    -1,
      35,    53,    36,    -1,    -1,    53,    29,    -1,    54,    34,
      14,    29,    15,     6,    -1,    54,    34,    14,    29,    15,
      29,     6,    -1,    54,    34,    29,    14,    29,    15,     6,
      -1,    54,    34,    29,    14,    29,    15,    29,     6,    -1,
      -1,     5,    29,     5,     7,    -1,     5,    29,     5,    29,
       7,    -1,     5,    29,     5,     7,    30,    29,    31,    -1,
       5,    29,     5,     7,    29,    30,    29,    31,    -1,     5,
      29,     5,    29,     7,    30,    29,    31,    -1,     5,    29,
       5,    29,     7,    29,    30,    29,    31,    -1,    29,     5,
      29,     5,     7,    -1,    29,     5,    29,     5,    29,     7,
      -1,    29,     5,    29,     5,     7,    30,    29,    31,    -1,
      29,     5,    29,     5,     7,    29,    30,    29,    31,    -1,
      29,     5,    29,     5,    29,     7,    30,    29,    31,    -1,
      29,     5,    29,     5,    29,     7,    29,    30,    29,    31,
      -1,     5,    29,     5,     7,    29,    -1,     5,    29,     5,
      29,     7,    29,    -1,     5,    29,     5,     7,    30,    29,
      31,    29,    -1,     5,    29,     5,     7,    29,    30,    29,
      31,    29,    -1,     5,    29,     5,    29,     7,    30,    29,
      31,    29,    -1,     5,    29,     5,    29,     7,    29,    30,
      29,    31,    29,    -1,    29,     5,    29,     5,     7,    29,
      -1,    29,     5,    29,     5,    29,     7,    29,    -1,    29,
       5,    29,     5,     7,    30,    29,    31,    29,    -1,    29,
       5,    29,     5,     7,    29,    30,    29,    31,    29,    -1,
      29,     5,    29,     5,    29,     7,    30,    29,    31,    29,
      -1,    29,     5,    29,     5,    29,     7,    29,    30,    29,
      31,    29,    -1,    54,    34,     5,    29,     5,     7,    29,
      -1,    54,    34,     5,    29,     5,    29,     7,    29,    -1,
      54,    34,    29,     5,    29,     5,     7,    29,    -1,    54,
      34,    29,     5,    29,     5,    29,     7,    29,    -1,    54,
      34,     5,    29,     5,     7,    29,    30,    29,    31,    29,
      -1,    54,    34,     5,    29,     5,    29,     7,    29,    30,
      29,    31,    29,    -1,    54,    34,    29,     5,    29,     5,
       7,    29,    30,    29,    31,    29,    -1,    54,    34,    29,
       5,    29,     5,    29,     7,    29,    30,    29,    31,    29,
      -1,    54,    34,     5,    29,     5,     7,    -1,    54,    34,
       5,    29,     5,    29,     7,    -1,    54,    34,    29,     5,
      29,     5,     7,    -1,    54,    34,    29,     5,    29,     5,
      29,     7,    -1,    54,    34,     5,    29,     5,     7,    29,
      30,    29,    31,    -1,    54,    34,     5,    29,     5,    29,
       7,    29,    30,    29,    31,    -1,    54,    34,    29,     5,
      29,     5,     7,    29,    30,    29,    31,    -1,    54,    34,
      29,     5,    29,     5,    29,     7,    29,    30,    29,    31,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   109,   113,   119,   126,   132,   140,   146,
     152,   158,   166,   172,   178,   184,   192,   198,   204,   210,
     218,   224,   230,   236,   244,   250,   256,   262,   270,   276,
     285,   291,   297,   303,   311,   318,   325,   332,   339,   346,
     353,   360,   368,   375,   382,   389,   396,   401,   406,   411,
     419,   427,   436,   444,   453,   461,   470,   478,   490,   500,
     510,   520,   530,   540,   550,   560,   570,   580,   590,   600,
     610,   620,   630,   640,   652,   658,   664,   670,   676,   682,
     688,   694,   702,   704,   710,   716,   722,   728,   734,   739,
     744,   749,   754,   760,   766,   772,   778,   784,   790,   796,
     802,   807,   812,   817,   826,   828,   832,   836,   840,   844,
     848,   852,   856,   860,   864,   868,   872,   876,   880,   884,
     888,   892,   896,   900,   904,   908,   912,   916,   920,   924,
     928,   932,   936,   940,   944,   950,   952,   956,   960,   964,
     968,   972,   978,   980,   984,   988,   992,   996,  1000,  1006,
    1008,  1012,  1016,  1020,  1024,  1028,  1032,  1037,  1042,  1047,
    1052,  1057,  1062,  1067,  1072,  1077,  1082,  1087,  1092,  1097,
    1102,  1107,  1113,  1118,  1123,  1128,  1133,  1138,  1143,  1148,
    1153,  1158,  1163,  1168,  1173,  1178,  1183,  1188,  1195,  1197,
    1203,  1209,  1215,  1221,  1227,  1233,  1239,  1245,  1251,  1257,
    1263,  1270,  1276,  1282,  1288,  1294,  1300,  1306,  1312,  1318,
    1324,  1330,  1336,  1343,  1349,  1355,  1361,  1367,  1373,  1379,
    1385,  1391,  1397,  1403,  1409,  1415,  1421,  1427,  1433,  1439,
    1445,  1451,  1457,  1463,  1469,  1475,  1481,  1487,  1493,  1499,
    1505,  1511,  1517,  1523,  1529,  1535,  1541,  1547,  1553,  1560,
    1566,  1572,  1578,  1584,  1590,  1596,  1602,  1608,  1614,  1620,
    1626,  1632,  1638,  1644,  1650,  1656,  1662,  1668,  1674,  1681,
    1687,  1693,  1699,  1705,  1711,  1717,  1723,  1729,  1735,  1741,
    1747,  1753,  1759,  1765,  1771,  1777,  1783,  1789,  1795,  1801,
    1807,  1813,  1819,  1825,  1831,  1837,  1843,  1849,  1855,  1861,
    1867,  1873,  1879,  1885,  1891,  1898,  1904,  1910,  1916,  1922,
    1928,  1934,  1940,  1947,  1953,  1959,  1965,  1971,  1977,  1983,
    1989,  1995,  2001,  2007,  2013,  2022,  2024,  2027,  2030,  2035,
    2037,  2040,  2044,  2048,  2052,  2058,  2060,  2067,  2074,  2081,
    2088,  2095,  2102,  2109,  2116,  2123,  2130,  2137,  2144,  2151,
    2158,  2165,  2172,  2179,  2186,  2193,  2200,  2207,  2214,  2221,
    2228,  2235,  2242,  2249,  2256,  2263,  2270,  2277,  2284,  2291,
    2298,  2305,  2312,  2319,  2326,  2333
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "tableDetail", "tableDetail2", "tableDetail3", 0
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
     285,   286,    61,    42,    44,    40,    41,    43,    45,    47,
      33,    60,    62
};
# endif

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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,   222,   268,    42,   187,   279,   273,   120,
     166,   167
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -295
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -295,  -295,  -295,  -217,  -261,   640,   418,  -272,  -294,   -20,
    -295,  -295
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -336
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
        case 2:
#line 106 "yacc.y"
    {
	;}
    break;

  case 3:
#line 109 "yacc.y"
    {
	;}
    break;

  case 4:
#line 114 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "create database";		
		YYACCEPT;
	;}
    break;

  case 5:
#line 120 "yacc.y"
    {
		dbName = (yyvsp[(6) - (8)].m_sId);
		cout << "CREATE database" << endl;
		type = "create database";
		YYACCEPT;
	;}
    break;

  case 6:
#line 127 "yacc.y"
    {
		dbName = (yyvsp[(5) - (6)].m_sId);
		type = "create database";
		YYACCEPT;
	;}
    break;

  case 7:
#line 133 "yacc.y"
    {
		dbName = (yyvsp[(5) - (7)].m_sId);
		type = "create database";
		YYACCEPT;
	;}
    break;

  case 8:
#line 141 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "drop database";
		YYACCEPT;
	;}
    break;

  case 9:
#line 147 "yacc.y"
    {
		dbName = (yyvsp[(6) - (8)].m_sId);
		type = "drop database";
		YYACCEPT;
	;}
    break;

  case 10:
#line 153 "yacc.y"
    {
		dbName = (yyvsp[(5) - (6)].m_sId);
		type = "drop database";
		YYACCEPT;
	;}
    break;

  case 11:
#line 159 "yacc.y"
    {
		dbName = (yyvsp[(5) - (7)].m_sId);
		type = "drop database";
		YYACCEPT;
	;}
    break;

  case 12:
#line 167 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "use database";
		YYACCEPT;
	;}
    break;

  case 13:
#line 173 "yacc.y"
    {
		dbName = (yyvsp[(6) - (8)].m_sId);
		type = "use database";
		YYACCEPT;
	;}
    break;

  case 14:
#line 179 "yacc.y"
    {
		dbName = (yyvsp[(6) - (6)].m_sId);
		type = "use database";
		YYACCEPT;
	;}
    break;

  case 15:
#line 185 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "use database";
		YYACCEPT;
	;}
    break;

  case 16:
#line 193 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "show database";
		YYACCEPT;
	;}
    break;

  case 17:
#line 199 "yacc.y"
    {
		dbName = (yyvsp[(6) - (8)].m_sId);
		type = "show database";
		YYACCEPT;
	;}
    break;

  case 18:
#line 205 "yacc.y"
    {
		dbName = (yyvsp[(6) - (6)].m_sId);
		type = "show database";
		YYACCEPT;
	;}
    break;

  case 19:
#line 211 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "show database";
		YYACCEPT;
	;}
    break;

  case 20:
#line 219 "yacc.y"
    {
		tbName = (yyvsp[(6) - (7)].m_sId);
		type = "show table";
		YYACCEPT;
	;}
    break;

  case 21:
#line 225 "yacc.y"
    {
		tbName = (yyvsp[(6) - (8)].m_sId);
		type = "show table";
		YYACCEPT;
	;}
    break;

  case 22:
#line 231 "yacc.y"
    {
		tbName = (yyvsp[(5) - (6)].m_sId);
		type = "show table";
		YYACCEPT;
	;}
    break;

  case 23:
#line 237 "yacc.y"
    {
		tbName = (yyvsp[(5) - (7)].m_sId);
		type = "show table";
		YYACCEPT;
	;}
    break;

  case 24:
#line 245 "yacc.y"
    {
		tbName = (yyvsp[(6) - (7)].m_sId);
		type = "drop table";
		YYACCEPT;
	;}
    break;

  case 25:
#line 251 "yacc.y"
    {
		tbName = (yyvsp[(6) - (8)].m_sId);
		type = "drop table";
		YYACCEPT;
	;}
    break;

  case 26:
#line 257 "yacc.y"
    {
		tbName = (yyvsp[(5) - (6)].m_sId);
		type = "drop table";
		YYACCEPT;
	;}
    break;

  case 27:
#line 263 "yacc.y"
    {
		tbName = (yyvsp[(5) - (7)].m_sId);
		type = "drop table";
		YYACCEPT;
	;}
    break;

  case 28:
#line 271 "yacc.y"
    {
		tbName = (yyvsp[(6) - (8)].m_sId);
		type = "create table";
		YYACCEPT;
	;}
    break;

  case 29:
#line 277 "yacc.y"
    {
		tbName = (yyvsp[(5) - (7)].m_sId);
		type = "create table";
		YYACCEPT;
	;}
    break;

  case 30:
#line 286 "yacc.y"
    {	
		tbName = (yyvsp[(5) - (10)].m_sId);
		type = "delete from";
		YYACCEPT;
	;}
    break;

  case 31:
#line 292 "yacc.y"
    {	
		tbName = (yyvsp[(6) - (11)].m_sId);
		type = "delete from";
		YYACCEPT;
	;}
    break;

  case 32:
#line 298 "yacc.y"
    {	
		tbName = (yyvsp[(5) - (11)].m_sId);
		type = "delete from";
		YYACCEPT;
	;}
    break;

  case 33:
#line 304 "yacc.y"
    {	
		tbName = (yyvsp[(6) - (12)].m_sId);
		type = "delete from";
		YYACCEPT;
	;}
    break;

  case 34:
#line 312 "yacc.y"
    {
		tbName = (yyvsp[(3) - (14)].m_sId);
		setName = (yyvsp[(7) - (14)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 35:
#line 319 "yacc.y"
    {
		tbName = (yyvsp[(4) - (15)].m_sId);
		setName = (yyvsp[(8) - (15)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 36:
#line 326 "yacc.y"
    {
		tbName = (yyvsp[(3) - (15)].m_sId);
		setName = (yyvsp[(7) - (15)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 37:
#line 333 "yacc.y"
    {
		tbName = (yyvsp[(4) - (16)].m_sId);
		setName = (yyvsp[(8) - (16)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 38:
#line 340 "yacc.y"
    {
		tbName = (yyvsp[(3) - (15)].m_sId);
		setName = (yyvsp[(7) - (15)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 39:
#line 347 "yacc.y"
    {
		tbName = (yyvsp[(4) - (16)].m_sId);
		setName = (yyvsp[(8) - (16)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 40:
#line 354 "yacc.y"
    {
		tbName = (yyvsp[(3) - (16)].m_sId);
		setName = (yyvsp[(7) - (16)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 41:
#line 361 "yacc.y"
    {
		tbName = (yyvsp[(4) - (17)].m_sId);
		setName = (yyvsp[(8) - (17)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 42:
#line 369 "yacc.y"
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[(7) - (12)].m_sId));
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 43:
#line 376 "yacc.y"
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[(8) - (13)].m_sId));
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 44:
#line 383 "yacc.y"
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[(7) - (13)].m_sId));
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 45:
#line 390 "yacc.y"
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[(8) - (14)].m_sId));
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 46:
#line 397 "yacc.y"
    {
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 47:
#line 402 "yacc.y"
    {
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 48:
#line 407 "yacc.y"
    {
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 49:
#line 412 "yacc.y"
    {
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 50:
#line 420 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(3) - (9)].m_sId);
		attrName = (yyvsp[(4) - (9)].m_sId);
		tbName = (yyvsp[(8) - (9)].m_sId);
		YYACCEPT;
	;}
    break;

  case 51:
#line 428 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(4) - (10)].m_sId);
		attrName = (yyvsp[(5) - (10)].m_sId);
		tbName = (yyvsp[(9) - (10)].m_sId);
		YYACCEPT;
	;}
    break;

  case 52:
#line 437 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(3) - (10)].m_sId);
		attrName = (yyvsp[(5) - (10)].m_sId);
		tbName = (yyvsp[(9) - (10)].m_sId);
		YYACCEPT;
	;}
    break;

  case 53:
#line 445 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(4) - (11)].m_sId);
		attrName = (yyvsp[(6) - (11)].m_sId);
		tbName = (yyvsp[(10) - (11)].m_sId);
		YYACCEPT;
	;}
    break;

  case 54:
#line 454 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(3) - (10)].m_sId);
		attrName = (yyvsp[(4) - (10)].m_sId);
		tbName = (yyvsp[(8) - (10)].m_sId);
		YYACCEPT;
	;}
    break;

  case 55:
#line 462 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(4) - (11)].m_sId);
		attrName = (yyvsp[(5) - (11)].m_sId);
		tbName = (yyvsp[(9) - (11)].m_sId);
		YYACCEPT;
	;}
    break;

  case 56:
#line 471 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(3) - (11)].m_sId);
		attrName = (yyvsp[(5) - (11)].m_sId);
		tbName = (yyvsp[(9) - (11)].m_sId);
		YYACCEPT;
	;}
    break;

  case 57:
#line 479 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(4) - (12)].m_sId);
		attrName = (yyvsp[(6) - (12)].m_sId);
		tbName = (yyvsp[(10) - (12)].m_sId);
		YYACCEPT;
	;}
    break;

  case 58:
#line 491 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(5) - (17)].m_sId);
		attrName1 = (yyvsp[(3) - (17)].m_sId);
		attrName2 = (yyvsp[(6) - (17)].m_sId);
		attrName3 = (yyvsp[(16) - (17)].m_sId);
		tbName = (yyvsp[(10) - (17)].m_sId);
		YYACCEPT;
	;}
    break;

  case 59:
#line 501 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(5) - (18)].m_sId);
		attrName1 = (yyvsp[(3) - (18)].m_sId);
		attrName2 = (yyvsp[(6) - (18)].m_sId);
		attrName3 = (yyvsp[(16) - (18)].m_sId);
		tbName = (yyvsp[(10) - (18)].m_sId);
		YYACCEPT;
	;}
    break;

  case 60:
#line 511 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(6) - (18)].m_sId);
		attrName1 = (yyvsp[(4) - (18)].m_sId);
		attrName2 = (yyvsp[(7) - (18)].m_sId);
		attrName3 = (yyvsp[(17) - (18)].m_sId);
		tbName = (yyvsp[(11) - (18)].m_sId);
		YYACCEPT;
	;}
    break;

  case 61:
#line 521 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(6) - (19)].m_sId);
		attrName1 = (yyvsp[(4) - (19)].m_sId);
		attrName2 = (yyvsp[(7) - (19)].m_sId);
		attrName3 = (yyvsp[(17) - (19)].m_sId);
		tbName = (yyvsp[(11) - (19)].m_sId);
		YYACCEPT;
	;}
    break;

  case 62:
#line 531 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(6) - (18)].m_sId);
		attrName1 = (yyvsp[(3) - (18)].m_sId);
		attrName2 = (yyvsp[(7) - (18)].m_sId);
		attrName3 = (yyvsp[(17) - (18)].m_sId);
		tbName = (yyvsp[(11) - (18)].m_sId);
		YYACCEPT;
	;}
    break;

  case 63:
#line 541 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(6) - (19)].m_sId);
		attrName1 = (yyvsp[(3) - (19)].m_sId);
		attrName2 = (yyvsp[(7) - (19)].m_sId);
		attrName3 = (yyvsp[(17) - (19)].m_sId);
		tbName = (yyvsp[(11) - (19)].m_sId);
		YYACCEPT;
	;}
    break;

  case 64:
#line 551 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(7) - (19)].m_sId);
		attrName1 = (yyvsp[(4) - (19)].m_sId);
		attrName2 = (yyvsp[(8) - (19)].m_sId);
		attrName3 = (yyvsp[(18) - (19)].m_sId);
		tbName = (yyvsp[(12) - (19)].m_sId);
		YYACCEPT;
	;}
    break;

  case 65:
#line 561 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(7) - (20)].m_sId);
		attrName1 = (yyvsp[(4) - (20)].m_sId);
		attrName2 = (yyvsp[(8) - (20)].m_sId);
		attrName3 = (yyvsp[(18) - (20)].m_sId);
		tbName = (yyvsp[(12) - (20)].m_sId);
		YYACCEPT;
	;}
    break;

  case 66:
#line 571 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(6) - (18)].m_sId);
		attrName1 = (yyvsp[(3) - (18)].m_sId);
		attrName2 = (yyvsp[(7) - (18)].m_sId);
		attrName3 = (yyvsp[(17) - (18)].m_sId);
		tbName = (yyvsp[(11) - (18)].m_sId);
		YYACCEPT;
	;}
    break;

  case 67:
#line 581 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(6) - (19)].m_sId);
		attrName1 = (yyvsp[(3) - (19)].m_sId);
		attrName2 = (yyvsp[(7) - (19)].m_sId);
		attrName3 = (yyvsp[(17) - (19)].m_sId);
		tbName = (yyvsp[(11) - (19)].m_sId);
		YYACCEPT;
	;}
    break;

  case 68:
#line 591 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(7) - (19)].m_sId);
		attrName1 = (yyvsp[(4) - (19)].m_sId);
		attrName2 = (yyvsp[(8) - (19)].m_sId);
		attrName3 = (yyvsp[(18) - (19)].m_sId);
		tbName = (yyvsp[(12) - (19)].m_sId);
		YYACCEPT;
	;}
    break;

  case 69:
#line 601 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(7) - (20)].m_sId);
		attrName1 = (yyvsp[(4) - (20)].m_sId);
		attrName2 = (yyvsp[(8) - (20)].m_sId);
		attrName3 = (yyvsp[(18) - (20)].m_sId);
		tbName = (yyvsp[(12) - (20)].m_sId);
		YYACCEPT;
	;}
    break;

  case 70:
#line 611 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(7) - (19)].m_sId);
		attrName1 = (yyvsp[(3) - (19)].m_sId);
		attrName2 = (yyvsp[(8) - (19)].m_sId);
		attrName3 = (yyvsp[(18) - (19)].m_sId);
		tbName = (yyvsp[(12) - (19)].m_sId);
		YYACCEPT;
	;}
    break;

  case 71:
#line 621 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(7) - (20)].m_sId);
		attrName1 = (yyvsp[(3) - (20)].m_sId);
		attrName2 = (yyvsp[(8) - (20)].m_sId);
		attrName3 = (yyvsp[(18) - (20)].m_sId);
		tbName = (yyvsp[(12) - (20)].m_sId);
		YYACCEPT;
	;}
    break;

  case 72:
#line 631 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(8) - (20)].m_sId);
		attrName1 = (yyvsp[(4) - (20)].m_sId);
		attrName2 = (yyvsp[(9) - (20)].m_sId);
		attrName3 = (yyvsp[(19) - (20)].m_sId);
		tbName = (yyvsp[(13) - (20)].m_sId);
		YYACCEPT;
	;}
    break;

  case 73:
#line 641 "yacc.y"
    {
		type = "select group";
		selectType = (yyvsp[(8) - (21)].m_sId);
		attrName1 = (yyvsp[(4) - (21)].m_sId);
		attrName2 = (yyvsp[(9) - (21)].m_sId);
		attrName3 = (yyvsp[(19) - (21)].m_sId);
		tbName = (yyvsp[(13) - (21)].m_sId);
		YYACCEPT;
	;}
    break;

  case 74:
#line 653 "yacc.y"
    {
		tbName = (yyvsp[(5) - (10)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 75:
#line 659 "yacc.y"
    {
		tbName = (yyvsp[(5) - (9)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 76:
#line 665 "yacc.y"
    {
		tbName = (yyvsp[(6) - (11)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 77:
#line 671 "yacc.y"
    {
		tbName = (yyvsp[(6) - (10)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 78:
#line 677 "yacc.y"
    {
		tbName = (yyvsp[(5) - (11)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 79:
#line 683 "yacc.y"
    {
		tbName = (yyvsp[(5) - (10)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 80:
#line 689 "yacc.y"
    {
		tbName = (yyvsp[(6) - (12)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 81:
#line 695 "yacc.y"
    {
		tbName = (yyvsp[(6) - (11)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 82:
#line 702 "yacc.y"
    {
	;}
    break;

  case 83:
#line 705 "yacc.y"
    {
		tempList.push_back((yyvsp[(1) - (1)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 84:
#line 711 "yacc.y"
    {
		tempList.push_back((yyvsp[(1) - (1)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 85:
#line 717 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (2)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 86:
#line 723 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (2)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 87:
#line 729 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (3)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 88:
#line 735 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 89:
#line 740 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 90:
#line 745 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 91:
#line 750 "yacc.y"
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 92:
#line 755 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (3)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 93:
#line 761 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 94:
#line 767 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (4)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 95:
#line 773 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 96:
#line 779 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (3)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 97:
#line 785 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 98:
#line 791 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (4)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 99:
#line 797 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 100:
#line 803 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 101:
#line 808 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 102:
#line 813 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 103:
#line 818 "yacc.y"
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 104:
#line 826 "yacc.y"
    {
	;}
    break;

  case 105:
#line 829 "yacc.y"
    {
		tempList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 106:
#line 833 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 107:
#line 837 "yacc.y"
    {
		tempList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 108:
#line 841 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 109:
#line 845 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 110:
#line 849 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 111:
#line 853 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 112:
#line 857 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 113:
#line 861 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 114:
#line 865 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (4)].m_sId));
	;}
    break;

  case 115:
#line 869 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 116:
#line 873 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
	;}
    break;

  case 117:
#line 877 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 118:
#line 881 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 119:
#line 885 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 120:
#line 889 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (4)].m_sId));
	;}
    break;

  case 121:
#line 893 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 122:
#line 897 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
	;}
    break;

  case 123:
#line 901 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 124:
#line 905 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 125:
#line 909 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 126:
#line 913 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
	;}
    break;

  case 127:
#line 917 "yacc.y"
    {
		tempList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 128:
#line 921 "yacc.y"
    {
		tempList.push_back((yyvsp[(5) - (6)].m_sId));
	;}
    break;

  case 129:
#line 925 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 130:
#line 929 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 131:
#line 933 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 132:
#line 937 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
	;}
    break;

  case 133:
#line 941 "yacc.y"
    {
		tempList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 134:
#line 945 "yacc.y"
    {
		tempList.push_back((yyvsp[(5) - (6)].m_sId));
	;}
    break;

  case 135:
#line 950 "yacc.y"
    {
	;}
    break;

  case 136:
#line 953 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 137:
#line 957 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 138:
#line 961 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 139:
#line 965 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 140:
#line 969 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 141:
#line 973 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 142:
#line 978 "yacc.y"
    {
	;}
    break;

  case 143:
#line 981 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 144:
#line 985 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 145:
#line 989 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 146:
#line 993 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 147:
#line 997 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 148:
#line 1001 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 149:
#line 1006 "yacc.y"
    {
	;}
    break;

  case 150:
#line 1009 "yacc.y"
    {
		exprValueList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 151:
#line 1013 "yacc.y"
    {	
		exprValueList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 152:
#line 1017 "yacc.y"
    {	
		exprValueList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 153:
#line 1021 "yacc.y"
    {
		exprValueList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 154:
#line 1025 "yacc.y"
    {
		exprValueList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 155:
#line 1029 "yacc.y"
    {
		exprValueList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 156:
#line 1033 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 157:
#line 1038 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 158:
#line 1043 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 159:
#line 1048 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 160:
#line 1053 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 161:
#line 1058 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 162:
#line 1063 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 163:
#line 1068 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 164:
#line 1073 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 165:
#line 1078 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 166:
#line 1083 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 167:
#line 1088 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 168:
#line 1093 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 169:
#line 1098 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 170:
#line 1103 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 171:
#line 1108 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 172:
#line 1114 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 173:
#line 1119 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 174:
#line 1124 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 175:
#line 1129 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 176:
#line 1134 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 177:
#line 1139 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 178:
#line 1144 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 179:
#line 1149 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 180:
#line 1154 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 181:
#line 1159 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 182:
#line 1164 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 183:
#line 1169 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 184:
#line 1174 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 185:
#line 1179 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 186:
#line 1184 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 187:
#line 1189 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 188:
#line 1195 "yacc.y"
    {
	;}
    break;

  case 189:
#line 1198 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 190:
#line 1204 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 191:
#line 1210 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 192:
#line 1216 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 193:
#line 1222 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 194:
#line 1228 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 195:
#line 1234 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 196:
#line 1240 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 197:
#line 1246 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 198:
#line 1252 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 199:
#line 1258 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 200:
#line 1264 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 201:
#line 1271 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 202:
#line 1277 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 203:
#line 1283 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 204:
#line 1289 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 205:
#line 1295 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 206:
#line 1301 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 207:
#line 1307 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 208:
#line 1313 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 209:
#line 1319 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 210:
#line 1325 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 211:
#line 1331 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 212:
#line 1337 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 213:
#line 1344 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 214:
#line 1350 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 215:
#line 1356 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 216:
#line 1362 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 217:
#line 1368 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 218:
#line 1374 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 219:
#line 1380 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 220:
#line 1386 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 221:
#line 1392 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 222:
#line 1398 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 223:
#line 1404 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 224:
#line 1410 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 225:
#line 1416 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 226:
#line 1422 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 227:
#line 1428 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 228:
#line 1434 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 229:
#line 1440 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 230:
#line 1446 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 231:
#line 1452 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 232:
#line 1458 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 233:
#line 1464 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 234:
#line 1470 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 235:
#line 1476 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 236:
#line 1482 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 237:
#line 1488 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 238:
#line 1494 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 239:
#line 1500 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 240:
#line 1506 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 241:
#line 1512 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 242:
#line 1518 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 243:
#line 1524 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 244:
#line 1530 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 245:
#line 1536 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 246:
#line 1542 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 247:
#line 1548 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 248:
#line 1554 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 249:
#line 1561 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 250:
#line 1567 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 251:
#line 1573 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 252:
#line 1579 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 253:
#line 1585 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 254:
#line 1591 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 255:
#line 1597 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 256:
#line 1603 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 257:
#line 1609 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 258:
#line 1615 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 259:
#line 1621 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 260:
#line 1627 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 261:
#line 1633 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 262:
#line 1639 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 263:
#line 1645 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 264:
#line 1651 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 265:
#line 1657 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 266:
#line 1663 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 267:
#line 1669 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 268:
#line 1675 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 269:
#line 1682 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 270:
#line 1688 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 271:
#line 1694 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 272:
#line 1700 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 273:
#line 1706 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 274:
#line 1712 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 275:
#line 1718 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 276:
#line 1724 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 277:
#line 1730 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 278:
#line 1736 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 279:
#line 1742 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 280:
#line 1748 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 281:
#line 1754 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 282:
#line 1760 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 283:
#line 1766 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 284:
#line 1772 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 285:
#line 1778 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 286:
#line 1784 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 287:
#line 1790 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 288:
#line 1796 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 289:
#line 1802 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 290:
#line 1808 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 291:
#line 1814 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 292:
#line 1820 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 293:
#line 1826 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 294:
#line 1832 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 295:
#line 1838 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 296:
#line 1844 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 297:
#line 1850 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 298:
#line 1856 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 299:
#line 1862 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 300:
#line 1868 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 301:
#line 1874 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 302:
#line 1880 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 303:
#line 1886 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 304:
#line 1892 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 305:
#line 1899 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 306:
#line 1905 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 307:
#line 1911 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 308:
#line 1917 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 309:
#line 1923 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 310:
#line 1929 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 311:
#line 1935 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 312:
#line 1941 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 313:
#line 1948 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 314:
#line 1954 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 315:
#line 1960 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 316:
#line 1966 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 317:
#line 1972 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 318:
#line 1978 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 319:
#line 1984 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 320:
#line 1990 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 321:
#line 1996 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 322:
#line 2002 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 323:
#line 2008 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 324:
#line 2014 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 325:
#line 2022 "yacc.y"
    {
	;}
    break;

  case 326:
#line 2025 "yacc.y"
    {
	;}
    break;

  case 327:
#line 2028 "yacc.y"
    {	
	;}
    break;

  case 328:
#line 2031 "yacc.y"
    {
	;}
    break;

  case 329:
#line 2035 "yacc.y"
    {
	;}
    break;

  case 330:
#line 2038 "yacc.y"
    {
	;}
    break;

  case 331:
#line 2041 "yacc.y"
    {
	  	primaryKey = (yyvsp[(6) - (6)].m_sId);
	;}
    break;

  case 332:
#line 2045 "yacc.y"
    {
	  	primaryKey = (yyvsp[(7) - (7)].m_sId);
	;}
    break;

  case 333:
#line 2049 "yacc.y"
    {
	  	primaryKey = (yyvsp[(7) - (7)].m_sId);
	;}
    break;

  case 334:
#line 2053 "yacc.y"
    {
	  	primaryKey = (yyvsp[(8) - (8)].m_sId);
	;}
    break;

  case 335:
#line 2058 "yacc.y"
    {
	;}
    break;

  case 336:
#line 2061 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (4)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (4)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (4)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 337:
#line 2068 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (5)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (5)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (5)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 338:
#line 2075 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (7)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 339:
#line 2082 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (8)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 340:
#line 2089 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (8)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 341:
#line 2096 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 342:
#line 2103 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (5)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (5)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (5)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 343:
#line 2110 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (6)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (6)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (6)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 344:
#line 2117 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (8)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 345:
#line 2124 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 346:
#line 2131 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 347:
#line 2138 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 348:
#line 2145 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (5)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (5)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (5)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 349:
#line 2152 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (6)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (6)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (6)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 350:
#line 2159 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (8)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 351:
#line 2166 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 352:
#line 2173 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 353:
#line 2180 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 354:
#line 2187 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (6)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (6)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (6)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 355:
#line 2194 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (7)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 356:
#line 2201 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 357:
#line 2208 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 358:
#line 2215 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 359:
#line 2222 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (11)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (11)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (11)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 360:
#line 2229 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (7)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 361:
#line 2236 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (8)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 362:
#line 2243 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (8)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 363:
#line 2250 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(8) - (9)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 364:
#line 2257 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (11)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (11)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (11)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 365:
#line 2264 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (12)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (12)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (12)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 366:
#line 2271 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (12)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (12)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (12)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 367:
#line 2278 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (13)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (13)].m_sId));
		attrNumList.push_back((yyvsp[(8) - (13)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 368:
#line 2285 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (6)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (6)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (6)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 369:
#line 2292 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (7)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 370:
#line 2299 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (7)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 371:
#line 2306 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(8) - (8)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 372:
#line 2313 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 373:
#line 2320 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (11)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (11)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (11)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 374:
#line 2327 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (11)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (11)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (11)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 375:
#line 2334 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (12)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (12)].m_sId));
		attrNumList.push_back((yyvsp[(8) - (12)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 5620 "yacc.tab.c"
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


#line 2342 "yacc.y"


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
	rm->print_all_record(fileID); 
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
				rm->print_all_record(fileID);	
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
				cout << fileID << " " << atoi(record[i][0].c_str()) << " " << attr[set] << " " << to_string_my(ans) << endl;
				if (rm->update_record(fileID, atoi(record[i][0].c_str()), attr[set], to_string_my(ans))) {
					cout << "wrong update" << endl;
				}
				else {
					cout << "success update" << endl;
				}
				rm->print_all_record(fileID);	
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
	int now = 0;
	cout << attrValueList.size() << endl;
	for (int i=0; i<attrValueList.size(); i++) { 
		if (cnt%100==0) cout << cnt<<endl;
		cnt++;newRecord.clear();
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
	rm->print_all_record(fileID);
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
	vector<vector<string> > * record = new vector<vector<string> >(tbNameList.size());
	vector<string> * attr = new vector<string>(tbNameList.size());
	vector<int>* type = new vector<int>(tbNameList.size());
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
				for (int ii=0; ii<attr[0].size(); ii++) cout << record[0][i][ii+1] << "      ";
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
	/*const char* sFile="book.sql";//打开要读取的文本文件  
    	FILE* fp=fopen(sFile, "r");  
   	if(fp==NULL)  
    	{  
        	printf("cannot open %s\n", sFile);  
        	return -1;  
    	}  
   	 extern FILE* yyin;  //yyin和yyout都是FILE*类型  
    	yyin=fp;//yacc会从yyin读取输入，yyin默认是标准输入，这里改为磁盘文件。yacc默认向yyout输出，可修改yyo /
    	*/
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
		//yyparse();
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
//fclose(fp);	
	return 0;
}


