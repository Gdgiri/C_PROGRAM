#include <stdio.h>

int main()
{

    int a, b;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A is greater then B");
    }

    else
    {
        printf("B is greater then A");
    }

    return 0;
}