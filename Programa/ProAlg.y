%{
/*
* Autores: Ioar Crespo y Guilllermo Berasategui
*/

#include <stdio.h>
#include <stdlib.h>
#include "TS.h"
#include "TablaCuadruplas.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

TablaSimbolos *TS;
TablaCuadruplas *TC;
int ent_sal = 2; //Tipo de variable leyendo= 0:Variables de entrada, 1:Variable de salida y 2:Variable de ejecución

void generar_instrucciones_output(TablaSimbolos *TS, TablaCuadruplas *TC){
	Simbolo *recorrer = TS->primer_simbolo;
	while(recorrer!=NULL){
		if((recorrer->tipo_simbolo==VARIABLE)&&(recorrer->i_o_variable==1)){
			gen(TC, TC_OUTPUT, TC_NULO, TC_NULO, recorrer->id);
		}
		recorrer = recorrer->next;
	}
	return;
}

%}

%union{
	char char_val;
	int int_val;
	double float_val;
	char* str_val;
	struct tipo_exp exp;
	struct M m;
	struct tipo_sentencia sentencia;
	struct tipo_exp_mientras exp_mientras;
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

%type<int_val> v_lista_id v_d_tipo v_tipo_base
%type<exp> v_exp v_literal_numerico v_expresion 
%type<exp_mientras> v_it_cota_fija_exp
%type<str_val> v_operando
%type<m> M
%type <sentencia> v_instrucciones v_instruccion N v_it_cota_exp v_alternativa v_opciones v_it_cota_fija

%left T_PUNTO T_INICIO_ARRAY T_REF
%left T_Y T_O
%left T_OP_REL_MENOR T_OP_REL_MAYOR T_OP_REL_IGUAL T_OP_REL_DIF T_OP_REL_MAYOR_IGUAL T_OP_REL_MENOR_IGUAL
%left T_NO
%left T_OP_SUMA T_OP_RESTA
%left T_OP_MULTI T_OP_DIV T_OP_MOD T_OP_DIV_ENT

%%

v_desc_algoritmo: T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO {
}
;

v_cabecera_alg: v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO {}
;

v_bloque_alg: v_bloque T_COMENTARIO {
	generar_instrucciones_output(TS, TC);
	}
;

v_decl_globales: v_declaracion_tipo v_decl_globales {}
	| v_declaracion_cte v_decl_globales {}
	|
;

v_decl_a_f: v_accion_d v_decl_a_f {}
	| v_funcion_d v_decl_a_f {}
	|
;

v_bloque: v_declaraciones v_instrucciones {}
;

v_declaraciones: v_declaracion_tipo v_declaraciones {}
	| v_declaracion_cte v_declaraciones {}
	| v_declaracion_var v_declaraciones {}
	|
;

v_declaracion_tipo: T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL {}
;

v_declaracion_cte: T_CONSTANTE v_lista_d_cte T_FCONST T_COMP_SECUENCIAL {}
;

v_declaracion_var: T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL {}
;

v_lista_d_tipo: T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo {}
	|
;


v_d_tipo: T_TUPLA v_lista_campos T_FTUPLA {}
	| T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo {}
	| T_ID {}
	| v_expresion_t T_SUBRANGO v_expresion_t {}
	| T_REF v_d_tipo {}
	| v_tipo_base {
		$$ = $1;
		}
;

v_tipo_base: T_TIPO_BOOLEANO {}
			|T_TIPO_CARACTER {}
			|T_TIPO_ENTERO {}
			|T_TIPO_REAL {}
			|T_TIPO_CADENA {}
;

v_expresion_t: v_expresion {}
				| T_LITERAL_CARACTER{}
;

v_lista_campos: T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos {}
	|
;

v_lista_d_cte: T_ID T_OP_REL_IGUAL v_literal T_COMP_SECUENCIAL v_lista_d_cte {}
	|
;

v_literal: T_LITERAL_CARACTER {}
		   | v_literal_numerico {} 
		   | T_LITERAL_BOOLEANO {}
		   | T_LITERAL_CADENA {}


v_lista_d_var: v_lista_id T_COMP_SECUENCIAL v_lista_d_var {}
	|
;

v_lista_id: T_ID T_SEPARADOR v_lista_id {
		int id_simbolo = insertar_variable_en_TS(TS, $1, ent_sal);
		if (id_simbolo==-1){
			char* mensaje = (char*) malloc(sizeof(char));
			sprintf(mensaje, "Error: Variable %s declarada anteriormente", $1);
			yyerror(mensaje);
		}
		if(!ent_sal) gen(TC, TC_INPUT, TC_NULO, TC_NULO, id_simbolo);
		modificar_tipo_TS(TS, id_simbolo, $3);
		$$ = $3; 
		}
	| T_ID T_DEF_TIPO v_d_tipo {
		int id_simbolo = insertar_variable_en_TS(TS, $1, ent_sal);
		if (id_simbolo==-1){
			char* mensaje = (char*) malloc(sizeof(char));
			sprintf(mensaje, "Error: Variable %s declarada anteriormente", $1);
			yyerror(mensaje);
		}
		modificar_tipo_TS(TS, id_simbolo, $3);
		if(ent_sal==0) gen(TC, TC_INPUT, TC_NULO, TC_NULO, id_simbolo);
		$$ = $3;
		}
;

v_decl_ent_sal: {ent_sal=0;} v_decl_ent {ent_sal=1;} v_decl_sal {
		ent_sal=2;
		}
	| {ent_sal=0;} v_decl_sal {
		 ent_sal=2;
	}
;

v_decl_ent: T_ENT v_lista_d_var {}
;

v_decl_sal: T_SAL v_lista_d_var  {}
			|
;

v_expresion: v_exp  {
		$$=$1;
		}
        |v_funcion_ll  {}
;

v_exp: v_exp T_OP_SUMA v_exp {
			int T_id = newtemp(TS);
			$$.place = T_id;
			if (($1.type == ENTERO) && ($3.type == ENTERO)){
			   modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_SUMA_ENT, $1.place, $3.place, T_id);
				$$.type = ENTERO;
		   }else if(($1.type == ENTERO) && ($3.type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, $1.place, TC_NULO, T_id);
				gen(TC, TC_OP_SUMA_REAL, T_id, $3.place, T_id);
				$$.type = REAL;
		   }else if(($1.type == REAL) && ($3.type == ENTERO)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, $3.place, TC_NULO, T_id);
				gen(TC, TC_OP_SUMA_REAL, $1.place, T_id, T_id);
				$$.type = REAL;
		   }else if(($1.type == REAL) && ($3.type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_OP_SUMA_REAL, $1.place, $3.place, T_id);
				$$.type = REAL;
		   }
		   else{
			   yyerror("Error: Los operadores de una suma deben ser enteros o reales");
		   }
		}
       | v_exp T_OP_RESTA v_exp {
			int T_id = newtemp(TS);
		   $$.place = T_id;
		   if (($1.type == ENTERO) && ($3.type == ENTERO)){
			   modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_RESTA_ENT, $1.place, $3.place, T_id);
				$$.type = ENTERO;
		   }else if(($1.type == ENTERO) && ($3.type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, $1.place, TC_NULO, T_id);
				gen(TC, TC_OP_RESTA_REAL, T_id, $3.place, T_id);
				$$.type = REAL;
		   }else if(($1.type == REAL) && ($3.type == ENTERO)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, $3.place, TC_NULO, T_id);
				gen(TC, TC_OP_RESTA_REAL, $1.place, T_id, T_id);
				$$.type = REAL;
		   }else if(($1.type == REAL) && ($3.type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_OP_RESTA_REAL, $1.place, $3.place, T_id);
				$$.type = REAL;
		   }
		   else{
			   yyerror("Error: Los operadores de una resta deben ser enteros o reales");
		   }
			}
       | v_exp T_OP_MULTI v_exp {
		   int T_id = newtemp(TS);
		   $$.place = T_id;
		   if (($1.type == ENTERO) && ($3.type == ENTERO)){
			   modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_MULTI_ENT, $1.place, $3.place, T_id);
				$$.type = ENTERO;
		   }else if(($1.type == ENTERO) && ($3.type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, $1.place, TC_NULO, T_id);
				gen(TC, TC_OP_MULTI_REAL, T_id, $3.place, T_id);
				$$.type = REAL;
		   }else if(($1.type == REAL) && ($3.type == ENTERO)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, $3.place, TC_NULO, T_id);
				gen(TC, TC_OP_MULTI_REAL, $1.place, T_id, T_id);
				$$.type = REAL;
		   }else if(($1.type == REAL) && ($3.type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_OP_MULTI_REAL, $1.place, $3.place, T_id);
				$$.type = REAL;
		   }
		   else{
			   yyerror("Error: Los operadores de una multiplicación deben ser enteros o reales");
		   }
		  }
       | v_exp T_OP_DIV v_exp {
            int T_id = newtemp(TS);
			$$.place = T_id;
			if (($1.type == ENTERO) && ($3.type == ENTERO)){
			   	modificar_tipo_TS(TS, T_id, REAL);
			   	gen(TC, TC_INTTOREAL, $1.place, TC_NULO, T_id);
			   	gen(TC, TC_INTTOREAL, $3.place, TC_NULO, T_id);
			  	gen(TC, TC_OP_DIV_ENT, $1.place, $3.place, T_id);
				$$.type = REAL;
		   }else if(($1.type == ENTERO) && ($3.type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, $1.place, TC_NULO, T_id);
				gen(TC, TC_OP_DIV_REAL, T_id, $3.place, T_id);
				$$.type = REAL;
		   }else if(($1.type == REAL) && ($3.type == ENTERO)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, $3.place, TC_NULO, T_id);
				gen(TC, TC_OP_DIV_REAL, $1.place, T_id, T_id);
				$$.type = REAL;
		   }else if(($1.type == REAL) && ($3.type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_OP_DIV_REAL, $1.place, $3.place, T_id);
				$$.type = REAL;
		   }
		   else{
			   yyerror("Error: Los operadores de una división deben ser enteros o reales");
		   }
        }
       | v_exp T_OP_MOD v_exp {
            int T_id = newtemp(TS);
			$$.place = T_id;
			if (($1.type == ENTERO) && ($3.type == ENTERO)){
			   	modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_MOD, $1.place, $3.place, T_id);
				$$.type = ENTERO;
		   }else{
                yyerror("Error: el modulo solo esta definido para enteros");
		   }
        }
       | v_exp T_OP_DIV_ENT v_exp {
            int T_id = newtemp(TS);
			$$.place = T_id;
			if (($1.type == ENTERO) && ($3.type == ENTERO)){
			   	modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_DIVISION_ENTERA, $1.place, $3.place, T_id);
				$$.type = ENTERO; 
		   }else{
                yyerror("Error: La división de enteros solo esta definido para enteros");
		   }
        }
       | T_PARENTESIS_APERTURA v_exp T_PARENTESIS_CLAUSURA {
		   if($2.type==ENTERO || $2.type==REAL){
				$$.place = $2.place;
				$$.type = $2.type;
		   }
		   else{
			   $$.true = $2.true;
			   $$.false = $2.false;
		   }
		   }
       | v_operando {
		   Simbolo* sim = buscar_nombre(TS, $1);
		   if (sim==NULL){
			   char* mensaje = (char*) malloc(sizeof(char));
				sprintf(mensaje, "Error: Variable %s no declarada", $1);
				yyerror(mensaje);
		   }
		   //Caso exp_artimetica
		   $$.place = sim->id;
		   $$.type = consulta_tipo(TS, $1);

		   //Caso exp_booleana
		   $$.true= makelist(TC->nextquad);
		   $$.false= makelist((TC->nextquad)+1);
		   }
       | v_literal_numerico {
			$$.place = $1.place;
			$$.type = $1.type;
        }
       | T_OP_RESTA v_exp %prec T_OP_MULTI {
		   int T_id = newtemp(TS);
		   modificar_tipo_TS(TS, T_id, $2.type);
		   $$.place = T_id;
		   if ($2.type == ENTERO){
			   gen(TC, TC_OP_RESTA_UNI_ENT, $2.place, TC_NULO, $$.place);
		   }else if($2.type == REAL){
			   gen(TC, TC_OP_RESTA_UNI_REAL, $2.place, TC_NULO, $$.place);
		   }
		}
	   | T_OP_SUMA v_exp %prec T_OP_MULTI {
            int T_id = newtemp(TS);
            modificar_tipo_TS(TS, T_id, $2.type);
            $$.place = T_id;
            if ($2.type == ENTERO){
                gen(TC, TC_OP_SUMA_UNI_ENT, $2.place, TC_NULO, $$.place);
            }else if($2.type == REAL){
                gen(TC, TC_OP_SUMA_UNI_REAL, $2.place, TC_NULO, $$.place);
            }
        }
       
       | T_NO v_exp {
			$$.true = $2.false;
			$$.false = $2.true;
			$$.type = BOOLEANO;
        }
       | T_VERDADERO {}
       | T_FALSO {}
       | v_exp T_OP_REL_MENOR v_exp {
		   $$.true= makelist(TC->nextquad);
		   $$.false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_MENOR, $1.place, $3.place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   $$.type = BOOLEANO;
		   }
       | v_exp T_OP_REL_MAYOR v_exp {
		   $$.true= makelist(TC->nextquad);
		   $$.false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_MAYOR, $1.place, $3.place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   $$.type = BOOLEANO;
		   }
       | v_exp T_OP_REL_IGUAL v_exp {
		   $$.true= makelist(TC->nextquad);
		   $$.false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_IGUAL, $1.place, $3.place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   $$.type = BOOLEANO;
		   }
       | v_exp T_OP_REL_DIF v_exp {
		   $$.true= makelist(TC->nextquad);
		   $$.false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_DIF, $1.place, $3.place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   $$.type = BOOLEANO;
		   }
       | v_exp T_OP_REL_MAYOR_IGUAL v_exp {
		   $$.true= makelist(TC->nextquad);
		   $$.false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_MAYOR_IGUAL, $1.place, $3.place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   $$.type = BOOLEANO;
		   }
       | v_exp T_OP_REL_MENOR_IGUAL v_exp {
		   $$.true= makelist(TC->nextquad);
		   $$.false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_MENOR_IGUAL, $1.place, $3.place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   $$.type = BOOLEANO;}
		| v_exp T_Y M v_exp {
			backpatch(TC, $1.true, $3.quad);
			$$.false= merge($1.false, $4.false);
			$$.true= $4.true;
			$$.type = BOOLEANO;
        }
       | v_exp T_O M v_exp {
			backpatch(TC, $1.false, $3.quad);
			$$.true = merge($1.true, $4.true);
			$$.false = $4.false;
			$$.type = BOOLEANO;
        }
