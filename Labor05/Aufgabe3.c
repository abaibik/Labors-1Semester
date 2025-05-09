#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Read a string < 40 characters and count all vowels (only a,e,i,o,u, lower and upper case).
*/

int main(int argc, char *argv[])
{
    char string[40];

    if (!fgets(string, sizeof(string), stdin))
        return 0;

    int count = 0;
    for (int i = 0; string[i] != '\n'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||
            string[i] == 'U')
            count++;
    }

    printf("%d Vokale", count);

    return 0;
}
