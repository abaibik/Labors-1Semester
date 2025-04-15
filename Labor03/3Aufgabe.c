#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
// Prints a specified number of asterisks ('*') based on user input.
// Two numbers (rows, columns) are entered by the user

{
    int rows, columns;

    scanf("%d %d", &rows, &columns);

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
