#include <stdio.h>

int main()
{

    int amount, cash500, cash200, cash100, cash50, cash20, cash10, coin5, coin2, coin1;

    printf("enter the amount: ");
    scanf("%d", &amount);

    cash500 = amount / 500;
    amount %= 500;

    cash200 = amount / 200;
    amount %= 200;

    cash100 = amount / 100;
    amount %= 100;

    cash50 = amount / 50;
    amount %= 50;

    cash20 = amount / 20;
    amount %= 20;

    cash10 = amount / 10;
    amount %= 10;

    coin5 = amount / 5;
    amount %= 5;

    coin2 = amount / 2;
    amount %= 2;

    coin1 = amount;

    if (cash500 > 0)
    {
        printf("500: %d \n", cash500);
    }
    else
    {
        printf("500: 0 \n");
    }

    if (cash200 > 0)
    {
        printf("200: %d \n", cash200);
    }
    else
    {
        printf("200: 0 \n");
    }

    if (cash100 > 0)
    {
        printf("100: %d \n", cash100);
    }
    else
    {
        printf("100: 0 \n");
    }

    if (cash50 > 0)
    {
        printf("50: %d \n", cash50);
    }
    else
    {
        printf("50: 0 \n");
    }

    if (cash20 > 0)
    {
        printf("20: %d \n", cash20);
    }
    else
    {
        printf("20: 0 \n");
    }

    if (cash10 > 0)
    {
        printf("10: %d \n", cash10);
    }
    else
    {
        printf("10: 0 \n");
    }

    if (coin5 > 0)
    {
        printf("5: %d \n", coin5);
    }
    else
    {
        printf("5: 0 \n");
    }

    if (coin2 > 0)
    {
        printf("2: %d \n", coin2);
    }
    else
    {
        printf("2: 0 \n");
    }

    if (coin1 > 0)
    {
        printf("1: %d \n", coin1);
    }
    else
    {
        printf("1: 0 \n");
    }

    return 0;
}