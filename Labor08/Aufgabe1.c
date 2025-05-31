#include <stdio.h>

int potenz_iter(int base, int exponent)
{
    int res = 1;

    for (int i = 0; i < exponent; i++)
    {
        res *= base;
    }

    return res;
}

int main(int argc, char *argv[])
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);

    int base = a + b;

    int res = potenz_iter(base, n);
    printf("%d", res);

    return 0;
}
