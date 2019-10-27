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