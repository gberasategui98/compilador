Componentes del grupo: 
	- Ioar Crespo Diaz de Cerio
	- Guillermo Berasategui Herranz

Makefile:
Para compilar solo ejecutar: make
Para eliminar los ejecutables : make clean

Metodo de empleo del scanner:
./a.out programaX.alg 
(donde X es el número del programa)

Compilar archivo: flex: $lex -i nombre.l
Compilar archivo c: $gcc nombre.yy.c -lfl (-o nombre)
Manual flex: https://westes.github.io/flex/manual/

# Desarrollo del analizador léxico

La primera duda que nos surgió fue la de cómo tratar las entradas según su "case", es decir, cómo gestionar las palabras que tienen el mismo significado pero que están escritas con de forma diferente en cuanto a mayúsculas o minúsculas. Por ejemplo, cómo tratar igual "miEntrAS" y "mientras". La solución que dimos a este problema fue usar la opción -i de Flex que significa "case insensitive" o, lo que es lo mismo, que ignora el "case" de los patrones.


