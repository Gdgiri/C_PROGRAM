#include <stdio.h>

int main()
{

    int year;
    float leap, leap100, leap400;

    printf("enter the year: ");
    scanf("%d", &year);

    // formula time

    leap = year % 4;
    leap100 = year % 100;
    leap400 = year % 400;

    if (leap400 == 0)
    {
        printf("it is leap year");
    }

    else if (leap100 == 0)
    {
        printf("it is not leap year");
    }

    else if (leap == 0)
    {
        printf("it is leap year");
    }

    else
    {
        printf("it is not leap year");
    }
    return 0;
}