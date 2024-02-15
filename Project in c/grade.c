#include <stdio.h>

int main()
{
    int choice;
    char a;

    printf("enter the choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 'A':
        printf("Average");
        break;

    case 'E':
        printf("Excellent");

    case 'V':
        printf("Very Good");
        break;

    case 'F':
        printf("Fail");
        break;
    }

    printf("%d: ", choice);

    return 0;
}