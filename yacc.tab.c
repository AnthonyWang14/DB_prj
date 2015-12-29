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
     ATTRNAME2 = 262,
     ATTRNUM = 263,
     EXIT = 264,
     CREATE = 265,
     DROP = 266,
     USE = 267,
     SHOW = 268,
     DATABASE = 269,
     PRIMARY = 270,
     KEY = 271,
     INSERT = 272,
     INTO = 273,
     VALUES = 274,
     DELETE = 275,
     FROM = 276,
     WHERE = 277,
     AND = 278,
     UPDATE = 279,
     SET = 280,
     SELECT = 281,
     GROUP = 282,
     BY = 283,
     TABLE = 284,
     BLANK = 285,
     NOT = 286,
     NUL = 287
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define STRING 259
#define NAME 260
#define ATTRNAME 261
#define ATTRNAME2 262
#define ATTRNUM 263
#define EXIT 264
#define CREATE 265
#define DROP 266
#define USE 267
#define SHOW 268
#define DATABASE 269
#define PRIMARY 270
#define KEY 271
#define INSERT 272
#define INTO 273
#define VALUES 274
#define DELETE 275
#define FROM 276
#define WHERE 277
#define AND 278
#define UPDATE 279
#define SET 280
#define SELECT 281
#define GROUP 282
#define BY 283
#define TABLE 284
#define BLANK 285
#define NOT 286
#define NUL 287




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
string tempName; 
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
#line 229 "yacc.tab.c"

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
#define YYLAST   810

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  356
/* YYNRULES -- Number of states.  */
#define YYNSTATES  748

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,     2,     2,     2,     2,     2,
      35,    36,    34,    38,    37,    39,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    33,    43,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
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
     507,   517,   528,   539,   551,   566,   577,   587,   599,   610,
     622,   633,   646,   658,   659,   661,   663,   666,   669,   673,
     677,   682,   687,   693,   697,   702,   707,   713,   717,   722,
     727,   733,   739,   746,   753,   761,   762,   764,   766,   768,
     771,   774,   777,   781,   785,   789,   794,   799,   805,   810,
     815,   821,   826,   831,   837,   842,   847,   852,   858,   864,
     871,   877,   883,   890,   896,   902,   909,   910,   912,   915,
     920,   925,   931,   935,   936,   938,   941,   946,   951,   957,
     961,   962,   964,   966,   968,   971,   974,   977,   981,   985,
     989,   993,   998,  1003,  1008,  1013,  1018,  1023,  1028,  1033,
    1039,  1045,  1051,  1057,  1061,  1065,  1069,  1073,  1078,  1083,
    1088,  1093,  1098,  1103,  1108,  1113,  1119,  1125,  1131,  1137,
    1138,  1142,  1147,  1152,  1158,  1162,  1167,  1172,  1178,  1182,
    1187,  1192,  1198,  1203,  1209,  1215,  1222,  1227,  1233,  1239,
    1246,  1251,  1257,  1263,  1270,  1275,  1281,  1287,  1294,  1299,
    1305,  1311,  1318,  1323,  1329,  1335,  1342,  1346,  1351,  1356,
    1362,  1366,  1371,  1376,  1382,  1386,  1391,  1396,  1402,  1406,
    1411,  1416,  1422,  1427,  1433,  1439,  1446,  1451,  1457,  1463,
    1470,  1475,  1481,  1487,  1494,  1499,  1505,  1511,  1518,  1526,
    1535,  1544,  1554,  1562,  1571,  1580,  1590,  1598,  1607,  1616,
    1626,  1635,  1645,  1655,  1666,  1675,  1685,  1695,  1706,  1715,
    1725,  1735,  1746,  1754,  1763,  1772,  1782,  1790,  1799,  1808,
    1818,  1826,  1835,  1845,  1854,  1862,  1871,  1880,  1890,  1899,
    1909,  1919,  1930,  1939,  1949,  1959,  1970,  1979,  1989,  1999,
    2010,  2019,  2029,  2039,  2050,  2059,  2069,  2079,  2090,  2099,
    2109,  2119,  2130,  2139,  2149,  2159,  2170,  2171,  2174,  2177,
    2181,  2182,  2185,  2192,  2200,  2208,  2217,  2218,  2223,  2229,
    2237,  2246,  2255,  2265,  2271,  2278,  2287,  2297,  2307,  2318,
    2324,  2331,  2340,  2350,  2360,  2371,  2378,  2386,  2396,  2407,
    2418,  2430,  2438,  2447,  2456,  2466,  2478,  2491,  2504,  2518,
    2525,  2533,  2541,  2550,  2561,  2573,  2585
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    -1,    30,    10,    30,    14,
      30,     5,     9,    -1,    30,    10,    30,    14,    30,     5,
      30,     9,    -1,    10,    30,    14,    30,     5,     9,    -1,
      10,    30,    14,    30,     5,    30,     9,    -1,    30,    11,
      30,    14,    30,     5,     9,    -1,    30,    11,    30,    14,
      30,     5,    30,     9,    -1,    11,    30,    14,    30,     5,
       9,    -1,    11,    30,    14,    30,     5,    30,     9,    -1,
      30,    12,    30,    14,    30,     5,     9,    -1,    30,    12,
      30,    14,    30,     5,    30,     9,    -1,    12,    30,    14,
      30,     5,     9,    -1,    12,    30,    14,    30,     5,    30,
       9,    -1,    30,    13,    30,    14,    30,     5,     9,    -1,
      30,    13,    30,    14,    30,     5,    30,     9,    -1,    13,
      30,    14,    30,     5,     9,    -1,    13,    30,    14,    30,
       5,    30,     9,    -1,    30,    13,    30,    29,    30,     5,
       9,    -1,    30,    13,    30,    29,    30,     5,    30,     9,
      -1,    13,    30,    29,    30,     5,     9,    -1,    13,    30,
      29,    30,     5,    30,     9,    -1,    30,    11,    30,    29,
      30,     5,     9,    -1,    30,    11,    30,    29,    30,     5,
      30,     9,    -1,    11,    30,    29,    30,     5,     9,    -1,
      11,    30,    29,    30,     5,    30,     9,    -1,    30,    10,
      30,    29,    30,     5,    53,     9,    -1,    10,    30,    29,
      30,     5,    53,     9,    -1,    20,    30,    21,    30,     5,
      30,    22,    30,    52,     9,    -1,    30,    20,    30,    21,
      30,     5,    30,    22,    30,    52,     9,    -1,    20,    30,
      21,    30,     5,    30,    22,    30,    52,    30,     9,    -1,
      30,    20,    30,    21,    30,     5,    30,    22,    30,    52,
      30,     9,    -1,    24,    30,     5,    30,    25,    30,     5,
      33,    51,    30,    22,    30,    52,     9,    -1,    30,    24,
      30,     5,    30,    25,    30,     5,    33,    51,    30,    22,
      30,    52,     9,    -1,    24,    30,     5,    30,    25,    30,
       5,    33,    51,    30,    22,    30,    52,    30,     9,    -1,
      30,    24,    30,     5,    30,    25,    30,     5,    33,    51,
      30,    22,    30,    52,    30,     9,    -1,    24,    30,     5,
      30,    25,    30,     5,    30,    33,    51,    30,    22,    30,
      52,     9,    -1,    30,    24,    30,     5,    30,    25,    30,
       5,    30,    33,    51,    30,    22,    30,    52,     9,    -1,
      24,    30,     5,    30,    25,    30,     5,    30,    33,    51,
      30,    22,    30,    52,    30,     9,    -1,    30,    24,    30,
       5,    30,    25,    30,     5,    30,    33,    51,    30,    22,
      30,    52,    30,     9,    -1,    26,    30,    34,    30,    21,
      30,     5,    30,    22,    30,    52,     9,    -1,    30,    26,
      30,    34,    30,    21,    30,     5,    30,    22,    30,    52,
       9,    -1,    26,    30,    34,    30,    21,    30,     5,    30,
      22,    30,    52,    30,     9,    -1,    30,    26,    30,    34,
      30,    21,    30,     5,    30,    22,    30,    52,    30,     9,
      -1,    26,    30,    49,    30,    21,    30,    50,    30,    22,
      30,    52,     9,    -1,    30,    26,    30,    49,    30,    21,
      30,    50,    30,    22,    30,    52,     9,    -1,    26,    30,
      49,    30,    21,    30,    50,    30,    22,    30,    52,    30,
       9,    -1,    30,    26,    30,    49,    30,    21,    30,    50,
      30,    22,    30,    52,    30,     9,    -1,    26,    30,     5,
       6,    30,    21,    30,     5,     9,    -1,    30,    26,    30,
       5,     6,    30,    21,    30,     5,     9,    -1,    26,    30,
       5,     6,    30,    21,    30,     5,    30,     9,    -1,    30,
      26,    30,     5,     6,    30,    21,    30,     5,    30,     9,
      -1,    26,    30,     7,    30,    21,    30,     5,    30,    27,
      30,    28,    30,     5,     9,    -1,    17,    30,    18,    30,
       5,    30,    19,    30,    47,     9,    -1,    17,    30,    18,
      30,     5,    30,    19,    47,     9,    -1,    30,    17,    30,
      18,    30,     5,    30,    19,    30,    47,     9,    -1,    30,
      17,    30,    18,    30,     5,    30,    19,    47,     9,    -1,
      17,    30,    18,    30,     5,    30,    19,    30,    47,    30,
       9,    -1,    17,    30,    18,    30,     5,    30,    19,    47,
      30,     9,    -1,    30,    17,    30,    18,    30,     5,    30,
      19,    30,    47,    30,     9,    -1,    30,    17,    30,    18,
      30,     5,    30,    19,    47,    30,     9,    -1,    -1,     6,
      -1,     8,    -1,    30,     8,    -1,     8,    30,    -1,    30,
       8,    30,    -1,    35,    48,    36,    -1,    35,    48,    36,
      30,    -1,    30,    35,    48,    36,    -1,    30,    35,    48,
      36,    30,    -1,    47,    37,     8,    -1,    47,    37,    30,
       8,    -1,    47,    37,     8,    30,    -1,    47,    37,    30,
       8,    30,    -1,    47,    37,     6,    -1,    47,    37,    30,
       6,    -1,    47,    37,     6,    30,    -1,    47,    37,    30,
       6,    30,    -1,    47,    37,    35,    48,    36,    -1,    47,
      37,    35,    48,    36,    30,    -1,    47,    37,    30,    35,
      48,    36,    -1,    47,    37,    30,    35,    48,    36,    30,
      -1,    -1,     3,    -1,    32,    -1,     4,    -1,    30,     3,
      -1,    30,    32,    -1,    30,     4,    -1,    48,    37,     4,
      -1,    48,    37,    32,    -1,    48,    37,     3,    -1,    48,
      37,     4,    30,    -1,    48,    37,    30,     4,    -1,    48,
      37,    30,     4,    30,    -1,    48,    37,    32,    30,    -1,
      48,    37,    30,    32,    -1,    48,    37,    30,    32,    30,
      -1,    48,    37,     3,    30,    -1,    48,    37,    30,     3,
      -1,    48,    37,    30,     3,    30,    -1,    48,    30,    37,
       4,    -1,    48,    30,    37,    32,    -1,    48,    30,    37,
       3,    -1,    48,    30,    37,     4,    30,    -1,    48,    30,
      37,    30,     4,    -1,    48,    30,    37,    30,     4,    30,
      -1,    48,    30,    37,    32,    30,    -1,    48,    30,    37,
      30,    32,    -1,    48,    30,    37,    30,    32,    30,    -1,
      48,    30,    37,     3,    30,    -1,    48,    30,    37,    30,
       3,    -1,    48,    30,    37,    30,     3,    30,    -1,    -1,
       5,    -1,    30,     5,    -1,    49,    37,    30,     5,    -1,
      49,    30,    37,     5,    -1,    49,    30,    37,    30,     5,
      -1,    49,    37,     5,    -1,    -1,     5,    -1,    30,     5,
      -1,    50,    37,    30,     5,    -1,    50,    30,    37,     5,
      -1,    50,    30,    37,    30,     5,    -1,    50,    37,     5,
      -1,    -1,     4,    -1,     3,    -1,     5,    -1,    30,     4,
      -1,    30,     3,    -1,    30,     5,    -1,    51,    38,     3,
      -1,    51,    39,     3,    -1,    51,    34,     3,    -1,    51,
      40,     3,    -1,    51,    38,    30,     3,    -1,    51,    39,
      30,     3,    -1,    51,    34,    30,     3,    -1,    51,    40,
      30,     3,    -1,    51,    30,    38,     3,    -1,    51,    30,
      39,     3,    -1,    51,    30,    34,     3,    -1,    51,    30,
      40,     3,    -1,    51,    30,    38,    30,     3,    -1,    51,
      30,    39,    30,     3,    -1,    51,    30,    34,    30,     3,
      -1,    51,    30,    40,    30,     3,    -1,    51,    38,     5,
      -1,    51,    39,     5,    -1,    51,    34,     5,    -1,    51,
      40,     5,    -1,    51,    38,    30,     5,    -1,    51,    39,
      30,     5,    -1,    51,    34,    30,     5,    -1,    51,    40,
      30,     5,    -1,    51,    30,    38,     5,    -1,    51,    30,
      39,     5,    -1,    51,    30,    34,     5,    -1,    51,    30,
      40,     5,    -1,    51,    30,    38,    30,     5,    -1,    51,
      30,    39,    30,     5,    -1,    51,    30,    34,    30,     5,
      -1,    51,    30,    40,    30,     5,    -1,    -1,     5,    33,
       4,    -1,     5,    30,    33,     4,    -1,     5,    33,    30,
       4,    -1,     5,    30,    33,    30,     4,    -1,     5,    33,
       3,    -1,     5,    30,    33,     3,    -1,     5,    33,    30,
       3,    -1,     5,    30,    33,    30,     3,    -1,     5,    33,
       5,    -1,     5,    30,    33,     5,    -1,     5,    33,    30,
       5,    -1,     5,    30,    33,    30,     5,    -1,     5,    41,
      33,     4,    -1,     5,    30,    41,    33,     4,    -1,     5,
      41,    33,    30,     4,    -1,     5,    30,    41,    33,    30,
       4,    -1,     5,    41,    33,     3,    -1,     5,    30,    41,
      33,     3,    -1,     5,    41,    33,    30,     3,    -1,     5,
      30,    41,    33,    30,     3,    -1,     5,    41,    33,     5,
      -1,     5,    30,    41,    33,     5,    -1,     5,    41,    33,
      30,     5,    -1,     5,    30,    41,    33,    30,     5,    -1,
       5,    42,    43,     4,    -1,     5,    30,    42,    43,     4,
      -1,     5,    42,    43,    30,     4,    -1,     5,    30,    42,
      43,    30,     4,    -1,     5,    42,    43,     3,    -1,     5,
      30,    42,    43,     3,    -1,     5,    42,    43,    30,     3,
      -1,     5,    30,    42,    43,    30,     3,    -1,     5,    42,
      43,     5,    -1,     5,    30,    42,    43,     5,    -1,     5,
      42,    43,    30,     5,    -1,     5,    30,    42,    43,    30,
       5,    -1,     5,    43,     3,    -1,     5,    30,    43,     3,
      -1,     5,    43,    30,     3,    -1,     5,    30,    43,    30,
       3,    -1,     5,    43,     5,    -1,     5,    30,    43,     5,
      -1,     5,    43,    30,     5,    -1,     5,    30,    43,    30,
       5,    -1,     5,    42,     3,    -1,     5,    30,    42,     3,
      -1,     5,    42,    30,     3,    -1,     5,    30,    42,    30,
       3,    -1,     5,    42,     5,    -1,     5,    30,    42,     5,
      -1,     5,    42,    30,     5,    -1,     5,    30,    42,    30,
       5,    -1,     5,    43,    33,     3,    -1,     5,    30,    43,
      33,     3,    -1,     5,    43,    33,    30,     3,    -1,     5,
      30,    43,    33,    30,     3,    -1,     5,    43,    33,     5,
      -1,     5,    30,    43,    33,     5,    -1,     5,    43,    33,
      30,     5,    -1,     5,    30,    43,    33,    30,     5,    -1,
       5,    42,    33,     3,    -1,     5,    30,    42,    33,     3,
      -1,     5,    42,    33,    30,     3,    -1,     5,    30,    42,
      33,    30,     3,    -1,     5,    42,    33,     5,    -1,     5,
      30,    42,    33,     5,    -1,     5,    42,    33,    30,     5,
      -1,     5,    30,    42,    33,    30,     5,    -1,    52,    30,
      23,    30,     5,    33,     4,    -1,    52,    30,    23,    30,
       5,    33,    30,     4,    -1,    52,    30,    23,    30,     5,
      30,    33,     4,    -1,    52,    30,    23,    30,     5,    30,
      33,    30,     4,    -1,    52,    30,    23,    30,     5,    33,
       3,    -1,    52,    30,    23,    30,     5,    30,    33,     3,
      -1,    52,    30,    23,    30,     5,    33,    30,     3,    -1,
      52,    30,    23,    30,     5,    30,    33,    30,     3,    -1,
      52,    30,    23,    30,     5,    33,     5,    -1,    52,    30,
      23,    30,     5,    30,    33,     5,    -1,    52,    30,    23,
      30,     5,    33,    30,     5,    -1,    52,    30,    23,    30,
       5,    30,    33,    30,     5,    -1,    52,    30,    23,    30,
       5,    41,    33,     4,    -1,    52,    30,    23,    30,     5,
      41,    33,    30,     4,    -1,    52,    30,    23,    30,     5,
      30,    41,    33,     4,    -1,    52,    30,    23,    30,     5,
      30,    41,    33,    30,     4,    -1,    52,    30,    23,    30,
       5,    41,    33,     3,    -1,    52,    30,    23,    30,     5,
      30,    41,    33,     3,    -1,    52,    30,    23,    30,     5,
      41,    33,    30,     3,    -1,    52,    30,    23,    30,     5,
      30,    41,    33,    30,     3,    -1,    52,    30,    23,    30,
       5,    41,    33,     5,    -1,    52,    30,    23,    30,     5,
      30,    41,    33,     5,    -1,    52,    30,    23,    30,     5,
      41,    33,    30,     5,    -1,    52,    30,    23,    30,     5,
      30,    41,    33,    30,     5,    -1,    52,    30,    23,    30,
       5,    43,     3,    -1,    52,    30,    23,    30,     5,    30,
      43,     3,    -1,    52,    30,    23,    30,     5,    43,    30,
       3,    -1,    52,    30,    23,    30,     5,    30,    43,    30,
       3,    -1,    52,    30,    23,    30,     5,    43,     5,    -1,
      52,    30,    23,    30,     5,    30,    43,     5,    -1,    52,
      30,    23,    30,     5,    43,    30,     5,    -1,    52,    30,
      23,    30,     5,    30,    43,    30,     5,    -1,    52,    30,
      23,    30,     5,    42,     3,    -1,    52,    30,    23,    30,
       5,    42,    30,     3,    -1,    52,    30,    23,    30,     5,
      30,    42,    30,     3,    -1,    52,    30,    23,    30,     5,
      30,    42,     3,    -1,    52,    30,    23,    30,     5,    42,
       5,    -1,    52,    30,    23,    30,     5,    30,    42,     5,
      -1,    52,    30,    23,    30,     5,    42,    30,     5,    -1,
      52,    30,    23,    30,     5,    30,    42,    30,     5,    -1,
      52,    30,    23,    30,     5,    43,    33,     3,    -1,    52,
      30,    23,    30,     5,    30,    43,    33,     3,    -1,    52,
      30,    23,    30,     5,    43,    33,    30,     3,    -1,    52,
      30,    23,    30,     5,    30,    43,    33,    30,     3,    -1,
      52,    30,    23,    30,     5,    43,    33,     5,    -1,    52,
      30,    23,    30,     5,    30,    43,    33,     5,    -1,    52,
      30,    23,    30,     5,    43,    33,    30,     5,    -1,    52,
      30,    23,    30,     5,    30,    43,    33,    30,     5,    -1,
      52,    30,    23,    30,     5,    42,    33,     3,    -1,    52,
      30,    23,    30,     5,    30,    42,    33,     3,    -1,    52,
      30,    23,    30,     5,    42,    33,    30,     3,    -1,    52,
      30,    23,    30,     5,    30,    42,    33,    30,     3,    -1,
      52,    30,    23,    30,     5,    42,    33,     5,    -1,    52,
      30,    23,    30,     5,    30,    42,    33,     5,    -1,    52,
      30,    23,    30,     5,    42,    33,    30,     5,    -1,    52,
      30,    23,    30,     5,    30,    42,    33,    30,     5,    -1,
      52,    30,    23,    30,     5,    42,    43,     4,    -1,    52,
      30,    23,    30,     5,    42,    43,    30,     4,    -1,    52,
      30,    23,    30,     5,    30,    42,    43,     4,    -1,    52,
      30,    23,    30,     5,    30,    42,    43,    30,     4,    -1,
      52,    30,    23,    30,     5,    42,    43,     3,    -1,    52,
      30,    23,    30,     5,    30,    42,    43,     3,    -1,    52,
      30,    23,    30,     5,    42,    43,    30,     3,    -1,    52,
      30,    23,    30,     5,    30,    42,    43,    30,     3,    -1,
      52,    30,    23,    30,     5,    42,    43,     5,    -1,    52,
      30,    23,    30,     5,    30,    42,    43,     5,    -1,    52,
      30,    23,    30,     5,    42,    43,    30,     5,    -1,    52,
      30,    23,    30,     5,    30,    42,    43,    30,     5,    -1,
      -1,    53,    30,    -1,    30,    53,    -1,    35,    54,    36,
      -1,    -1,    54,    30,    -1,    55,    37,    15,    30,    16,
       6,    -1,    55,    37,    15,    30,    16,    30,     6,    -1,
      55,    37,    30,    15,    30,    16,     6,    -1,    55,    37,
      30,    15,    30,    16,    30,     6,    -1,    -1,     5,    30,
       5,     8,    -1,     5,    30,     5,    30,     8,    -1,     5,
      30,     5,     8,    31,    30,    32,    -1,     5,    30,     5,
       8,    30,    31,    30,    32,    -1,     5,    30,     5,    30,
       8,    31,    30,    32,    -1,     5,    30,     5,    30,     8,
      30,    31,    30,    32,    -1,    30,     5,    30,     5,     8,
      -1,    30,     5,    30,     5,    30,     8,    -1,    30,     5,
      30,     5,     8,    31,    30,    32,    -1,    30,     5,    30,
       5,     8,    30,    31,    30,    32,    -1,    30,     5,    30,
       5,    30,     8,    31,    30,    32,    -1,    30,     5,    30,
       5,    30,     8,    30,    31,    30,    32,    -1,     5,    30,
       5,     8,    30,    -1,     5,    30,     5,    30,     8,    30,
      -1,     5,    30,     5,     8,    31,    30,    32,    30,    -1,
       5,    30,     5,     8,    30,    31,    30,    32,    30,    -1,
       5,    30,     5,    30,     8,    31,    30,    32,    30,    -1,
       5,    30,     5,    30,     8,    30,    31,    30,    32,    30,
      -1,    30,     5,    30,     5,     8,    30,    -1,    30,     5,
      30,     5,    30,     8,    30,    -1,    30,     5,    30,     5,
       8,    31,    30,    32,    30,    -1,    30,     5,    30,     5,
       8,    30,    31,    30,    32,    30,    -1,    30,     5,    30,
       5,    30,     8,    31,    30,    32,    30,    -1,    30,     5,
      30,     5,    30,     8,    30,    31,    30,    32,    30,    -1,
      55,    37,     5,    30,     5,     8,    30,    -1,    55,    37,
       5,    30,     5,    30,     8,    30,    -1,    55,    37,    30,
       5,    30,     5,     8,    30,    -1,    55,    37,    30,     5,
      30,     5,    30,     8,    30,    -1,    55,    37,     5,    30,
       5,     8,    30,    31,    30,    32,    30,    -1,    55,    37,
       5,    30,     5,    30,     8,    30,    31,    30,    32,    30,
      -1,    55,    37,    30,     5,    30,     5,     8,    30,    31,
      30,    32,    30,    -1,    55,    37,    30,     5,    30,     5,
      30,     8,    30,    31,    30,    32,    30,    -1,    55,    37,
       5,    30,     5,     8,    -1,    55,    37,     5,    30,     5,
      30,     8,    -1,    55,    37,    30,     5,    30,     5,     8,
      -1,    55,    37,    30,     5,    30,     5,    30,     8,    -1,
      55,    37,     5,    30,     5,     8,    30,    31,    30,    32,
      -1,    55,    37,     5,    30,     5,    30,     8,    30,    31,
      30,    32,    -1,    55,    37,    30,     5,    30,     5,     8,
      30,    31,    30,    32,    -1,    55,    37,    30,     5,    30,
       5,    30,     8,    30,    31,    30,    32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   112,   116,   122,   129,   135,   143,   149,
     155,   161,   169,   175,   181,   187,   195,   201,   207,   213,
     221,   227,   233,   239,   247,   253,   259,   265,   273,   279,
     288,   294,   300,   306,   314,   321,   328,   335,   342,   349,
     356,   363,   371,   378,   385,   392,   399,   404,   409,   414,
     422,   430,   440,   448,   461,   472,   478,   484,   490,   496,
     502,   508,   514,   522,   524,   530,   536,   542,   548,   554,
     559,   564,   569,   574,   580,   586,   592,   598,   604,   610,
     616,   622,   627,   632,   637,   646,   648,   652,   656,   660,
     664,   668,   672,   676,   680,   684,   688,   692,   696,   700,
     704,   708,   712,   716,   720,   724,   728,   732,   736,   740,
     744,   748,   752,   756,   760,   764,   770,   772,   776,   780,
     784,   788,   792,   798,   800,   804,   808,   812,   816,   820,
     826,   828,   832,   836,   840,   844,   848,   852,   857,   862,
     867,   872,   877,   882,   887,   892,   897,   902,   907,   912,
     917,   922,   927,   933,   938,   943,   948,   953,   958,   963,
     968,   973,   978,   983,   988,   993,   998,  1003,  1008,  1015,
    1017,  1023,  1029,  1035,  1041,  1047,  1053,  1059,  1065,  1071,
    1077,  1083,  1090,  1096,  1102,  1108,  1114,  1120,  1126,  1132,
    1138,  1144,  1150,  1156,  1163,  1169,  1175,  1181,  1187,  1193,
    1199,  1205,  1211,  1217,  1223,  1229,  1235,  1241,  1247,  1253,
    1259,  1265,  1271,  1277,  1283,  1289,  1295,  1301,  1307,  1313,
    1319,  1325,  1331,  1337,  1343,  1349,  1355,  1361,  1367,  1373,
    1380,  1386,  1392,  1398,  1404,  1410,  1416,  1422,  1428,  1434,
    1440,  1446,  1452,  1458,  1464,  1470,  1476,  1482,  1488,  1494,
    1501,  1507,  1513,  1519,  1525,  1531,  1537,  1543,  1549,  1555,
    1561,  1567,  1573,  1579,  1585,  1591,  1597,  1603,  1609,  1615,
    1621,  1627,  1633,  1639,  1645,  1651,  1657,  1663,  1669,  1675,
    1681,  1687,  1693,  1699,  1705,  1711,  1718,  1724,  1730,  1736,
    1742,  1748,  1754,  1760,  1767,  1773,  1779,  1785,  1791,  1797,
    1803,  1809,  1815,  1821,  1827,  1833,  1842,  1844,  1847,  1850,
    1855,  1857,  1860,  1864,  1868,  1872,  1878,  1880,  1887,  1894,
    1901,  1908,  1915,  1922,  1929,  1936,  1943,  1950,  1957,  1964,
    1971,  1978,  1985,  1992,  1999,  2006,  2013,  2020,  2027,  2034,
    2041,  2048,  2055,  2062,  2069,  2076,  2083,  2090,  2097,  2104,
    2111,  2118,  2125,  2132,  2139,  2146,  2153
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING", "NAME", "ATTRNAME",
  "ATTRNAME2", "ATTRNUM", "EXIT", "CREATE", "DROP", "USE", "SHOW",
  "DATABASE", "PRIMARY", "KEY", "INSERT", "INTO", "VALUES", "DELETE",
  "FROM", "WHERE", "AND", "UPDATE", "SET", "SELECT", "GROUP", "BY",
  "TABLE", "BLANK", "NOT", "NUL", "'='", "'*'", "'('", "')'", "','", "'+'",
  "'-'", "'/'", "'!'", "'<'", "'>'", "$accept", "file", "tokenlist",
  "insertDetail0", "insertDetail", "namelist", "namelist1", "expr",
  "whereclauses", "tableDetail", "tableDetail2", "tableDetail3", 0
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
     285,   286,   287,    61,    42,    40,    41,    44,    43,    45,
      47,    33,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    49,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     7,     8,     6,     7,     7,     8,
       6,     7,     7,     8,     6,     7,     7,     8,     6,     7,
       7,     8,     6,     7,     7,     8,     6,     7,     8,     7,
      10,    11,    11,    12,    14,    15,    15,    16,    15,    16,
      16,    17,    12,    13,    13,    14,    12,    13,    13,    14,
       9,    10,    10,    11,    14,    10,     9,    11,    10,    11,
      10,    12,    11,     0,     1,     1,     2,     2,     3,     3,
       4,     4,     5,     3,     4,     4,     5,     3,     4,     4,
       5,     5,     6,     6,     7,     0,     1,     1,     1,     2,
       2,     2,     3,     3,     3,     4,     4,     5,     4,     4,
       5,     4,     4,     5,     4,     4,     4,     5,     5,     6,
       5,     5,     6,     5,     5,     6,     0,     1,     2,     4,
       4,     5,     3,     0,     1,     2,     4,     4,     5,     3,
       0,     1,     1,     1,     2,     2,     2,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     5,
       5,     5,     5,     3,     3,     3,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     5,     5,     5,     0,
       3,     4,     4,     5,     3,     4,     4,     5,     3,     4,
       4,     5,     4,     5,     5,     6,     4,     5,     5,     6,
       4,     5,     5,     6,     4,     5,     5,     6,     4,     5,
       5,     6,     4,     5,     5,     6,     3,     4,     4,     5,
       3,     4,     4,     5,     3,     4,     4,     5,     3,     4,
       4,     5,     4,     5,     5,     6,     4,     5,     5,     6,
       4,     5,     5,     6,     4,     5,     5,     6,     7,     8,
       8,     9,     7,     8,     8,     9,     7,     8,     8,     9,
       8,     9,     9,    10,     8,     9,     9,    10,     8,     9,
       9,    10,     7,     8,     8,     9,     7,     8,     8,     9,
       7,     8,     9,     8,     7,     8,     8,     9,     8,     9,
       9,    10,     8,     9,     9,    10,     8,     9,     9,    10,
       8,     9,     9,    10,     8,     9,     9,    10,     8,     9,
       9,    10,     8,     9,     9,    10,     0,     2,     2,     3,
       0,     2,     6,     7,     7,     8,     0,     4,     5,     7,
       8,     8,     9,     5,     6,     8,     9,     9,    10,     5,
       6,     8,     9,     9,    10,     6,     7,     9,    10,    10,
      11,     7,     8,     8,     9,    11,    12,    12,    13,     6,
       7,     7,     8,    10,    11,    11,    12
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   306,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,   306,   310,     0,    10,     0,    26,     0,
      14,     0,    18,     0,    22,     0,     0,     0,     0,     0,
       0,     0,   123,   120,     0,   119,     0,   306,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
     308,     0,     0,     0,     0,    29,   307,    11,    27,    15,
      19,    23,    63,     0,     0,     0,     0,     0,   124,     0,
       0,   121,     4,     0,     0,     8,     0,    24,     0,    12,
       0,    16,     0,    20,     0,     0,     0,     0,     0,     0,
     123,     0,     0,   311,   309,     0,    64,    65,    63,    85,
       0,   169,     0,   130,     0,     0,     0,   125,     0,     0,
       5,    28,     9,    25,    13,    17,    21,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    65,
       0,    85,     0,    86,    88,     0,    87,     0,    56,     0,
       0,     0,     0,   130,   132,   131,   133,     0,     0,    50,
       0,     0,     0,     0,     0,   129,     0,    63,     0,   169,
       0,   130,     0,     0,     0,   317,     0,     0,     0,     0,
       0,     0,    67,    66,    85,     0,    55,     0,    89,    91,
      90,     0,    69,     0,    60,    77,    73,     0,    85,     0,
       0,     0,     0,     0,    30,     0,     0,   135,   134,   136,
       0,     0,     0,     0,     0,    52,     0,   169,   169,   127,
       0,   126,     0,    58,     0,     0,   130,     0,    51,     0,
       0,     0,   329,     0,   318,   323,     0,     0,     0,     0,
       0,    68,     0,    69,    59,     0,    70,    94,    92,     0,
      93,    79,    75,    78,    74,    85,     0,     0,     0,     0,
       0,   174,   170,   178,     0,     0,   214,   218,     0,     0,
       0,   206,   210,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,   139,   155,     0,   137,   153,     0,   138,
     154,     0,   140,   156,     0,     0,     0,     0,   128,    57,
       0,    62,    31,     0,     0,     0,    53,   169,   169,     0,
       0,   330,     0,   335,     0,   324,   349,     0,   312,     0,
       0,     0,    71,    70,   106,   104,     0,   105,   101,    95,
     102,    96,    99,    98,    80,    76,     0,    81,   175,   171,
     179,     0,     0,   215,   219,     0,     0,     0,   207,   211,
       0,     0,   176,   172,   180,   186,   182,   190,     0,   216,
     220,   230,   234,     0,   198,   194,   202,     0,   208,   212,
     222,   226,     0,     0,     0,   169,   147,   163,     0,   145,
     161,     0,   146,   162,     0,   148,   164,     0,   143,   159,
     141,   157,   142,   158,   144,   160,     0,    42,     0,    46,
       0,    61,    33,     0,     0,     0,     0,     0,   319,     0,
       0,     0,     0,   336,     0,   341,   350,   313,   351,     0,
     314,     0,    72,   113,   107,   114,   108,   111,   110,   103,
      97,   100,    83,    82,   177,   173,   181,   187,   183,   191,
       0,   217,   221,   231,   235,     0,   199,   195,   203,     0,
     209,   213,   223,   227,     0,   188,   184,   192,   232,   236,
     200,   196,   204,   224,   228,     0,   169,     0,   151,   167,
     149,   165,   150,   166,   152,   168,     0,    44,    48,     0,
     169,    43,     0,    47,     0,   320,   331,     0,   321,     0,
     325,     0,     0,     0,   342,   343,   352,   315,   115,   109,
     112,    84,   189,   185,   193,   233,   237,   201,   197,   205,
     225,   229,     0,     0,     0,     0,     0,     0,    34,     0,
      54,   169,     0,    45,    49,   332,   322,   333,   326,   337,
       0,   327,     0,     0,     0,   344,     0,     0,     0,     0,
     242,   238,   246,     0,     0,   270,   274,     0,     0,     0,
     262,   266,     0,     0,    38,     0,    36,     0,    35,     0,
     334,   338,   328,   339,   353,     0,     0,     0,   243,   240,
     247,     0,     0,   273,   275,     0,     0,     0,   263,   267,
       0,     0,   244,   239,   248,   254,   250,   258,     0,   271,
     276,   286,   290,     0,   298,   294,   302,     0,   264,   268,
     278,   282,     0,    40,    39,     0,    37,   340,   345,   354,
     355,     0,   245,   241,   249,   255,   252,   259,     0,   272,
     277,   287,   291,     0,   299,   296,   303,     0,   265,   269,
     279,   283,     0,   256,   251,   260,   288,   292,   300,   295,
     304,   280,   284,    41,   346,   347,   356,   257,   253,   261,
     289,   293,   301,   297,   305,   281,   285,   348
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,   200,   237,    43,   170,   248,   242,   115,
     153,   154
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -260
static const yytype_int16 yypact[] =
{
     310,    -5,    34,    38,   116,   125,   174,   260,   296,   356,
     358,  -260,   300,   317,   415,   324,   387,   390,   403,     9,
     400,   411,   420,   425,   439,   526,   534,   535,  -260,   538,
     539,   542,   543,   546,   547,   550,   551,   553,   554,   556,
     555,   558,   557,    -7,   341,   343,   560,   357,   561,   565,
     562,    73,   566,   570,   573,   577,   583,   584,   585,   586,
     587,   568,   564,   574,  -260,   575,    39,     4,   567,   569,
     571,   572,   576,   578,   579,   580,   581,   582,   592,   588,
     117,    57,   271,   240,   241,   243,   244,   246,   589,   590,
     591,   593,   594,   595,   596,    24,  -260,   598,   599,   600,
     602,   608,   610,   611,   612,   617,   618,   603,   597,   609,
     281,  -260,   620,   271,    22,   247,  -260,   622,  -260,   623,
    -260,   624,  -260,   625,  -260,   626,   619,   614,   632,   613,
     634,   635,   233,  -260,   636,  -260,   250,   271,   251,   255,
     263,   266,   269,   615,   616,   621,   627,   628,   629,  -260,
     630,   631,   637,   318,   522,  -260,  -260,  -260,  -260,  -260,
    -260,  -260,    63,   633,    -9,   639,   638,   640,  -260,   642,
     121,  -260,  -260,   641,   270,  -260,   643,  -260,   644,  -260,
     645,  -260,   646,  -260,   647,   648,   649,   652,   650,   657,
     233,   659,   651,  -260,  -260,   231,  -260,   653,    64,    70,
     111,   660,   654,   123,   273,   531,   655,  -260,   295,   235,
    -260,  -260,  -260,  -260,  -260,  -260,  -260,    71,   656,   379,
     661,   658,   298,   106,   664,   662,   663,   385,  -260,   665,
      -4,    70,   112,  -260,  -260,    15,  -260,   424,  -260,   666,
      75,   373,   274,   123,  -260,  -260,  -260,   473,   383,  -260,
     667,   668,   669,   670,   236,  -260,   673,    64,   113,   660,
     671,   123,   275,   672,   302,   395,   674,   127,   679,   675,
     676,   677,  -260,   678,    70,   426,  -260,   680,  -260,  -260,
    -260,   563,   681,    86,  -260,   682,   683,    78,    70,   410,
     126,   684,     2,    23,  -260,   365,   394,  -260,  -260,  -260,
     303,    12,   114,   186,   189,  -260,   686,   660,   660,  -260,
     685,  -260,   115,  -260,   687,   277,   123,   397,  -260,   688,
     689,   690,   691,   693,   409,   414,   694,   180,    74,   696,
     699,  -260,   434,   695,  -260,    93,  -260,   697,   698,   105,
     700,  -260,  -260,   701,   702,    70,   436,   129,   703,     3,
      52,  -260,  -260,  -260,   476,   157,  -260,  -260,   391,   192,
     160,  -260,  -260,   399,   195,  -260,   704,   311,   705,   198,
     204,   212,   215,  -260,  -260,   462,  -260,  -260,   512,  -260,
    -260,   513,  -260,  -260,   516,   707,   278,   279,  -260,  -260,
     709,  -260,  -260,   366,   408,   322,  -260,   660,   660,   708,
     692,   710,   712,   713,   715,   530,   716,   718,  -260,   723,
     239,   237,   717,  -260,   719,   720,   108,   721,  -260,  -260,
     722,   724,   725,  -260,  -260,  -260,   438,   726,  -260,  -260,
    -260,   479,   163,  -260,  -260,   517,   218,   166,  -260,  -260,
     520,   221,  -260,  -260,  -260,  -260,  -260,  -260,   482,  -260,
    -260,  -260,  -260,   521,  -260,  -260,  -260,   485,  -260,  -260,
    -260,  -260,   524,   711,   727,   660,  -260,  -260,   525,  -260,
    -260,   528,  -260,  -260,   529,  -260,  -260,   532,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,  -260,   728,  -260,   368,  -260,
     369,  -260,  -260,   325,   729,   280,   282,   730,   731,   733,
     732,   735,   734,   736,   738,   739,   741,  -260,   742,   740,
    -260,   737,  -260,  -260,  -260,   743,   744,   745,  -260,  -260,
    -260,  -260,   746,  -260,  -260,  -260,  -260,  -260,  -260,  -260,
     488,  -260,  -260,  -260,  -260,   533,  -260,  -260,  -260,   491,
    -260,  -260,  -260,  -260,   536,  -260,  -260,  -260,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,   377,   660,   283,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,  -260,   749,  -260,  -260,   747,
     660,  -260,   370,  -260,   372,   748,  -260,   750,   751,   752,
     753,   755,   754,   757,   758,   759,   761,  -260,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,
    -260,  -260,   416,   169,   706,     7,    58,   285,  -260,   374,
    -260,   660,   286,  -260,  -260,  -260,   762,  -260,   763,  -260,
     756,   764,   765,   766,   768,   769,   172,   770,     8,    62,
    -260,  -260,  -260,   494,   175,  -260,  -260,   537,   224,   178,
    -260,  -260,   540,   227,  -260,   375,  -260,   289,  -260,   376,
    -260,  -260,   771,  -260,   772,   767,   773,   774,  -260,  -260,
    -260,   497,   181,  -260,  -260,   541,   228,   209,  -260,  -260,
     544,   232,  -260,  -260,  -260,  -260,  -260,  -260,   500,  -260,
    -260,  -260,  -260,   545,  -260,  -260,  -260,   503,  -260,  -260,
    -260,  -260,   548,  -260,  -260,   378,  -260,  -260,  -260,   776,
     777,   778,  -260,  -260,  -260,  -260,  -260,  -260,   506,  -260,
    -260,  -260,  -260,   549,  -260,  -260,  -260,   509,  -260,  -260,
    -260,  -260,   552,  -260,  -260,  -260,  -260,  -260,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,  -260,   779,  -260,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -260,  -260,  -260,  -195,  -230,   515,   380,  -241,  -259,   131,
    -260,  -260
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -317
static const yytype_int16 yytable[] =
{
     315,   275,   296,   232,   273,   356,   433,   357,   434,    96,
     635,   663,   636,   664,    39,   373,    40,   374,   278,   279,
     317,   202,   258,    66,   203,    12,   361,   151,   362,   133,
      67,   274,   358,   435,    97,   359,   436,   637,   665,    41,
     638,   666,   375,    42,   332,   360,   437,   280,   386,   387,
     639,   667,   152,   363,   134,   438,   364,   439,   346,  -316,
      94,   640,   312,   641,    13,   668,   111,   669,    14,   196,
     196,   197,   229,   233,   234,   394,    95,   196,    78,   197,
     408,   285,   440,   286,   343,   441,   344,   112,   642,   337,
     338,   643,   670,   198,   230,   671,   414,   415,   199,   231,
     235,   257,   236,    41,   409,   287,   199,    79,   420,   421,
     288,   515,   516,   345,   265,   426,   339,   376,   340,   377,
     238,   276,   313,   416,   389,   417,   244,   245,   246,   351,
     352,   353,   428,   429,   430,   325,   266,   422,   495,   496,
     517,   239,   277,   314,   378,   390,    15,   110,   240,   240,
     240,   208,   240,   247,    67,    16,   354,   326,   209,   431,
     445,   446,   447,   454,   455,   456,   527,   528,   529,   536,
     537,   538,   630,   631,   632,   658,   659,   660,   675,   676,
     677,   684,   685,   686,   705,   706,   707,   448,   406,   379,
     457,   380,   382,   530,   383,   451,   539,   452,   460,   633,
     461,   466,   661,   467,    17,   678,   557,   469,   687,   470,
     407,   708,   714,   715,   716,   472,   381,   473,   475,   384,
     476,   533,   453,   534,   542,   462,   543,   681,   468,   682,
     690,   711,   691,   712,   471,   720,   225,   721,   168,   717,
     255,   309,   474,   510,   150,   477,   226,   508,   535,   116,
     118,   544,   120,   122,   683,   124,   155,   692,   713,   172,
     175,   227,   722,   169,   177,   256,   310,   511,   174,   509,
     117,   119,   179,   121,   123,   181,   125,   156,   183,   211,
     173,   176,   249,   294,   318,   178,   392,   487,   489,   571,
      18,   573,   608,   180,   644,   648,   182,   607,   694,   184,
     156,   113,   148,   250,   295,   319,   114,   393,   488,   490,
     572,   612,   574,   609,    29,   645,   649,   253,    95,   695,
       1,     2,     3,     4,   321,   368,    19,     5,   264,    30,
       6,    31,   254,   464,     7,   209,     8,   369,    34,   254,
       9,   370,   371,   372,   494,   369,    32,   569,   193,   370,
     371,   372,   647,    35,   194,    68,   369,    70,    28,   369,
     370,   371,   372,   370,   371,   372,    20,    21,    22,    23,
      69,    73,    71,    24,   365,   492,    25,   567,   568,   613,
      26,   614,    27,   646,   693,   696,    74,   733,   366,   366,
     270,   366,   366,   366,   449,   366,   450,   366,   366,   366,
     271,   366,   458,   289,   459,    36,   290,   602,    38,   260,
     603,    37,   261,   300,   291,   292,   293,   301,   604,   605,
     606,   302,   303,   304,   367,   322,   323,   395,   301,    33,
      44,   301,   302,   303,   304,   302,   303,   304,   493,   401,
     402,    45,   301,   347,   403,   404,   302,   303,   304,   626,
      46,   348,   349,   350,   281,    47,   281,   627,   628,   629,
     282,   283,   333,   283,   281,   478,   281,   479,   281,    48,
     412,   283,   427,   283,   522,   283,   297,   298,   299,   442,
     443,   444,   524,   525,   526,   545,   546,   547,   550,   551,
     552,   592,   593,   594,   597,   598,   599,   672,   673,   674,
     702,   703,   704,   723,   724,   725,   728,   729,   730,   737,
     738,   739,   742,   743,   744,   480,   482,   481,   483,   484,
     531,   485,   532,   540,   548,   541,   549,   553,   558,   554,
     559,   560,   562,   561,   563,   564,   595,   565,   596,   600,
     679,   601,   680,   688,   709,   689,   710,   718,   726,   719,
     727,   731,   740,   732,   741,   745,    49,   746,   251,   195,
     503,   504,    62,    64,    50,    51,    80,    77,    52,    53,
     222,    81,    54,    55,    72,    82,    56,    57,    83,    75,
      58,    59,    84,    60,    61,    63,    76,    65,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    98,   108,    99,
     335,   100,   101,   135,   136,   137,   102,   138,   103,   104,
     105,   106,   107,   139,   129,   140,   141,   142,   109,   126,
     127,   128,   143,   144,   130,   131,   132,   146,   145,   149,
     147,   157,   158,   159,   160,   161,   163,   164,   162,   166,
     167,   171,   192,   165,   204,   185,   186,   207,   188,     0,
     210,   187,   212,   213,   214,   215,   216,   219,   189,   190,
     156,   191,   221,   201,   223,   241,   262,   217,   205,   267,
     206,   218,     0,     0,     0,   284,   305,   252,   311,     0,
     220,   224,   324,   228,   327,     0,   259,   243,   263,   334,
     388,   328,   268,   269,   320,   272,   391,   396,   306,   307,
     308,   410,   405,     0,   316,     0,   329,   330,   331,     0,
       0,   336,   341,   342,   385,   411,   555,   355,   491,   397,
     398,     0,   399,   400,   498,   413,   506,   418,   419,   507,
     423,   424,   425,   566,   463,   465,   432,   486,   497,   634,
       0,   499,   500,   587,   501,   502,   505,   512,   586,   513,
     514,   518,   519,     0,   520,   521,   523,   556,   610,   570,
       0,   576,   575,   577,   578,   579,   580,   581,   582,     0,
     583,   584,   585,   588,   589,   590,   591,   611,   615,     0,
       0,   617,   616,   619,   618,   620,   621,   622,   652,   623,
     624,   625,   650,   651,   653,     0,   655,   654,   656,   699,
     657,   697,   698,   662,   701,   700,   734,   735,     0,   747,
     736
};

static const yytype_int16 yycheck[] =
{
     259,   231,   243,   198,     8,     3,     3,     5,     5,     5,
       3,     3,     5,     5,     5,     3,     7,     5,     3,     4,
     261,    30,   217,    30,    33,    30,     3,     5,     5,     5,
      37,    35,    30,    30,    30,    33,    33,    30,    30,    30,
      33,    33,    30,    34,   274,    43,    43,    32,   307,   308,
      43,    43,    30,    30,    30,     3,    33,     5,   288,    37,
      21,     3,   257,     5,    30,     3,     9,     5,    30,     6,
       6,     8,     8,     3,     4,   316,    37,     6,     5,     8,
       6,     6,    30,     8,     6,    33,     8,    30,    30,     3,
       4,    33,    30,    30,    30,    33,     3,     4,    35,    35,
      30,    30,    32,    30,    30,    30,    35,    34,     3,     4,
      35,     3,     4,    35,     8,   345,    30,     3,    32,     5,
       9,     9,     9,    30,     9,    32,     3,     4,     5,     3,
       4,     5,     3,     4,     5,     8,    30,    32,   397,   398,
      32,    30,    30,    30,    30,    30,    30,    30,    37,    37,
      37,    30,    37,    30,    37,    30,    30,    30,    37,    30,
       3,     4,     5,     3,     4,     5,     3,     4,     5,     3,
       4,     5,     3,     4,     5,     3,     4,     5,     3,     4,
       5,     3,     4,     5,     3,     4,     5,    30,     8,     3,
      30,     5,     3,    30,     5,     3,    30,     5,     3,    30,
       5,     3,    30,     5,    30,    30,   465,     3,    30,     5,
      30,    30,     3,     4,     5,     3,    30,     5,     3,    30,
       5,     3,    30,     5,     3,    30,     5,     3,    30,     5,
       3,     3,     5,     5,    30,     3,     5,     5,     5,    30,
       5,     5,    30,     6,   113,    30,    15,     8,    30,     9,
       9,    30,     9,     9,    30,     9,     9,    30,    30,     9,
       9,    30,    30,    30,     9,    30,    30,    30,   137,    30,
      30,    30,     9,    30,    30,     9,    30,    30,     9,     9,
      30,    30,     9,     9,     9,    30,     9,     9,     9,     9,
      30,     9,     9,    30,     9,     9,    30,   556,     9,    30,
      30,    30,    21,    30,    30,    30,    35,    30,    30,    30,
      30,   570,    30,    30,    14,    30,    30,    22,    37,    30,
      10,    11,    12,    13,    22,    22,    30,    17,    30,    29,
      20,    14,    37,    22,    24,    37,    26,    34,    14,    37,
      30,    38,    39,    40,    22,    34,    29,    22,    30,    38,
      39,    40,   611,    29,    36,    14,    34,    14,     0,    34,
      38,    39,    40,    38,    39,    40,    10,    11,    12,    13,
      29,    14,    29,    17,     9,     9,    20,     9,     9,     9,
      24,     9,    26,     9,     9,     9,    29,     9,    23,    23,
       5,    23,    23,    23,     3,    23,     5,    23,    23,    23,
      15,    23,     3,    30,     5,    18,    33,    30,     5,    30,
      33,    21,    33,    30,    41,    42,    43,    34,    41,    42,
      43,    38,    39,    40,    30,    30,    31,    30,    34,    14,
      30,    34,    38,    39,    40,    38,    39,    40,    30,    30,
      31,    30,    34,    33,    30,    31,    38,    39,    40,    33,
      30,    41,    42,    43,    30,    30,    30,    41,    42,    43,
      36,    37,    36,    37,    30,     3,    30,     5,    30,    30,
      36,    37,    36,    37,    36,    37,     3,     4,     5,     3,
       4,     5,     3,     4,     5,     3,     4,     5,     3,     4,
       5,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     3,     4,     5,     3,
       4,     5,     3,     4,     5,     3,     3,     5,     5,     3,
       3,     5,     5,     3,     3,     5,     5,     3,     3,     5,
       5,     3,     3,     5,     5,     3,     3,     5,     5,     3,
       3,     5,     5,     3,     3,     5,     5,     3,     3,     5,
       5,     3,     3,     5,     5,     3,    30,     5,    27,    37,
      30,    31,     6,     5,    30,    30,    51,     5,    30,    30,
     190,     5,    30,    30,    14,     5,    30,    30,     5,    18,
      30,    30,     5,    30,    30,    30,    21,    30,     5,     5,
       5,     5,     5,    25,    30,    21,    21,    30,     6,    30,
      37,    30,    30,     5,     5,     5,    30,     5,    30,    30,
      30,    30,    30,     5,    21,     5,     5,     5,    30,    30,
      30,    30,     5,     5,    30,    30,    30,    30,    25,     9,
      21,     9,     9,     9,     9,     9,    22,     5,    19,     5,
       5,     5,     5,    30,     5,    30,    30,     5,    21,    -1,
       9,    30,     9,     9,     9,     9,     9,     5,    30,    30,
      30,    30,     5,    30,     5,     5,     5,    19,    30,     5,
      30,    22,    -1,    -1,    -1,     9,     9,    22,     5,    -1,
      30,    30,     8,    30,     5,    -1,    30,    33,    30,     9,
       5,    16,    30,    30,    22,    30,     9,     9,    30,    30,
      30,     5,     8,    -1,    33,    -1,    30,    30,    30,    -1,
      -1,    30,    30,    30,    28,    16,     5,    33,     9,    30,
      30,    -1,    31,    30,    32,    30,     8,    30,    30,     6,
      30,    30,    30,     5,    30,    30,    33,    30,    30,    33,
      -1,    31,    30,     6,    31,    30,    30,    30,     8,    30,
      30,    30,    30,    -1,    30,    30,    30,    30,     9,    30,
      -1,    30,    32,    30,    32,    30,    32,    31,    30,    -1,
      31,    30,    30,    30,    30,    30,    30,    30,    30,    -1,
      -1,    30,    32,    30,    32,    30,    32,    30,    32,    31,
      31,    30,    30,    30,    30,    -1,    30,    32,    30,    32,
      31,    30,    30,    33,    30,    32,    30,    30,    -1,    30,
      32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    12,    13,    17,    20,    24,    26,    30,
      45,    46,    30,    30,    30,    30,    30,    30,    30,    30,
      10,    11,    12,    13,    17,    20,    24,    26,     0,    14,
      29,    14,    29,    14,    14,    29,    18,    21,     5,     5,
       7,    30,    34,    49,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,     6,    30,     5,    30,    30,    37,    14,    29,
      14,    29,    14,    14,    29,    18,    21,     5,     5,    34,
      49,     5,     5,     5,     5,     5,     5,     5,     5,     5,
      25,    30,    21,    21,    21,    37,     5,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,     6,    30,
      30,     9,    30,    30,    35,    53,     9,    30,     9,    30,
       9,    30,     9,    30,     9,    30,    30,    30,    30,    21,
      30,    30,    30,     5,    30,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,    25,    30,    21,    21,     9,
      53,     5,    30,    54,    55,     9,    30,     9,     9,     9,
       9,     9,    19,    22,     5,    30,     5,     5,     5,    30,
      50,     5,     9,    30,    53,     9,    30,     9,    30,     9,
      30,     9,    30,     9,    30,    30,    30,    30,    21,    30,
      30,    30,     5,    30,    36,    37,     6,     8,    30,    35,
      47,    30,    30,    33,     5,    30,    30,     5,    30,    37,
       9,     9,     9,     9,     9,     9,     9,    19,    22,     5,
      30,     5,    50,     5,    30,     5,    15,    30,    30,     8,
      30,    35,    47,     3,     4,    30,    32,    48,     9,    30,
      37,     5,    52,    33,     3,     4,     5,    30,    51,     9,
      30,    27,    22,    22,    37,     5,    30,    30,    47,    30,
      30,    33,     5,    30,    30,     8,    30,     5,    30,    30,
       5,    15,    30,     8,    35,    48,     9,    30,     3,     4,
      32,    30,    36,    37,     9,     6,     8,    30,    35,    30,
      33,    41,    42,    43,     9,    30,    51,     3,     4,     5,
      30,    34,    38,    39,    40,     9,    30,    30,    30,     5,
      30,     5,    47,     9,    30,    52,    33,    51,     9,    30,
      22,    22,    30,    31,     8,     8,    30,     5,    16,    30,
      30,    30,    48,    36,     9,    37,    30,     3,     4,    30,
      32,    30,    30,     6,     8,    35,    48,    33,    41,    42,
      43,     3,     4,     5,    30,    33,     3,     5,    30,    33,
      43,     3,     5,    30,    33,     9,    23,    30,    22,    34,
      38,    39,    40,     3,     5,    30,     3,     5,    30,     3,
       5,    30,     3,     5,    30,    28,    52,    52,     5,     9,
      30,     9,     9,    30,    51,    30,     9,    30,    30,    31,
      30,    30,    31,    30,    31,     8,     8,    30,     6,    30,
       5,    16,    36,    30,     3,     4,    30,    32,    30,    30,
       3,     4,    32,    30,    30,    30,    48,    36,     3,     4,
       5,    30,    33,     3,     5,    30,    33,    43,     3,     5,
      30,    33,     3,     4,     5,     3,     4,     5,    30,     3,
       5,     3,     5,    30,     3,     4,     5,    30,     3,     5,
       3,     5,    30,    30,    22,    30,     3,     5,    30,     3,
       5,    30,     3,     5,    30,     3,     5,    30,     3,     5,
       3,     5,     3,     5,     3,     5,    30,     9,    30,     9,
      30,     9,     9,    30,    22,    52,    52,    30,    32,    31,
      30,    31,    30,    30,    31,    30,     8,     6,     8,    30,
       6,    30,    30,    30,    30,     3,     4,    32,    30,    30,
      30,    30,    36,    30,     3,     4,     5,     3,     4,     5,
      30,     3,     5,     3,     5,    30,     3,     4,     5,    30,
       3,     5,     3,     5,    30,     3,     4,     5,     3,     5,
       3,     4,     5,     3,     5,     5,    30,    52,     3,     5,
       3,     5,     3,     5,     3,     5,     5,     9,     9,    22,
      30,     9,    30,     9,    30,    32,    30,    30,    32,    30,
      32,    31,    30,    31,    30,    30,     8,     6,    30,    30,
      30,    30,     3,     4,     5,     3,     5,     3,     4,     5,
       3,     5,    30,    33,    41,    42,    43,    52,     9,    30,
       9,    30,    52,     9,     9,    30,    32,    30,    32,    30,
      30,    32,    30,    31,    31,    30,    33,    41,    42,    43,
       3,     4,     5,    30,    33,     3,     5,    30,    33,    43,
       3,     5,    30,    33,     9,    30,     9,    52,     9,    30,
      30,    30,    32,    30,    32,    30,    30,    31,     3,     4,
       5,    30,    33,     3,     5,    30,    33,    43,     3,     5,
      30,    33,     3,     4,     5,     3,     4,     5,    30,     3,
       5,     3,     5,    30,     3,     4,     5,    30,     3,     5,
       3,     5,    30,     9,     9,    30,     9,    30,    30,    32,
      32,    30,     3,     4,     5,     3,     4,     5,    30,     3,
       5,     3,     5,    30,     3,     4,     5,    30,     3,     5,
       3,     5,    30,     3,     4,     5,     3,     5,     3,     4,
       5,     3,     5,     9,    30,    30,    32,     3,     4,     5,
       3,     5,     3,     4,     5,     3,     5,    30
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
#line 109 "yacc.y"
    {
	;}
    break;

  case 3:
#line 112 "yacc.y"
    {
	;}
    break;

  case 4:
#line 117 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "create database";		
		YYACCEPT;
	;}
    break;

  case 5:
#line 123 "yacc.y"
    {
		dbName = (yyvsp[(6) - (8)].m_sId);
		cout << "CREATE database" << endl;
		type = "create database";
		YYACCEPT;
	;}
    break;

  case 6:
#line 130 "yacc.y"
    {
		dbName = (yyvsp[(5) - (6)].m_sId);
		type = "create database";
		YYACCEPT;
	;}
    break;

  case 7:
#line 136 "yacc.y"
    {
		dbName = (yyvsp[(5) - (7)].m_sId);
		type = "create database";
		YYACCEPT;
	;}
    break;

  case 8:
#line 144 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "drop database";
		YYACCEPT;
	;}
    break;

  case 9:
