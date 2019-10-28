/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_GRAMATICA_TAB_H_INCLUDED
# define YY_YY_GRAMATICA_TAB_H_INCLUDED
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
    T_ALGORITMO = 258,
    T_ID = 259,
    T_COMP_SECUENCIAL = 260,
    T_FALGORITMO = 261,
    T_PUNTO = 262,
    T_COMENTARIO = 263,
    T_TIPO = 264,
    T_FTIPO = 265,
    T_CONST = 266,
    T_FCONST = 267,
    T_VAR = 268,
    T_FVAR = 269,
    T_CREAR_TIPO = 270,
    T_TUPLA = 271,
    T_FTUPLA = 272,
    T_TABLA = 273,
    T_INICIO_ARRAY = 274,
    T_SUBRANGO = 275,
    T_FIN_ARRAY = 276,
    T_DE = 277,
    T_REF = 278,
    T_TIPO_BASE = 279,
    T_LITERAL_CARACTER = 280,
    T_DEF_TIPO = 281,
    T_LITERAL = 282,
    T_COMA = 283,
    T_ENT = 284,
    T_SAL = 285,
    T_OP_SUMA = 286,
    T_OP_RESTA = 287,
    T_OP_MULTI = 288,
    T_OP_DIV = 289,
    T_OP_MOD = 290,
    T_OP_DIV_ENT = 291,
    T_PARENTESIS_APERTURA = 292,
    T_PARENTESIS_CLAUSURA = 293,
    T_LITERAL_NUMERICO = 294,
    T_Y = 295,
    T_O = 296,
    T_NO = 297,
    T_VERDADERO = 298,
    T_FALSO = 299,
    T_OP_REL_MENOR = 300,
    T_OP_REL_MAYOR = 301,
    T_OP_REL_IGUAL = 302,
    T_OP_REL_DIF = 303,
    T_OP_REL_MAYOR_IGUAL = 304,
    T_OP_REL_MENOR_IGUAL = 305,
    T_IDENTIFICADOR = 306,
    T_CONTINUAR = 307,
    T_ASIGNACION = 308,
    T_SI = 309,
    T_SIMBOLO_BLOQUE_IF = 310,
    T_FSI = 311,
    T_SIMBOLO_ELSE = 312,
    T_MIENTRAS = 313,
    T_HACER = 314,
    T_FMIENTRAS = 315,
    T_PARA = 316,
    T_HASTA = 317,
    T_FPARA = 318,
    T_ACCION = 319,
    T_FACCION = 320,
    T_FUNCION = 321,
    T_DEV = 322,
    T_FFUNCION = 323,
    T_E_S = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "gramatica.y" /* yacc.c:1909  */

	int ival;
	float fval;

#line 129 "gramatica.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */
