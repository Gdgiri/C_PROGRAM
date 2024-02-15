#include <stdio.h>

int main()
{
    int amt, gst, tot, cash, mon, tot2, tot3, tot4;

    printf("enter the amount: ");
    scanf("%d", &amt);

    mon = amt - 250000;

    if (mon < 250000)
    {
        printf("There is no TAX for you");
    }

    else if (mon >= 250000 && mon <= 500000)
    {
        tot - mon - 500000;
        gst = (tot * 10) / 100;

        printf("the TAX amount is: %d", gst);
    }
    else if (mon >= 500000 && mon <= 800000)
    {

        gst = (mon * 15) / 100;

        printf("The TAX amount is: %d", gst);
    }

    else if (mon >= 800000 && mon <= 1000000)
    {
        tot3 = tot2 - 1000000;
        gst = (tot3 * 20) / 100;

        printf("the TAX amount is: %d", gst);
    }

    else
    {
        printf("invalid");
    }
    return 0;
}