#line 150 "yacc.y"
    {
		dbName = (yyvsp[(6) - (8)].m_sId);
		type = "drop database";
		YYACCEPT;
	;}
    break;

  case 10:
#line 156 "yacc.y"
    {
		dbName = (yyvsp[(5) - (6)].m_sId);
		type = "drop database";
		YYACCEPT;
	;}
    break;

  case 11:
#line 162 "yacc.y"
    {
		dbName = (yyvsp[(5) - (7)].m_sId);
		type = "drop database";
		YYACCEPT;
	;}
    break;

  case 12:
#line 170 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "use database";
		YYACCEPT;
	;}
    break;

  case 13:
#line 176 "yacc.y"
    {
		dbName = (yyvsp[(6) - (8)].m_sId);
		type = "use database";
		YYACCEPT;
	;}
    break;

  case 14:
#line 182 "yacc.y"
    {
		dbName = (yyvsp[(6) - (6)].m_sId);
		type = "use database";
		YYACCEPT;
	;}
    break;

  case 15:
#line 188 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "use database";
		YYACCEPT;
	;}
    break;

  case 16:
#line 196 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "show database";
		YYACCEPT;
	;}
    break;

  case 17:
#line 202 "yacc.y"
    {
		dbName = (yyvsp[(6) - (8)].m_sId);
		type = "show database";
		YYACCEPT;
	;}
    break;

  case 18:
