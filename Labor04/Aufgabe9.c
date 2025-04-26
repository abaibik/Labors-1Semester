#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Using the formula: DegreesCelsius = 5 * (DegreesFahrenheit - 32) / 9,
// converts the temperature from Fahrenheit to Celsius

float celsius(int fahrenheit)
{
    return 5.0 * (fahrenheit - 32) / 9;
}

int main()
{
    printf("%dF = %.1fC", 20, celsius(20));
}