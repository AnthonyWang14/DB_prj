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
string currentDb = "";
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
#define YYLAST   723

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  318
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  663

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
     495,   499,   505,   507,   511,   515,   519,   523,   527,   531,
     535,   539,   544,   549,   554,   559,   564,   569,   574,   579,
     584,   589,   594,   599,   604,   609,   614,   621,   623,   629,
     635,   641,   647,   653,   659,   665,   671,   677,   683,   689,
     696,   702,   708,   714,   720,   726,   732,   738,   744,   750,
     756,   762,   769,   775,   781,   787,   793,   799,   805,   811,
     817,   823,   829,   835,   841,   847,   853,   859,   865,   871,
     877,   883,   889,   895,   901,   907,   913,   919,   925,   931,
     937,   943,   949,   955,   961,   967,   973,   979,   986,   992,
     998,  1004,  1010,  1016,  1022,  1028,  1034,  1040,  1046,  1052,
    1058,  1064,  1070,  1076,  1082,  1088,  1094,  1100,  1107,  1113,
    1119,  1125,  1131,  1137,  1143,  1149,  1155,  1161,  1167,  1173,
    1179,  1185,  1191,  1197,  1203,  1209,  1215,  1221,  1227,  1233,
    1239,  1245,  1251,  1257,  1263,  1269,  1275,  1281,  1287,  1293,
    1299,  1305,  1311,  1317,  1324,  1330,  1336,  1342,  1348,  1354,
    1360,  1366,  1373,  1379,  1385,  1391,  1397,  1403,  1409,  1415,
    1421,  1427,  1433,  1439,  1447,  1449,  1455,  1461,  1467,  1473,
    1478,  1483,  1488,  1493,  1499,  1505,  1511,  1517,  1522,  1527,
    1532,  1541,  1543,  1547,  1551,  1555,  1559,  1563,  1567,  1571,
    1575,  1579,  1583,  1587,  1591,  1595,  1599,  1603,  1610,  1612,
    1615,  1618,  1623,  1625,  1628,  1632,  1636,  1640,  1646,  1648,
    1655,  1662,  1669,  1676,  1683,  1690,  1697,  1704,  1711,  1718,
    1725,  1732,  1739,  1746,  1753,  1760,  1767,  1774,  1781,  1788,
    1795,  1802,  1809,  1816,  1823,  1830,  1837,  1844,  1851,  1858,
    1865,  1872,  1879,  1886,  1893,  1900,  1907,  1914,  1921
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

#define YYTABLE_NINF -279

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     272,   -18,   162,   239,   242,   247,   266,   339,   348,   291,
     388,  -230,   279,   283,   467,   323,   464,   468,   479,   187,
     463,   471,   472,   474,   475,   476,   477,   478,  -230,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   258,   324,   325,   493,   326,   501,   499,   492,   187,
     495,   515,   516,   517,   518,   519,   520,   521,   522,   504,
    -230,   502,    52,   188,   503,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   315,   212,   304,   213,   214,   215,
     216,   217,   514,   523,   524,  -230,   525,   191,  -230,   526,
     537,   538,   539,   540,   541,   542,   543,   544,   548,   530,
     327,  -230,   547,   304,    50,   220,  -230,   549,  -230,   550,
    -230,   551,  -230,   552,  -230,   553,   545,   535,   557,   192,
    -230,   559,  -230,   223,   304,   226,   227,   230,   237,   238,
     546,   554,   555,   556,  -230,   558,   560,   561,    99,   460,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,     3,   562,    60,
     563,   564,   372,  -230,  -230,   566,   240,  -230,   567,  -230,
     568,  -230,   569,  -230,   570,  -230,   571,   573,   565,   575,
     192,   579,   572,  -230,  -230,    66,   574,    20,    30,    57,
     583,   576,   129,  -230,   577,   332,   199,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,    34,   578,   154,   383,   205,   587,
     580,   581,   354,  -230,   582,    10,    30,   172,   584,   585,
     309,   329,  -230,   586,    36,   -12,   241,   129,   588,   589,
     337,   345,  -230,   590,   200,  -230,   591,    20,   179,   583,
     592,   129,   336,   359,   593,   206,   597,   595,   594,   596,
    -230,   598,    30,   330,  -230,   605,  -230,  -230,   599,   600,
     132,   601,  -230,   602,    12,    30,   368,    92,   603,     1,
      49,  -230,     0,   349,  -230,  -230,   604,   607,   285,    71,
     127,   164,   167,   583,  -230,   609,  -230,   180,  -230,   610,
     243,   129,   358,   608,   611,   613,   451,   455,   612,   209,
      72,   615,   617,  -230,   331,   614,  -230,  -230,  -230,   616,
     618,   473,  -230,  -230,   619,    30,   333,    98,   606,     2,
      55,  -230,  -230,  -230,   408,   101,  -230,  -230,   124,     9,
     104,  -230,  -230,   397,    65,  -230,   620,   290,  -230,  -230,
     621,   171,   173,   174,   175,  -230,   627,  -230,   634,  -230,
     635,  -230,   639,   244,  -230,  -230,   636,  -230,  -230,   116,
     362,   294,   583,   622,   456,   623,   625,   626,   628,   459,
     629,   643,  -230,   647,   210,   202,   630,  -230,  -230,  -230,
     631,   632,  -230,   334,   633,  -230,  -230,  -230,   412,   107,
    -230,  -230,   445,   152,   110,  -230,  -230,   446,   155,  -230,
    -230,  -230,  -230,  -230,  -230,   415,  -230,  -230,  -230,  -230,
     449,  -230,  -230,  -230,   418,  -230,  -230,  -230,  -230,   450,
     656,   637,   583,  -230,   659,  -230,   660,  -230,   662,  -230,
     663,  -230,  -230,  -230,  -230,  -230,   254,  -230,  -230,   300,
     640,   248,   536,   641,   642,   644,   645,   646,   648,   650,
     651,   653,  -230,   654,   664,  -230,   668,  -230,  -230,  -230,
     655,  -230,  -230,  -230,  -230,  -230,  -230,  -230,   421,  -230,
    -230,  -230,  -230,   453,  -230,  -230,  -230,   424,  -230,  -230,
    -230,  -230,   454,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,   318,   583,   250,  -230,  -230,  -230,  -230,
    -230,   657,   583,  -230,   264,   658,  -230,   649,   661,   665,
     666,   669,   670,   671,   667,   672,   674,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,   371,
     113,   673,     8,    59,   251,  -230,   265,   583,   252,  -230,
    -230,   675,  -230,   677,  -230,   676,   679,   678,   681,   682,
     683,   117,   680,    18,    64,  -230,  -230,  -230,   427,   138,
    -230,  -230,   457,   158,   142,  -230,  -230,   458,   159,  -230,
     282,  -230,   253,  -230,   286,  -230,  -230,   685,  -230,   686,
     687,   688,   691,  -230,  -230,  -230,   430,   145,  -230,  -230,
     461,   163,   148,  -230,  -230,   462,   168,  -230,  -230,  -230,
    -230,  -230,  -230,   433,  -230,  -230,  -230,  -230,   465,  -230,
    -230,  -230,   436,  -230,  -230,  -230,  -230,   466,  -230,  -230,
     322,  -230,  -230,  -230,   692,   693,   694,  -230,  -230,  -230,
    -230,  -230,  -230,   439,  -230,  -230,  -230,  -230,   469,  -230,
    -230,  -230,   442,  -230,  -230,  -230,  -230,   470,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,   695,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230
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
       0,     0,     0,     0,     0,     0,   268,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,   268,   272,     0,    10,     0,    26,     0,
      14,     0,    18,     0,    22,     0,     0,     0,     0,    63,
      60,     0,    59,     0,   268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,   270,     0,     0,     0,     0,
      29,   269,    11,    27,    15,    19,    23,   234,     0,     0,
      64,     0,     0,    61,     4,     0,     0,     8,     0,    24,
       0,    12,     0,    16,     0,    20,     0,     0,     0,     0,
      63,     0,     0,   273,   271,     0,   235,   234,   251,     0,
      97,     0,    72,    65,    66,     0,     0,     5,    28,     9,
      25,    13,    17,    21,   234,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   235,     0,   251,     0,   252,   253,
       0,     0,    31,     0,     0,     0,     0,    72,    74,    73,
       0,     0,    67,     0,     0,    71,     0,   234,     0,    97,
       0,    72,     0,   279,     0,     0,     0,     0,     0,     0,
     237,   236,   251,     0,    30,     0,   254,   255,   256,   257,
       0,   239,    35,   243,     0,   251,     0,     0,     0,     0,
       0,    38,     0,     0,    76,    75,    78,    77,     0,     0,
       0,     0,     0,    97,    69,     0,    68,     0,    33,     0,
       0,    72,     0,     0,   291,     0,   280,   285,     0,     0,
       0,     0,     0,   238,     0,   239,    34,   258,   259,   261,
     260,     0,   240,   245,   244,   251,     0,     0,     0,     0,
       0,   102,    98,   106,     0,     0,   142,   146,     0,     0,
       0,   134,   138,     0,     0,    40,     0,     0,    80,    79,
       0,     0,     0,     0,     0,    81,     0,    82,     0,    83,
       0,    84,     0,     0,    70,    32,     0,    37,    39,     0,
       0,     0,    97,     0,     0,   292,     0,   297,     0,   286,
     311,     0,   274,     0,     0,     0,   241,   240,   265,   262,
     266,   263,   246,     0,   247,   103,    99,   107,     0,     0,
     143,   147,     0,     0,     0,   135,   139,     0,     0,   104,
     100,   108,   114,   110,   118,     0,   144,   148,   158,   162,
       0,   126,   122,   130,     0,   136,   140,   150,   154,     0,
       0,     0,    97,    89,     0,    90,     0,    91,     0,    92,
       0,    85,    86,    87,    88,    50,     0,    36,    41,     0,
       0,     0,     0,   281,     0,     0,     0,     0,   298,     0,
     303,   312,   275,   313,     0,   276,     0,   242,   267,   264,
     249,   248,   105,   101,   109,   115,   111,   119,     0,   145,
     149,   159,   163,     0,   127,   123,   131,     0,   137,   141,
     151,   155,     0,   116,   112,   120,   160,   164,   128,   124,
     132,   152,   156,     0,    97,     0,    93,    94,    95,    96,
      52,     0,    97,    51,     0,   282,   293,     0,   283,     0,
     287,     0,     0,     0,   304,   305,   314,   277,   250,   117,
     113,   121,   161,   165,   129,   125,   133,   153,   157,     0,
       0,     0,     0,     0,     0,    42,     0,    97,     0,    53,
     294,   284,   295,   288,   299,     0,   289,     0,     0,     0,
     306,     0,     0,     0,     0,   170,   166,   174,     0,     0,
     198,   202,     0,     0,     0,   190,   194,     0,     0,    46,
       0,    44,     0,    43,     0,   296,   300,   290,   301,   315,
       0,     0,     0,   171,   168,   175,     0,     0,   201,   203,
       0,     0,     0,   191,   195,     0,     0,   172,   167,   176,
     182,   178,   186,     0,   199,   204,   214,   218,     0,   226,
     222,   230,     0,   192,   196,   206,   210,     0,    48,    47,
       0,    45,   302,   307,   316,   317,     0,   173,   169,   177,
     183,   180,   187,     0,   200,   205,   215,   219,     0,   227,
     224,   231,     0,   193,   197,   207,   211,     0,   184,   179,
     188,   216,   220,   228,   223,   232,   208,   212,    49,   308,
     309,   318,   185,   181,   189,   217,   221,   229,   225,   233,
     209,   213,   310
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,   440,   398,  -215,  -229,  -174,  -205,   106,
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
     280,   243,   263,   207,   316,   380,   317,   381,   325,    12,
     176,   550,   398,   551,   399,   256,   282,   241,   257,   304,
     228,   578,   326,   579,   258,   259,   260,   204,   318,   382,
     177,   319,   383,   208,   209,   552,   400,   294,   553,   320,
     384,   176,   178,   253,   343,   580,   554,   205,   581,   242,
     306,   305,   321,   277,   322,   136,   582,   210,   385,   206,
     386,   227,   555,   254,   556,   212,   350,   583,   407,   584,
     408,   200,    86,   178,   335,   255,   323,   137,   362,   324,
     201,  -278,   387,    87,   213,   388,   557,   181,   214,   558,
     182,   585,   409,   202,   586,   311,   312,   313,   336,   363,
     373,   375,   376,   377,   392,   393,   394,   401,   402,   403,
     455,   456,   457,   464,   465,   466,   545,   546,   547,   314,
     573,   574,   575,   431,   428,   378,   173,   396,   395,   397,
     337,   404,   218,   219,   458,   299,   300,   467,   326,   174,
     548,   590,   591,   592,   576,   599,   600,   601,   620,   621,
     622,   629,   630,   631,   338,   461,   220,   462,   470,   301,
     471,   596,   605,   597,   606,   593,   626,   339,   627,   602,
     341,   635,   623,   636,   413,   632,   415,   417,   419,   463,
     244,   230,   472,   485,   231,   598,   607,   278,   345,    13,
     628,   340,    39,    88,   342,   637,   120,   150,   414,   245,
     416,   418,   420,   214,   225,   274,   279,   346,   445,   135,
     214,   214,   233,   287,    40,    89,   360,   443,   121,   151,
     101,   106,   108,   110,   112,   114,   226,   275,   140,   446,
     156,   154,   234,   288,   157,   159,   361,   444,   161,   102,
     107,   109,   111,   113,   115,   163,   165,   141,   188,   261,
     155,   348,   425,   158,   160,   524,   493,   162,   525,   559,
     563,   609,   490,   528,   164,   166,    14,   141,   262,    15,
     349,   426,   529,   561,    16,   494,   326,   526,   560,   564,
     610,     1,     2,     3,     4,    62,   326,   326,     5,    63,
     608,     6,    29,    17,   611,     7,    31,     8,   562,     9,
      20,    21,    22,    23,   326,    30,   330,    24,   326,    32,
      25,   411,   248,   249,    26,   430,    27,   331,   332,   333,
     334,   491,   331,   332,   333,   334,   331,   332,   333,   334,
     648,   103,   331,   332,   333,   334,    34,    64,    66,    69,
     266,   267,   100,   104,   326,   519,    63,   133,   520,    35,
      65,    67,    70,   223,   521,   522,   523,   283,    87,   238,
     250,   250,   250,   224,   250,   250,    18,   224,   239,   251,
     295,   366,   268,   374,   450,    19,   327,   269,   270,   271,
     272,   269,   270,   271,   272,   351,   284,   285,    28,   429,
     269,   270,   271,   272,   269,   270,   271,   272,   307,   185,
     405,   541,   406,   186,   308,   309,   310,   542,   543,   544,
     232,   389,   390,   391,   186,   452,   453,   454,   473,   474,
     475,   478,   479,   480,   509,   510,   511,   514,   515,   516,
     587,   588,   589,   617,   618,   619,   638,   639,   640,   643,
     644,   645,   652,   653,   654,   657,   658,   659,   459,   468,
     460,   469,   476,   481,   477,   482,   512,   517,   513,   518,
     594,   603,   595,   604,   624,   633,   625,   634,   641,   646,
     642,   647,   655,   660,   656,   661,   370,   371,   355,   356,
      33,    36,   357,   358,    38,   433,   438,   439,    37,    74,
      42,   175,     0,     0,     0,     0,    61,    73,    43,    44,
      75,    45,    46,    47,    48,    49,    68,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    71,    72,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      90,   122,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   116,   123,   124,   125,   126,   127,   128,   129,   130,
     117,   118,   119,   131,   132,   134,   148,   142,   143,   144,
     145,   146,   149,   147,   153,   495,   172,     0,   197,   184,
       0,     0,     0,   167,   187,   189,   190,   191,   192,   193,
     196,   168,   169,   170,   198,   141,   195,   171,   215,   180,
     183,   194,   235,     0,   252,     0,   276,     0,     0,   199,
     286,   203,   289,     0,   222,   229,   217,   236,   237,   240,
     290,   246,   247,   296,   344,   264,   265,   273,   347,   359,
     364,   291,   281,   292,     0,   293,   297,   298,   302,   303,
     421,   328,   365,   315,   329,   352,   379,   422,   423,   353,
     354,   367,   424,   368,   427,   369,   372,   410,   412,   432,
     441,   434,   435,   442,   436,   437,   440,   447,   448,   449,
     451,   483,   486,   487,   484,   488,   489,   492,   496,   497,
       0,   506,   499,   498,   507,   500,   501,   502,   531,   503,
     504,   505,   508,     0,   527,   530,     0,     0,   532,     0,
       0,     0,     0,   534,   533,   538,   535,     0,   537,   536,
     539,   540,   565,   549,   566,   567,   568,   569,   570,   571,
     577,   572,   612,   613,     0,     0,   614,   615,   616,   649,
     650,     0,   662,   651
};

