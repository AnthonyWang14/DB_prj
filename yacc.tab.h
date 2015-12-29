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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

