#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Read in a string <=40 characters and output a part of it.
The part is defined by two indices (from/to, incl.).
*/

int main()
{
    char string[41];
    int startIndex, endIndex;

    if (scanf("%40s %d %d", string, &startIndex, &endIndex) != 3)
        return 0;

    int stringLength = 0;
    for (int i = 0; string[i] != '\0'; i++)
        stringLength += 1;
    if (startIndex < 0 || startIndex > endIndex || endIndex >= stringLength)
        return 0;

    printf("%s %d-%d: ", string, startIndex, endIndex);

    for (int i = startIndex; i <= endIndex; i++)
        printf("%c", string[i]);

    return 0;
}
