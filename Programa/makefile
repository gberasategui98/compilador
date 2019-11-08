all: combine
clean:
	rm lex.yy.c ProAlg.output ProAlg.tab.c ProAlg.tab.h a.out lex.yy.o TS.o
bison: ProAlg.y
#bison -v -d --debug ProAlg.y
	bison -v -d ProAlg.y
flex: ProAlg.l ProAlg.tab.h
	flex -i ProAlg.l
TS: TS.c TS.h
	gcc -c TS.c
intermedio:
	gcc -c lex.yy.c
combine: TS bison flex intermedio
	gcc ProAlg.tab.c lex.yy.o TS.o -lfl -lm
