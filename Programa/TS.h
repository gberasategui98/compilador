#ifndef BC_TS_H
#define BC_TS_H

/*
* Autores: Ioar Crespo y Guilllermo Berasategui
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ETIQUETA 0
#define VARIABLE 1
#define FUNCION 2
#define ACCION 3
#define TIPO 4

#define ENTERO 40
#define REAL 41
#define CADENA 42
#define CARACTER 43
#define BOOLEANO 44

struct Param{
    int tipo_param;
    int tipo_paso;
};

struct Atributo{
    char *nombre;
    int tipo;
};

typedef struct Simbolo{
    char *nombre;
    int tipo_simbolo;
    int id;
    int tipo_variable; 
    int i_o_variable; //0:Variable de entrada, 1:Variable de salida y 2:Otras variables

    struct Simbolo *next;
}Simbolo;


typedef struct TablaSimbolos{
    Simbolo* primer_simbolo;
    int contador;
	int contador_vartemp;
}TablaSimbolos;



TablaSimbolos* crear_TS();
int insertar_variable_en_TS(TablaSimbolos*, char*,int);
int newtemp(TablaSimbolos*);
Simbolo* buscar_id(TablaSimbolos*, int);
Simbolo* buscar_nombre(TablaSimbolos *, char*);
void imprimir_ts(TablaSimbolos*);
void modificar_tipo_TS(TablaSimbolos*, int, int);
void modificar_valor_variable_TS(TablaSimbolos*, int, int);
int consulta_tipo(TablaSimbolos*, char*);
#endif
