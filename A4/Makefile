a.out: y.tab.o lex.yy.o print.o support.o main.o
	cc -g -o $@ $^

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
	cc -g -c $^

support.o: support.c
	cc -g -c $^

y.tab.o: y.tab.c
	cc -g -c $^

lex.yy.o: lex.yy.c
	cc -g -c $^

main.o: main.c
	cc -g -c $^