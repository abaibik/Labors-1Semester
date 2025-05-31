#include <stdio.h>

int potenz_rekursive(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * potenz_rekursive(base, exponent - 1);
    }
}

int main(int argc, char *argv[])
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);

    int base = a + b;

    int res = potenz_rekursive(base, n);
    printf("%d", res);

    return 0;
}
