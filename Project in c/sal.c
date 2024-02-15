#include <stdio.h>

int main()
{
    float sal;
    int mon;

    printf("Enter the Salary: ");
    scanf("%f", &sal);

    mon = sal / 12;

    printf("The monthly salary is: %d", mon);
}