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
    T_ALGORITMO = 263,
    T_ID = 264,
    T_FALGORITMO = 265,
    T_COMENTARIO = 266,
    T_COMP_SECUENCIAL = 267,
    T_TIPO = 268,
    T_FTIPO = 269,
    T_CONSTANTE = 270,
    T_FCONST = 271,
    T_VAR = 272,
    T_FVAR = 273,
    T_CREAR_TIPO = 274,
    T_TUPLA = 275,
    T_FTUPLA = 276,
    T_TABLA = 277,
    T_INICIO_ARRAY = 278,
    T_SUBRANGO = 279,
    T_FIN_ARRAY = 280,
    T_DE = 281,
    T_REF = 282,
    T_TIPO_BASE = 283,
    T_DEF_TIPO = 284,
    T_SEPARADOR = 285,
    T_ENT = 286,
    T_SAL = 287,
    T_PARENTESIS_APERTURA = 288,
    T_PARENTESIS_CLAUSURA = 289,
    T_Y = 290,
    T_O = 291,
    T_NO = 292,
    T_VERDADERO = 293,
    T_FALSO = 294,
    T_CONTINUAR = 295,
    T_ASIGNACION = 296,
    T_SI = 297,
    T_SIMBOLO_BLOQUE_IF = 298,
    T_SIMBOLO_ELSE = 299,
    T_FSI = 300,
    T_MIENTRAS = 301,
    T_HACER = 302,
    T_FMIENTRAS = 303,
    T_PARA = 304,
    T_HASTA = 305,
    T_FPARA = 306,
    T_ACCION = 307,
    T_FACCION = 308,
    T_FUNCION = 309,
    T_DEV = 310,
    T_FFUNCION = 311,
    T_E_S = 312,
    T_OP_REL_MENOR = 313,
    T_OP_REL_MAYOR = 314,
    T_OP_REL_IGUAL = 315,
    T_OP_REL_DIF = 316,
    T_OP_REL_MAYOR_IGUAL = 317,
    T_OP_REL_MENOR_IGUAL = 318,
    T_OP_SUMA = 319,
    T_OP_RESTA = 320,
    T_OP_MULTI = 321,
    T_OP_DIV = 322,
    T_OP_MOD = 323,
    T_OP_DIV_ENT = 324,
    T_PUNTO = 325
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "ProAlg.y" /* yacc.c:1909  */

	char char_val;
	int int_val;
	double float_val;
	char* str_val;
	//list_t* symtab_item;

#line 133 "ProAlg.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROALG_TAB_H_INCLUDED  */
