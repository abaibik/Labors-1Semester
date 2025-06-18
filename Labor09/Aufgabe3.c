#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int *my_read(int *size)
{
    scanf("%d", size);

    int *array = (int *)malloc((*size) * sizeof(int));

    for (int i = 0; i < *size; i++)
    {
        scanf("%d", &array[i]);
    }

    return array;
}

void my_sort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void my_print(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d: %d ", i + 1, array[i]);
    }
    printf("\n");
}

int main(void)
{
    int count;
    int *numbers = my_read(&count);

    my_sort(numbers, count);
    my_print(numbers, count);

    return 0;
}
