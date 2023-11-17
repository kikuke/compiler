int syntax_err;
int root;


int initialize() {
}

int yyparse() {
}

int exit(int n) {
}

int print_ast(int root) {
}

void main()
{
    initialize();
    yyparse();
    
    if (syntax_err) exit(1);

    print_ast(root); // print syntax tree and tables

    exit(0);
}