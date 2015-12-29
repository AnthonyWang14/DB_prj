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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

