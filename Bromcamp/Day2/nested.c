#include <stdio.h>

int main()
{

    int a, b, c;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    printf("enter the third number: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is greater.");
        }
        else
        {
            printf("C is greater.");
        }
    }

    else
    {
        if (b > c)
        {
            printf("B is greater");
        }
        else
        {
            printf("C is greater");
        }
    }

    return 0;
}