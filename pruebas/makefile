all: lex c
clean: lex.yy.c a.out
	rm lex.yy.c a.out
c: lex.yy.c
	gcc lex.yy.c -lfl
lex: prueba_scaner_pascal.l
	lex prueba_scaner_pascal.l
