#include <stdio.h>

int main()
{
    int a, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &a);

    printf("------------------------ \n");

    for (int i = 0; i < a; i++)
    {

        printf("The result is: %d \n", i);
        sum = sum + i;
    }
    printf("------------------------ \n");
    printf("sum: %d \n", sum);
    printf("------------------------ \n");

    return 0;
}