#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
/*
Prints a checkered playing field consisting of the characters "+" and "-" based on user input.
No identical characters are placed directly next to or on top of each other.
Two numbers (rows, columns) are entered by the user.
*/

{
    int rows, columns;

    scanf("%d %d", &rows, &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            // No identical characters are placed directly next to or on top of each other
            if ((i + j) % 2 == 0)

            {
                printf("+");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
