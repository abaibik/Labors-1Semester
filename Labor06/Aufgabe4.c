#include <stdio.h>

/*
Append a string to a 2nd string
*/

void append(char *dest, char *src)
{
    if (dest == NULL || src == NULL)
        return;

    char *ptr = dest;

    while (*ptr != '\0')
        ptr++;

    while (*src != '\0')
    {
        *ptr++ = *src++;
    }

    *ptr = '\0';
}

int main()
{
    char buffer[40] = "Hallo ";
    append(buffer, "Welt");
    printf("%s\n", buffer);
}