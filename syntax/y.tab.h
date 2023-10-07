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
     IDENTIFIER = 258,
     TYPE_IDENTIFIER = 259,
     FLOAT_CONSTANT = 260,
     INTEGER_CONSTANT = 261,
     CHARACTER_CONSTANT = 262,
     STRING_LITERAL = 263,
     PLUS = 264,
     MINUS = 265,
     PLUSPLUS = 266,
     MINUSMINUS = 267,
     AMP = 268,
     BARBAR = 269,
     AMPAMP = 270,
     ARROW = 271,
     SEMICOLON = 272,
     LSS = 273,
     GTR = 274,
     LEQ = 275,
     GEQ = 276,
     EQL = 277,
     NEQ = 278,
     DOTDOTDOT = 279,
     LP = 280,
     RP = 281,
     LB = 282,
     RB = 283,
     LR = 284,
     RR = 285,
     PERIOD = 286,
     COMMA = 287,
     EXCL = 288,
     STAR = 289,
     SLASH = 290,
     PERCENT = 291,
     ASSIGN = 292,
     COLON = 293,
     AUTO_SYM = 294,
     STATIC_SYM = 295,
     TYPEDEF_SYM = 296,
     STRUCT_SYM = 297,
     ENUM_SYM = 298,
     SIZEOF_SYM = 299,
     UNION_SYM = 300,
     IF_SYM = 301,
     ELSE_SYM = 302,
     WHILE_SYM = 303,
     DO_SYM = 304,
     FOR_SYM = 305,
     CONTINUE_SYM = 306,
     BREAK_SYM = 307,
     RETURN_SYM = 308,
     SWITCH_SYM = 309,
     CASE_SYM = 310,
     DEFAULT_SYM = 311
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define AMP 268
#define BARBAR 269
#define AMPAMP 270
#define ARROW 271
#define SEMICOLON 272
#define LSS 273
#define GTR 274
#define LEQ 275
#define GEQ 276
#define EQL 277
#define NEQ 278
#define DOTDOTDOT 279
#define LP 280
#define RP 281
#define LB 282
#define RB 283
#define LR 284
#define RR 285
#define PERIOD 286
#define COMMA 287
#define EXCL 288
#define STAR 289
#define SLASH 290
#define PERCENT 291
#define ASSIGN 292
#define COLON 293
#define AUTO_SYM 294
#define STATIC_SYM 295
#define TYPEDEF_SYM 296
#define STRUCT_SYM 297
#define ENUM_SYM 298
#define SIZEOF_SYM 299
#define UNION_SYM 300
#define IF_SYM 301
#define ELSE_SYM 302
#define WHILE_SYM 303
#define DO_SYM 304
#define FOR_SYM 305
#define CONTINUE_SYM 306
#define BREAK_SYM 307
#define RETURN_SYM 308
#define SWITCH_SYM 309
#define CASE_SYM 310
#define DEFAULT_SYM 311




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

