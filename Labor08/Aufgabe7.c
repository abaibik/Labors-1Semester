#include <stdio.h>

int isPrime(int num, int num2)
{
    if (num < 2)
        return 0;
    else if (num2 == 1)
        return 1;
    else if (num % num2 == 0)
        return 0;
    else
        return isPrime(num, num2 - 1);
}

int main(int argc, char *argv[])
{
    int number = 0;

    if (scanf("%d", &number) != 1)
        return 0;

    int res = isPrime(number, number - 1);
    printf("%d", res);

    return 0;
}
