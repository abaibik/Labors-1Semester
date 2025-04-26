#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Calculates BMI based on weight (in kilograms) and height (in centimeters) from input

float bmi(int weight, int height)
{
    float height_in_m = height / 100.0;
    return weight / (height_in_m * height_in_m);
}

int main()
{
    printf("%dkg und %fm = %.2lf", 85, 1.5, bmi(85, 150));
}