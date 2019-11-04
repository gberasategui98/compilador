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

#ifndef YY_YY_PROALG_TAB_H_INCLUDED
# define YY_YY_PROALG_TAB_H_INCLUDED
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
    T_FALGORITMO = 260,
    T_COMENTARIO = 261,
    T_COMP_SECUENCIAL = 262,
    T_TIPO = 263,
    T_FTIPO = 264,
    T_CONSTANTE = 265,
    T_FCONST = 266,
    T_VAR = 267,
    T_FVAR = 268,
    T_CREAR_TIPO = 269,
    T_TUPLA = 270,
    T_FTUPLA = 271,
    T_TABLA = 272,
    T_INICIO_ARRAY = 273,
    T_SUBRANGO = 274,
    T_FIN_ARRAY = 275,
    T_DE = 276,
    T_REF = 277,
    T_TIPO_BASE = 278,
    T_DEF_TIPO = 279,
    T_LITERAL = 280,
    T_SEPARADOR = 281,
    T_ENT = 282,
    T_SAL = 283,
    T_PARENTESIS_APERTURA = 284,
    T_PARENTESIS_CLAUSURA = 285,
    T_Y = 286,
    T_O = 287,
    T_NO = 288,
    T_VERDADERO = 289,
    T_FALSO = 290,
    T_CONTINUAR = 291,
    T_ASIGNACION = 292,
    T_SI = 293,
    T_SIMBOLO_BLOQUE_IF = 294,
    T_SIMBOLO_ELSE = 295,
    T_FSI = 296,
    T_MIENTRAS = 297,
    T_HACER = 298,
    T_FMIENTRAS = 299,
    T_PARA = 300,
    T_HASTA = 301,
    T_FPARA = 302,
    T_ACCION = 303,
    T_FACCION = 304,
    T_FUNCION = 305,
    T_DEV = 306,
    T_FFUNCION = 307,
    T_E_S = 308,
    T_OP_REL_MENOR = 309,
    T_OP_REL_MAYOR = 310,
    T_OP_REL_IGUAL = 311,
    T_OP_REL_DIF = 312,
    T_OP_REL_MAYOR_IGUAL = 313,
    T_OP_REL_MENOR_IGUAL = 314,
    T_OP_SUMA = 315,
    T_OP_RESTA = 316,
    T_OP_MULTI = 317,
    T_OP_DIV = 318,
    T_OP_MOD = 319,
    T_OP_DIV_ENT = 320,
    T_PUNTO = 321,
    T_PREC_MAX = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROALG_TAB_H_INCLUDED  */