static const yytype_int16 yycheck[] =
{
     229,   206,   217,   177,     3,     3,     5,     5,     8,    27,
       7,     3,     3,     5,     5,    27,   231,     7,    30,     7,
     194,     3,    22,     5,    36,    37,    38,     7,    27,    27,
      27,    30,    30,     3,     4,    27,    27,   242,    30,    38,
      38,     7,    39,     7,   273,    27,    38,    27,    30,    39,
     255,    39,     3,   227,     5,     5,    38,    27,     3,    39,
       5,    27,     3,    27,     5,     8,   281,     3,     3,     5,
       5,     5,    20,    39,     3,    39,    27,    27,     6,    30,
      14,    31,    27,    31,    27,    30,    27,    27,    31,    30,
      30,    27,    27,    27,    30,     3,     4,     5,    27,    27,
     305,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     3,     4,     5,    27,
       3,     4,     5,   352,     8,    27,    27,     3,    27,     5,
       3,    27,     3,     4,    27,     3,     4,    27,    22,    40,
      27,     3,     4,     5,    27,     3,     4,     5,     3,     4,
       5,     3,     4,     5,    27,     3,    27,     5,     3,    27,
       5,     3,     3,     5,     5,    27,     3,     3,     5,    27,
       3,     3,    27,     5,     3,    27,     3,     3,     3,    27,
       8,    27,    27,   412,    30,    27,    27,     8,     8,    27,
      27,    27,     5,     5,    27,    27,     5,     5,    27,    27,
      27,    27,    27,    31,     5,     5,    27,    27,     6,   103,
      31,    31,     7,     7,    27,    27,     7,     7,    27,    27,
       8,     8,     8,     8,     8,     8,    27,    27,     8,    27,
     124,     8,    27,    27,     8,     8,    27,    27,     8,    27,
      27,    27,    27,    27,    27,     8,     8,    27,     8,     8,
      27,     8,     8,    27,    27,   484,     8,    27,     8,     8,
       8,     8,     8,   492,    27,    27,    27,    27,    27,    27,
      27,    27,     8,     8,    27,    27,    22,    27,    27,    27,
      27,     9,    10,    11,    12,    27,    22,    22,    16,    31,
       8,    19,    13,    27,     8,    23,    13,    25,   527,    27,
       9,    10,    11,    12,    22,    26,    21,    16,    22,    26,
      19,    21,     3,     4,    23,    21,    25,    32,    33,    34,
      35,    21,    32,    33,    34,    35,    32,    33,    34,    35,
       8,    27,    32,    33,    34,    35,    13,    13,    13,    13,
       3,     4,    27,    39,    22,    27,    31,    20,    30,    26,
      26,    26,    26,    21,    36,    37,    38,    21,    31,     5,
      31,    31,    31,    31,    31,    31,    27,    31,    14,    40,
      40,    40,    27,    40,    40,    27,    27,    32,    33,    34,
      35,    32,    33,    34,    35,    27,    27,    28,     0,    27,
      32,    33,    34,    35,    32,    33,    34,    35,    30,    27,
       3,    30,     5,    31,    36,    37,    38,    36,    37,    38,
      27,     3,     4,     5,    31,     3,     4,     5,     3,     4,
       5,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     3,     4,     5,     3,
       4,     5,     3,     4,     5,     3,     4,     5,     3,     3,
       5,     5,     3,     3,     5,     5,     3,     3,     5,     5,
       3,     3,     5,     5,     3,     3,     5,     5,     3,     3,
       5,     5,     3,     3,     5,     5,     3,     4,    27,    28,
      13,    17,    27,    28,     5,    29,    27,    28,    20,    49,
      27,    31,    -1,    -1,    -1,    -1,     5,     5,    27,    27,
       5,    27,    27,    27,    27,    27,    13,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    17,    20,
       5,     5,     5,     5,     5,     5,     5,     5,    24,    27,
      27,     5,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,     5,     5,     5,     5,     5,     5,     5,     5,
      27,    27,    27,     5,    24,     8,    21,     8,     8,     8,
       8,     8,     5,    18,     5,    29,     5,    -1,   170,     5,
      -1,    -1,    -1,    27,     8,     8,     8,     8,     8,     8,
       5,    27,    27,    27,     5,    27,    21,    27,     5,    27,
      27,    18,     5,    -1,     8,    -1,     5,    -1,    -1,    27,
       7,    27,     5,    -1,    27,    27,    30,    27,    27,    27,
      15,    27,    27,     8,     5,    27,    27,    27,     8,     7,
       5,    27,    30,    27,    -1,    27,    27,    27,    27,    27,
       3,    27,    15,    30,    27,    27,    30,     3,     3,    28,
      27,    27,     3,    27,     8,    27,    27,    27,    27,    27,
       7,    28,    27,     6,    28,    27,    27,    27,    27,    27,
      27,     5,     3,     3,    27,     3,     3,    27,    27,    27,
      -1,     7,    27,    29,     6,    29,    28,    27,    29,    28,
      27,    27,    27,    -1,    27,    27,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    27,    29,    28,    27,    -1,    27,    29,
      28,    27,    27,    30,    27,    29,    27,    29,    27,    27,
      30,    28,    27,    27,    -1,    -1,    29,    29,    27,    27,
      27,    -1,    27,    29
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
      38,     8,    27,    46,    27,    27,     3,     4,    27,    32,
      33,    34,    35,    27,     5,    27,     5,    48,     8,    27,
      47,    30,    46,    21,    27,    28,     7,     7,    27,     5,
      15,    27,    27,    27,    49,    40,     8,    27,    27,     3,
       4,    27,    27,    27,     7,    39,    49,    30,    36,    37,
      38,     3,     4,     5,    27,    30,     3,     5,    27,    30,
      38,     3,     5,    27,    30,     8,    22,    27,    27,    27,
      21,    32,    33,    34,    35,     3,    27,     3,    27,     3,
      27,     3,    27,    47,     5,     8,    27,     8,     8,    27,
      46,    27,    27,    28,    27,    27,    28,    27,    28,     7,
       7,    27,     6,    27,     5,    15,    40,    27,    27,    27,
       3,     4,    27,    49,    40,     3,     4,     5,    27,    30,
       3,     5,    27,    30,    38,     3,     5,    27,    30,     3,
       4,     5,     3,     4,     5,    27,     3,     5,     3,     5,
      27,     3,     4,     5,    27,     3,     5,     3,     5,    27,
      27,    21,    27,     3,    27,     3,    27,     3,    27,     3,
      27,     3,     3,     3,     3,     8,    27,     8,     8,    27,
      21,    47,    27,    29,    28,    27,    28,    27,    27,    28,
      27,     7,     6,     7,    27,     6,    27,    27,    27,    27,
      40,    27,     3,     4,     5,     3,     4,     5,    27,     3,
       5,     3,     5,    27,     3,     4,     5,    27,     3,     5,
       3,     5,    27,     3,     4,     5,     3,     5,     3,     4,
       5,     3,     5,     5,    27,    47,     3,     3,     3,     3,
       8,    21,    27,     8,    27,    29,    27,    27,    29,    27,
      29,    28,    27,    28,    27,    27,     7,     6,    27,     3,
       4,     5,     3,     5,     3,     4,     5,     3,     5,    27,
      30,    36,    37,    38,    47,     8,    27,    27,    47,     8,
      27,    29,    27,    29,    27,    27,    29,    27,    28,    28,
      27,    30,    36,    37,    38,     3,     4,     5,    27,    30,
       3,     5,    27,    30,    38,     3,     5,    27,    30,     8,
      27,     8,    47,     8,    27,    27,    27,    29,    27,    29,
      27,    27,    28,     3,     4,     5,    27,    30,     3,     5,
      27,    30,    38,     3,     5,    27,    30,     3,     4,     5,
       3,     4,     5,    27,     3,     5,     3,     5,    27,     3,
       4,     5,    27,     3,     5,     3,     5,    27,     8,     8,
      27,     8,    27,    27,    29,    29,    27,     3,     4,     5,
       3,     4,     5,    27,     3,     5,     3,     5,    27,     3,
       4,     5,    27,     3,     5,     3,     5,    27,     3,     4,
       5,     3,     5,     3,     4,     5,     3,     5,     8,    27,
      27,    29,     3,     4,     5,     3,     5,     3,     4,     5,
       3,     5,    27
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
      46,    46,    46,    46,    46,    46,    46,    47,    47,    47,
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
      47,    47,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    50,    50,
      50,    50,    51,    51,    51,    51,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52
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
       5,     3,     0,     1,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     5,     5,     5,     5,     0,     3,     4,
       4,     5,     3,     4,     4,     5,     3,     4,     4,     5,
       4,     5,     5,     6,     4,     5,     5,     6,     4,     5,
       5,     6,     4,     5,     5,     6,     4,     5,     5,     6,
       4,     5,     5,     6,     3,     4,     4,     5,     3,     4,
       4,     5,     3,     4,     4,     5,     3,     4,     4,     5,
       4,     5,     5,     6,     4,     5,     5,     6,     4,     5,
       5,     6,     4,     5,     5,     6,     7,     8,     8,     9,
       7,     8,     8,     9,     7,     8,     8,     9,     8,     9,
       9,    10,     8,     9,     9,    10,     8,     9,     9,    10,
       7,     8,     8,     9,     7,     8,     8,     9,     7,     8,
       9,     8,     7,     8,     8,     9,     8,     9,     9,    10,
       8,     9,     9,    10,     8,     9,     9,    10,     8,     9,
       9,    10,     8,     9,     9,    10,     8,     9,     9,    10,
       8,     9,     9,    10,     0,     1,     2,     2,     3,     3,
       4,     4,     5,     3,     4,     4,     5,     5,     6,     6,
       7,     0,     1,     1,     2,     2,     2,     2,     3,     3,
       3,     3,     4,     4,     5,     4,     4,     5,     0,     2,
       2,     3,     0,     2,     6,     7,     7,     8,     0,     4,
       5,     7,     8,     8,     9,     5,     6,     8,     9,     9,
      10,     5,     6,     8,     9,     9,    10,     6,     7,     9,
      10,    10,    11,     7,     8,     8,     9,    11,    12,    12,
      13,     6,     7,     7,     8,    10,    11,    11,    12
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
#line 1709 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 103 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 1716 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";		
		YYACCEPT;
	}
