#include <stdio.h>

int main()
{
    int id, unit;
    float charge, cal;
    char name[20];

    printf("Enter the ID: ");
    scanf("%d", &id);

    printf("Enter the name: ");
    scanf("%s", &name);

    printf("Enter the Reading: ");
    scanf("%d", &unit);

    if (unit > 100)
    {
        charge = unit - 100;
        cal = charge * 2.25;
    }
    else
    {
        printf("Unit is free");
    }

    printf("The unit charge is : %.2f", cal);

    return 0;
}