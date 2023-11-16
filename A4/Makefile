SUPPORT = support.o

a.out: main.c y.tab.o lex.yy.o support.o
	cc $@ $^

clean:
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h
	rm a.out
	rm y.output
	rm *.o

y.tab.c: yacc.y
	yacc -dv yacc.y

lex.yy.c: lex.l
	lex lex.l

support.o: support.c
	cc -c $^

y.tab.o: y.tab.c
	cc -c $^

lex.yy.o: lex.yy.c
	cc -c $^