#line 1726 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 114 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		cout << "CREATE database" << endl;
		type = "create database";
		YYACCEPT;
	}
#line 1737 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 121 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1747 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 127 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "create database";
		YYACCEPT;
	}
#line 1757 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 135 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1767 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 141 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1777 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 147 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1787 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 153 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "drop database";
		YYACCEPT;
	}
#line 1797 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 161 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1807 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 167 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1817 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 173 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1827 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 179 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "use database";
		YYACCEPT;
	}
#line 1837 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 187 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1847 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 193 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-2].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1857 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 199 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[0].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1867 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "yacc.y" /* yacc.c:1646  */
    {
		dbName = (yyvsp[-1].m_sId);
		type = "show database";
		YYACCEPT;
	}
#line 1877 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 213 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 1887 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 219 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 1897 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 225 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 1907 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 231 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "show table";
		YYACCEPT;
	}
#line 1917 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 239 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 1927 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 245 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 1937 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 251 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-1].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 1947 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 257 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "drop table";
		YYACCEPT;
	}
#line 1957 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 265 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 1967 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 271 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-2].m_sId);
		type = "create table";
		YYACCEPT;
	}
#line 1977 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 279 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 1987 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 285 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 1997 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 291 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2007 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 297 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-4].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2017 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 303 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2027 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 309 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2037 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 315 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-6].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2047 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 321 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-5].m_sId);
		type = "insert into";
		YYACCEPT;
	}
