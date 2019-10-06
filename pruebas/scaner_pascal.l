/* scanner for a toy Pascal-like language */

%top{
/* need this for the call to atof() below */
#include <math.h>
}

DIGIT    [0-9]
MAY	 [A-Z]
MIN	 [a-z]
CARACTER   {MAY}|{MIN}
ID       {CARACTER}({CARACTER}|{DIGIT})*
DR_OP_ARITMETICO "+"|"-"|"*"|"/"|"%"
DR_OP_REALACIONALES "<"|"<="|">"|">="|"=="|"!="
DR_ASIGNACION ":="
DR_COMP_SECUENCIAL ";"
DR_SEPARADOR ","
DR_SUBRANGO ".."
DR_DEF_TIPO ":"
DR_IF "->"
DR_ELSE "[]"
DR_CREAR_TIPO "="
DR_INICIO_ARRAY "["
DR_FIN_ARRAY "]"
SPACE [ \t\n]+
LITERAL_ENTERO ("+"|"-")?{DIGIT}+(("e"|"E"){DIGIT}+)?
LITERAL_REAL ("+"|"-")?{DIGIT}+("."{DIGIT}+)?(("e"|"E"){DIGIT}+)?
LITERAL_BOOLEANO verdadero|falso
LITERAL_CARACTER "\""({CARACTER})"\""
LITERAL_CADENA "\'"([^"\'"]|("/""\'"))*"\'"
COMILLA_SIMPLE "\'"
COMENTARIO "{"([^"}"]|"/""}")*"}"
DR_PALABRA_RESERVADA accion|algoritmo|booleano|cadena|caracter|const|continuar|de|dev|div|ent|entero|"e/s"|faccion|falgoritmo|falso|fconst|ffuncion|fmientras|fpara|fsi|ftipo|ftupla|funcion|fvar|hacer|hasta|mientras|mod|no|o|para|real|ref|sal|si|tabla|tipo|tupla|var|verdadero|y

%%

{LITERAL_ENTERO}	{printf("Literal entero: %s \n", yytext);}

{LITERAL_REAL}	{printf("Literal real: %s \n", yytext);}

{LITERAL_BOOLEANO} {printf("Literal booleano: %s \n", yytext);}

{DR_PALABRA_RESERVADA} {printf( "Palabra reservada: %s\n", yytext );}

{ID}        printf( "An identifier: %s\n", yytext );

{DR_OP_ARITMETICO}   printf( "An operator: %s\n", yytext );

{LITERAL_CARACTER} {printf( "literal caracter: %s\n", yytext);}

{LITERAL_CADENA} {printf( "Literal cadena: %s\n", yytext);}

{COMENTARIO} {printf("Comentario: %s\n", yytext);}



.           printf( "Unrecognized character: %s\n", yytext );

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
