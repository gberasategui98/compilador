/*
* Scanner para proAlg por Ioar Crespo y Guillermo Berasategui
* 07/10/2019
*/

/*
* DUDA: ¿En flex creamos entradas para la TS? ¿En caso afirmativo como utilizar la misma tabla en 
*       flex y bison?
*/

%{
#include <math.h>
#include "ProAlg.tab.h"

int verd_o_falso(char *yytext){
    if (strcmp(yytext, "verdadero")==0){
        return 1;
    }
    else{
        return 0;
    }
}
%}

DR_DIGIT    [0-9]
DR_MAY	 [A-Z]
DR_MIN	 [a-z]
DR_CARACTER   {DR_MAY}|{DR_MIN}
DR_ID       {DR_CARACTER}({DR_CARACTER}|{DR_DIGIT})*
DR_OP_SUMA "+"
DR_OP_RESTA "-"
DR_OP_MULTI "*"
DR_OP_DIV "/"
DR_OP_MOD mod
DR_OP_DIV_ENT div
DR_OP_REL_MENOR "<"
DR_OP_REL_MAYOR ">"
DR_OP_REL_IGUAL "="
DR_OP_REL_DIF "<>"
DR_OP_REL_MENOR_IGUAL "<="
DR_OP_REL_MAYOR_IGUAL ">="
DR_PARENTESIS_APERTURA "("
DR_PARENTESIS_CLAUSURA ")"
DR_ASIGNACION ":="
DR_COMP_SECUENCIAL ";"
DR_SEPARADOR ","
DR_SUBRANGO ".."
DR_DEF_TIPO ":"
DR_SIMBOLO_BLOQUE_IF "->"
DR_SIMBOLO_ELSE "[]"
DR_INICIO_ARRAY "["
DR_FIN_ARRAY "]"
DR_SPACE [ \t\n]+
DR_LITERAL_ENTERO {DR_DIGIT}+(("e"|"E"){DR_DIGIT}+)?
DR_LITERAL_REAL {DR_DIGIT}+("."{DR_DIGIT}+)?(("e"|"E"){DR_DIGIT}+)?
DR_LITERAL_BOOLEANO verdadero|falso
DR_LITERAL_CARACTER "\""(.)"\""
DR_LITERAL_CADENA '([^']|("/""'"))*'
DR_COMENTARIO "{"([^}]|"/""}")*"}"
DR_TIPO_BASE booleano|caracter|entero|real|cadena
DR_ACCION accion
DR_ALGORITMO algoritmo
DR_CONSTANTE const
DR_CONTINUAR continuar
DR_DE de
DR_DEV dev
DR_ENT ent
DR_E_S "e/s"
DR_FACCION faccion
DR_FALGORITMO falgoritmo
DR_FCONST fconst
DR_FFUNCION ffuncion
DR_FMIENTRAS fmientras
DR_FPARA fpara
DR_FSI fsi
DR_FTIPO ftipo
DR_FTUPLA ftupla
DR_FUNCION funcion
DR_FVAR fvar
DR_HACER hacer
DR_HASTA hasta
DR_MIENTRAS mientras
DR_NO no
DR_Y y
DR_O o
DR_PARA para
DR_REF ref
DR_SAL sal
DR_SI si
DR_TABLA tabla
DR_TIPO tipo
DR_TUPLA tupla
DR_VAR var
DR_PUNTO "."
%%

{DR_ACCION}  	{printf("accion: %s\n", yytext); return T_ACCION;}

{DR_ALGORITMO}  {printf("algoritmo: %s\n", yytext); return T_ALGORITMO;}

{DR_CONSTANTE} 	{printf("const: %s\n", yytext); return T_CONSTANTE;}

{DR_CONTINUAR} 	{printf("continuar: %s\n", yytext); return T_CONTINUAR;}

{DR_DE} 	{printf("de: %s\n", yytext); return T_DE;}

{DR_DEV}	 {printf("dev: %s\n", yytext); return T_DEV;}

{DR_ENT} 	{printf("ent: %s\n", yytext); return T_ENT;}

{DR_E_S} 	{printf("e/s: %s\n", yytext); return T_E_S;}

{DR_FACCION}	 {printf("faccion: %s\n", yytext); return T_FACCION;}

{DR_FALGORITMO} {printf("falgoritmo: %s\n", yytext); return T_FALGORITMO;}

{DR_FCONST}	 {printf("fconst: %s\n", yytext); return T_FCONST;}

{DR_FFUNCION}	 {printf("ffuncion: %s\n", yytext); return T_FFUNCION;}

{DR_FMIENTRAS} 	{printf("fmientras: %s\n", yytext); return T_FMIENTRAS;}

{DR_FPARA} 	{printf("fpara: %s\n", yytext); return T_FPARA;}

{DR_FSI}	 {printf("fsi: %s\n", yytext); return T_FSI;}

{DR_FTIPO}	 {printf("ftipo: %s\n", yytext); return T_FTIPO;}

{DR_FTUPLA}	 {printf("ftupla: %s\n", yytext); return T_FTUPLA;}

{DR_FUNCION}	 {printf("funcion: %s\n", yytext); return T_FUNCION;}

{DR_FVAR}	 {printf("fvar: %s\n", yytext); return T_FVAR;}

{DR_HACER}	 {printf("hacer: %s\n", yytext); return T_HACER;}

{DR_HASTA}	 {printf("hasta: %s\n", yytext); return T_HASTA;}

