a.out: y.tab.o lex.yy.o print.o support.o main.o
	cc -o $@ $^

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

print.o: print.c
	cc -c $^

support.o: support.c
	cc -c $^

y.tab.o: y.tab.c
	cc -c $^

lex.yy.o: lex.yy.c
	cc -c $^

main.o: main.c
	cc -c $^