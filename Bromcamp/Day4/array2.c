#include <stdio.h>

int main()
{
    int a[5];

    printf("Enter the values: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The values are: \n");
    for (int j = 0; j < 5; j++)
    {
        printf(" %d\n", a[j]);
    }

    return 0;
}