;

M: {$$.quad = TC->nextquad;}
;

v_literal_numerico: T_LITERAL_ENTERO {
						int T_id = newtemp(TS);
						modificar_tipo_TS(TS, T_id, ENTERO);
						gen(TC, TC_ASIG_LITERAL_ENTERO, $1, TC_NULO, T_id);
						$$.place = T_id;
						$$.type = ENTERO;
                    }
					| T_LITERAL_REAL {
						int T_id = newtemp(TS);
						modificar_tipo_TS(TS, T_id, REAL);
						gen(TC, TC_ASIG_LITERAL_REAL, $1, TC_NULO, T_id);
						$$.place = T_id;
						$$.type = REAL;
					}
;

v_operando: T_ID {
				$$ = $1;
				}
            | v_operando T_PUNTO v_operando {}
            | v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY {}
            | v_operando T_REF {}
;

v_instrucciones: v_instruccion T_COMP_SECUENCIAL M v_instrucciones {
			if(!empty($1)){
				backpatch(TC, $1.next, $3.quad);
			}
			$$.next = $4.next;
			}
        	| v_instruccion {
			$$.next = $1.next;
			if(!empty($1)){
				backpatch(TC, $1.next, TC->nextquad);
			}
			}
;

v_instruccion: T_CONTINUAR {}
               | v_asignacion {}
               | v_alternativa {$$ = $1;}
               | v_iteracion {}
               | v_accion_ll {}
