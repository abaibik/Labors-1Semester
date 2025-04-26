#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// returns weekday of the date from the input, using Zeller’s Congruence

int weekday(int day, int month, int year)
{
    if (month < 3)
    {
        month += 12;
        year -= 1;
    }

    int weekdayIndex = (day + (13 * (month + 1)) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    int wDay = ((weekdayIndex + 5) % 7) + 1;

    return wDay;
}

int main()
{
    printf("%d", weekday(29, 04, 2021));
}