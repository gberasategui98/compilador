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

lista makelist(int val){
    lista *l = (lista*) malloc(sizeof(struct lista));
    l->first = (elem_lista*) malloc(sizeof(struct elem_lista));
    l->first->valor = val;
    l->first->next = NULL;
    return *l;
}

lista merge(lista *l1, lista *l2){//No esta bien hecha
    lista * nueva_lista = (lista*) malloc(sizeof(struct lista));
    elem_lista *recorrer, *nuevo, *aux;
    recorrer = l1->first;
    while(recorrer!=NULL){
        nuevo = (elem_lista*) malloc(sizeof(struct elem_lista));
        nuevo->valor = recorrer->valor;
        nuevo->next = recorrer->next;
        if(nueva_lista->first==NULL){
            nueva_lista->first=nuevo;
        }
        else{
            nuevo->next = nueva_lista->first;
            nueva_lista->first = nuevo;
        }
        recorrer = recorrer->next;
    }
    recorrer = l2->first;
    while(recorrer!=NULL){
        nuevo = (elem_lista*) malloc(sizeof(struct elem_lista));
        nuevo->valor = recorrer->valor;
        nuevo->next = recorrer->next;
        if(nueva_lista->first==NULL){
            nueva_lista->first=nuevo;
        }
        else{
            nuevo->next = nueva_lista->first;
            nueva_lista->first = nuevo;
        }
    }
}