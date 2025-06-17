#include <stdio.h>

typedef struct
{
    int num;
    int den;
} Fraction;

Fraction multiplyFractions(Fraction a, Fraction b)
{
    Fraction res;

    res.num = a.num * b.num;
    res.den = a.den * b.den;

    return res;
}

Fraction divideFractions(Fraction a, Fraction b)
{
    Fraction res;

    res.num = a.num * b.den;
    res.den = a.den * b.num;

    return res;
}

void printFraction(Fraction c)
{
    printf("(%.1f/%.1f)", (float)c.num, (float)c.den);
}

int main(int argc, char *argv[])
{
    Fraction num1, num2;

    scanf("%d/%d", &num1.num, &num1.den);
    scanf("%d/%d", &num2.num, &num2.den);

    Fraction product = multiplyFractions(num1, num2);
    Fraction quotient = divideFractions(num1, num2);

    printFraction(num1);
    printf("*");
    printFraction(num2);
    printf("=");
    printFraction(product);
    printf("\n");

    printFraction(num1);
    printf("/");
    printFraction(num2);
    printf("=");
    printFraction(quotient);
    printf("\n");

    return 0;
}
