#include <stdio.h>

int main()
{

    int a, b, c, choice;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    printf("enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        c = a + b;
        break;

    case 2:
        c = a - b;
        break;

    case 3:
        c = a * b;
        break;

    case 4:
        c = a / b;
        break;

    case 5:
        c = a % b;
        break;

    default:
        printf("invalid");
        break;
    }

    printf("the result is: %d", c);

    return 0;
}