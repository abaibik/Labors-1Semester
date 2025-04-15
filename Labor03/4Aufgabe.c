#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
/* Prints a specified number of asterisks ('*') based on user input.
 Two numbers (rows, columns) are entered by the user.
 The result should be an unfilled rectangle with <rows> lines of <columns> characters each.
*/

{
    int rows, columns;

    scanf("%d %d", &rows, &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
