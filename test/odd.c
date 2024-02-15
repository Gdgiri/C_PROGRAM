#include <stdio.h>

int main()
{
    int a, c;

    printf("enter a number: ");
    scanf("%d", &a);

    c = a % 2;

    printf("c: %d", c);

    if (a != 0)
    {

        if (c == 0)
        {
            printf("even");
        }

        else
        {
            printf("odd");
        }
    }

    return 0;
}