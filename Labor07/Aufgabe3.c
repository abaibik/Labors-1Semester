#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Declare an int array of length 4.
Read in a value for each field of the array.
Calculate the sum and the average of the values from input
*/

int main(int argc, char *argv[])
{
    int arr[4];
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = sum / 4.0;

    printf("Summe: %d \nDurchschnitt: %f", sum, avg);

    return 0;
}
