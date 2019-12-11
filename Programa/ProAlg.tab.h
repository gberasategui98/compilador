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
    T_LITERAL_ENTERO = 258,
    T_LITERAL_BOOLEANO = 259,
    T_LITERAL_REAL = 260,
    T_LITERAL_CARACTER = 261,
    T_LITERAL_CADENA = 262,
    T_TIPO_ENTERO = 263,
    T_TIPO_BOOLEANO = 264,
    T_TIPO_CARACTER = 265,
    T_TIPO_REAL = 266,
    T_TIPO_CADENA = 267,
    T_ID = 268,
    T_ALGORITMO = 269,
    T_FALGORITMO = 270,
    T_COMENTARIO = 271,
    T_COMP_SECUENCIAL = 272,
    T_TIPO = 273,
    T_FTIPO = 274,
    T_CONSTANTE = 275,
    T_FCONST = 276,
    T_VAR = 277,
    T_FVAR = 278,
    T_CREAR_TIPO = 279,
    T_TUPLA = 280,
    T_FTUPLA = 281,
    T_TABLA = 282,
    T_INICIO_ARRAY = 283,
    T_SUBRANGO = 284,
    T_FIN_ARRAY = 285,
    T_DE = 286,
    T_REF = 287,
    T_DEF_TIPO = 288,
    T_SEPARADOR = 289,
    T_ENT = 290,
    T_SAL = 291,
    T_PARENTESIS_APERTURA = 292,
    T_PARENTESIS_CLAUSURA = 293,
    T_Y = 294,
    T_O = 295,
    T_NO = 296,
    T_VERDADERO = 297,
    T_FALSO = 298,
    T_CONTINUAR = 299,
    T_ASIGNACION = 300,
    T_SI = 301,
    T_SIMBOLO_BLOQUE_IF = 302,
    T_SIMBOLO_ELSE = 303,
    T_FSI = 304,
    T_MIENTRAS = 305,
    T_HACER = 306,
    T_FMIENTRAS = 307,
    T_PARA = 308,
    T_HASTA = 309,
    T_FPARA = 310,
    T_ACCION = 311,
    T_FACCION = 312,
    T_FUNCION = 313,
    T_DEV = 314,
    T_FFUNCION = 315,
    T_E_S = 316,
    T_OP_REL_MENOR = 317,
    T_OP_REL_MAYOR = 318,
    T_OP_REL_IGUAL = 319,
    T_OP_REL_DIF = 320,
    T_OP_REL_MAYOR_IGUAL = 321,
    T_OP_REL_MENOR_IGUAL = 322,
    T_OP_SUMA = 323,
    T_OP_RESTA = 324,
    T_OP_MULTI = 325,
    T_OP_DIV = 326,
    T_OP_MOD = 327,
    T_OP_DIV_ENT = 328,
    T_PUNTO = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "ProAlg.y" /* yacc.c:1909  */

	char char_val;
	int int_val;
	double float_val;
	char* str_val;
	struct tipo_exp exp;
	struct M m;
	struct tipo_sentencia sentencia;
	struct tipo_exp_mientras exp_mientras;

#line 140 "ProAlg.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROALG_TAB_H_INCLUDED  */
