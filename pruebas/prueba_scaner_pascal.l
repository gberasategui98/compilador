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
OPERATOR "+"|"-"|"*"|"/"
SPACE [ \t\n]+
LITERAL_ENTERO ("+"|"-")?{DIGIT}+(("e"|"E"){DIGIT}+)?
LITERAL_REAL ("+"|"-")?{DIGIT}+("."{DIGIT}+)?(("e"|"E"){DIGIT}+)?
LITERAL_BOOLEANO verdadero|falso
LITERAL_CARACTER "\""(.)*"\""
%%

{LITERAL_ENTERO}	{printf("Literal entero: %s \n", yytext);}

{LITERAL_REAL}	{printf("Literal real: %s \n", yytext);}

if|then|begin|end|procedure|function        {
        printf( "A keyword: %s\n", yytext );
        }

{LITERAL_BOOLEANO} {printf("Literal booleano: %s \n", yytext);}

mientras {printf(" He leido: %s\n", yytext);}

{ID}        printf( "An identifier: %s\n", yytext );

{OPERATOR}   printf( "An operator: %s\n", yytext );

LITERAL_CARACTER {printf( "Comentario: %s\n", yytext);}


"{"[^{}\n]*"}"     /* eat up one-line comments */

[ \t\n]+          /* eat up whitespace */

.           printf( "Unrecognized character: %s\n", yytext );

%%

int main( int argc, char **argv )
{
++argv, --argc;  /* skip over program name */
if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
else
        yyin = stdin;
/*
void main() {
   FILE *fp1, *fp2;
   int a;

   // Add rest of your code
   // ...

   do
   {
      a = fgetc(fp1);
      if ( a != EOF )
      {
         a = tolower(a);
         fputc(a, fp2);
      }
   } while (a != EOF);

   // Add rest of your code
   // ...
}
*/
yylex();
}
