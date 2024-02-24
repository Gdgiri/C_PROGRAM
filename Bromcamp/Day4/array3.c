#include <stdio.h>

int main()
{
    int a[5];
    int limit;

    printf("Enter the limit: \n");
    scanf("%d", &limit);

    printf("Enter the value: ");

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The values are: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d \t", i);
        for (int j = 0; j < i; j++)
        {
            printf(" %d \t", a[j]);
        }
    }

    return 0;
}