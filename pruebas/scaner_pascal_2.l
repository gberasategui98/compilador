/* scanner for a toy Pascal-like language */

%{
/* need this for the call to atof() below */
#include <math.h>
%}

DR_DIGIT    [0-9]
DR_MAY	 [A-Z]
DR_MIN	 [a-z]
DR_CARACTER   {DR_MAY}|{DR_MIN}
DR_ID       {DR_CARACTER}({DR_CARACTER}|{DR_DIGIT})*
DR_OP_SUMA_REST "+"|"-"
DR_OP_PRO_DIV "*"|"/"|mod|div
DR_OP_RELACIONALES "<"|"<="|">"|">="|"=="|"!="
DR_ASIGNACION ":="
DR_COMP_SECUENCIAL ";"
DR_SEPARADOR ","
DR_SUBRANGO ".."
DR_DEF_TIPO ":"
DR_SIMBOLO_BLOQUE_IF "->"
DR_SIMBOLO_ELSE "[]"
DR_CREAR_TIPO "="
DR_INICIO_ARRAY "["
DR_FIN_ARRAY "]"
DR_SPACE [ \t\n]+
DR_LITERAL_ENTERO ("+"|"-")?{DR_DIGIT}+(("e"|"E"){DR_DIGIT}+)?
DR_LITERAL_REAL ("+"|"-")?{DR_DIGIT}+("."{DR_DIGIT}+)?(("e"|"E"){DR_DIGIT}+)?
DR_LITERAL_BOOLEANO verdadero|falso
DR_LITERAL_CARACTER "\""(.)"\""
DR_LITERAL_CADENA '([^']|("/""'"))*'
DR_COMENTARIO "{"([^}]|"/""}")*"}"
DR_TIPOS_BASE booleano|caracter|entero|real|cadena
DR_ACCION accion
DR_ALGORITMO algoritmo
DR_CONSTANTE const
DR_CONTINUAR continuar
DR_DE de
DR_DEV dev
DR_DIV div
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
DR_MOD mod
DR_NO no
DR_Y_O y|o
DR_PARA para
DR_REF ref
DR_SAL sal
DR_SI si
DR_TABLA tabla
DR_TIPO tipo
DR_TUPLA tupla
DR_VAR var

%%

{DR_ACCION}  	{printf("accion: %s\n", yytext);}
{DR_ALGORITMO}  {printf("algoritmo: %s\n", yytext);}
{DR_CONSTANTE} 	{printf("const: %s\n", yytext);}
{DR_CONTINUAR} 	{printf("continuar: %s\n", yytext);}
{DR_DE} 	{printf("de: %s\n", yytext);}
{DR_DEV}	 {printf("dev: %s\n", yytext);}
{DR_ENT} 	{printf("ent: %s\n", yytext);}
{DR_E_S} 	{printf("e/s: %s\n", yytext);}
{DR_FACCION}	 {printf("faccion: %s\n", yytext);}
{DR_FALGORITMO} {printf("falgoritmo: %s\n", yytext);}
{DR_FCONST}	 {printf("fconst: %s\n", yytext);}
{DR_FFUNCION}	 {printf("ffuncion: %s\n", yytext);}
{DR_FMIENTRAS} 	{printf("fmientras: %s\n", yytext);}
{DR_FPARA} 	{printf("fpara: %s\n", yytext);}
{DR_FSI}	 {printf("fsi: %s\n", yytext);}
{DR_FTIPO}	 {printf("ftipo: %s\n", yytext);}
{DR_FTUPLA}	 {printf("ftupla: %s\n", yytext);}
{DR_FUNCION}	 {printf("funcion: %s\n", yytext);}
{DR_FVAR}	 {printf("fvar: %s\n", yytext);}
{DR_HACER}	 {printf("hacer: %s\n", yytext);}
{DR_HASTA}	 {printf("hasta: %s\n", yytext);}
{DR_MIENTRAS}	 {printf("mientras: %s\n", yytext);}
{DR_NO} 	{printf("no: %s\n", yytext);}
{DR_Y_O}	 {printf("y|o: %s\n", yytext);}
{DR_PARA} 	{printf("para: %s\n", yytext);}
{DR_REF} 	{printf("ref: %s\n", yytext);}
{DR_SAL} 	{printf("sal: %s\n", yytext);}
{DR_SI}		{printf("si: %s\n", yytext);}
{DR_TABLA} 	{printf("tabla: %s\n", yytext);}
{DR_TIPO} 	{printf("tipo: %s\n", yytext);}
{DR_TUPLA} 	{printf("tupla: %s\n", yytext);}
{DR_VAR} 	{printf("var: %s\n", yytext);}
{DR_OP_SUMA_REST} {printf("Operador suma o resta: %s \n", yytext);}
{DR_OP_PRO_DIV}	{printf("Operador producto, división o modulo: %s \n", yytext);}
{DR_LITERAL_ENTERO}	{printf("Literal entero: %d \n", atoi(yytext));}

{DR_LITERAL_REAL}	{printf("Literal real: %lf \n", atof(yytext));}

{DR_LITERAL_BOOLEANO} {printf("Literal booleano: %s \n", yytext);}

{DR_LITERAL_CADENA} {printf( "Literal cadena: %s\n", yytext);}

{DR_ASIGNACION} {printf("Asignación: %s\n", yytext);}

{DR_COMP_SECUENCIAL} {printf("Composición secuencial: %s\n", yytext);}

{DR_SEPARADOR} {printf("Separador: %s\n", yytext);}

{DR_SUBRANGO} {printf("Subrango: %s\n", yytext);}

{DR_DEF_TIPO} {printf("Definir tipos: %s\n", yytext);}

{DR_SIMBOLO_BLOQUE_IF} {printf("Simbolo if: %s\n", yytext);}

{DR_SIMBOLO_ELSE} {printf("Simbolo else: %s\n", yytext);}

{DR_CREAR_TIPO} {printf("Simbolo crear tipo: %s\n", yytext);}

{DR_INICIO_ARRAY} {printf("Simbolo crear tipo: %s\n", yytext);}

{DR_TIPOS_BASE} {printf("Tipo de la variable: %s\n", yytext);}

{DR_ID}        {printf( "Identificador: %s\n", yytext );}

{DR_OP_RELACIONALES} {printf("Operador relacional: %s\n", yytext);}

{DR_COMENTARIO} {printf("Comentario: %s\n", yytext);}

{DR_SPACE} {}

.           {printf( "TOKEN SIN RECONOCER: %s\n", yytext );}

%%

int main( int argc, char **argv )
{
++argv, --argc;  /* skip over program name */
if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
else
        yyin = stdin;
yylex();
}
