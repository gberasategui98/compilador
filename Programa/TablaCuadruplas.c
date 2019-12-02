#include "TablaCuadruplas.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>



TablaCuadruplas* crear_TC(){
    TablaCuadruplas *TC = (TablaCuadruplas*) malloc(sizeof(TablaCuadruplas));
    TC->nextquad = 0;
    TC->primer_quad = NULL;
    return TC;
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
}

void imprimir_tc(TablaCuadruplas *tc){
	printf("--- Tabla de Cuadruplas ---\n");
	Quad* actual = tc->primer_quad;
    int indice = 0;
  	while (actual != NULL) {
        printf("%d -- Operador: %d. Operando1: %d. Operando2: %d. Destino: %d.\n", indice, actual->operador, actual->operando1, actual->operando2, actual->destino);
        actual = actual->next;
        indice +=1;
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
/*
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
}*/

lista merge(lista l1, lista l2){//Creo que ahora esta bien
    lista nueva_lista;
    elem_lista *recorrer;
    nueva_lista = l1;
    recorrer = nueva_lista.first;
    while(recorrer->next!=NULL){
        recorrer = recorrer->next;
    }
    recorrer->next = l2.first;
    return nueva_lista;
}

int quad_en_lista(int indice, lista list){
    elem_lista *recorrer = list.first;
    while(recorrer!=NULL){
        printf("%d, %d\n", indice, recorrer->valor);
        if(indice==recorrer->valor){
            return 1;
        }
        recorrer = recorrer->next;
    }
    return 0;
}

void backpatch(TablaCuadruplas* TC, lista list, int valor){
    int indice = 0;
    Quad *recorrer = TC->primer_quad;
    while(recorrer!=NULL){
        if (quad_en_lista(indice, list)){
            recorrer->destino = valor;
        }
        indice+=1;
        recorrer = recorrer->next;
    }
    return;
}

int empty(tipo_sentencia elem){
    if(elem.next.first==NULL){
        return 1;
    }
    else{
        return 0;
    }
}