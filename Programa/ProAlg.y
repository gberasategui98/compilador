%{

#include <stdio.h>
#include <stdlib.h>

/*
* NOTA: T_LITERAL_CARACTER y T_LITERAL_NUMERICO reemplazados por 'T_LITERAL'
* NOTA: en v_d_tipo el subrango de la tabla no puede ser un caracter (ej: tabla['a'..'d'] de v_d_tipo)
* DUDA: El token asignacion -> operando := expresion no debería ser 'identificador := expresion'
*/

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);
%}



%token T_ALGORITMO T_ID T_FALGORITMO T_COMENTARIO T_COMP_SECUENCIAL
%token T_TIPO T_FTIPO T_CONSTANTE T_FCONST T_VAR T_FVAR
%token T_CREAR_TIPO T_TUPLA T_FTUPLA
%token T_TABLA T_INICIO_ARRAY T_SUBRANGO T_FIN_ARRAY T_DE
%token T_REF T_TIPO_BASE
%token T_DEF_TIPO T_LITERAL T_SEPARADOR
%token T_ENT T_SAL
%token T_PARENTESIS_APERTURA T_PARENTESIS_CLAUSURA
%token T_Y T_O T_NO
%token T_VERDADERO T_FALSO
%token T_CONTINUAR T_ASIGNACION
%token T_SI T_SIMBOLO_BLOQUE_IF T_SIMBOLO_ELSE T_FSI
%token T_MIENTRAS T_HACER T_FMIENTRAS
%token T_PARA T_HASTA T_FPARA
%token T_ACCION T_FACCION T_FUNCION T_DEV T_FFUNCION
%token T_E_S
%token T_OP_REL_MENOR T_OP_REL_MAYOR T_OP_REL_IGUAL T_OP_REL_DIF T_OP_REL_MAYOR_IGUAL T_OP_REL_MENOR_IGUAL
%token T_OP_SUMA T_OP_RESTA
%token T_OP_MULTI T_OP_DIV T_OP_MOD T_OP_DIV_ENT
%token T_PUNTO

%left T_PUNTO T_INICIO_ARRAY T_REF
%left T_OP_REL_MENOR T_OP_REL_MAYOR T_OP_REL_IGUAL T_OP_REL_DIF T_OP_REL_MAYOR_IGUAL T_OP_REL_MENOR_IGUAL
%left T_Y T_O
%left T_NO
%left T_OP_SUMA T_OP_RESTA
%left T_OP_MULTI T_OP_DIV T_OP_MOD T_OP_DIV_ENT
%left T_PREC_MAX

%%

v_desc_algoritmo: T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO { printf("T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO\n"); }
;

v_cabecera_alg: v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO { printf("v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO\n"); }
;

v_bloque_alg: v_bloque T_COMENTARIO { printf("v_bloque T_COMENTARIO\n"); }
;

v_decl_globales: v_declaracion_tipo v_decl_globales { printf("v_declaracion_tipo v_decl_globales\n"); }
	| v_declaracion_cte v_decl_globales { printf("v_declaracion_cte v_decl_globales\n"); }
	|
;

v_decl_a_f: v_accion_d v_decl_a_f { printf("v_accion_d v_decl_a_f\n"); }
	| v_funcion_d v_decl_a_f { printf("v_funcion_d v_decl_a_f\n"); }
	|
;

v_bloque: v_declaraciones v_instrucciones { printf("v_declaraciones v_instrucciones\n"); }
;

v_declaraciones: v_declaracion_tipo v_declaraciones { printf("v_declaracion_tipo v_declaraciones\n"); }
	| v_declaracion_cte v_declaraciones { printf("v_declaracion_cte v_declaraciones\n"); }
	| v_declaracion_var v_declaraciones { printf("v_declaracion_var v_declaraciones\n"); }
	|
;

v_declaracion_tipo: T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL { printf("T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL\n"); }
;

v_declaracion_cte: T_CONSTANTE v_lista_d_cte T_FCONST T_COMP_SECUENCIAL { printf("T_CONSTANTE v_lista_d_cte T_FCONST T_COMP_SECUENCIAL\n"); }
;

