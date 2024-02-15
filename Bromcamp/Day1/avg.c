#include <stdio.h>

int main()
{

    int a, b, c, d;

    printf("enter the first mark: ");
    scanf("%d", &a);

    printf("enter the second mark: ");
    scanf("%d", &b);

    c = a + b;

    d = c / 2;

    printf("the average is:%d ", d);
}