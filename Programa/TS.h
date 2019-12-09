#ifndef BC_TS_H
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
    int i_o_variable; //0:Variable de entrada, 1:Variable de salida y 2:Variable de ejecución

    struct Simbolo *next;
}Simbolo;


typedef struct TablaSimbolos{
    Simbolo* primer_simbolo;
    int contador;
	int contador_vartemp;
}TablaSimbolos;



TablaSimbolos* crear_TS();
int insertar_en_TS(TablaSimbolos*, char*,int);
int newtemp(TablaSimbolos*);
Simbolo* buscar_id(TablaSimbolos*, int);
Simbolo* buscar_nombre(TablaSimbolos *, char*);
void imprimir_ts(TablaSimbolos*);
void modificar_tipo_TS(TablaSimbolos*, int, int);
void modificar_valor_variable_TS(TablaSimbolos*, int, int);
int consulta_tipo(TablaSimbolos*, char*);
#endif
