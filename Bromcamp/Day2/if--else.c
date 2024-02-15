#include <stdio.h>

int main()
{
    int a;

    printf("enter the number: ");
    scanf("%d", &a);

    if (a == 0 || a > 0)
    {
        printf("Giri Loves Nandu");
    }
    else
    {
        printf("NANDU LOVES GIRI");
    }

    return 0;
}