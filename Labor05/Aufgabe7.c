#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Reverse an entered string and output it.
*/
int main()
{
    char string[100];

    scanf("%s", string);

    int stringLength = 0;
    while (string[stringLength] != '\0')
        stringLength++;

    for (int i = stringLength - 1; i >= 0; i--)
        printf("%c", string[i]);

    return 0;
}
