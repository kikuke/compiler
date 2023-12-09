#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#include "support.h"
#include "print.h"
#include "print_sem.h"

extern int syntax_err;
extern int semantic_err;
extern A_NODE *root;

void main()
{
    initialize();
    yyparse();
    
    if (syntax_err) exit(1);

    print_ast(root); // print syntax tree and tables

    semantic_analysis(root);

    if (semantic_err) exit(1);

    print_sem_ast(root);

    exit(0);
}