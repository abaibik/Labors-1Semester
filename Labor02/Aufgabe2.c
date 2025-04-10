#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])

// The program reads a Fahrenheit value, converts it to Celsius and displays both with specific formatting
{
    float fahrenheitGrad, celsiusGrad;
    scanf("%f", &fahrenheitGrad);

    celsiusGrad = (5 * (fahrenheitGrad - 32)) / 9;

    printf("%.1f Grad Fahrenheit = %.1f Grad Celsius", fahrenheitGrad, celsiusGrad);

    return 0;
}
