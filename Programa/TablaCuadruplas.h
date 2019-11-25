#ifndef BC_TC_H
#define BC_TC_H

#define TC_NULO 0
#define TC_GOTO 1
#define TC_GOTO_REL 2
#define TC_OP_SUMA_ENT 3
#define TC_OP_RESTA_ENT 4
#define TC_OP_MULTI_ENT 5
#define TC_OP_DIV_ENT 8
#define TC_ASIGNACION 9
#define TC_DEFINICION 10
#define TC_INTTOREAL 11
#define TC_OP_SUMA_REAL 12
#define TC_OP_MULTI_REAL 13
#define TC_OP_RESTA_REAL 14
#define TC_OP_MOD 15
#define TC_OP_DIV_REAL 16
#define TC_OP_DIVISION_ENTERA 17
#define TC_OP_RESTA_UNI_ENT 18
#define TC_OP_RESTA_UNI_REAL 19


typedef struct Quad{
 	int operador;
	int operando1;
	int operando2;
	int destino;
    struct Quad *next;
}Quad;


typedef struct TablaCuadruplas{
    Quad* primer_quad;
    int nextquad;
}TablaCuadruplas;


TablaCuadruplas* crear_TC();
void gen(TablaCuadruplas*,int,int,int,int);
void imprimir_tc(TablaCuadruplas*);
#endif
