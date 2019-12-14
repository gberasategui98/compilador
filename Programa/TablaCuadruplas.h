#ifndef BC_TC_H
#define BC_TC_H

/*
* Autores: Ioar Crespo y Guilllermo Berasategui
*/

#include "TS.h"
#include <float.h>

#define TC_NULO 0
#define TC_GOTO 1 //
#define TC_GOTO_OP_REL_IGUAL 2 //
#define TC_GOTO_OP_REL_MENOR 3 //
#define TC_GOTO_OP_REL_MENOR_IGUAL 4 //
#define TC_GOTO_OP_REL_MAYOR 5 //
#define TC_GOTO_OP_REL_MAYOR_IGUAL 6 //
#define TC_GOTO_OP_REL_DIF 7 //
#define TC_OP_SUMA_ENT 8 //
#define TC_OP_RESTA_ENT 9 //
#define TC_OP_MULTI_ENT 10 //
#define TC_OP_DIV_ENT 11 //
#define TC_OP_SUMA_REAL 12 //
#define TC_OP_MULTI_REAL 13 //
#define TC_OP_RESTA_REAL 14 //
#define TC_OP_DIV_REAL 15 //
#define TC_OP_MOD 16 //
#define TC_OP_DIVISION_ENTERA 17 //
#define TC_OP_RESTA_UNI_ENT 18 //
#define TC_OP_RESTA_UNI_REAL 19 //
#define TC_OP_SUMA_UNI_ENT 20 //
#define TC_OP_SUMA_UNI_REAL 21 //
#define TC_ASIGNACION 22 //
#define TC_INTTOREAL 23 //
#define TC_ASIG_LITERAL_ENTERO 24 //
#define TC_ASIG_LITERAL_REAL 25 //
#define TC_VERDADERO 26
#define TC_FALSO 27
#define TC_INPUT 28
#define TC_OUTPUT 29


typedef struct elem_lista{
	int valor;
	struct elem_lista *next;
}elem_lista;

typedef struct lista{
	struct elem_lista *first;
}lista;

typedef struct tipo_exp{
	int type;
	int place;
	struct lista true;
	struct lista false;
} tipo_exp;

typedef struct tipo_exp_mientras
{
	struct lista true;
	struct lista false;
	int id_iterado;
	int id_sumador; 
}tipo_exp_mientras;

typedef struct tipo_sentencia{
	struct lista next;
	struct lista sig;
}tipo_sentencia;

typedef struct M{
        int quad;
}M;

typedef struct Quad{
 	int operador;
	float operando1;
	float operando2;
	int destino;
    struct Quad *next;
}Quad;


typedef struct TablaCuadruplas{
    Quad* primer_quad;
    int nextquad;
}TablaCuadruplas;


TablaCuadruplas* crear_TC();
void gen(TablaCuadruplas*,int,float,float,int);
void imprimir_tc();
lista makelist(int);
lista merge(lista, lista);
void backpatch(TablaCuadruplas*, lista, int);
int empty(tipo_sentencia);
void generarCodigo(TablaCuadruplas*,TablaSimbolos*);
#endif
