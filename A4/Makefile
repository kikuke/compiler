a.out: y.tab.c lex.yy.c
	cc main.c y.tab.c lex.yy.c support.c

clean:
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h
	rm a.out
	rm y.output

y.tab.c: yacc.y
	yacc -dv yacc.y

lex.yy.c: lex.l
	lex lex.l