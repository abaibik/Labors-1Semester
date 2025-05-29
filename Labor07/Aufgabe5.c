#include <stdio.h>

/*
1. Define a variable `i` of type `int`
2. Define a pointer `ptr` to int
3. Define a pointer `ptrptr` to an int pointer (i.e. a double pointer)
4. Assign the address of `i` to `ptr`
5. Assign the address of `ptr` to `ptrptr`
6. Assign the value 1 to the variable `i`
7. Output the value of `i`
8. Output the value pointed to by `ptr`, using the dereference operator
9. Assign the value 2 to `i`, via the double pointer `ptrptr` (NOT by writing to directly!)
10. Output the value of `i`
*/

int main(int argc, char *argv[])
{
    int i, *ptr;
    int **ptrptr = &ptr;

    ptr = &i;
    ptrptr = &ptr;
    *ptr = 1;

    printf("%d\n", i);
    printf("%d\n", *ptr);

    **ptrptr = 2;
    printf("%d\n", i);

    return 0;
}
