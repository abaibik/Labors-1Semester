#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
{
    char string[40];

    if (!fgets(string, sizeof(string), stdin))
        return 0;

    int count = 0;
    for (int i = 0; string[i] != '\n'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            count++;
    }

    printf("%d Kleinbuchstaben", count);

    return 0;
}
