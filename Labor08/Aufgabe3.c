#include <stdio.h>

int input(void)
{
    int n;
    scanf("%d", &n);
    return n;
}

int faculty(int n)
{

    if (n < 2)
    {
        return 1;
    }
    else
    {
        return (int)n * faculty(n - 1);
    }
}

int main(int argc, char *argv[])
{
    int num = input();
    int res = faculty(num);
    printf("%d! = %d", num, res);

    return 0;
}
