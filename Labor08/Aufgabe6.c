#include <stdio.h>

char getFirstCapitalLetter(const char *s)
{
    if (*s == '\0')
    {
        return ' ';
    }

    else if (*s >= 'A' && *s <= 'Z')
    {
        return *s;
    }
    else
        return getFirstCapitalLetter(s + 1);
}

int main(int argc, char *argv[])
{
    char str[100];

    if (scanf("%99s", str) != 1)
    {
        return 0;
    }

    char cap = getFirstCapitalLetter(str);

    printf("%c", cap);

    return 0;
}
