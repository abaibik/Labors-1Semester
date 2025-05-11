#include <stdio.h>

/*
Receive two pointers and write the string pointed to by the second pointer to the location pointed to by the first pointer
*/

char *ownStrcpy(char *string_copy, char *string)
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
        string_copy[i] = string[i];

    string_copy[i] = '\0';

    return string_copy;
}

int main()
{
    char originalString[] = "Programmieren";
    char copiedString[40];
    ownStrcpy(copiedString, originalString);
    printf("%s", copiedString);
}