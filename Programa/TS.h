#ifndef BC_TS
#define BC_TS

enum TIPO_SIMBOLO{
    variable,
    funcion,
    tipo,
    etiqueta,
    acciones
};

struct TS
{
    /*Info general*/
    char* nombre;
    TIPO_SIMBOLO tipo;
    /*Info etiquetas*/
    int dir;
    /*Info variables*/
    char* tipo_variable;
    int ambito_variable;
    /*Info funciones*/
    int num_parametros;
    //...
};

TS* crear_TS();
void insertar(struct TS *first, char* nombre, int tipo);
void buscar(struct TS *first, char* nombre);
#endif