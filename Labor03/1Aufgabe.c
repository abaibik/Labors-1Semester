#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
// Prints a specified number of asterisks ('*') based on user input

{
    int userNumber;

    scanf("%d", &userNumber);

    for (int i = 0; i < userNumber; i++)
    {
        printf("*");
    }

    return 0;
}
