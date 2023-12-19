int main(void) {
    int i;
    i=10;

    while(i > 0) {
        printf("%d  ", i);
        if (i%2)
            printf("not even\n");
        else
            printf("even\n");
        i--;
    }
}