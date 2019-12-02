#include "TS.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



TablaSimbolos* crear_TS(){
    TablaSimbolos *TS = (TablaSimbolos*) malloc(sizeof(TablaSimbolos));
    TS->contador = 0;
	TS->contador_vartemp = 0;
    TS->primer_simbolo = NULL;
}

int existe_simbolo(TablaSimbolos *ts, char *nombre, int i_o){
    Simbolo *recorrer = ts->primer_simbolo;
    while(recorrer!=NULL){
        if(!strcmp(recorrer->nombre, nombre)){
            if(i_o==2){
                return 1;
            }
            if(recorrer->i_o_variable==i_o){
                return 1;
            }
        }
        recorrer = recorrer->next;
    }
    return 0;
}

int insertar_en_TS(TablaSimbolos *ts, char *nombre, int i_o){
    if (existe_simbolo(ts, nombre, i_o)){
        return -1;
    }
    Simbolo *nuevo_simbolo = (struct Simbolo *) malloc(sizeof(struct Simbolo));
    nuevo_simbolo->nombre = (char *) malloc(sizeof(char)*strlen(nombre));
    strcpy(nuevo_simbolo->nombre,nombre);
    ts->contador++;
    nuevo_simbolo->id = ts->contador;
    nuevo_simbolo->i_o_variable = i_o;

    nuevo_simbolo->next = ts->primer_simbolo;
    ts->primer_simbolo = nuevo_simbolo;
	return nuevo_simbolo->id;
}

int newtemp(TablaSimbolos *ts){
	Simbolo *nuevo_simbolo = (struct Simbolo*) malloc(sizeof(struct Simbolo));

	nuevo_simbolo->nombre = (char*) malloc(sizeof(char));
    ts->contador_vartemp++;
	sprintf(nuevo_simbolo->nombre, "t_%d", ts->contador_vartemp);
	ts->contador++;
    nuevo_simbolo->id = ts->contador;
    nuevo_simbolo->next = ts->primer_simbolo;
    ts->primer_simbolo = nuevo_simbolo;

	return nuevo_simbolo->id;
}


Simbolo* buscar_id(TablaSimbolos *ts, int id){
	Simbolo* actual = ts->primer_simbolo;

    while (actual != NULL) {
	if(actual->id == id) return actual;
        //printf("Nombre variable: %s. Tipo variable: %d. Id: %d\n", actual->nombre, actual->tipo_variable, actual->id);
        actual = actual->next;
    }
	return NULL;
}

Simbolo* buscar_nombre(TablaSimbolos *ts, char* nombre){
	Simbolo* actual = ts->primer_simbolo;

    while (actual != NULL) {
		if(!strcmp(actual->nombre,nombre)) return actual;
        //printf("Nombre variable: %s. Tipo variable: %d. Id: %d\n", actual->nombre, actual->tipo_variable, actual->id);
        actual = actual->next;
    }
	return NULL;
}

void imprimir_ts(TablaSimbolos *ts){
	printf("\n---------------- Tabla de Simbolos ----------------\n");
	Simbolo* actual = ts->primer_simbolo;
  	while (actual != NULL) {
        printf("  Nombre variable: %s. Tipo variable: %d. Id: %d....%d\n", actual->nombre, actual->tipo_variable, actual->id, actual->i_o_variable);
        actual = actual->next;
    }
	printf("---------------------------------------------------\n");
}

void modificar_tipo_TS(TablaSimbolos *ts, int id, int tipo){
    Simbolo* actual = ts->primer_simbolo;
    
    while (actual != NULL) {
		if(actual->id == id){
            actual->tipo_variable=tipo;
            printf("Nombre variable: %s. Tipo variable: %d\n", actual->nombre, actual->tipo_simbolo);
            return;
        }
        actual = actual->next;
    }
	return;
}

int consulta_tipo(TablaSimbolos *ts, char *nombre){
	Simbolo* actual = ts->primer_simbolo;

    while (actual != NULL) {
		if(!strcmp(actual->nombre,nombre)) return actual->tipo_variable;
        actual = actual->next;
    }
	return -1;
}
