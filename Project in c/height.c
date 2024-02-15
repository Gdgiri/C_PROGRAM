#include <stdio.h>

int main()
{

    int age, height, choice;

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 18)
    {

        printf("Male PRESS--1 \n");
        printf("FeMale PRESS--2 \nd");

        printf("enter the gender: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the height: ");
            scanf("%d", &height);

            if (height > 170 && height <= 177)
            {
                printf("you are height");
            }

            else if (height > 177)
            {
                printf("you are too tall");
            }

            else
            {
                printf("You are short");
            }
            break;

        case 2:
            printf("Enter the height: ");
            scanf("%d", &height);

            if (height > 150 && height <= 157)
            {
                printf("you are height");
            }

            else if (height > 157)
            {
                printf("you are too tall");
            }

            else
            {
                printf("You are short");
            }
            break;
        }
    }
    else
    {
        printf("You are not a adult");
    }

    return 0;
}