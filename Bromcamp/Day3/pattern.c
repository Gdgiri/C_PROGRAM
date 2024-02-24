#include <stdio.h>

int main()
{
    char pattern[] = "Giridharan";

    // Determine the length of the string
    int length = 0;
    for (length = 0; pattern[length] != '\0'; length++)
        ;

    // Loop to print the pattern
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", pattern[j]);
        }
        printf("\n");
    }

    return 0;
}
