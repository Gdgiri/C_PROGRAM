#include <stdio.h>

int main()
{
    int a;

    printf("enter the number: ");
    scanf("%d", &a);

    if (a != 0)
    {

        if (a > 0)
        {

            printf("positive");
        }
        else
        {
            printf("negative");
        }
    }

    return 0;
}