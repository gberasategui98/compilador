%{

#include <stdio.h>
#include <stdlib.h>
#include "TS.h"

/*
* DUDA: ¿Todas las zonas de declaración de variables funcionan igual?
* Entiendo que en la entrada y en la salida se puede repetir el nombre de las variables pero 
* en la declaración de variables generales no.
*/

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

TablaSimbolos *TS;


%}
%code requires {
	typedef struct tipo_lista{
    	int type;
	}tipo_lista;
}

%union{
	char char_val;
	int int_val;
	double float_val;
	char* str_val;
	struct tipo_lista st_lista;
}

%token <int_val> T_LITERAL_ENTERO T_LITERAL_BOOLEANO 
%token <float_val> T_LITERAL_REAL
%token <char_val> T_LITERAL_CARACTER
%token <str_val> T_LITERAL_CADENA
%token <int_val> T_TIPO_ENTERO T_TIPO_BOOLEANO T_TIPO_CARACTER T_TIPO_REAL T_TIPO_CADENA
%token <str_val> T_ID

%token T_ALGORITMO T_FALGORITMO T_COMENTARIO T_COMP_SECUENCIAL
%token T_TIPO T_FTIPO T_CONSTANTE T_FCONST T_VAR T_FVAR
%token T_CREAR_TIPO T_TUPLA T_FTUPLA
%token T_TABLA T_INICIO_ARRAY T_SUBRANGO T_FIN_ARRAY T_DE
%token T_REF
%token T_DEF_TIPO T_SEPARADOR
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

%type<st_lista> v_lista_id v_d_tipo v_tipo_base

%left T_PUNTO T_INICIO_ARRAY T_REF
%left T_OP_REL_MENOR T_OP_REL_MAYOR T_OP_REL_IGUAL T_OP_REL_DIF T_OP_REL_MAYOR_IGUAL T_OP_REL_MENOR_IGUAL
%left T_Y T_O
%left T_NO
%left T_OP_SUMA T_OP_RESTA
%left T_OP_MULTI T_OP_DIV T_OP_MOD T_OP_DIV_ENT

%%

v_desc_algoritmo: T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO { printf("v_desc_algoritmo: T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO\n"); }
;

v_cabecera_alg: v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO { printf("v_cabecera_alg: v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO\n"); }
;

v_bloque_alg: v_bloque T_COMENTARIO { printf("v_bloque_alg: v_bloque T_COMENTARIO\n"); }
;

v_decl_globales: v_declaracion_tipo v_decl_globales { printf("v_decl_globales: v_declaracion_tipo v_decl_globales\n"); }
	| v_declaracion_cte v_decl_globales { printf("v_decl_globales: v_declaracion_cte v_decl_globales\n"); }
	|
;

v_decl_a_f: v_accion_d v_decl_a_f { printf("v_decl_a_f: v_accion_d v_decl_a_f\n"); }
	| v_funcion_d v_decl_a_f { printf("v_decl_a_f: v_funcion_d v_decl_a_f\n"); }
	|
;

v_bloque: v_declaraciones v_instrucciones { printf("v_bloque: v_declaraciones v_instrucciones\n"); }
;

v_declaraciones: v_declaracion_tipo v_declaraciones { printf("v_declaraciones: v_declaracion_tipo v_declaraciones\n"); }
	| v_declaracion_cte v_declaraciones { printf("v_declaraciones: v_declaracion_cte v_declaraciones\n"); }
	| v_declaracion_var v_declaraciones { printf("v_declaraciones: v_declaracion_var v_declaraciones\n"); }
	|
;

v_declaracion_tipo: T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL { printf("v_declaracion_tipo: T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL\n"); }
;

v_declaracion_cte: T_CONSTANTE v_lista_d_cte T_FCONST T_COMP_SECUENCIAL { printf("v_declaracion_cte: T_CONSTANTE v_lista_d_cte T_FCONST T_COMP_SECUENCIAL\n"); }
;

v_declaracion_var: T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL { printf("v_declaracion_var: T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL\n"); }
;

v_lista_d_tipo: T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo { printf("v_lista_d_tipo: T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo\n"); }
	|
