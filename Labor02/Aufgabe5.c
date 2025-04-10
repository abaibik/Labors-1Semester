#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
/*

The function calculates blood alcohol concentration based on the user's input of sex, weight in gr, alcohol volume in ml and alkohol
procent concentration, and outputs the result with formatted text

 */

{
    char sex;
    int weight, volume, procent;

    scanf("%c %d %d %d", &sex, &weight, &volume, &procent);

    // Get alcohol consumed in grams
    // [Volume (ml) * alcohol by volume (%) converted to fraction by / 100 * density of ethanol (0.8 g/ml)
    float alc_gramm = volume * procent / 100.0f * 0.8;

    float a_d_ratio;

    // Get alcohol distribution ratio, based on biological sex
    if (sex == 'm')
    {
        a_d_ratio = 0.7;
    }
    else if (sex == 'w')
    {
        a_d_ratio = 0.6;
    }
    else
    {
        a_d_ratio = 0.8;
    }

    // Use Widmark formula:
    // [Alcohol consumed in grams / (Body weight in grams x alcohol distribution ratio)]

    float concentration = alc_gramm / (weight * a_d_ratio);

    printf("%.2f Promille", concentration);

    return 0;
}
