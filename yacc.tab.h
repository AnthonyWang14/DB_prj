/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Tokens.  */
#define NUMBER 258
#define STRING 259
#define NAME 260
#define ATTRNAME 261
#define ATTRNAME2 262
#define ATTRNUM 263
#define EXIT 264
#define CREATE 265
#define HAHA 266
#define DROP 267
#define USE 268
#define SHOW 269
#define DATABASE 270
#define PRIMARY 271
#define KEY 272
#define INSERT 273
#define INTO 274
#define VALUES 275
#define DELETE 276
#define FROM 277
#define WHERE 278
#define AND 279
#define UPDATE 280
#define SET 281
#define SELECT 282
#define GROUP 283
#define BY 284
#define IS 285
#define NUL 286
#define DESC 287
#define TABLE 288
#define TABLES 289
#define BLANK 290
#define NOT 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