#line 2057 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 329 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2067 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 335 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-5].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2077 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 341 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2087 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 347 "yacc.y" /* yacc.c:1646  */
    {	
		tbName = (yyvsp[-6].m_sId);
		type = "delete from";
		YYACCEPT;
	}
#line 2097 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 355 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2108 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 362 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-11].m_sId);
		setName = (yyvsp[-7].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2119 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 369 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2130 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 376 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2141 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 383 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2152 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 390 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-12].m_sId);
		setName = (yyvsp[-8].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2163 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 397 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2174 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 404 "yacc.y" /* yacc.c:1646  */
    {
		tbName = (yyvsp[-13].m_sId);
		setName = (yyvsp[-9].m_sId);
		type = "update set";
		YYACCEPT;
	}
#line 2185 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 412 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2194 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 417 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2203 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 422 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2212 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 427 "yacc.y" /* yacc.c:1646  */
    {
		type = "select from";
		YYACCEPT;
	}
#line 2221 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 433 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2228 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 436 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2236 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 440 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-1].m_sId));
	}
#line 2244 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 444 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2252 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 448 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-1].m_sId));
	}
#line 2260 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 452 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2268 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 456 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2276 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 460 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2284 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 464 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[0].m_sId));
	}
#line 2292 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 469 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2299 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 472 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2307 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 476 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[-1].m_sId));
	}
