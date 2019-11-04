all: combine
clean:
	rm lex.yy.c ProAlg.output ProAlg.tab.c ProAlg.tab.h a.out lex.yy.o
bison: ProAlg.y
	bison -v -d --debug ProAlg.y
flex: ProAlg.l ProAlg.tab.h
	flex -i ProAlg.l
intermedio:
	gcc -c lex.yy.c
combine: bison flex intermedio
	gcc ProAlg.tab.c lex.yy.o -lfl -lm
