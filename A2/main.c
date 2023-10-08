#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

extern int yylineno;
extern char *yytext;

int main()
{
    yyparse();
    printf("Syntax Analysis Complete!\n");

    exit(0);
}

int yyerror(char *s) 
{
    printf("Syntax Analysis Failed!\nline: %d\ntext: %s\n", yylineno, yytext);
    exit(1);
}

int yywrap()
{
    return 1;
}