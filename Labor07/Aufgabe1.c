#include <stdio.h>

/*
1. create a pointer for the variable value that points to value
2. change all uses and changes of value to operations with the pointer
*/

int main(int argc, char *argv[])
{
    int value = 42;
    int *ptr = &value;

    printf("%d\n", *ptr);

    value = 85;
    printf("%d\n", *ptr);

    printf("%d\n", ++*ptr);

    return 0;
}