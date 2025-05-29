#include <stdio.h>

/*
1. Create a pointer to the variable `value`
2. Change all uses and modifications of value so that the pointer is used instead.
*/

int main(int argc, char *argv[])
{
    int value = 42;
    int *ptr = &value;

    printf("%d\n", *ptr);

    *ptr = 85;
    printf("%d\n", *ptr);

    printf("%d\n", ++*ptr);

    return 0;
}