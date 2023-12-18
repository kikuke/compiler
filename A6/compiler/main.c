#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#include "support.h"
#include "print.h"
#include "print_sem.h"
#include "type.h"

extern int syntax_err;
extern int semantic_err;
extern A_NODE *root;

FILE *fout;

void main()
{
    if ((fout=fopen("a.asm", "w")) == NULL) {
        printf("can not open output file: a.asm\n");
        exit(1);
    }
    initialize();
    yyparse();
    
    if (syntax_err) exit(1);

    print_ast(root); // print syntax tree and tables

    semantic_analysis(root);

    if (semantic_err) exit(1);

    print_sem_ast(root);
    code_generation(root);

    exit(0);
}