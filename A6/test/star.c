int main(void) {
    int i, j;

    for (i=0; i<3; i++) {
        for (j=0; j< 10 - i; j++)
            printf(" ");
        for (j=0; j<i+1; j++)
            printf("* ");
        printf("\n");
    }
}