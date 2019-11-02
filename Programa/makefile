all: combine
clean: bison flex
	rm lex.yy.c ProAlg.output ProAlg.tab.c ProAlg.tab.h
bison: ProAlg.y
	bison -v -d ProAlg.y
flex: ProAlg.l ProAlg.tab.h
	flex -i ProAlg.l
intermedio:
	gcc -c lex.yy.c
combine: bison flex intermedio
	gcc ProAlg.tab.c lex.yy.o -lfl -lm