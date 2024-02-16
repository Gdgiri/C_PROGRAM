#include <stdio.h>

int main()
{

    float age, height, weight, he, BMI;
    int choice;

    printf("Enter the age: ");
    scanf("%f", &age);

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
            scanf("%f", &height);

            printf("Enter the weight: ");
            scanf("%f", &weight);

            he = height / 100;

            printf("HEIGHT%f \n", he);

            BMI = weight / (he * he);

            printf("BMI value: %f \n", BMI);

            if (BMI < 18.5)
            {
                printf("you are Under-Weight \n");
                printf("Increase your weight \n");
                printf("Consult the Doctor \n");
            }

            else if (BMI > 18.5 && BMI < 24.9)
            {
                printf("Noraml Weight \n");
                printf("You have Good Health \n");
            }

            else if (BMI > 25 && BMI < 29.9)
            {
                printf("You are OverWeight \n");
                printf("You are Grade I \n");
                printf("Consult the Doctor \n");
            }

            else if (BMI > 30 && BMI < 34.9)
            {
                printf("You are Obesity \n");
                printf("You are Grade II \n");
                printf("You are clinical obisity \n");
                printf("you consult the Doctor \n");
            }

            else if (BMI > 35)
            {
                printf("you have Extresm in obisity problem \n");
                printf("You are Grade III \n");
                printf("you are in critical Range \n");
                printf("Must consult the Doctor!!! \n");
            }
            else
            {
                printf("Invalid");
            }
            break;

        case 2:
            printf("Enter the height: ");
            scanf("%f", &height);

            printf("Enter the weight: ");
            scanf("%f", &weight);

            he = height / 100;

            BMI = weight / (he * he);

            printf("BMI value: %f \n", BMI);

            if (BMI < 18.5)
            {
                printf("you are Under-Weight \n");
                printf("Increase your weight \n");
                printf("Consult the Doctor \n");
            }

            else if (BMI > 18.5 && BMI < 24.9)
            {
                printf("Noraml Weight \n");
                printf("You have Good Health \n");
            }

            else if (BMI > 25 && BMI < 29.9)
            {
                printf("You are OverWeight \n");
                printf("You are Grade I \n");
                printf("Consult the Doctor \n");
            }

            else if (BMI > 30 && BMI < 34.9)
            {
                printf("You are Obesity \n");
                printf("You are Grade II \n");
                printf("You are clinical obisity \n");
                printf("you consult the Doctor \n");
            }

            else if (BMI > 35)
            {
                printf("you have Extresm in obisity problem \n");
                printf("You are Grade III \n");
                printf("you are in critical Range \n");
                printf("Must consult the Doctor!!! \n");
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