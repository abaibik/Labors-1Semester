#include <stdio.h>
#define PI 3.1415

/*
Сalculate the volume and the surface area of a sphere
*/

void sphere(int radius, double *out_volume, double *out_surface)
{
    *out_volume = (4.0 / 3.0) * PI * radius * radius * radius;
    *out_surface = 4.0 * PI * radius * radius;
}

int main()
{
    int radius = 5;
    double volume, surface;
    sphere(radius, &volume, &surface);
    printf("Radius: %d\nVolumen: %.1lf\nOberflaeche %.1lf\n", radius, volume, surface);
}