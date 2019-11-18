#ifndef BC_TS
#define BC_TS_H

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

#define PASO_VALOR 60
#define PASO_REFERENCIA 61

struct Param{
    int tipo_param;
    int tipo_paso;
};

struct Atributo{
    char *nombre;
    int tipo;
};

typedef struct Simbolo{
    /*Info general*/
    char *nombre;
    int tipo_simbolo;
    int id;
    int tipo_variable; //Tipo de la variable, del array o el valor de returno de la funcion

    /*Info Etiqueta*/
    int ref_linea;

    /*Info variable*/
    int entorno;

    /*Info Funciones*/
    int num_param;
    struct Param *parametros;//Array con información de cada parametro

    /*Info Acciones*/
    //Por ahora no lo implementaria, es de lo mas dificil

    /*Info tipo*/
    struct Atributo *atributos;

    struct Simbolo *next;
}Simbolo;


typedef struct TablaSimbolos{
    Simbolo* primer_simbolo;
    int contador;
}TablaSimbolos;

/*Struct's utilizados en el union*/
/*
typedef struct tipo_id{
	char * val;
}tipo_id;

typedef struct tipo_lista{
    int type;
}tipo_lista;*/

TablaSimbolos* crear_TS();
int insertar_en_TS(TablaSimbolos*, char*);
Simbolo* buscar(TablaSimbolos*, int);
void modificar_tipo_TS(TablaSimbolos*, int, int);
int consulta_tipo(TablaSimbolos*, char*);
#endif
