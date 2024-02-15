#include <stdio.h>

int main()
{
    int money, tax = 0;

    printf("Enter the Amount: ");
    scanf("%d", &money);

    if (money < 250000)
    {
        printf("There is NO TAX for you");
    }

    if (money > 1000000)
    {
        tax += (money - 1000000) * 0.30;
        money = 1000000;
    }

    if (money > 800000)
    {
        tax += (money - 800000) * 0.25;
        money = 800000;
    }

    if (money > 600000)
    {
        tax += (money - 600000) * 0.20;
        money = 600000;
    }

    if (money > 400000)
    {
        tax += (money - 400000) * 0.15;
        money = 400000;
    }

    if (money > 250000)
    {
        tax += (money - 250000) * 0.10;
        money = 250000;
    }

    

    printf("The Tax Amount is: %d", tax);

    return 0;

}