v_declaracion_var: T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL { printf("T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL\n"); }
;

v_lista_d_tipo: T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo { printf("T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo\n"); }
	|
;

v_d_tipo: T_TUPLA v_lista_campos T_FTUPLA { printf("T_TUPLA v_lista_campos T_FTUPLA\n"); }
	| T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo { printf("T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo\n"); }
	| T_ID { printf("T_ID\n"); }
	| v_expresion_t T_SUBRANGO v_expresion_t { printf("v_expresion_t T_SUBRANGO v_expresion_t\n"); }
	| T_REF v_d_tipo { printf("T_REF v_d_tipo\n"); }
	| T_TIPO_BASE { printf("T_TIPO_BASE\n"); }
;

v_expresion_t: v_expresion { printf("v_expresion\n"); }
;

v_lista_campos: T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos { printf("T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos\n"); }
	|
;

v_lista_d_cte: T_ID T_CREAR_TIPO T_LITERAL T_COMP_SECUENCIAL v_lista_d_cte { printf("T_ID T_CREAR_TIPO T_LITERAL T_COMP_SECUENCIAL v_lista_d_cte\n"); }
	|
;

v_lista_d_var: v_lista_id T_DEF_TIPO T_ID T_COMP_SECUENCIAL v_lista_d_var{ printf("v_lista_id T_DEF_TIPO T_ID T_COMP_SECUENCIAL lista_d_var\n"); }
	| v_lista_id T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_var { printf("v_lista_id T_DEF_TIPO d_tipo T_COMP_SECUENCIAL lista_d_var\n"); }
	|
;

v_lista_id: T_ID T_SEPARADOR v_lista_id { printf("T_ID T_SEPARADOR v_lista_id\n"); }
	| T_ID { printf("T_ID\n"); }
;

v_decl_ent_sal: v_decl_ent { printf("v_decl_ent\n"); }
	| v_decl_ent v_decl_sal { printf("v_decl_ent v_decl_sal\n"); }
	| v_decl_sal { printf("v_decl_sal\n"); }
;

v_decl_ent: T_ENT v_lista_d_var { printf("T_ENT v_lista_d_var\n"); }
;

v_decl_sal: T_SAL v_lista_d_var  { printf("T_SAL v_lista_d_var\n"); }
;

v_expresion: v_exp  {printf("v_exp_a\n");}
           |v_funcion_ll  {printf("v_funcion_ll\n");}
;

v_exp: v_exp T_OP_SUMA v_exp {printf("v_exp_a T_OP_SUMA v_exp_a\n");}
       | v_exp T_OP_RESTA v_exp {printf("v_exp_a T_OP_RESTA v_exp_a\n");}
       | v_exp T_OP_MULTI v_exp {printf("v_exp_a T_OP_MULTI v_exp_a\n");}
       | v_exp T_OP_DIV v_exp {printf("v_exp_a T_OP_DIV v_exp_a\n");}
       | v_exp T_OP_MOD v_exp {printf("v_exp_a T_OP_MOD v_exp_a\n");}
       | v_exp T_OP_DIV_ENT v_exp {printf("v_exp_a T_OP_DIV_ENT v_exp_a\n");}
       | T_PARENTESIS_APERTURA v_exp T_PARENTESIS_CLAUSURA {printf("T_PARENTESIS_APERTURA v_exp_a T_PARENTESIS_CLAUSURA\n");}
       | v_operando {printf("v_operando\n");}
       | T_LITERAL {printf("T_LITERAL\n");}
       | T_OP_RESTA v_exp %prec T_OP_MULTI {printf("T_OP_RESTA v_exp_a\n");}
       | v_exp T_Y v_exp {printf("v_exp_b T_Y v_exp_b\n");}
       | v_exp T_O v_exp {printf("v_exp_b T_O v_exp_b\n");}
       | T_NO v_exp {printf("T_NO v_exp_b\n");}
       | T_VERDADERO {printf("T_VERDADERO\n");}
       | T_FALSO {printf("T_FALSO\n");}
       | v_exp T_OP_REL_MENOR v_exp {printf("v_exp_b T_OP_REL_MENOR v_exp_b\n");}
       | v_exp T_OP_REL_MAYOR v_exp {printf("v_exp_b T_OP_REL_MAYOR v_exp_b\n");}
       | v_exp T_OP_REL_IGUAL v_exp {printf("v_exp_b T_OP_REL_IGUAL v_exp_b\n");}
       | v_exp T_OP_REL_DIF v_exp {printf("v_exp_b T_OP_REL_DIF v_exp_b\n");}
       | v_exp T_OP_REL_MAYOR_IGUAL v_exp {printf("v_exp_b T_OP_REL_MAYOR_IGUAL v_exp_b\n");}
       | v_exp T_OP_REL_MENOR_IGUAL v_exp {printf("v_exp_b T_OP_REL_MENOR_IGUAL v_exp_b\n");}
