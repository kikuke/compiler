interp: y.tab.o lex.yy.o lib.o interp.o
	cc -g -o $@ $^

clean: 
	rm lex.yy.c y.tab.c y.tab.h
	rm *.o
	rm interp

lex.yy.c: interp.l
	lex interp.l

y.tab.c: interp.y
	yacc -dv interp.y

lex.yy.o: lex.yy.c
	cc -g -c $^

y.tab.o: y.tab.c
	cc -g -c $^

lib.o: lib.c
	cc -g -c $^

interp.o: interp.c
	cc -g -c $^