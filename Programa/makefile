all: combine
clean:
	rm lex.yy.c ProAlg.output ProAlg.tab.c ProAlg.tab.h a.out lex.yy.o TS.o TablaCuadruplas.o
bison: ProAlg.y
#bison -v -d --debug ProAlg.y
	bison -v -d ProAlg.y
TS: TS.c TS.h
	gcc -c TS.c
TC: TablaCuadruplas.c TablaCuadruplas.h
	gcc -c TablaCuadruplas.c
flex: ProAlg.l ProAlg.tab.h TS.h
	flex -i ProAlg.l
intermedio:
	gcc -c lex.yy.c
combine: TS TC bison flex intermedio
	gcc ProAlg.tab.c lex.yy.o TS.o TablaCuadruplas.o -lfl -lm