;

v_operando: T_ID {printf("T_ID\n");}
            | v_operando T_PUNTO v_operando {printf("v_operando T_PUNTO v_operando\n");}
            | v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY {printf("v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY\n");}
            | v_operando T_REF {printf("v_operando T_REF\n");}
;

v_instrucciones: v_instruccion T_COMP_SECUENCIAL v_instrucciones {printf("v_instruccion T_COMP_SECUENCIAL v_instrucciones\n");}
                 | v_instruccion {printf("v_instruccion\n");}
;

v_instruccion: T_CONTINUAR {printf("T_CONTINUAR\n");}
               | v_asignacion {printf("v_asignacion\n");}
               | v_alternativa {printf("v_alternativa\n");}
               | v_iteracion {printf("v_iteracion\n");}
               | v_accion_ll {printf("v_accion_ll\n");}
;

v_asignacion: v_operando T_ASIGNACION v_expresion {printf("v_operando T_ASIGNACION v_expresion\n");}
;

v_alternativa: T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI {printf("T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI\n");}
;

v_lista_opciones: T_SIMBOLO_ELSE v_expresion T_SI v_instrucciones v_lista_opciones {printf("T_SIMBOLO_ELSE v_expresion T_SI v_instrucciones v_lista_opciones\n");}
                  |
;

v_iteracion: v_it_cota_fija | v_it_cota_exp {printf("v_it_cota_fija | v_it_cota_exp\n");}
;

v_it_cota_exp: T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS {printf("T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS\n");}
;

v_it_cota_fija: T_PARA T_ID T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA {printf("T_PARA T_ID T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA\n");}
;

v_accion_d: T_ACCION v_a_cabecera v_bloque T_FACCION { printf("T_ACCION v_a_cabecera bloque T_FACCION\n"); }
;

v_funcion_d: T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION { printf("T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION\n"); }
;

v_a_cabecera: T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL { printf("T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL\n"); }
;

v_f_cabecera: T_ID T_PARENTESIS_APERTURA v_lista_d_var T_PARENTESIS_CLAUSURA T_DEV v_d_tipo T_COMP_SECUENCIAL
;

v_d_par_form: v_d_p_form T_COMP_SECUENCIAL v_d_par_form { printf("v_d_p_form T_COMP_SECUENCIAL v_d_par_form\n"); }
	|
;

v_d_p_form: T_ENT v_lista_id T_DEF_TIPO { printf("T_ENT v_lista_id T_DEF_TIPO\n"); }
	| T_SAL v_lista_id T_DEF_TIPO { printf("T_SAL v_lista_id T_DEF_TIPO\n"); }
	| T_E_S v_lista_id T_DEF_TIPO { printf("T_E_S v_lista_id T_DEF_TIPO\n"); }
;

v_accion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA { printf("T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
;

v_funcion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA { printf("T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
;

v_l_ll: v_expresion T_SEPARADOR v_l_ll { printf("v_expresion T_CT_SEPARADOROMA v_l_ll\n"); }
	| v_expresion { printf("v_expresion\n"); }
;

%%
int main( int argc, char **argv ) {
        ++argv, --argc; 
	yyin = fopen( argv[0], "r" );

	do {
		yyparse();
	} while(!feof(yyin));

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
