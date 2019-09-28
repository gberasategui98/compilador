/* scanner for a toy Pascal-like language */

%top{
/* need this for the call to atof() below */
#include <math.h>
}

DIGIT    [0-9]
MAY	 [A-Z]
MIN	 [a-z]
LETTER   {MAY}|{MIN}
ID       {LETTER}[a-z0-9]*
OPERATOR "+"|"-"|"*"|"/"

%%

{DIGIT}+    {
        printf( "An integer: %s (%d)\n", yytext,
                atoi( yytext ) );
        }

{DIGIT}+"."{DIGIT}*        {
        printf( "A float: %s (%g)\n", yytext,
                atof( yytext ) );
        }


if|then|begin|end|procedure|function        {
        printf( "A keyword: %s\n", yytext );
        }

{ID}        printf( "An identifier: %s\n", yytext );

{OPERATOR}   printf( "An operator: %s\n", yytext );

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
