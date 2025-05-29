#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Declare an int array of length 4.
Read a value into each element of the array.
Create a pointer to the element at index 2.
Print all elements of the array.
Change the value of the object pointed to by the pointer to 42.
Print all elements of the array again.
*/

int main(int argc, char *argv[])
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }

    printf("\n");

    int *ptr = &arr[2];
    *ptr = 42;

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