#line 208 "yacc.y"
    {
		dbName = (yyvsp[(6) - (6)].m_sId);
		type = "show database";
		YYACCEPT;
	;}
    break;

  case 19:
#line 214 "yacc.y"
    {
		dbName = (yyvsp[(6) - (7)].m_sId);
		type = "show database";
		YYACCEPT;
	;}
    break;

  case 20:
#line 222 "yacc.y"
    {
		tbName = (yyvsp[(6) - (7)].m_sId);
		type = "show table";
		YYACCEPT;
	;}
    break;

  case 21:
#line 228 "yacc.y"
    {
		tbName = (yyvsp[(6) - (8)].m_sId);
		type = "show table";
		YYACCEPT;
	;}
    break;

  case 22:
#line 234 "yacc.y"
    {
		tbName = (yyvsp[(5) - (6)].m_sId);
		type = "show table";
		YYACCEPT;
	;}
    break;

  case 23:
#line 240 "yacc.y"
    {
		tbName = (yyvsp[(5) - (7)].m_sId);
		type = "show table";
		YYACCEPT;
	;}
    break;

  case 24:
#line 248 "yacc.y"
    {
		tbName = (yyvsp[(6) - (7)].m_sId);
		type = "drop table";
		YYACCEPT;
	;}
    break;

  case 25:
