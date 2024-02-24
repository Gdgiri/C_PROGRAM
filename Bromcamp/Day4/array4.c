#include <stdio.h>

int main()
{
    int a[5];
    int limit;

    printf("Enter the limit: \n");
    scanf("%d", &limit);

    printf("Enter the value: ");

    for (int i = 0; i < limit; i++)
    {

        scanf("%d", &a[i]);
    }

    printf("The values are:\n ");
    for (int i = 0; i < limit; i++)
    {
        if (i == 1)
        {
            printf(" %dst \n", i);
        }
        else if (i == 2)
        {
            printf("%dnd \n", i);
        }
        else if (i == 3)
        {
            printf("%drd \n", i);
        }
        else
        {
            printf("%dth \n", i);
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%d \n\n", a[j]);
        }
    }

    return 0;
}