#include <stdio.h>

int main()
{
    int a[5];

    printf("Enter the value: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("values are: %d", a[0]);
}