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

            if (height < 152)
            {
                printf("You are very short height");
            }

            else if (height < 170)
            {
                printf("Short height male");
            }

            else if (height >= 170 && height <= 178)
            {
                printf("Average height male");
            }

            else if (height >= 178)
            {
                printf("Tall height male");
            }

            else if (height >= 188)
            {
                printf("Very Tall height Male");
            }
            else
            {
                printf("Invalid");
            }
            break;

        case 2:
            printf("Enter the height: ");
            scanf("%d", &height);

            if (height <= 152)
            {
                printf("very short female");
            }

            else if (height > 160)
            {
                printf("short height female");
            }

            else if (height > 162 && height <= 170)
            {
                printf("Average height female");
            }

            else if (height > 170)
            {
                printf("tall height female");
            }

            else if (height > 175)
            {
                printf("very tall height female");
            }

            else

            {
                printf("Invalid");
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