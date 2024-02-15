#include <stdio.h>

int main()
{
    int l, b, h, r, choice;
    float area;

    printf("----input 1 is for area of recctangle----- \n");
    printf("-----input 2 is for area of circle-------- \n");
    printf("-----input 3 is for area of triangle------ \n");

    printf("enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("enter the length and breath of the rectangle: ");
        scanf("%d%d", &l, &b);
        area = l * b;
        printf("The area of the rectangle is: %f", area);
        break;

    case 2:
        printf("Enter the radius for circle: ");
        scanf("%d", &r);
        area = 3.14 * r * r;
        printf("The area of the circle is: %f", area);
        break;

    case 3:
        printf("enter the breath and height for the triangle: ");
        scanf("%d%d", &b, &h);
        area = 0.5 * b * h;
        printf("The area of the triangle is: %f", area);
        break;

    default:
        printf("There is no any geometrical shap");
    }

    return 0;
}