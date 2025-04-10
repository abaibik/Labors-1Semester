#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
// The function calculates the Body Mass Index based on the user's input of weight in grams and height in centimeters,
// then outputs the result with formatted text

{
    int weight, length;
    float bmi;

    scanf("%d %d", &weight, &length);

    bmi = (weight / 1000.0f) / ((length / 100.0f) * (length / 100.0f));

    printf("Der BMI liegt bei: %.2f!", bmi);

    return 0;
}
