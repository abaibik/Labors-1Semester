#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
/*
Using the formula: DegreesFahrenheit = (DegreesCelsius * 9)/5 + 32,
displays the temperature in both Celsius and Fahrenheit in table form.

The table shows all values from -20°C to 300°C and their conversion to °F.
The output should be right-aligned.
*/

{
    printf("Celsius Fahrenheit\n");

    for (int i = -20; i <= 300; i += 20)
    {
        int fahrenheit = (i * 9) / 5 + 32;
        printf("    %3d        %3d\n", i, fahrenheit);
    }

    return 0;
}
