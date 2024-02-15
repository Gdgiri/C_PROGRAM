#include <stdio.h>

int main()
{

    int a, choice;

    printf("enter your choice: ");
    scanf("%d", &choice);

    choice = toupper(choice);

    switch (choice)
    {
    case 'E':
        printf("Excellent");
        break;

    case 'V':
        printf("Very Good");
        break;

    case 'G':
        printf("Good");
        break;

    case 'A':
        printf("Average");
        break;

    case 'F':
        printf("Fail");
        break;

    default:
        printf("invalid");
        break;
    }

    return 0;
}