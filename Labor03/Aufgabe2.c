#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
// Prints a specified number of symbols based on user input.
// For every even index the symbol is an undercore "_", for odd index it is an asterisk ('*')

{
    int userNumber;

    scanf("%d", &userNumber);

    for (int i = 0; i < userNumber; i++)
    {
        if (i % 2 == 0)

        {
            printf("*");
        }
        else
        {
            printf("_");
        }
    }

    printf("\n");
    return 0;
}
