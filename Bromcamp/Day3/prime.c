#include <stdio.h>

int main()
{
    int a, flag = 0;
    printf("Enter the Number: ");
    scanf("%d", &a);

    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("it is prime number");
    }
    else
    {
        printf("Not a prime number");
    }

    return 0;
}