;

v_asignacion: v_operando T_ASIGNACION v_expresion {
	Simbolo *sim = buscar_nombre(TS, $1);
	if (sim==NULL){
		char* mensaje = (char*) malloc(sizeof(char));
		sprintf(mensaje, "Error: Variable %s no declarada", $1);
		yyerror(mensaje);
	}
	if ($3.type==BOOLEANO){
		yyerror("Error: No estan permitidas las asignaciones booleanas");
	}
	if (consulta_tipo(TS, $1)==$3.type){
		gen(TC, TC_ASIGNACION, $3.place, TC_NULO, sim->id);
	}
	else{
		if ((consulta_tipo(TS, $1)==REAL) && ($3.type==ENTERO)){
			gen(TC, TC_INTTOREAL, $3.place, TC_NULO, sim->id);
		}
		else{
			if ((consulta_tipo(TS, $1)==ENTERO) && ($3.type==REAL)){
				yyerror("Error: No se puede asignar un real a un entero");
			}
		}
	}
	}
;

v_alternativa: v_opciones v_instrucciones M T_FSI{
		$$.next = merge($1.next, $2.next);
		backpatch(TC, $1.sig, $3.quad);
	}
;

v_opciones:  T_SI v_expresion T_SIMBOLO_BLOQUE_IF M{
		$$.sig = $2.false;
		$$.next = makelist(-1);
		backpatch(TC, $2.true, $4.quad);
	}
	|  v_opciones v_instrucciones N T_SIMBOLO_ELSE M v_expresion T_SIMBOLO_BLOQUE_IF M{
		if (empty($2)){
			if(empty($1)){
				$$.next = $3.next;
			}
			else{
				$$.next = merge($1.next, $3.next);
			}
		}
		else{
			lista l1 = merge($3.next, $2.next);
			$$.next = merge($1.next, l1);
		}
		backpatch(TC, $1.sig, $5.quad);
		backpatch(TC, $6.true, $8.quad);
		$$.sig = $6.false;
	}
