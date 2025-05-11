#include <stdio.h>

/*
Calculate and return the minimum of a integer sequence.

size_t is the unsigned integer type of the result of sizeof, offsetof etc., depending on the data model.
It can store the maximum size of a theoretically possible object of any type (including array).
*/

int minimum(int *array, size_t array_length)
{

    int min = array[0];

    for (int i = 1; i < array_length; i++)
    {
        min = array[i] < min ? array[i] : min;
    }
    return min;
}

int main()
{
    int numbers[] = {4, 6, 9, 5};
    printf("%d", minimum(numbers, 4));
}