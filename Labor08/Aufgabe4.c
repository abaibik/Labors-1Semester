#include <stdio.h>

double compute_series(double a, double x, int n)
{
    double res = 0.0;
    for (int i = 1; i <= n; i++)
    {
        res += a + 2.0 * i * x;
    }
    return res;
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
