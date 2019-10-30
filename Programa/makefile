all: ProAlg
ProAlg.tab.h ProAlg.tab.c: ProAlg.y
	bison -v -d ProAlg.y
lex.yy.c: ProAlg.l ProAlg.tab.h
	flex -i ProAlg.l
clean: lex.yy.c ProAlg.output ProAlg.tab.c ProAlg.tab.h
	rm lex.yy.c ProAlg.output ProAlg.tab.c ProAlg.tab.h