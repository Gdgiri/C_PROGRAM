#include <stdio.h>

int main()
{
    char name[20];
    int id;
    float income, tax = 0;

    printf("Enter the Name: ");
    scanf("%s", &name);

    printf("Enter the ID: ");
    scanf("%d", &id);

    printf("Enter the Income: ");
    scanf("%f", &income);

    if (income <= 250000)
    {
        printf("There is NO TAX for you");
    }

    if (income > 250000)
    {
        tax += (income - 250000) * 0.10;
        income = 250000;
    }

    if (income > 500000)
    {
        tax += (income - 500000) * 0.20;
        income = 500000;
    }

    if (income > 800000)
    {
        tax += (income - 800000) * 0.25;
        income = 800000;
    }

    if (income > 1000000)
    {
        tax += (income - 1000000) * 0.30;
        income = 1000000;
    }

    printf("The Total Tax is: %.2f", tax);

    return 0;
}