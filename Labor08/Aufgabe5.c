#include <stdio.h>

double compute_series(double a, double x, int n)
{
    double res = a + 2.0 * n * x;
    if (n == 1)
    {
        return res;
    }
    else
        return res + compute_series(a, x, n - 1);
}

int main(int argc, char *argv[])
{
    double a, x;
    int n;

    scanf("%lf %lf %d", &a, &x, &n);
    double res = compute_series(a, x, n);

    printf("%.1f", res);

    return 0;
}
