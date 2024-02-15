#include <stdio.h>

int main()
{

    int a, b;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("the A value is: %d \n", a);
    printf("the B value is: %d \n", b);

    return 0;
}