#line 254 "yacc.y"
    {
		tbName = (yyvsp[(6) - (8)].m_sId);
		type = "drop table";
		YYACCEPT;
	;}
    break;

  case 26:
#line 260 "yacc.y"
    {
		tbName = (yyvsp[(5) - (6)].m_sId);
		type = "drop table";
		YYACCEPT;
	;}
    break;

  case 27:
#line 266 "yacc.y"
    {
		tbName = (yyvsp[(5) - (7)].m_sId);
		type = "drop table";
		YYACCEPT;
	;}
    break;

  case 28:
#line 274 "yacc.y"
    {
		tbName = (yyvsp[(6) - (8)].m_sId);
		type = "create table";
		YYACCEPT;
	;}
    break;

  case 29:
#line 280 "yacc.y"
    {
		tbName = (yyvsp[(5) - (7)].m_sId);
		type = "create table";
		YYACCEPT;
	;}
    break;

  case 30:
#line 289 "yacc.y"
    {	
		tbName = (yyvsp[(5) - (10)].m_sId);
		type = "delete from";
		YYACCEPT;
	;}
    break;

  case 31:
#line 295 "yacc.y"
    {	
		tbName = (yyvsp[(6) - (11)].m_sId);
		type = "delete from";
		YYACCEPT;
	;}
    break;

  case 32:
