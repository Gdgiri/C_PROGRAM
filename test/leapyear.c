#include <stdio.h>

int main()
{

    int year, leap, leap100, leap400;

    printf("enter the year: ");
    scanf("%d", &year);

    // formula time

    leap = year % 4;

    leap100 = year % 100;

    leap400 = year % 400;

    if (leap == 0 && (leap100 != 0 || leap400 == 0))
    {
        printf("\"%d\", it is a leap year", year);
    }
    else
    {
        printf("\"%d\", it is not a leap year", year);
    }

    return 0;
}