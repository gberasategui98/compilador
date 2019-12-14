%{
/*
* Autores: Ioar Crespo y Guilllermo Berasategui
*/
#include <math.h>
#include "TablaCuadruplas.h"
#include "ProAlg.tab.h"
#include "TS.h"

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
DR_TIPO_BOOLEANO booleano
DR_TIPO_CARACTER caracter
DR_TIPO_ENTERO entero
DR_TIPO_REAL real
DR_TIPO_CADENA cadena
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

{DR_ACCION}  	{return T_ACCION;}

{DR_ALGORITMO}  { return T_ALGORITMO;}

{DR_CONSTANTE} 	{return T_CONSTANTE;}

{DR_CONTINUAR} 	{return T_CONTINUAR;}

{DR_DE} 	{return T_DE;}

{DR_DEV}	 {return T_DEV;}

{DR_ENT} 	{return T_ENT;}

{DR_E_S} 	{return T_E_S;}

{DR_FACCION}	 {return T_FACCION;}

{DR_FALGORITMO} {return T_FALGORITMO;}

{DR_FCONST}	 {return T_FCONST;}

{DR_FFUNCION}	 {return T_FFUNCION;}

{DR_FMIENTRAS} 	{return T_FMIENTRAS;}

{DR_FPARA} 	{return T_FPARA;}

{DR_FSI}	 {return T_FSI;}

{DR_FTIPO}	 {return T_FTIPO;}

{DR_FTUPLA}	 {return T_FTUPLA;}

{DR_FUNCION}	 {return T_FUNCION;}

{DR_FVAR}	 {return T_FVAR;}

{DR_HACER}	 {return T_HACER;}

{DR_HASTA}	 {return T_HASTA;}

{DR_MIENTRAS}	 {return T_MIENTRAS;}

{DR_NO} 	{return T_NO;}

{DR_O}	 {return T_O;}

{DR_Y}          {return T_Y;}

{DR_PARA} 	{return T_PARA;}

{DR_REF} 	{return T_REF;}

{DR_SAL} 	{return T_SAL;}

{DR_SI}		{return T_SI;}

{DR_TABLA} 	{return T_TABLA;}

{DR_TIPO} 	{return T_TIPO;}

{DR_TUPLA} 	{return T_TUPLA;}

{DR_VAR} 	{return T_VAR;}

{DR_OP_RESTA} 	{return T_OP_RESTA;}

{DR_OP_SUMA} 	{return T_OP_SUMA;}

{DR_OP_MULTI} 	{return T_OP_MULTI;}

{DR_OP_DIV} 	{return T_OP_DIV;}

{DR_OP_DIV_ENT} {return T_OP_DIV_ENT;}

{DR_OP_MOD} 	{return T_OP_MOD;}

{DR_LITERAL_ENTERO}	{
                        yylval.int_val = atoi(yytext);
                        return T_LITERAL_ENTERO;
                    }

{DR_LITERAL_REAL}	{
                        yylval.float_val = atof(yytext);
                        return T_LITERAL_REAL ;
                    }

{DR_LITERAL_BOOLEANO} {
                        yylval.int_val = verd_o_falso(yytext);
                        return T_LITERAL_BOOLEANO;
                    }

{DR_LITERAL_CADENA} {
                        yylval.str_val = malloc(yyleng * sizeof(char));
                        strcpy(yylval.str_val, yytext);  
                        return T_LITERAL_CADENA;
                    }

{DR_LITERAL_CARACTER}   {
                        yylval.char_val = yytext[0];
                        return T_LITERAL_CARACTER;
                        }

{DR_ASIGNACION} {return T_ASIGNACION;}

{DR_COMP_SECUENCIAL} {return T_COMP_SECUENCIAL;}

{DR_SEPARADOR} {return T_SEPARADOR;}

{DR_SUBRANGO} {return T_SUBRANGO;}

{DR_DEF_TIPO} {return T_DEF_TIPO;}

{DR_SIMBOLO_BLOQUE_IF} {return T_SIMBOLO_BLOQUE_IF;}

{DR_SIMBOLO_ELSE} {return T_SIMBOLO_ELSE;}

{DR_INICIO_ARRAY} {return T_INICIO_ARRAY;}

{DR_TIPO_BOOLEANO} {
                    yylval.int_val = BOOLEANO;
                    return T_TIPO_BOOLEANO;
                    }

{DR_TIPO_CARACTER} {
                    yylval.int_val = CARACTER;
                    return T_TIPO_CARACTER;
                    }

{DR_TIPO_ENTERO} {
                    yylval.int_val = ENTERO; 
                    return T_TIPO_ENTERO;
                }

{DR_TIPO_REAL} {
                yylval.int_val = REAL;
                return T_TIPO_REAL;
                }

{DR_TIPO_CADENA} {
                yylval.int_val = CADENA;
                return T_TIPO_CADENA;
                }

{DR_ID}        {
                yylval.str_val = malloc(yyleng * sizeof(char));
                strcpy(yylval.str_val, yytext);
                return T_ID;
                }

{DR_PARENTESIS_APERTURA} {return T_PARENTESIS_APERTURA;}

{DR_PARENTESIS_CLAUSURA} {return T_PARENTESIS_CLAUSURA;}

{DR_OP_REL_MENOR} {return T_OP_REL_MENOR;}

{DR_OP_REL_MAYOR} {return T_OP_REL_MAYOR;}

{DR_OP_REL_IGUAL} {return T_OP_REL_IGUAL;}

{DR_OP_REL_DIF} {return T_OP_REL_DIF;}

{DR_OP_REL_MENOR_IGUAL} {return T_OP_REL_MENOR_IGUAL;}

{DR_OP_REL_MAYOR_IGUAL} {return T_OP_REL_MAYOR_IGUAL;}

{DR_COMENTARIO} {return T_COMENTARIO;}

{DR_SPACE} {}

{DR_PUNTO} {return T_PUNTO;}

.           {printf( "TOKEN SIN RECONOCER: %s\n", yytext );}

%%
