#include <stdio.h>

int main()
{

    int a;

    printf("enter the number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("the value of a= %d is 1", a);
    }
    else if (a == 0)
    {
        printf("the value of a=%d is 0", a);
    }
    else
    {
        printf("the value of a=%d is -1", a);
    }

    return 0;
}