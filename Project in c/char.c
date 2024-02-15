#include <stdio.h>

int main()
{

    char a, symbol;

    printf("enter the Alphabet , Digit or Special character: ");
    scanf("%c ", &a);

    printf("The Value is:  %c  \n", a);

    int b = a;

    printf("the ASCII value of %c : is %d \n", a, b);

    if (b >= 33 && b <= 47)
    {
        printf("symbol");
    }

    else
    {
        printf("Alpha");
    }

    return 0;
}
