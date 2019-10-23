%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);
%}

%union {
	int ival;
	float fval;
}

%token v_cabecera_alg, v_bloque_alg, v_decl_globales, v_decl_a_f, v_decl_ent_sal
%token v_bloque, v_declaracion_tipo, v_declaracion_const, v_accion_d
%token v_declaraciones, v_instrucciones, v_declaracion_var
%token v_funcion_d, v_lista_d_tipo
%token<ival> T_ENTERO
%token<fval> T_FLOAT


%%

v_desc_algoritmo: T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO { printf("T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO\n"); }
;

v_cabecera_alg: v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO { printf("v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO\n"); }
;

v_bloque_alg: v_bloque T_COMENTARIO { printf("v_bloque T_COMENTARIO\n"); }
;

v_decl_globales: v_declaracion_tipo v_decl_globales { printf("v_declaracion_tipo v_decl_globales\n"); }
	| v_declaracion_const v_decl_globales { printf("v_declaracion_const v_decl_globales\n"); }
	|
;

v_decl_a_f: v_accion_d v_decl_a_f { printf("v_accion_d v_decl_a_f\n"); }
	| v_funcion_d v_decl_a_f { printf("v_funcion_d v_decl_a_f\n"); }
	|
;

v_bloque: v_declaraciones v_instrucciones { printf("v_declaraciones v_instrucciones\n"); }
;

v_declaraciones: v_declaracion_tipo v_declaraciones { printf("v_declaracion_tipo v_declaraciones\n"); }
	| v_declaracion_const v_declaraciones { printf("v_declaracion_const v_declaraciones\n"); }
	| v_declaracion_var v_declaraciones { printf("v_declaracion_var v_declaraciones\n"); }
	|
;

v_declaracion_tipo: T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL { printf("T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL\n"); }
;

v_declaracion_cte: T_CONST v_lista_d_cte T_FCONST T_COMP_SECUENCIAL { printf("T_CONST v_lista_d_cte T_FCONST T_COMP_SECUENCIAL\n"); }
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
	| T_LITERAL_CARACTER { printf("T_LITERAL_CARACTER\n"); }
;

v_lista_campos: T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos { printf("T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos\n"); }
	|
;

v_lista_d_cte: T_ID T_CREAR_TIPO T_LITERAL T_COMP_SECUENCIAL v_lista_d_cte { printf("T_ID T_CREAR_TIPO T_LITERAL T_COMP_SECUENCIAL v_lista_d_cte\n"); }
	|
;

v_lista_d_var: v_lista_id T_CREAR_TIPO T_ID T_COMP_SECUENCIAL lista_d_var { printf("v_lista_id T_CREAR_TIPO T_ID T_COMP_SECUENCIAL lista_d_var\n"); }
	| v_lista_id T_CREAR_TIPO d_tipo T_COMP_SECUENCIAL lista_d_var { printf("v_lista_id T_CREAR_TIPO d_tipo T_COMP_SECUENCIAL lista_d_var\n"); }
	|
;

v_lista_id: T_ID T_COMA v_lista_id { printf("T_ID T_COMA v_lista_id\n"); }
	| T_ID { printf("T_ID\n"); }
;

v_decl_ent_sal: v_decl_ent { printf("v_decl_ent\n"); }
	| v_delc_ent v_decl_salida { printf("v_delc_ent v_decl_salida\n"); }
	| v_decl_salida { printf("v_decl_salida\n"); }
;

v_decl_ent: T_ENT v_lista_d_var { printf("T_ENT v_lista_d_var\n"); }
;

v_decl_sal: T_SAL v_lista_d_var  { printf("T_SAL v_lista_d_var\n"); }
;

v_expresion: v_exp_a  {printf("v_exp_a\n")}
           |v_exp_b  {printf("v_exp_b\n")}
           |v_funcion_ll  {printf("v_funcion_ll\n")}
;

v_exp_a: v_exp_a T_OP_SUMA v_exp_a {printf("v_exp_a T_OP_SUMA v_exp_a\n")}
       |v_exp_a T_OP_RESTA v_exp_a {printf("v_exp_a T_OP_RESTA v_exp_a\n")}
       |v_exp_a T_OP_MULTI v_exp_a {printf("v_exp_a T_OP_MULTI v_exp_a\n")}
       |v_exp_a T_OP_DIV v_exp_a {printf("v_exp_a T_OP_DIV v_exp_a\n")}
       |v_exp_a T_OP_MOD v_exp_a {printf("v_exp_a T_OP_MOD v_exp_a\n")}
