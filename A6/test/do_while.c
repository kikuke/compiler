int main(void) {
    int i;
    i=10;

    do {
        printf("%d  ", i);
        if (i%2)
            printf("not even\n");
        else
            printf("even\n");
        i--;
    } while (i > 0);
}