int fun(int a) {
    printf("param: %d\n", a);
    return a;
}

int main(void) {
    int a;
    a = fun(10);
    printf("ret: %d\n", a);
}