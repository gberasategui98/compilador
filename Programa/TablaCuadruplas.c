#include "TablaCuadruplas.h"
#include "TS.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>



TablaCuadruplas* crear_TC(){
    TablaCuadruplas *TC = (TablaCuadruplas*) malloc(sizeof(TablaCuadruplas));
    TC->nextquad = 0;
    TC->primer_quad = NULL;
    return TC;
}

void gen(TablaCuadruplas *tc, int operador, float operando1, float operando2, int destino){
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
	printf("\n----------------------- Tabla de Cuadruplas -----------------------\n");
	Quad* actual = tc->primer_quad;
    	int indice = 0;
  	while (actual != NULL) {
		printf("%d -- Operador: %d. Operando1: %.2f. Operando2: %.2f. Destino: %d.\n", indice, actual->operador, actual->operando1, actual->operando2, actual->destino);
		actual = actual->next;
		indice +=1;
    	}
	printf("--------------------------------------------------------------------\n");
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
        //printf("%d, %d\n", indice, recorrer->valor);
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

void generarCodigo(TablaCuadruplas* tc,TablaSimbolos* ts){
	printf("\n Codigo generado en out.proalg\n");
	int fd = open("out.proalg", O_WRONLY | O_CREAT, 0644);
	if (fd == -1) exit(1);
	if (dup2(fd, 1) == -1)exit(1);

	Quad* actual = tc->primer_quad;
  	while (actual != NULL) {
		Simbolo *s1, *s2, *s3;
		switch(actual->operador){
			case TC_GOTO:
				if(actual->destino)
					printf("goto %d\n", actual->destino);
				break;
			case TC_ASIGNACION:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				printf("%s := %s\n", s1->nombre, s2->nombre);
				break;
			case TC_ASIG_LITERAL_ENTERO:
				s1 = buscar_id(ts, actual->destino);
				printf("%s := %d\n", s1->nombre, (int)actual->operando1);
				break;
			case TC_ASIG_LITERAL_REAL:
				s1 = buscar_id(ts, actual->destino);
				printf("%s := %.2f\n", s1->nombre, actual->operando1);
				break;			
			case TC_GOTO_OP_REL_IGUAL:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				if(actual->destino)
					printf("if %s = %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_MENOR:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				if(actual->destino)
					printf("if %s < %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_MENOR_IGUAL:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				if(actual->destino)
					printf("if %s <= %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_MAYOR:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				if(actual->destino)
					printf("if %s > %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_MAYOR_IGUAL:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				if(actual->destino)
					printf("if %s >= %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_DIF:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				if(actual->destino)
					printf("if %s <> %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_OP_SUMA_REAL:
			case TC_OP_SUMA_ENT:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				s3 = buscar_id(ts, actual->operando2);
				printf("%s := %s + %s\n", s1->nombre, s2->nombre, s3->nombre);
				break;
			case TC_OP_RESTA_REAL:
			case TC_OP_RESTA_ENT:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				s3 = buscar_id(ts, actual->operando2);
				printf("%s := %s - %s\n", s1->nombre, s2->nombre, s3->nombre);
				break;
			case TC_OP_MULTI_REAL:
			case TC_OP_MULTI_ENT:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				s3 = buscar_id(ts, actual->operando2);
				printf("%s := %s * %s\n", s1->nombre, s2->nombre, s3->nombre);
				break;
			case TC_OP_DIV_REAL:
			case TC_OP_DIV_ENT:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				s3 = buscar_id(ts, actual->operando2);
				printf("%s := %s / %s\n", s1->nombre, s2->nombre, s3->nombre);
				break;
			case TC_OP_MOD:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				s3 = buscar_id(ts, actual->operando2);
				printf("%s := %s mod %s\n", s1->nombre, s2->nombre, s3->nombre);
				break;
			case TC_OP_DIVISION_ENTERA:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				s3 = buscar_id(ts, actual->operando2);
				printf("%s := %s div %s\n", s1->nombre, s2->nombre, s3->nombre);
				break;
			case TC_INTTOREAL:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				printf("%s := inttoreal %s\n", s1->nombre, s2->nombre);
				break;
			case TC_OP_RESTA_UNI_REAL:
			case TC_OP_RESTA_UNI_ENT:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				printf("%s := -%s\n", s1->nombre, s2->nombre);
				break;
			case TC_OP_SUMA_UNI_REAL:
			case TC_OP_SUMA_UNI_ENT:
				s1 = buscar_id(ts, actual->destino);
				s2 = buscar_id(ts, actual->operando1);
				printf("%s := -%s\n", s1->nombre, s2->nombre);
				break;
			case TC_INPUT:
				s1 = buscar_id(ts, actual->destino);
				printf("input %s\n", s1->nombre);
				break;
			default:
				printf("NO RECONOCIDO\n");
				break; 
		}       
		actual = actual->next;
    }
}



















