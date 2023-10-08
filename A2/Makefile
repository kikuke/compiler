a.out: y.tab.c lex.yy.c
	cc main.c y.tab.c lex.yy.c

clean:
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h
	rm a.out

y.tab.c: yacc.y
	yacc -d yacc.y

lex.yy.c: lex.l
	lex lex.l