;

N: {
	$$.next=makelist(TC->nextquad);
	gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
	}
;

v_iteracion: v_it_cota_fija | v_it_cota_exp {}
;

v_it_cota_exp: T_MIENTRAS M v_expresion T_HACER M v_instrucciones T_FMIENTRAS {
	backpatch(TC, $3.true, $5.quad);
	if(!empty($6)){
		backpatch(TC, $6.next, $2.quad);
		gen(TC, TC_GOTO, TC_NULO, TC_NULO, $2.quad);
	}
	else{
		gen(TC, TC_GOTO, TC_NULO, TC_NULO, $2.quad);
	}
	$$.next = $3.false;
	}
;

v_it_cota_fija: T_PARA v_it_cota_fija_exp T_HACER M v_instrucciones T_FPARA {
	backpatch(TC, $2.true, $4.quad);
	if(!empty($5)){
		backpatch(TC, $5.next, TC->nextquad);
	}
	gen(TC, TC_OP_SUMA_ENT, $2.id_iterado, $2.id_sumador, $2.id_iterado);
	gen(TC, TC_GOTO, TC_NULO, TC_NULO, $4.quad- 2);
	$$.next = $2.false;
	}
;

v_it_cota_fija_exp: T_ID T_ASIGNACION v_expresion T_HASTA v_expresion{
	Simbolo *sim = buscar_nombre(TS, $1);
	if (sim==NULL){
		char* mensaje = (char*) malloc(sizeof(char));
		sprintf(mensaje, "Error: Variable %s no declarada", $1);
		yyerror(mensaje);
	}
	if(consulta_tipo(TS, $1)!=ENTERO || $5.type!=ENTERO){
		yyerror("Error: las expresiones del la sentencia 'mientras' tienen que ser enteros");
	}
	int id_iterador = newtemp(TS);
	gen(TC, TC_ASIG_LITERAL_ENTERO, 1, TC_NULO, id_iterador);
	$$.id_sumador = id_iterador;
	$$.id_iterado = sim->id;
	gen(TC, TC_ASIGNACION, $3.place, TC_NULO, sim->id);
	$$.true= makelist(TC->nextquad);
	$$.false= makelist((TC->nextquad)+1);
	gen(TC, TC_GOTO_OP_REL_MENOR_IGUAL, sim->id, $5.place, TC_NULO);
	gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
	}
