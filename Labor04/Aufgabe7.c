#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Calculates the area of a triangle based on its base and height

float triangleArea(float base, float height)
{
    return base * (height / 2);
}

int main()
{
    printf("%.2f", triangleArea(3, 4));
}