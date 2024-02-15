#include <stdio.h>

int main()
{

    int choice;
    char name[20];
    printf("enter the waiter name: ");
    scanf("%s", &name);

    printf("enter the choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("DOSA");
        break;

    case 2:
        printf("IDLI");
        break;

    case 3:
        printf("POORI");
        break;

    case 4:
        printf("PONGAL");
        break;

    default:
        printf("There is no food");
    }

    return 0;
}