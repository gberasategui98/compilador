#include "TS.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

TablaSimbolos* crear_TS(){
    TablaSimbolos *TS = (TablaSimbolos*) malloc(sizeof(TablaSimbolos));
    TS->contador = 0;
    TS->primer_simbolo = NULL;
};

void insertar(TablaSimbolos *ts, char *nombre, int tipo){
    Simbolo *nuevo_simbolo = (struct Simbolo *) malloc(sizeof(struct Simbolo));

    nuevo_simbolo->nombre = (char *) malloc(sizeof(char)*strlen(nombre));
    strcpy(nuevo_simbolo->nombre,nombre);
    nuevo_simbolo->tipo_simbolo = tipo;

    nuevo_simbolo->next = ts->primer_simbolo;
    ts->primer_simbolo = nuevo_simbolo;
};


Simbolo* buscar(TablaSimbolos ts, char *nombre){
	Simbolo* actual = ts.primer_simbolo;

    while (actual->next != NULL) {
		if(!strcmp(actual->nombre,nombre)) return actual;
        actual = actual->next;
    }
	return NULL;
};

