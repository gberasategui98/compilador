/*
* Autores: Ioar Crespo y Guilllermo Berasategui
*/

#include "TablaCuadruplas.h"
#include "TS.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>


extern TablaCuadruplas *TC;

/* Función que crea la TC vacia*/
TablaCuadruplas* crear_TC(){
    TablaCuadruplas *TC = (TablaCuadruplas*) malloc(sizeof(TablaCuadruplas));
    TC->nextquad = 0;
    TC->primer_quad = NULL;
    return TC;
}

/* Añade una instruccion a la tabla de cuadruplas*/
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

/*Imprime la tabla de cuadruplas por la pantalla*/
void imprimir_tc(){
	printf("\n----------------------- Tabla de Cuadruplas -----------------------\n");
	Quad* actual = TC->primer_quad;
    	int indice = 0;
  	while (actual != NULL) {
		printf("%d -- Operador: %d. Operando1: %.3f. Operando2: %.3f. Destino: %d.\n", indice, actual->operador, actual->operando1, actual->operando2, actual->destino);
		actual = actual->next;
		indice +=1;
    	}
	printf("--------------------------------------------------------------------\n");
}

/*Crea una lista con primer valor 'val'*/
lista makelist(int val){
    lista *l = (lista*) malloc(sizeof(struct lista));
    l->first = (elem_lista*) malloc(sizeof(struct elem_lista));
    l->first->valor = val;
    l->first->next = NULL;
    return *l;
}

/*Une dos listas*/
lista merge(lista l1, lista l2){
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

/*Comprueba si una dirección esta en la lista*/
int quad_en_lista(int indice, lista list){
    elem_lista *recorrer = list.first;
    while(recorrer!=NULL){
        if(indice==recorrer->valor){
            return 1;
        }
        recorrer = recorrer->next;
    }
    return 0;
}

/*Añade el 'valor' a todas los gotos sin completar especificados en 'list'*/ 
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

/*Comprueba si una lista esta vacia*/
int empty(tipo_sentencia elem){
    if(elem.next.first==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

/*Genera el codigo de tres direcciones en un fichero*/
void generarCodigo(TablaCuadruplas* tc,TablaSimbolos* ts){
	printf("\nGenerado codigo de tres direcciones en out.proalg ...\n");
	int fd = open("out.proalg", O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (fd == -1){
		printf("Error generando codigo: no se pudo crear el archivo.");
		exit(-1);
	}
	if (dup2(fd, 1) == -1){
		printf("Error generando codigo: no se pudo redireccionar la salida.");
		exit(-1);
	}

	Quad* actual = tc->primer_quad;
	int indice = 0;
  	while (actual != NULL) {
		Simbolo *s1, *s2, *s3;
		printf("%d ", indice);
		indice++;
		switch(actual->operador){
			case TC_GOTO:
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
				printf("if %s = %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_MENOR:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				printf("if %s < %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_MENOR_IGUAL:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				printf("if %s <= %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_MAYOR:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				printf("if %s > %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_MAYOR_IGUAL:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
				printf("if %s >= %s goto %d\n", s1->nombre, s2->nombre, actual->destino);
				break;
			case TC_GOTO_OP_REL_DIF:
				s1 = buscar_id(ts, actual->operando1);
				s2 = buscar_id(ts, actual->operando2);
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
				printf("%s := +%s\n", s1->nombre, s2->nombre);
				break;
			case TC_INPUT:
				s1 = buscar_id(ts, actual->destino);
				printf("input %s\n", s1->nombre);
				break;
			case TC_OUTPUT:
				s1 = buscar_id(ts, actual->destino);
				printf("output %s\n", s1->nombre);
				break;
			default:
				printf("NO RECONOCIDO\n");
				break; 
		}       
		actual = actual->next; 
	}
	close(fd);
}



















