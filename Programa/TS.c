#include "TS.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

TablaSimbolos* crear_TS(){
    TablaSimbolos *TS = (TablaSimbolos * ) malloc(sizeof(TablaSimbolos));
    TS->contador = 0;
    TS->primer_simbolo = NULL;
};

void insertar(TablaSimbolos **first, char *nombre, char *tipo){
    Simbolo *nuevo_simbolo = (struct Simbolo *) malloc(sizeof(struct Simbolo));

    nuevo_simbolo->nombre = (char *) malloc(sizeof(char)*strlen(nombre));
    strcpy(nuevo_simbolo->nombre,nombre);
    nuevo_simbolo->tipo_simbolo = (char *) malloc(sizeof(char)*strlen(tipo));
    strcpy(nuevo_simbolo->tipo_simbolo, tipo);
    nuevo_simbolo->next = *first;
    *first = nuevo_simbolo;
};

void buscar(TablaSimbolos **first, char *nombre){
    
};