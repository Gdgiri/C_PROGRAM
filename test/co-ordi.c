#include <stdio.h>

int main()
{
    int a, b;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    if (a > 0 && b > 0)
    {
        printf("I quadrant");
    }

    else if (a > 0 && b < 0)
    {
        printf("II quadrant");
    }

    else if (a < 0 && b > 0)
    {
        printf("III quadrant");
    }

    else if (a < 0 && b < 0)
    {
        printf("IV quadrant");
    }

    else if (a == 0 && b < 0)
    {
        printf("neither bottom quadrant nor orgin ");
    }

    else if (a == 0 && b > 0)
    {
        printf("neither top quaddrant nor origin");
    }

    else if (a > 0 && b == 0)
    {
        printf("neither right quadrant nor origin");
    }

    else if (a < 0 && b == 0)
    {
        printf("neither left quadrant nor origin");
    }

    else if (a == 0 && b == 0)
    {
        printf("it is origin");
    }

    else
    {
        printf("not a quadrant");
    }

    return 0;
}