;


v_d_tipo: T_TUPLA v_lista_campos T_FTUPLA { printf("v_d_tipo: T_TUPLA v_lista_campos T_FTUPLA\n"); }
	| T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo { printf("v_d_tipo: T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo\n"); }
	| T_ID { 
		printf("v_d_tipo: T_ID\n");
		//Falta almacenar el $$ el int correspondiente a este nuevo tipo (para que sea igual que con los tipos base)
		}
	| v_expresion_t T_SUBRANGO v_expresion_t { printf("v_d_tipo: v_expresion_t T_SUBRANGO v_expresion_t\n"); }
	| T_REF v_d_tipo { printf("v_d_tipo: T_REF v_d_tipo\n"); }
	| v_tipo_base {
		printf("v_d_tipo: v_tipo_base\n");
		$$.type = $1.type;
		}
;

v_tipo_base: T_TIPO_BOOLEANO {printf("v_tipo_base: booleano\n"); $$.type = $1;}
			|T_TIPO_CARACTER {printf("v_tipo_base: caracter\n");$$.type = $1;}
			|T_TIPO_ENTERO {printf("v_tipo_base: entero\n");$$.type = $1;}
			|T_TIPO_REAL {printf("v_tipo_base: real\n");$$.type = $1;}
			|T_TIPO_CADENA {printf("v_tipo_base: cadena\n");$$.type = $1;}
;

v_expresion_t: v_expresion { printf("v_expresion_t: v_expresion\n"); }
				| T_LITERAL_CARACTER{ printf("v_expresion_t: T_LITERAL_CARACTER\n"); }
;

v_lista_campos: T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos { printf("v_lista_campos: T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos\n"); }
	|
;

v_lista_d_cte: T_ID T_CREAR_TIPO v_literal T_COMP_SECUENCIAL v_lista_d_cte { printf("v_lista_d_cte: T_ID T_CREAR_TIPO v_literal T_COMP_SECUENCIAL v_lista_d_cte\n"); }
	|
;

v_literal: T_LITERAL_CARACTER {printf("v_literal: T_LITERAL_CARACTER\n");}
		   | v_literal_numerico {printf("v_literal: v_literal_numerico\n");} 
		   | T_LITERAL_BOOLEANO {printf("v_literal: T_LITERAL_BOOLEANO\n");}
		   | T_LITERAL_CADENA {printf("v_literal: T_LITERAL_CADENA\n");}

//cambiada segunda produccion de v_lista_d_vars
v_lista_d_var: v_lista_id T_COMP_SECUENCIAL v_lista_d_var { 
			printf("v_lista_d_var: v_lista_id v_lista_id T_COMP_SECUENCIAL v_lista_d_var\n"); 
		}
	|
;

v_lista_id: T_ID T_SEPARADOR v_lista_id { 
		printf("v_lista_id: T_ID T_SEPARADOR v_lista_id\n");
		insertar_en_TS(TS, $1);
		modificar_tipo_TS(TS, $1, $3.type);
		$$.type = $3.type; 
		}
	| T_ID T_DEF_TIPO v_d_tipo { 
		printf("v_lista_id: T_ID T_DEF_TIPO v_d_tipo \n");
		insertar_en_TS(TS, $1);
		modificar_tipo_TS(TS, $1, $3.type);
		$$.type = $3.type;
		}
;

v_decl_ent_sal: v_decl_ent { printf("v_decl_ent_sal: v_decl_ent\n"); }
	| v_decl_ent v_decl_sal { printf("v_decl_ent_sal: v_decl_ent v_decl_sal\n"); }
	| v_decl_sal { printf("v_decl_ent_sal: v_decl_sal\n"); }
;

v_decl_ent: T_ENT v_lista_d_var { printf("v_decl_ent: T_ENT v_lista_d_var\n"); }
;

v_decl_sal: T_SAL v_lista_d_var  { printf("v_decl_sal: T_SAL v_lista_d_var\n"); }
;

v_expresion: v_exp  {printf("v_expresion: v_exp_a\n");}
           |v_funcion_ll  {printf("v_expresion: v_funcion_ll\n");}
;

