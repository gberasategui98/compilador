#include "TablaCuadruplas.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



TablaCuadruplas* crear_TC(){
    TablaCuadruplas *TC = (TablaCuadruplas*) malloc(sizeof(TablaCuadruplas));
    TC->nextquad = 0;
    TC->primer_quad = NULL;
}

void gen(TablaCuadruplas *tc, int operador, int operando1, int operando2, int destino){
    Quad *new_quad = (struct Quad*) malloc(sizeof(struct Quad));
	
	new_quad->operador = operador;
	new_quad->operando1 = operando1;
	new_quad->operando2 = operando2;
	new_quad->destino = destino;

    tc->nextquad++;

    new_quad->next = tc->primer_quad;
    tc->primer_quad = new_quad;
}

void imprimir_tc(TablaCuadruplas *tc){
	printf("--- Tabla de Cuadruplas ---\n");
	Quad* actual = tc->primer_quad;
  	while (actual != NULL) {
        printf("Operador: %d. Operando1: %d. Operando2: %d. Destino: %d.\n", actual->operador, actual->operando1, actual->operando2, actual->destino);
        actual = actual->next;
    }
	printf("---------------------------\n");
}