{DR_MIENTRAS}	 {printf("mientras: %s\n", yytext); return T_MIENTRAS;}

{DR_NO} 	{printf("no: %s\n", yytext); return T_NO;}

{DR_O}	 {printf("o: %s\n", yytext); return T_O;}

{DR_Y}          {printf("y: %s\n", yytext); return T_Y;}

{DR_PARA} 	{printf("para: %s\n", yytext); return T_PARA;}

{DR_REF} 	{printf("ref: %s\n", yytext); return T_REF;}

{DR_SAL} 	{printf("sal: %s\n", yytext); return T_SAL;}

{DR_SI}		{printf("si: %s\n", yytext); return T_SI;}

{DR_TABLA} 	{printf("tabla: %s\n", yytext); return T_TABLA;}

{DR_TIPO} 	{printf("tipo: %s\n", yytext); return T_TIPO;}

{DR_TUPLA} 	{printf("tupla: %s\n", yytext); return T_TUPLA;}

{DR_VAR} 	{printf("var: %s\n", yytext); return T_VAR;}

{DR_OP_RESTA} 	{printf("Operador resta: %s\n", yytext); return T_OP_RESTA;}

{DR_OP_SUMA} 	{printf("Operador suma: %s\n", yytext); return T_OP_SUMA;}

{DR_OP_MULTI} 	{printf("Operador multiplicaión: %s\n", yytext); return T_OP_MULTI;}

{DR_OP_DIV} 	{printf("operador división: %s\n", yytext); return T_OP_DIV;}

{DR_OP_DIV_ENT} {printf("operador división entera: %s\n", yytext); return T_OP_DIV_ENT;}

{DR_OP_MOD} 	{printf("Operador mod: %s\n", yytext); return T_OP_MOD;}

{DR_LITERAL_ENTERO}	{printf("Literal entero: %d \n", atoi(yytext)); yylval.int_val = atoi(yytext); return T_LITERAL_ENTERO;}

{DR_LITERAL_REAL}	{printf("Literal real: %lf \n", atof(yytext)); yylval.float_val = atof(yytext); return T_LITERAL_REAL ;}

{DR_LITERAL_BOOLEANO} {printf("Literal booleano: %s \n", yytext); yylval.int_val = verd_o_falso(yytext); return T_LITERAL_BOOLEANO;}

{DR_LITERAL_CADENA} {printf( "Literal cadena: %s\n", yytext); yylval.str_val = malloc(yyleng * sizeof(char));

                    strcpy(yylval.str_val, yytext);  return T_LITERAL_CADENA;}

{DR_LITERAL_CARACTER} {printf( "Literal caracter: %s\n", yytext); yylval.char_val = yytext[0]; return T_LITERAL_CARACTER;}

{DR_ASIGNACION} {printf("Asignación: %s\n", yytext); return T_ASIGNACION;}

{DR_COMP_SECUENCIAL} {printf("Composición secuencial: %s\n", yytext); return T_COMP_SECUENCIAL;}

{DR_SEPARADOR} {printf("Separador: %s\n", yytext); return T_SEPARADOR;}

{DR_SUBRANGO} {printf("Subrango: %s\n", yytext); return T_SUBRANGO;}

{DR_DEF_TIPO} {printf("Definir tipos: %s\n", yytext); return T_DEF_TIPO;}

{DR_SIMBOLO_BLOQUE_IF} {printf("Simbolo if: %s\n", yytext); return T_SIMBOLO_BLOQUE_IF;}

{DR_SIMBOLO_ELSE} {printf("Simbolo else: %s\n", yytext); return T_SIMBOLO_ELSE;}

{DR_INICIO_ARRAY} {printf("Simbolo crear tipo: %s\n", yytext); return T_INICIO_ARRAY;}

{DR_TIPO_BASE} {printf("Tipo de la variable: %s\n", yytext); return T_ID;}

{DR_ID}        {printf("Identificador: %s\n", yytext ); return T_ID;}

{DR_PARENTESIS_APERTURA} {printf("Parentesis apertura: %s\n", yytext); return T_PARENTESIS_APERTURA;}

{DR_PARENTESIS_CLAUSURA} {printf("Parentesis clausura: %s\n", yytext); return T_PARENTESIS_CLAUSURA;}

{DR_OP_REL_MENOR} {printf("Operador relacional menor: %s\n", yytext); return T_OP_REL_MENOR;}

{DR_OP_REL_MAYOR} {printf("Operador relacional mayor: %s\n", yytext); return T_OP_REL_MAYOR;}

{DR_OP_REL_IGUAL} {printf("Operador relacional igual: %s\n", yytext); return T_OP_REL_IGUAL;}

{DR_OP_REL_DIF} {printf("Operador relacional diferente: %s\n", yytext); return T_OP_REL_DIF;}

{DR_OP_REL_MENOR_IGUAL} {printf("Operador relacional menor o igual: %s\n", yytext); return T_OP_REL_MENOR_IGUAL;}

{DR_OP_REL_MAYOR_IGUAL} {printf("Operador relacional mayor o igual: %s\n", yytext); return T_OP_REL_MAYOR_IGUAL;}

{DR_COMENTARIO} {printf("Comentario: %s\n", yytext); return T_COMENTARIO;}

{DR_SPACE} {}

{DR_PUNTO} {printf("Punto: %s\n", yytext); return T_PUNTO;}

.           {printf( "TOKEN SIN RECONOCER: %s\n", yytext );}

%%
