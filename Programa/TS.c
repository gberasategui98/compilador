#include "TS.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Simbolo* crear_TS(){
    struct Simbolo *st;
    st = NULL;
    return st;
};

void insertar(Simbolo **first, char *nombre, char *tipo){
    Simbolo *nuevo_simbolo = (struct Simbolo *) malloc(sizeof(struct Simbolo));

    nuevo_simbolo->nombre = (char *) malloc(sizeof(char)*strlen(nombre));
    strcpy(nuevo_simbolo->nombre,nombre);
    nuevo_simbolo->tipo_simbolo = (char *) malloc(sizeof(char)*strlen(tipo));
    strcpy(nuevo_simbolo->tipo_simbolo, tipo);
    nuevo_simbolo->next = *first;
    *first = nuevo_simbolo;
};

void buscar(Simbolo **first, char *nombre){
    
};