;

v_accion_d: T_ACCION v_a_cabecera v_bloque T_FACCION {}
;

v_funcion_d: T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION {}
;

v_a_cabecera: T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL {}
;

v_f_cabecera: T_ID T_PARENTESIS_APERTURA v_lista_d_var T_PARENTESIS_CLAUSURA T_DEV v_d_tipo T_COMP_SECUENCIAL {}
;

v_d_par_form: v_d_p_form T_COMP_SECUENCIAL v_d_par_form {}
	|
;

v_d_p_form: T_ENT v_lista_id T_DEF_TIPO {}
	| T_SAL v_lista_id T_DEF_TIPO {}
	| T_E_S v_lista_id T_DEF_TIPO {}
;

v_accion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA {}
;

v_funcion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA {}
;

v_l_ll: v_expresion T_SEPARADOR v_l_ll {}
	| v_expresion {}
;

%%
int main( int argc, char **argv ) {

	TS = crear_TS(); // Crear tabla de simbolos
	TC = crear_TC(); // Crear tabla de cuadruplas
	
	int flag;
	if(yyin = fopen( argv[1], "r" )){
		flag = yyparse();
	
		imprimir_ts(TS);
		imprimir_tc();

		generarCodigo(TC, TS);
		
		return flag;
	}
	else{
		printf("No existe el archivo %s\n", argv[1]);
		return 0;
	}
	
}

void yyerror(const char* s) {
	fprintf(stderr, "%s\n", s);
	exit(1);
}