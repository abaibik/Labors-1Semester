#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
