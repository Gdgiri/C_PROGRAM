#include <stdio.h>

int main()
{

    int choice, n1, n2, result;
    char avg[20] = "Avg", good[20] = "good";

    printf("enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {

        printf("result is %s", avg);
    }

    else if (choice == 2)
    {

        printf("result is %s", good);
    }

    else if (choice == 3)
    {
        result = n1 * n2;
    }

    else if (choice == 4)
    {
        result = n1 / n2;
    }

    else
    {
        printf("invalid");
    }

    return 0;
}