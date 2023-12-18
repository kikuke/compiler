int main()
{
    int i, j;
    int COUNT;
    int temp;
    int data[10];
    
    COUNT = 10;
    for (i = 0; i < COUNT; i++)
    {
        data[i] = COUNT - i;
    }
    
    printf("before : ");
    for (i = 0; i < COUNT; i++)
    {
        printf("%d ", data[i]);
    }
 
    for (i = 0; i < COUNT - 1; i++)
    {
        for (j = 0; j < COUNT - 1 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp        = data[j];
                data[j]     = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    printf("\n\nafter : ");
    for (i = 0; i < COUNT; i++)
    {
        printf("%d ", data[i]);
    }
 
    return 0;
}