#line 2315 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 480 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2323 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 484 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[-1].m_sId));
	}
#line 2331 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 488 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2339 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 492 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2347 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 496 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2355 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 500 "yacc.y" /* yacc.c:1646  */
    {
		tbNameList.push_back((yyvsp[0].m_sId));
	}
#line 2363 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 505 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2370 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 508 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2378 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 512 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2386 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 516 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[-1].m_sId));
	}
#line 2394 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 520 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[-1].m_sId));
	}
#line 2402 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 524 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2410 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 528 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2418 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 532 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[-1].m_sId));
	}
#line 2426 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 536 "yacc.y" /* yacc.c:1646  */
    {
		exprValueList.push_back((yyvsp[-1].m_sId));
	}
#line 2434 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 540 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2443 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 545 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2452 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 550 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2461 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 555 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2470 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 560 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2479 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 565 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2488 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 570 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2497 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 575 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2506 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 580 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2515 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 585 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2524 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 590 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2533 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 595 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2542 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 600 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('+');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2551 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 605 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('-');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2560 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 610 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('*');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2569 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 615 "yacc.y" /* yacc.c:1646  */
    {
		exprOpList.push_back('/');
		exprValueList.push_back((yyvsp[0].m_sId));
	}
#line 2578 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 621 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 2585 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 624 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2595 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 630 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2605 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 636 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2615 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 642 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2625 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 648 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2635 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 654 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2645 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 660 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2655 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 666 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2665 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 672 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2675 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 678 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2685 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 684 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2695 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 690 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2705 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 697 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2715 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 703 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2725 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 709 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2735 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 715 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2745 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 721 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2755 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 727 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2765 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 733 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2775 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 739 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2785 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 745 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2795 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 751 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2805 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 757 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2815 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 763 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2825 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 770 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2835 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 776 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2845 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 782 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2855 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 788 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2865 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 794 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2875 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 800 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2885 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 806 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2895 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 812 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2905 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 818 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2915 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 824 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2925 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 830 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2935 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 836 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2945 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 842 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2955 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 848 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2965 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 854 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2975 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 860 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2985 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 866 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 2995 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 872 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3005 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 878 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3015 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 884 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3025 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 890 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3035 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 896 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3045 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 902 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3055 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 908 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3065 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 914 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3075 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 920 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3085 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 926 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3095 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 932 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3105 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 938 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3115 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 944 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3125 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 950 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3135 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 956 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3145 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 962 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3155 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 968 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3165 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 974 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3175 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 980 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3185 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 987 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3195 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 993 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3205 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 999 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3215 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1005 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3225 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3235 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1017 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3245 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3255 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1029 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3265 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3275 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1041 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3285 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3295 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1053 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3305 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3315 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3325 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1071 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3335 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3345 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3355 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1089 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3365 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3375 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1101 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3385 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3395 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3405 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3415 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1126 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3425 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1132 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3435 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3445 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1144 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3455 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3465 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3475 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3485 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1168 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3495 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3505 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3515 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3525 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3535 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3545 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3555 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3565 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3575 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3585 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1228 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3595 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1234 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3605 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1240 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3615 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1246 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3625 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1252 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-2].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3635 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3645 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1264 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3655 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1270 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3665 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3675 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1282 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3685 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1288 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3695 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1294 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3705 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1300 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3715 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1306 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3725 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3735 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back(">=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3745 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1325 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3755 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1331 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3765 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1337 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3775 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1343 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3785 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1349 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3795 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1355 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3805 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1361 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3815 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("<=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3825 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1374 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3835 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1380 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3845 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1386 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3855 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1392 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3865 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1398 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3875 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1404 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3885 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1410 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3895 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1416 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3905 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1422 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-3].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3915 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1428 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3925 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1434 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-4].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3935 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1440 "yacc.y" /* yacc.c:1646  */
    {
		clauseNameList.push_back((yyvsp[-5].m_sId));
		clauseOpList.push_back("!=");
		clauseRightList.push_back((yyvsp[0].m_sId));
	}
