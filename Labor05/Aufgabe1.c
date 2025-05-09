#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Read values from the keyboard into an array of 4 double components.
Determine which component has the smallest value and display the index of the component and its value on the screen
*/

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
