/*
* Autores: Ioar Crespo y Guilllermo Berasategui
*/

#include "TS.h"

TablaSimbolos* crear_TS(){
    TablaSimbolos *TS = (TablaSimbolos*) malloc(sizeof(TablaSimbolos));
    TS->contador = 0;
	TS->contador_vartemp = 0;
    TS->primer_simbolo = NULL;
}
/*
* Comprueba si existe un nombre en la tabla de simbolos
*Return: -2=No existe, -1=Existe y no se puede repetir, otro valor=Id de el simbolo repetido
*/
int existe_simbolo(TablaSimbolos *ts, char *nombre, int i_o){
    Simbolo *recorrer = ts->primer_simbolo;
    while(recorrer!=NULL){
        if(!strcmp(recorrer->nombre, nombre)){
            if(i_o==2){
                return -1;
            }
            if(recorrer->i_o_variable==i_o){
                return -1;
            }
            else{
                recorrer->i_o_variable = i_o;
                return recorrer->id;
            }
        }
        recorrer = recorrer->next;
    }
    return -2;
}

/*Si es posible inserta una nueva variable en la TS*/
int insertar_variable_en_TS(TablaSimbolos *ts, char *nombre, int i_o){
    int existe = existe_simbolo(ts, nombre, i_o);
    if (existe==-1){
        return -1;
    }
    else{
        if (existe!=-2){
            return existe;
        }
    }
    Simbolo *nuevo_simbolo = (struct Simbolo *) malloc(sizeof(struct Simbolo));
    nuevo_simbolo->nombre = (char *) malloc(sizeof(char)*strlen(nombre));
    strcpy(nuevo_simbolo->nombre,nombre);
    ts->contador++;
    nuevo_simbolo->id = ts->contador;
    nuevo_simbolo->i_o_variable = i_o;
    nuevo_simbolo->tipo_simbolo = VARIABLE;

    nuevo_simbolo->next = ts->primer_simbolo;
    ts->primer_simbolo = nuevo_simbolo;
	return nuevo_simbolo->id;
}

/*Crea una nueva variable temporal en la TS*/
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

/*Busca si existe un id en la TS*/
Simbolo* buscar_id(TablaSimbolos *ts, int id){
	Simbolo* actual = ts->primer_simbolo;

    while (actual != NULL) {
	    if(actual->id == id) return actual;
        actual = actual->next;
    }
	return NULL;
}

/*Busca si existe un nombre en la TS*/
Simbolo* buscar_nombre(TablaSimbolos *ts, char* nombre){
	Simbolo* actual = ts->primer_simbolo;

    while (actual != NULL) {
		if(!strcmp(actual->nombre,nombre)) return actual;
        actual = actual->next;
    }
	return NULL;
}

/*Imprime la TS por pantalla*/
void imprimir_ts(TablaSimbolos *ts){
	printf("\n---------------- Tabla de Simbolos ----------------\n");
	Simbolo* actual = ts->primer_simbolo;
  	while (actual != NULL) {
        printf("  Nombre variable: %s. Tipo variable: %d. Id: %d....%d\n", actual->nombre, actual->tipo_variable, actual->id, actual->i_o_variable);
        actual = actual->next;
    }
	printf("---------------------------------------------------\n");
}

/*Modifica el tipo de una entrada de la TS*/
void modificar_tipo_TS(TablaSimbolos *ts, int id, int tipo){
    Simbolo* actual = ts->primer_simbolo;
    
    while (actual != NULL) {
		if(actual->id == id){
            actual->tipo_variable=tipo;
            return;
        }
        actual = actual->next;
    }
	return;
}

/*Consulta el tipo de un nombre en la TS*/
int consulta_tipo(TablaSimbolos *ts, char *nombre){
	Simbolo* actual = ts->primer_simbolo;

    while (actual != NULL) {
		if(!strcmp(actual->nombre,nombre)) return actual->tipo_variable;
        actual = actual->next;
    }
	return -1;
}
