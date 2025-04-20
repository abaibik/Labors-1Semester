#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
/*
Using the formula: DegreesCelsius = 5 * (DegreesFahrenheit - 32) / 9,
displays the temperature in both Celsius and Fahrenheit in table form.

The table shows all values from -20°C to 300°C and their conversion to °F.
The output should be right-aligned.
*/

{
    printf("Fahrenheit      Celsius\n");

    for (int i = -20; i <= 300; i += 20)
    {
        float celsius = 5.0 * (i - 32) /  9;
        printf("       %3d       %6.2f\n", i, celsius);
    }

    return 0;
}
