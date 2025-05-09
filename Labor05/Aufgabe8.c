#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Calculate the grade point average.
You will be given several numbers.
Read in the numbers until you have received a maximum of 10 grades.
Stop reading in if you receive an invalid grade (< 1.0 or > 6.0).
*/

int main()
{
    float grades[10], sum = 0.0, result;
    int count = 0;

    while (count < 10 && scanf("%f", &grades[count]) == 1 && grades[count] >= 1.0 && grades[count] <= 6.0)
    {
        count++;
    }

    for (int i = 0; i < count; i++)
        sum += grades[i];

    result = (count > 0) ? sum / count : 0.0;

    printf("Durchschnitt (N=%d): %.2f", count, result);

    return 0;
}
