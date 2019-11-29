#include "TablaCuadruplas.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>



TablaCuadruplas* crear_TC(){
    TablaCuadruplas *TC = (TablaCuadruplas*) malloc(sizeof(TablaCuadruplas));
    TC->nextquad = 0;
    TC->primer_quad = NULL;
}

void gen(TablaCuadruplas *tc, int operador, int operando1, int operando2, int destino){
    Quad *new_quad = (struct Quad*) malloc(sizeof(struct Quad));
	Quad *aux;
    new_quad->operador = operador;
	new_quad->operando1 = operando1;
	new_quad->operando2 = operando2;
	new_quad->destino = destino;

    tc->nextquad++;

    if(tc->primer_quad==NULL){
        tc->primer_quad = new_quad;
    }
    else{
        aux=tc->primer_quad;
        while(aux->next!=NULL){
            aux = aux->next;
        }
        aux->next = new_quad;
    }

	

    
    //new_quad->next = tc->primer_quad;
    //tc->primer_quad = new_quad;
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

void anadir_final(lista **nueva_lista, elem_lista * elem){
    elem_lista * aux;
    aux = (*nueva_lista)->first;
    printf("Nada mas entrar: %p, %p\n", aux, aux->next);
    
    while(aux->next!=NULL){
        sleep(5);
        aux = aux->next;
        printf("%p, %p, %d\n", aux, aux->next,aux->valor);
    }
    aux->next = elem;
    
    return;
}

lista merge(lista l1, lista l2,int bien){//No esta bien hecha
    lista * nueva_lista = (lista*) malloc(sizeof(struct lista));
    elem_lista *recorrer;
    nueva_lista = &l1;
    if(bien){
        recorrer = l2.first;
        while(recorrer!=NULL){
            anadir_final(&nueva_lista, recorrer);
            recorrer = recorrer->next;
        }
    }
    return *nueva_lista;
}