#line 3945 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1447 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 3952 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1450 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3962 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1456 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3972 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1462 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3982 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1468 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 3992 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1474 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4001 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1479 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4010 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1484 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4019 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1489 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4028 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1494 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4038 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1500 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4048 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1506 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4058 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1512 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4068 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1518 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4077 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1523 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4086 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1528 "yacc.y" /* yacc.c:1646  */
    {
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4095 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1533 "yacc.y" /* yacc.c:1646  */
    { 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
#line 4104 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1541 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4111 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1544 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4119 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1548 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4127 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1552 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4135 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1556 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4143 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1560 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4151 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1564 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4159 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1568 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4167 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1572 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4175 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1576 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4183 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1580 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4191 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1584 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4199 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1588 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4207 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1592 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4215 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1596 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4223 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1600 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[0].m_sId));
	}
#line 4231 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1604 "yacc.y" /* yacc.c:1646  */
    {
		tempList.push_back((yyvsp[-1].m_sId));
	}
#line 4239 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1610 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4246 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1613 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4253 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1616 "yacc.y" /* yacc.c:1646  */
    {	
	}
#line 4260 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1619 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4267 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1623 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4274 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1626 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4281 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1629 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4289 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1633 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4297 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1637 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4305 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1641 "yacc.y" /* yacc.c:1646  */
    {
	  	primaryKey = (yyvsp[0].m_sId);
	}
#line 4313 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1646 "yacc.y" /* yacc.c:1646  */
    {
	}
#line 4320 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1649 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4331 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1656 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4342 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1663 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4353 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1670 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4364 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1677 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4375 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1684 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4386 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1691 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4397 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1698 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4408 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1705 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-6].m_sId));
		attrTypeList.push_back((yyvsp[-4].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4419 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1712 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4430 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1719 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-3].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4441 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1726 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4452 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1733 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4463 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1740 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4474 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1747 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4485 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1754 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4496 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1761 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4507 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1768 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4518 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1775 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4529 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1782 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4540 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1789 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4551 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1796 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4562 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1803 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4573 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1810 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4584 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1817 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4595 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1824 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4606 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1831 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4617 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1838 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-5].m_sId));
		attrTypeList.push_back((yyvsp[-3].m_sId));
		attrNumList.push_back((yyvsp[-1].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4628 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1845 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4639 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1852 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4650 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1859 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4661 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1866 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-9].m_sId));
		attrTypeList.push_back((yyvsp[-7].m_sId));
		attrNumList.push_back((yyvsp[-5].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4672 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1873 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4683 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1880 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4694 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1887 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-3].m_sId));
		attrTypeList.push_back((yyvsp[-1].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4705 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1894 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-4].m_sId));
		attrTypeList.push_back((yyvsp[-2].m_sId));
		attrNumList.push_back((yyvsp[0].m_sId));
		attrNotNullList.push_back(0);
	}
#line 4716 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1901 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4727 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1908 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4738 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1915 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-7].m_sId));
		attrTypeList.push_back((yyvsp[-5].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4749 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1922 "yacc.y" /* yacc.c:1646  */
    {
		attrNameList.push_back((yyvsp[-8].m_sId));
		attrTypeList.push_back((yyvsp[-6].m_sId));
		attrNumList.push_back((yyvsp[-4].m_sId));
		attrNotNullList.push_back(1);
	}
#line 4760 "yacc.tab.c" /* yacc.c:1646  */
    break;


#line 4764 "yacc.tab.c" /* yacc.c:1646  */
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
#line 1930 "yacc.y" /* yacc.c:1906  */


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
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesb't exist... \n", tbName.c_str());
		return;
	}

	for (int i=0; i<clauseOpList.size(); i++) {
		cout << clauseNameList[i] << " " << clauseOpList[i] << " " << clauseRightList[i] << endl;
	}
	
}

void updateSet() {
	cout << "updateSet" << endl;
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
		/*
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

