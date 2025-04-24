#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
/*
Generates a rectangle of size N using the '*' character and fills the interior with a cross (both diagonals), based on user input.
*/

{
    int num;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            // Draws a frame, using first and last rows and columns i == 0 || j == 0 || i == num - 1 || j == num - 1
            // Draws diagonals i == j || (i + j) == (num - 1)
            if (i == 0 || j == 0 || i == num - 1 || j == num - 1 || i == j || (i + j) == (num - 1))

            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
