#include <stdio.h>

int main()
{

    int a, b, temp;

    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("the swap number of A: %d \n", a);
    printf("the swap number of B: %d \n", b);

    return 0;
}