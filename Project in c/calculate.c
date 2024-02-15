#include <stdio.h>

int main()
{

    int a, b, c, choice;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    printf("enter the choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        c = a + b;
        printf("ADDITION \n");
        break;

    case 2:
        c = a - b;
        printf("SUBTRACTION \n");
        break;

    case 3:
        c = a * b;
        printf("MULTIPLE \n");
        break;

    case 4:
        c = a / b;
        printf("DIVIDE \n");
        break;

    case 5:
        c = a % b;
        printf("MODULE \n");
        break;

    default:
        printf("Invalid \n");
    }

    printf("The Result: %d", c);

    return 0;
}