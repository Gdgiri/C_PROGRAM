#include <stdio.h>

int main()
{
    float amount, tax = 0;

    printf("Enter the amount: ");
    scanf("%f", &amount);

    if (amount <= 250000)
    {
        printf("There is \"NO TAX\" for you \n");
    }
    if (amount > 1000000)
    {
        tax += (amount - 1000000) * 0.30;
        amount = 1000000;
    }

    if (amount > 800000)
    {
        tax += (amount - 800000) * 0.25;
        amount = 800000;
    }

    if (amount > 500000)
    {
        tax += (amount - 500000) * 0.20;
        amount = 500000;
    }

    if (amount > 250000)
    {
        tax += (amount - 250000) * 0.10;
    }

    printf("The tax amount is %.2f", tax);

    return 0;
}
