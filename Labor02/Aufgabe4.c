#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
/* The function calculates BMI based on the user's input of weight in grams and height in centimeters,
 like the previous one in Aufgabe 3.

 Then it determines which BMI (underweight, normal or overweight) the value falls into
 and outputs the result with formatted text
 */

{
    int weight, height;

    scanf("%d %d", &weight, &height);

    float bmi = (weight / 1000.0f) / ((height / 100.0f) * (height / 100.0f));

    if (bmi <= 18.4)
    {
        printf("Untergewicht %.1f", bmi);
    }
    else if (bmi >= 24.89)
    {
        printf("Uebergewicht %.1f", bmi);
    }
    else
    {
        printf("Normalgewicht %.1f", bmi);
    }

    return 0;
}
