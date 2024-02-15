#include <stdio.h>

int main()
{
    int mat, phy, che, tot, avg;

    printf("enter the Maths mark: ");
    scanf("%d", &mat);

    printf("enter the physics mark: ");
    scanf("%d", &phy);

    printf("enter the Chemistry mark: ");
    scanf("%d", &che);

    tot = mat + phy + che;

    avg = tot / 3;

    printf("The total is: %d \n", tot);
    printf("The average is: %d \n", avg);

    if (avg >= 90)
    {
        printf("A Grade");
    }

    else if (avg >= 70)
    {
        printf("B Grade");
    }

    else if (avg >= 50)
    {
        printf("C Grade");
    }

    else if (avg >= 35)
    {
        printf("D Grade");
    }

    else
    {
        printf("Fail");
    }

    return 0;
}