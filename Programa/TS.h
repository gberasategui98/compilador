#ifndef BC_TS
#define BC_TS

struct Param{
    char *tipo_param;
    char *tipo_paso;
};

struct Atributo{
    char *nombre;
    char *tipo;
};

typedef struct Simbolo{
    /*Info general*/
    char *nombre;
    char *tipo_simbolo;
    char *tipo_variable; //Tipo de la variable, del array o el valor de returno de la funcion

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

Simbolo* crear_TS();
void insertar(Simbolo **first, char *nombre, int tipo);
void buscar(Simbolo **first, char *nombre);
#endif