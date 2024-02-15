#include <stdio.h>

int main()
{

    int a, c, d;

    printf("enter the number: ");
    scanf("%d", &a);

    c = a / 2;

    d = c * 2;

    if (a != 0)
    {

        if (a == d)
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