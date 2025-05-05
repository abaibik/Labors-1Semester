#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
{
    char string[41];
    int shift = 'a' - 'A';  // 32 in ASCII

    if (!fgets(string, sizeof(string), stdin))
        return 0;

    for (int i = 0; string[i]; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] -= shift;

        else if (string[i] >= 'A' && string[i] <= 'Z')
            string[i] += shift;
    }

    printf("%s", string);

    return 0;
}
