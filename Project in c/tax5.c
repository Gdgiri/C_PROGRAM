#include <stdio.h>

int main()
{
    int id;
    char name[20];
    float amt, tax, sal;

    printf("Enter the Name: ");
    scanf("%s", &name);

    printf("Enter the ID: ");
    scanf("%d", &id);

    printf("Enter the Income: ");
    scanf("%f", &amt);

    if (amt <= 250000)
    {
        printf("NO TAX");
    }

    if (amt > 250000)
    {
        tax += amt - 250000;
        amt = 250000;
    }

    if (amt > 500000)
    {
        tax += amt - 500000;
        amt = 500000;
    }

    if (amt > 800000)
    {
        tax += amt - 800000;
        amt = 800000;
    }

    if (amt > 1000000)
    {
        tax += amt - 1000000;
        amt = 1000000;
    }

    printf("The Tax Amount: %.f \n", tax);

    sal = amt - tax;

    printf("The Tax Amount: %.f \n", sal);

    return 0;
}