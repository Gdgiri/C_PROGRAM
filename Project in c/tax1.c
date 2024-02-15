#include <stdio.h>

int main()
{
    float income, tax = 0, sal, tot, mon;

    printf("Enter your income: ");
    scanf("%f", &income);

    tot = income;

    // Calculate tax based on income brackets
    if (income <= 250000)
    {
        printf("There is no TAX for you \n");
    }
    if (income > 1000000)
    {
        tax += (income - 1000000) * 0.3;
        income = 1000000;
    }
    if (income > 800000)
    {
        tax += (income - 800000) * 0.25;
        income = 800000;
    }
    if (income > 500000)
    {
        tax += (income - 500000) * 0.20;
        income = 500000;
    }
    if (income > 250000)
    {
        tax += (income - 250000) * 0.10;
    }

    printf("Total tax payable: %.f\n", tax);

    sal = tot - tax;

    printf("Yearly salary: %.f\n", sal);

    mon = sal / 12;

    printf("monthly salary: %.f\n", mon);

    return 0;
}