#include <stdio.h>

int main()
{
    yyparse();
    fputs("Syntax Analysis Complete!\n", stdout);

    exit(0);
}

int yyerror(char *s) 
{
    fputs("Syntax Analysis Failed!", stderr);
    exit(1);
}

int yywrap()
{
    return 1;
}