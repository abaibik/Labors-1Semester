#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
// The program takes user inputs and outputs them with appropriate labels and formatted display

{
    int i1, i2, i3;

    scanf("%d %d %d", &i1, &i2, &i3);
    printf("Ganze Zahlen: %d, %d, %d \n", i1, i2, i3);

    float f;
    scanf("%f", &f);
    printf("Fliesskommazahl mit Formatangabe: %.2f \n", f);

    // Declaration of a char array s with 100 elements
    char s[100];
    scanf("%s", s);
    printf("Zeichenkette: %s\n", s);
    return 0;
}
