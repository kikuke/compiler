#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#include "support.h"

extern int syntax_err;
extern A_NODE *root;

void main()
{
    initialize();
    yyparse();
    
    if (syntax_err) exit(1);

    print_ast(root); // print syntax tree and tables

    exit(0);
}