;

v_exp_a: v_exp_a T_OP_DIV_ENT v_exp_a {printf("v_exp_a T_OP_DIV_ENT v_exp_a\n")}
         | T_PARENTESIS_APERTURA v_exp_a T_PARENTESIS_CLAUSURA {printf("T_PARENTESIS_APERTURA v_exp_a T_PARENTESIS_CLAUSURA\n")}
         | v_operando {printf("v_operando\n")}
         | T_LITERAL_NUMERICO {printf("T_LITERAL_NUMERICO\n")}
         | T_OP_RESTA v_exp_a {printf("T_OP_RESTA v_exp_a\n")}
;

v_exp_b: v_exp_b T_Y v_exp_b {printf("v_exp_b T_Y v_exp_b\n")}
        | v_exp_b T_O v_exp_b {printf("v_exp_b T_O v_exp_b\n")}
        | T_NO v_exp_b {printf("T_NO v_exp_b\n")}
        | v_operando {printf("v_operando\n")}
        | T_VERDADERO {printf("T_VERDADERO\n")}
        | T_FALSO {printf("T_FALSO\n")}
;

v_exp_b: v_exp_b T_OP_REL_MENOR v_exp_b {printf("v_exp_b T_OP_REL_MENOR v_exp_b\n")}
        | v_exp_b T_OP_REL_MAYOR v_exp_b {printf("v_exp_b T_OP_REL_MAYOR v_exp_b\n")}
        | v_exp_b T_OP_REL_IGUAL v_exp_b {printf("v_exp_b T_OP_REL_IGUAL v_exp_b\n")}
        | v_exp_b T_OP_REL_DIF v_exp_b {printf("v_exp_b T_OP_REL_DIF v_exp_b\n")}
        | v_exp_b T_OP_REL_MAYOR_IGUAL v_exp_b {printf("v_exp_b T_OP_REL_MAYOR_IGUAL v_exp_b\n")}
        | v_exp_b T_OP_REL_MENOR_IGUAL v_exp_b {printf("v_exp_b T_OP_REL_MENOR_IGUAL v_exp_b\n")}
        | T_PARENTESIS_APERTURA v_exp_b T_PARENTESIS_CLAUSURA {printf("T_PARENTESIS_APERTURA v_exp_b T_PARENTESIS_CLAUSURA\n")}
;

v_operando: T_IDENTIFICADOR {printf("T_IDENTIFICADOR\n")}
            | v_operando T_PUNTO v_operando {printf("v_operando T_PUNTO v_operando\n")}
            | v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY {printf("v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY\n")}
            | v_operando T_REF {printf("v_operando T_REF\n")}
;

v_instrucciones: v_instruccion T_COMP_SECUENCIAL v_instrucciones {printf("v_instruccion T_COMP_SECUENCIAL v_instrucciones\n")}
                 | v_instruccion {printf("v_instruccion\n")}
;

v_instruccion: T_CONTINUAR {printf("T_CONTINUAR\n")}
               | v_asignacion {printf("v_asignacion\n")}
               | v_alternativa {printf("v_alternativa\n")}
               | v_iteracion {printf("v_iteracion\n")}
               | v_accion_ll {printf("v_accion_ll\n")}
;

v_asignacion: v_operando T_ASIGNACION v_expresion {printf("v_operando T_ASIGNACION v_expresion\n")}
;

v_alternativa: T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI {printf("T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI\n")}
;

v_lista_opciones: T_SIMBOLO_ELSE v_expresion T_SI v_instrucciones v_lista_opciones {printf("T_SIMBOLO_ELSE v_expresion T_SI v_instrucciones v_lista_opciones\n")}
                  |
;

v_iteracion: v_it_cota_fija | v_it_cota_exp {printf("v_it_cota_fija | v_it_cota_exp\n")}
;

v_it_cota_exp: T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS {printf("T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS\n")}
;

v_it_cota_fija: T_PARA T_IDENTIFICADOR T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA {printf("T_PARA T_IDENTIFICADOR T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA\n")}
;

v_accion_d: T_ACCION v_a_cabecera bloque T_FACCION { printf("T_ACCION v_a_cabecera bloque T_FACCION\n"); }
;

v_funcion_d: T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION { printf("T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION\n"); }
;

v_a_cabecera: T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL { printf("T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL\n"); }
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

v_l_ll: v_expresion T_COMA v_l_ll { printf("v_expresion T_COMA v_l_ll\n"); }
	| v_expresion { printf("v_expresion\n"); }
;