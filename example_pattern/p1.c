#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);
    for (int x = 1; x <= a; x++)
    {
        for (int gap = 1; gap <= a - 1; gap++)
        {
            printf(" ");
        }
        for (int y = 1; y <= 2 * x - 1; y++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = a - 1; i >= 1; i--)
    {
        for (int space = 1; space <= a - 1; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

 

    return 0;
}