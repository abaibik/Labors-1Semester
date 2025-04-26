#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
{
    double array[4];

    int i;
    for (i = 0; i < 4; i++)
    {
        scanf("%lf", &array[i]);
    }

    double minNumber = array[0];
    int minIndex = 0;

    for (i = 1; i < 4; i++)
    {
        if (array[i] < minNumber)
        {
            minNumber = array[i];
            minIndex = i;
        }
    }

    printf("Kleinste Zahl: %.1lf an Index %d\n", minNumber, minIndex);

    return 0;
}