v_exp: v_exp T_OP_SUMA v_exp {printf("v_exp: v_exp_a T_OP_SUMA v_exp_a\n");}
       | v_exp T_OP_RESTA v_exp {printf("v_exp: v_exp_a T_OP_RESTA v_exp_a\n");}
       | v_exp T_OP_MULTI v_exp {printf("v_exp: v_exp_a T_OP_MULTI v_exp_a\n");}
       | v_exp T_OP_DIV v_exp {printf("v_exp: v_exp_a T_OP_DIV v_exp_a\n");}
       | v_exp T_OP_MOD v_exp {printf("v_exp: v_exp_a T_OP_MOD v_exp_a\n");}
       | v_exp T_OP_DIV_ENT v_exp {printf("v_exp: v_exp_a T_OP_DIV_ENT v_exp_a\n");}
       | T_PARENTESIS_APERTURA v_exp T_PARENTESIS_CLAUSURA {printf("v_exp: T_PARENTESIS_APERTURA v_exp_a T_PARENTESIS_CLAUSURA\n");}
       | v_operando {printf("v_exp: v_operando\n");}
       | v_literal_numerico {printf("v_exp: v_literal_numerico\n");}
       | T_OP_RESTA v_exp %prec T_OP_MULTI {printf("v_exp: T_OP_RESTA v_exp_a\n");}
	| T_OP_SUMA v_exp %prec T_OP_MULTI {printf("v_exp: T_OP_RESTA v_exp_a\n");}
       | v_exp T_Y v_exp {printf("v_exp: v_exp_b T_Y v_exp_b\n");}
       | v_exp T_O v_exp {printf("v_exp: v_exp_b T_O v_exp_b\n");}
       | T_NO v_exp {printf("v_exp: T_NO v_exp_b\n");}
       | T_VERDADERO {printf("v_exp: T_VERDADERO\n");}
       | T_FALSO {printf("v_exp: T_FALSO\n");}
       | v_exp T_OP_REL_MENOR v_exp {printf("v_exp: v_exp_b T_OP_REL_MENOR v_exp_b\n");}
       | v_exp T_OP_REL_MAYOR v_exp {printf("v_exp: v_exp_b T_OP_REL_MAYOR v_exp_b\n");}
       | v_exp T_OP_REL_IGUAL v_exp {printf("v_exp: v_exp_b T_OP_REL_IGUAL v_exp_b\n");}
       | v_exp T_OP_REL_DIF v_exp {printf("v_exp: v_exp_b T_OP_REL_DIF v_exp_b\n");}
       | v_exp T_OP_REL_MAYOR_IGUAL v_exp {printf("v_exp: v_exp_b T_OP_REL_MAYOR_IGUAL v_exp_b\n");}
       | v_exp T_OP_REL_MENOR_IGUAL v_exp {printf("v_exp: v_exp_b T_OP_REL_MENOR_IGUAL v_exp_b\n");}
;

v_literal_numerico: T_LITERAL_ENTERO {}
					| T_LITERAL_REAL {}

v_operando: T_ID {printf("v_operando: T_ID\n");}
            | v_operando T_PUNTO v_operando {printf("v_operando: v_operando T_PUNTO v_operando\n");}
            | v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY {printf("v_operando: v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY\n");}
            | v_operando T_REF {printf("v_operando: v_operando T_REF\n");}
;

v_instrucciones: v_instruccion T_COMP_SECUENCIAL v_instrucciones {printf("v_instrucciones: v_instruccion T_COMP_SECUENCIAL v_instrucciones\n");}
                 | v_instruccion {printf("v_instrucciones: v_instruccion\n");}
;

v_instruccion: T_CONTINUAR {printf("v_instruccion: T_CONTINUAR\n");}
               | v_asignacion {printf("v_instruccion: v_asignacion\n");}
               | v_alternativa {printf("v_instruccion: v_alternativa\n");}
               | v_iteracion {printf("v_instruccion: v_iteracion\n");}
               | v_accion_ll {printf("v_instruccion: v_accion_ll\n");}
;

v_asignacion: v_operando T_ASIGNACION v_expresion {printf("v_asignacion: v_operando T_ASIGNACION v_expresion\n");}
;

