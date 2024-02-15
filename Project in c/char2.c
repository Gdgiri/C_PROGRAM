#include <stdio.h>

int main()
{

    char symbol;

    printf("enter the character: ");
    scanf("%c", &symbol);

    printf("The character: %c \n", symbol);

    int b = symbol;

    printf("The ASCii value: %d \n", b);

    if (b >= 33 && b <= 47)
    {
        printf("It is symbol");
    }

    else if (b >= 48 && b <= 57)
    {
        printf("It is number");
    }

    else if (b >= 58 && b <= 64)
    {
        printf("It is symbol");
    }

    else if (b >= 65 && b <= 90)
    {
        printf("It is Caps Alphabet");
    }

    else if (b >= 91 && b <= 96)
    {
        printf("It is symbol");
    }

    else if (b >= 97 && b <= 122)
    {
        printf("It is small alphabet");
    }

    else if (b >= 123 && b <= 126)
    {
        printf("It is symbol");
    }

    else
    {
        printf("Invalid");
    }

    return 0;
}