
void main()
{
    initialize();
    yyparse();
    
    if (syntax_error) exit(1);

    print_ast(root); // print syntax tree and tables

    exit(0);
}