#include <stdio.h>

int main()
{
    int year, a;

    printf("enter the year: ");
    scanf("%d", &year);

    a = year % 4;

    if (a == 0)
    {
        printf("leap year");
    }

    else
    {

        printf("not a leap year");
    }

    return 0;
}