#line 301 "yacc.y"
    {	
		tbName = (yyvsp[(5) - (11)].m_sId);
		type = "delete from";
		YYACCEPT;
	;}
    break;

  case 33:
#line 307 "yacc.y"
    {	
		tbName = (yyvsp[(6) - (12)].m_sId);
		type = "delete from";
		YYACCEPT;
	;}
    break;

  case 34:
#line 315 "yacc.y"
    {
		tbName = (yyvsp[(3) - (14)].m_sId);
		setName = (yyvsp[(7) - (14)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 35:
#line 322 "yacc.y"
    {
		tbName = (yyvsp[(4) - (15)].m_sId);
		setName = (yyvsp[(8) - (15)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 36:
#line 329 "yacc.y"
    {
		tbName = (yyvsp[(3) - (15)].m_sId);
		setName = (yyvsp[(7) - (15)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 37:
#line 336 "yacc.y"
    {
		tbName = (yyvsp[(4) - (16)].m_sId);
		setName = (yyvsp[(8) - (16)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 38:
#line 343 "yacc.y"
    {
		tbName = (yyvsp[(3) - (15)].m_sId);
		setName = (yyvsp[(7) - (15)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 39:
#line 350 "yacc.y"
    {
		tbName = (yyvsp[(4) - (16)].m_sId);
		setName = (yyvsp[(8) - (16)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 40:
#line 357 "yacc.y"
    {
		tbName = (yyvsp[(3) - (16)].m_sId);
		setName = (yyvsp[(7) - (16)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 41:
#line 364 "yacc.y"
    {
		tbName = (yyvsp[(4) - (17)].m_sId);
		setName = (yyvsp[(8) - (17)].m_sId);
		type = "update set";
		YYACCEPT;
	;}
    break;

  case 42:
#line 372 "yacc.y"
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[(7) - (12)].m_sId));
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 43:
#line 379 "yacc.y"
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[(8) - (13)].m_sId));
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 44:
#line 386 "yacc.y"
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[(7) - (13)].m_sId));
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 45:
#line 393 "yacc.y"
    {
		attrNameList.push_back("*");
		tbNameList.push_back((yyvsp[(8) - (14)].m_sId));
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 46:
#line 400 "yacc.y"
    {
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 47:
#line 405 "yacc.y"
    {
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 48:
#line 410 "yacc.y"
    {
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 49:
#line 415 "yacc.y"
    {
		type = "select from";
		YYACCEPT;
	;}
    break;

  case 50:
#line 423 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(3) - (9)].m_sId);
		attrName = (yyvsp[(4) - (9)].m_sId);
		tbName = (yyvsp[(8) - (9)].m_sId);
		YYACCEPT;
	;}
    break;

  case 51:
#line 431 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(4) - (10)].m_sId);
		attrName = (yyvsp[(5) - (10)].m_sId);
		tbName = (yyvsp[(9) - (10)].m_sId);
		YYACCEPT;
	;}
    break;

  case 52:
#line 441 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(3) - (10)].m_sId);
		attrName = (yyvsp[(4) - (10)].m_sId);
		tbName = (yyvsp[(8) - (10)].m_sId);
		YYACCEPT;
	;}
    break;

  case 53:
#line 449 "yacc.y"
    {
		type = "select";
		selectType = (yyvsp[(4) - (11)].m_sId);
		attrName = (yyvsp[(5) - (11)].m_sId);
		tbName = (yyvsp[(9) - (11)].m_sId);
		YYACCEPT;
	;}
    break;

  case 54:
#line 462 "yacc.y"
    {
		tempName =(yyvsp[(3) - (14)].m_sId);
		type = "select group";
		tbName = (yyvsp[(7) - (14)].m_sId);
		attrName3 = (yyvsp[(13) - (14)].m_sId);
		YYACCEPT;
	;}
    break;

  case 55:
#line 473 "yacc.y"
    {
		tbName = (yyvsp[(5) - (10)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 56:
#line 479 "yacc.y"
    {
		tbName = (yyvsp[(5) - (9)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 57:
#line 485 "yacc.y"
    {
		tbName = (yyvsp[(6) - (11)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 58:
#line 491 "yacc.y"
    {
		tbName = (yyvsp[(6) - (10)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 59:
#line 497 "yacc.y"
    {
		tbName = (yyvsp[(5) - (11)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 60:
#line 503 "yacc.y"
    {
		tbName = (yyvsp[(5) - (10)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 61:
#line 509 "yacc.y"
    {
		tbName = (yyvsp[(6) - (12)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 62:
#line 515 "yacc.y"
    {
		tbName = (yyvsp[(6) - (11)].m_sId);
		type = "insert into";
		YYACCEPT;
	;}
    break;

  case 63:
#line 522 "yacc.y"
    {
	;}
    break;

  case 64:
#line 525 "yacc.y"
    {
		tempList.push_back((yyvsp[(1) - (1)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 65:
#line 531 "yacc.y"
    {
		tempList.push_back((yyvsp[(1) - (1)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 66:
#line 537 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (2)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 67:
#line 543 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (2)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 68:
#line 549 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (3)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 69:
#line 555 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 70:
#line 560 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 71:
#line 565 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 72:
#line 570 "yacc.y"
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 73:
#line 575 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (3)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 74:
#line 581 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 75:
#line 587 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (4)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 76:
#line 593 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 77:
#line 599 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (3)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 78:
#line 605 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 79:
#line 611 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (4)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 80:
#line 617 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 81:
#line 623 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 82:
#line 628 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 83:
#line 633 "yacc.y"
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 84:
#line 638 "yacc.y"
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	;}
    break;

  case 85:
#line 646 "yacc.y"
    {
	;}
    break;

  case 86:
#line 649 "yacc.y"
    {
		tempList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 87:
#line 653 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 88:
#line 657 "yacc.y"
    {
		tempList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 89:
#line 661 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 90:
#line 665 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 91:
#line 669 "yacc.y"
    {
		tempList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 92:
#line 673 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 93:
#line 677 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 94:
#line 681 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 95:
#line 685 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (4)].m_sId));
	;}
    break;

  case 96:
#line 689 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 97:
#line 693 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
	;}
    break;

  case 98:
#line 697 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 99:
#line 701 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 100:
#line 705 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 101:
#line 709 "yacc.y"
    {
		tempList.push_back((yyvsp[(3) - (4)].m_sId));
	;}
    break;

  case 102:
#line 713 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 103:
#line 717 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
	;}
    break;

  case 104:
#line 721 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 105:
#line 725 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 106:
#line 729 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 107:
#line 733 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
	;}
    break;

  case 108:
#line 737 "yacc.y"
    {
		tempList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 109:
#line 741 "yacc.y"
    {
		tempList.push_back((yyvsp[(5) - (6)].m_sId));
	;}
    break;

  case 110:
#line 745 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 111:
#line 749 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 112:
#line 753 "yacc.y"
    {
		tempList.push_back("NULL");
	;}
    break;

  case 113:
#line 757 "yacc.y"
    {
		tempList.push_back((yyvsp[(4) - (5)].m_sId));
	;}
    break;

  case 114:
#line 761 "yacc.y"
    {
		tempList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 115:
#line 765 "yacc.y"
    {
		tempList.push_back((yyvsp[(5) - (6)].m_sId));
	;}
    break;

  case 116:
#line 770 "yacc.y"
    {
	;}
    break;

  case 117:
#line 773 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 118:
#line 777 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 119:
#line 781 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 120:
#line 785 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 121:
#line 789 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 122:
#line 793 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 123:
#line 798 "yacc.y"
    {
	;}
    break;

  case 124:
#line 801 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 125:
#line 805 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 126:
#line 809 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 127:
#line 813 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 128:
#line 817 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 129:
#line 821 "yacc.y"
    {
		tbNameList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 130:
#line 826 "yacc.y"
    {
	;}
    break;

  case 131:
#line 829 "yacc.y"
    {
		exprValueList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 132:
#line 833 "yacc.y"
    {	
		exprValueList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 133:
#line 837 "yacc.y"
    {	
		exprValueList.push_back((yyvsp[(1) - (1)].m_sId));
	;}
    break;

  case 134:
#line 841 "yacc.y"
    {
		exprValueList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 135:
#line 845 "yacc.y"
    {
		exprValueList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 136:
#line 849 "yacc.y"
    {
		exprValueList.push_back((yyvsp[(2) - (2)].m_sId));
	;}
    break;

  case 137:
#line 853 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 138:
#line 858 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 139:
#line 863 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 140:
#line 868 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 141:
#line 873 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 142:
#line 878 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 143:
#line 883 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 144:
#line 888 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 145:
#line 893 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 146:
#line 898 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 147:
#line 903 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 148:
#line 908 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 149:
#line 913 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 150:
#line 918 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 151:
#line 923 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 152:
#line 928 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 153:
#line 934 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 154:
#line 939 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 155:
#line 944 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 156:
#line 949 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 157:
#line 954 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 158:
#line 959 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 159:
#line 964 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 160:
#line 969 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 161:
#line 974 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 162:
#line 979 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 163:
#line 984 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 164:
#line 989 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 165:
#line 994 "yacc.y"
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 166:
#line 999 "yacc.y"
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 167:
#line 1004 "yacc.y"
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 168:
#line 1009 "yacc.y"
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 169:
#line 1015 "yacc.y"
    {
	;}
    break;

  case 170:
#line 1018 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 171:
#line 1024 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 172:
#line 1030 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 173:
#line 1036 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 174:
#line 1042 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 175:
#line 1048 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 176:
#line 1054 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 177:
#line 1060 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 178:
#line 1066 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 179:
#line 1072 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 180:
#line 1078 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 181:
#line 1084 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 182:
#line 1091 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 183:
#line 1097 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 184:
#line 1103 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 185:
#line 1109 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 186:
#line 1115 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 187:
#line 1121 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 188:
#line 1127 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 189:
#line 1133 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 190:
#line 1139 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 191:
#line 1145 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 192:
#line 1151 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 193:
#line 1157 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 194:
#line 1164 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 195:
#line 1170 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 196:
#line 1176 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 197:
#line 1182 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 198:
#line 1188 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 199:
#line 1194 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 200:
#line 1200 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 201:
#line 1206 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 202:
#line 1212 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 203:
#line 1218 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 204:
#line 1224 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 205:
#line 1230 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 206:
#line 1236 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 207:
#line 1242 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 208:
#line 1248 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 209:
#line 1254 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 210:
#line 1260 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 211:
#line 1266 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 212:
#line 1272 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 213:
#line 1278 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 214:
#line 1284 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 215:
#line 1290 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 216:
#line 1296 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 217:
#line 1302 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 218:
#line 1308 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (3)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(3) - (3)].m_sId));
	;}
    break;

  case 219:
#line 1314 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 220:
#line 1320 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 221:
#line 1326 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 222:
#line 1332 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 223:
#line 1338 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 224:
#line 1344 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 225:
#line 1350 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 226:
#line 1356 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 227:
#line 1362 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 228:
#line 1368 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 229:
#line 1374 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 230:
#line 1381 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 231:
#line 1387 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 232:
#line 1393 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 233:
#line 1399 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 234:
#line 1405 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (4)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(4) - (4)].m_sId));
	;}
    break;

  case 235:
#line 1411 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 236:
#line 1417 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (5)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(5) - (5)].m_sId));
	;}
    break;

  case 237:
#line 1423 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(1) - (6)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(6) - (6)].m_sId));
	;}
    break;

  case 238:
#line 1429 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 239:
#line 1435 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 240:
#line 1441 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 241:
#line 1447 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 242:
#line 1453 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 243:
#line 1459 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 244:
#line 1465 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 245:
#line 1471 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 246:
#line 1477 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 247:
#line 1483 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 248:
#line 1489 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 249:
#line 1495 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 250:
#line 1502 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 251:
#line 1508 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 252:
#line 1514 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 253:
#line 1520 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 254:
#line 1526 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 255:
#line 1532 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 256:
#line 1538 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 257:
#line 1544 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 258:
#line 1550 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 259:
#line 1556 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 260:
#line 1562 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 261:
#line 1568 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 262:
#line 1574 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 263:
#line 1580 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 264:
#line 1586 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 265:
#line 1592 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 266:
#line 1598 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 267:
#line 1604 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 268:
#line 1610 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 269:
#line 1616 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 270:
#line 1622 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 271:
#line 1628 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 272:
#line 1634 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 273:
#line 1640 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 274:
#line 1646 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (7)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(7) - (7)].m_sId));
	;}
    break;

  case 275:
#line 1652 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 276:
#line 1658 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 277:
#line 1664 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 278:
#line 1670 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 279:
#line 1676 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 280:
#line 1682 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 281:
#line 1688 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 282:
#line 1694 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 283:
#line 1700 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 284:
#line 1706 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 285:
#line 1712 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 286:
#line 1719 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 287:
#line 1725 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 288:
#line 1731 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 289:
#line 1737 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 290:
#line 1743 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 291:
#line 1749 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 292:
#line 1755 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 293:
#line 1761 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 294:
#line 1768 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 295:
#line 1774 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 296:
#line 1780 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 297:
#line 1786 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 298:
#line 1792 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 299:
#line 1798 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 300:
#line 1804 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 301:
#line 1810 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 302:
#line 1816 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (8)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(8) - (8)].m_sId));
	;}
    break;

  case 303:
#line 1822 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 304:
#line 1828 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (9)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(9) - (9)].m_sId));
	;}
    break;

  case 305:
#line 1834 "yacc.y"
    {
		clauseNameList.push_back((yyvsp[(5) - (10)].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[(10) - (10)].m_sId));
	;}
    break;

  case 306:
#line 1842 "yacc.y"
    {
	;}
    break;

  case 307:
#line 1845 "yacc.y"
    {
	;}
    break;

  case 308:
#line 1848 "yacc.y"
    {	
	;}
    break;

  case 309:
#line 1851 "yacc.y"
    {
	;}
    break;

  case 310:
#line 1855 "yacc.y"
    {
	;}
    break;

  case 311:
#line 1858 "yacc.y"
    {
	;}
    break;

  case 312:
#line 1861 "yacc.y"
    {
	  	primaryKey = (yyvsp[(6) - (6)].m_sId);
	;}
    break;

  case 313:
#line 1865 "yacc.y"
    {
	  	primaryKey = (yyvsp[(7) - (7)].m_sId);
	;}
    break;

  case 314:
#line 1869 "yacc.y"
    {
	  	primaryKey = (yyvsp[(7) - (7)].m_sId);
	;}
    break;

  case 315:
#line 1873 "yacc.y"
    {
	  	primaryKey = (yyvsp[(8) - (8)].m_sId);
	;}
    break;

  case 316:
#line 1878 "yacc.y"
    {
	;}
    break;

  case 317:
#line 1881 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (4)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (4)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (4)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 318:
#line 1888 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (5)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (5)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (5)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 319:
#line 1895 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (7)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 320:
#line 1902 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (8)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 321:
#line 1909 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (8)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 322:
#line 1916 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 323:
#line 1923 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (5)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (5)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (5)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 324:
#line 1930 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (6)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (6)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (6)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 325:
#line 1937 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (8)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 326:
#line 1944 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 327:
#line 1951 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 328:
#line 1958 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 329:
#line 1965 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (5)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (5)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (5)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 330:
#line 1972 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (6)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (6)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (6)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 331:
#line 1979 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (8)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 332:
#line 1986 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(4) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 333:
#line 1993 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 334:
#line 2000 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(1) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(3) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 335:
#line 2007 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (6)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (6)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (6)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 336:
#line 2014 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (7)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 337:
#line 2021 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (9)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 338:
#line 2028 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(5) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 339:
#line 2035 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 340:
#line 2042 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(2) - (11)].m_sId));
		attrTypeList.push_back((yyvsp[(4) - (11)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (11)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 341:
#line 2049 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (7)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 342:
#line 2056 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (8)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 343:
#line 2063 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (8)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 344:
#line 2070 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (9)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (9)].m_sId));
		attrNumList.push_back((yyvsp[(8) - (9)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 345:
#line 2077 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (11)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (11)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (11)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 346:
#line 2084 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (12)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (12)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (12)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 347:
#line 2091 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (12)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (12)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (12)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 348:
#line 2098 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (13)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (13)].m_sId));
		attrNumList.push_back((yyvsp[(8) - (13)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 349:
#line 2105 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (6)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (6)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (6)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 350:
#line 2112 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (7)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 351:
#line 2119 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (7)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (7)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (7)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 352:
#line 2126 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (8)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (8)].m_sId));
		attrNumList.push_back((yyvsp[(8) - (8)].m_sId));
		attrNotNullList.push_back(0);
	;}
    break;

  case 353:
#line 2133 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (10)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (10)].m_sId));
		attrNumList.push_back((yyvsp[(6) - (10)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 354:
#line 2140 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(3) - (11)].m_sId));
		attrTypeList.push_back((yyvsp[(5) - (11)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (11)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 355:
#line 2147 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (11)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (11)].m_sId));
		attrNumList.push_back((yyvsp[(7) - (11)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;

  case 356:
#line 2154 "yacc.y"
    {
		attrNameList.push_back((yyvsp[(4) - (12)].m_sId));
		attrTypeList.push_back((yyvsp[(6) - (12)].m_sId));
		attrNumList.push_back((yyvsp[(8) - (12)].m_sId));
		attrNotNullList.push_back(1);
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 5271 "yacc.tab.c"
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


#line 2162 "yacc.y"


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
	if (cnt%100==0) cout << cnt<<endl;
	cnt++;
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
	cout << tbNameList.size() << endl;
	for (int i=0; i<tbNameList.size(); i++) {
		string path = DB_ROOT+temp0+currentDb+temp0+tbNameList[i];
		cout << path << endl;
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
	if (tempName != "") {
		cout << tempName << endl;
		int now = 0;
		string temp = "";	
		while (tempName[now]!=',') {
			temp+=tempName[now];			
			now++;
		}
		attrName1 = temp;
		cout << temp << endl;
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
		cout << temp << endl;
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
		cout << "type: " << type << endl;	
		cout << "selectType: " << selectType << endl; 	
		cout << "attrName: " << attrName << endl;
		cout << "attrName1: " << attrName1 << endl;
		cout << "attrName2: " << attrName2 << endl;
		cout << "attrName3: " << attrName3 << endl;
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


