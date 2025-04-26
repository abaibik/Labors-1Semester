#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// returns if the number is prime (1) or not (0)

int prime(int number)
{
    if (number < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        };
    }
    return 1;
}

int main()
{
    printf(prime(85) ? "Primzahl" : "KEINE Primzahl");
}