v_alternativa: T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI {printf("v_alternativa: T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI\n");}
;


v_lista_opciones: T_SIMBOLO_ELSE v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones {printf("v_lista_opciones: T_SIMBOLO_ELSE v_expresion T_SI v_instrucciones v_lista_opciones\n");}
                  |
;

v_iteracion: v_it_cota_fija | v_it_cota_exp {printf("v_iteracion: v_it_cota_fija | v_it_cota_exp\n");}
;

v_it_cota_exp: T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS {printf("v_it_cota_exp: T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS\n");}
;

v_it_cota_fija: T_PARA T_ID T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA {printf("v_it_cota_fija: T_PARA T_ID T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA\n");}
;

v_accion_d: T_ACCION v_a_cabecera v_bloque T_FACCION { printf("v_accion_d: T_ACCION v_a_cabecera bloque T_FACCION\n"); }
;

v_funcion_d: T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION { printf("v_funcion_d: T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION\n"); }
;

v_a_cabecera: T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL { printf("v_a_cabecera: T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL\n"); }
;

v_f_cabecera: T_ID T_PARENTESIS_APERTURA v_lista_d_var T_PARENTESIS_CLAUSURA T_DEV v_d_tipo T_COMP_SECUENCIAL { printf("v_f_cabecera: T_ID T_PARENTESIS_APERTURA v_lista_d_var T_PARENTESIS_CLAUSURA T_DEV v_d_tipo T_COMP_SECUENCIAL"); }
;

v_d_par_form: v_d_p_form T_COMP_SECUENCIAL v_d_par_form { printf("v_d_par_form: v_d_p_form T_COMP_SECUENCIAL v_d_par_form\n"); }
	|
;

v_d_p_form: T_ENT v_lista_id T_DEF_TIPO { printf("v_d_p_form: T_ENT v_lista_id T_DEF_TIPO\n"); }
	| T_SAL v_lista_id T_DEF_TIPO { printf("v_d_p_form: T_SAL v_lista_id T_DEF_TIPO\n"); }
	| T_E_S v_lista_id T_DEF_TIPO { printf("v_d_p_form: T_E_S v_lista_id T_DEF_TIPO\n"); }
;

v_accion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA { printf("v_accion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
;

v_funcion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA { printf("v_funcion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
;

v_l_ll: v_expresion T_SEPARADOR v_l_ll { printf("v_l_ll: v_expresion T_CT_SEPARADOROMA v_l_ll\n"); }
	| v_expresion { printf("v_l_ll: v_expresion\n"); }
;

%%
int main( int argc, char **argv ) {
	/*
	#ifdef YYDEBUG
	yydebug = 1;
	#endif
	*/

	/*Ejemplo de TS*/

	TS = crear_TS();
	/*
	insertar(TS, "Primer simbolo", VARIABLE);
	insertar(TS, "Segundo simbolo", VARIABLE);
	insertar(TS, "Tercer simbolo", FUNCION);
	insertar(TS, "Cuarto simbolo", FUNCION);

	printf("%s %d\n", TS->primer_simbolo->nombre, TS->primer_simbolo->tipo_simbolo);
	printf("%s %d\n", TS->primer_simbolo->next->nombre, TS->primer_simbolo->next->tipo_simbolo);
	printf("%s %d\n", TS->primer_simbolo->next->next->nombre, TS->primer_simbolo->next->next->tipo_simbolo);
	printf("%s %d\n", TS->primer_simbolo->next->next->next->nombre, TS->primer_simbolo->next->next->next->tipo_simbolo);

	Simbolo* s = buscar(*TS, "Tercer simbolo");
	printf("%s %d\n", TS->primer_simbolo->next->nombre, TS->primer_simbolo->next->tipo_simbolo);
	s->tipo_simbolo = 35;
	printf("%s %d\n", TS->primer_simbolo->next->nombre, TS->primer_simbolo->next->tipo_simbolo);*/

	int flag;
	yyin = fopen( argv[1], "r" );
	flag = yyparse();

	buscar(TS, "asdf");
	return flag;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
