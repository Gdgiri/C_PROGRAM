#include <stdio.h>

int main()
{

    char a;

    printf("enter the Vowel: ");
    scanf("%c", &a);

    printf("The Chacter is: %c \n", a);

    int b = a;

    printf("The ASCII value: %d \n", b);

    if (b == 97)
    {
        printf("small 'a' vowel");
    }

    else if (b == 101)
    {
        printf("small 'e' vowel");
    }

    else if (b == 105)
    {
        printf("small 'i vowel");
    }

    else if (b == 111)
    {
        printf("small 'o' vowel");
    }

    else if (b == 117)
    {
        printf("small 'u' vowel");
    }

    else if (b == 65)
    {
        printf("Caps 'A' vowel");
    }

    else if (b == 69)
    {
        printf("Caps 'E' vowel");
    }

    else if (b == 73)
    {
        printf("Caps 'I' vowel");
    }

    else if (b == 79)
    {
        printf("Caps 'O' vowel");
    }

    else if (b == 85)
    {
        printf("Caps 'U' vowel");
    }

    else
    {
        printf("invalid");
    }

    return 0;
}