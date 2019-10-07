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
DR_OP_ARITMETICO "+"|"-"|"*"|"/"|"%"
DR_OP_REALACIONALES "<"|"<="|">"|">="|"=="|"!="
DR_ASIGNACION ":="
DR_COMP_SECUENCIAL ";"
DR_SEPARADOR ","
DR_SUBRANGO ".."
DR_DEF_TIPO ":"
DR_SIMBOLO_IF "->"
DR_SIMBOLO_ELSE "[]"
DR_CREAR_TIPO "="
DR_INICIO_ARRAY "["
DR_FIN_ARRAY "]"
SPACE [ \t\n]+
DR_LITERAL_ENTERO ("+"|"-")?{DR_DIGIT}+(("e"|"E"){DR_DIGIT}+)?
DR_LITERAL_REAL ("+"|"-")?{DR_DIGIT}+("."{DR_DIGIT}+)?(("e"|"E"){DR_DIGIT}+)?
DR_LITERAL_BOOLEANO verdadero|falso
DR_LITERAL_CARACTER "\""({DR_CARACTER})"\""
DR_LITERAL_CADENA "\'"([^"\'"]|("/""\'"))*"\'"
DR_COMENTARIO "{"([^"}"]|"/""}")*"}"
DR_PALABRA_RESERVADA accion|algoritmo|const|continuar|de|dev|div|ent|"e/s"|faccion|falgoritmo|falso|fconst|ffuncion|fmientras|fpara|fsi|ftipo|ftupla|funcion|fvar|hacer|hasta|mientras|mod|no|o|para|ref|sal|si|tabla|tipo|tupla|var|verdadero|y
DR_TIPOS_BASE booleano|caracter|entero|real|cadena

%%

{DR_LITERAL_ENTERO}	{printf("Literal entero: %d \n", atoi(yytext));}

{DR_LITERAL_REAL}	{printf("Literal real: %f \n", atof(yytext));}

{DR_LITERAL_BOOLEANO} {printf("Literal booleano: %s \n", yytext);}

{DR_LITERAL_CARACTER} {printf( "Literal caracter: %s\n", yytext);}

{DR_LITERAL_CADENA} {printf( "Literal cadena: %s\n", yytext);}

{DR_PALABRA_RESERVADA} {printf( "Palabra reservada: %s\n", yytext );}

{DR_ASIGNACION} {printf("Asignación: %s\n", yytext);}

{DR_COMP_SECUENCIAL} {printf("Composición secuencial: %s\n", yytext);}

{DR_SEPARADOR} {printf("Separador: %s\n", yytext);}

{DR_SUBRANGO} {printf("Subrango: %s\n", yytext);}

{DR_DEF_TIPO} {printf("Definir tipos: %s\n", yytext);}

{DR_SIMBOLO_IF} {printf("Simbolo if: %s\n", yytext);}

{DR_SIMBOLO_ELSE} {printf("Simbolo else: %s\n", yytext);}

{DR_CREAR_TIPO} {printf("Simbolo crear tipo: %s\n", yytext);}

{DR_INICIO_ARRAY} {printf("Simbolo crear tipo: %s\n", yytext);}

{DR_TIPOS_BASE} {printf("Tipo de la variable: %s\n", yytext);}

{DR_ID}        printf( "Identificador: %s\n", yytext );

{DR_OP_ARITMETICO}   printf( "Operador aritmetico: %s\n", yytext );

{DR_OP_REALACIONALES} printf(" Operador relacional: %s\n", yytext);

{DR_COMENTARIO} {printf("Comentario: %s\n", yytext);}

{SPACE} {}

.           printf( "TOKEN SIN RECONOCER: %s\n", yytext );

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
