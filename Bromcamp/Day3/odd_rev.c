#include <stdio.h>

int main()
{
    int a;

    printf("Enter the Number: ");
    scanf("%d", &a);

    printf("------------------------\n");
    printf("The Odd Numbers are\n");
    printf("------------------------\n");

    for (int i = a; i > 0; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d \n", i);
            printf("------------------------\n");
        }
    }
}