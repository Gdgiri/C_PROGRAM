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
            printf(" a is bigger");
        }
        else
        {
            printf("c is bigger");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is bigger");
        }
        else
        {
            printf("c is bigger");
        }
    }

    return 0;
}