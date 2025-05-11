#include <stdio.h>

/*
Convert a string to uppercase by pass-by-reference
*/

void toUpper(char *string)
{
    int i = 0;
    while (string[i] != '\0')
    {

        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] += 'A' - 'a';
        i++;
    }
}

int main()
{
    char arr[] = "Hallo Welt";
    toUpper(arr);
    printf("%s\n", arr);
}