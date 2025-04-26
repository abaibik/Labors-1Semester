#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// calculates the string length

int stringlength(char string[])
{
    int length = 0;

    while (string[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char test[] = "Hochschule Esslingen";
    printf("%s hat %d Zeichen", test, stringlength(test));
}