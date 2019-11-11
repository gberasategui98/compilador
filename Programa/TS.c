#include "TS.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


TablaSimbolos* crear_TS(){
    TablaSimbolos *TS = (TablaSimbolos*) malloc(sizeof(TablaSimbolos));
    TS->contador = 0;
    TS->primer_simbolo = NULL;
};

void insertar_en_TS(TablaSimbolos *ts, char *nombre){
    Simbolo *nuevo_simbolo = (struct Simbolo *) malloc(sizeof(struct Simbolo));

    nuevo_simbolo->nombre = (char *) malloc(sizeof(char)*strlen(nombre));
    strcpy(nuevo_simbolo->nombre,nombre);

    nuevo_simbolo->next = ts->primer_simbolo;
    ts->primer_simbolo = nuevo_simbolo;
};


Simbolo* buscar(TablaSimbolos *ts, char *nombre){
	Simbolo* actual = ts->primer_simbolo;

    while (actual != NULL) {
		//if(!strcmp(actual->nombre,nombre)) return actual;
        printf("Nombre variable: %s. Tipo variable: %d\n", actual->nombre, actual->tipo_simbolo);
        actual = actual->next;
    }
	return NULL;
};

void modificar_tipo_TS(TablaSimbolos *ts, char *nombre, int tipo){
    Simbolo* actual = ts->primer_simbolo;
    
    while (actual != NULL) {
		if(!strcmp(actual->nombre,nombre)){
            actual->tipo_simbolo=tipo;
            printf("Nombre variable: %s. Tipo variable: %d\n", actual->nombre, actual->tipo_simbolo);
            return;
        }
        actual = actual->next;
    }
	return;
}

