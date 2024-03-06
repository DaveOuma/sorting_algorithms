#include <stdio.h>
#include "sort.h"

/**
 * print_array - Prints the elements of an integer array.
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    if (array == NULL || size == 0)
    {
        printf("Empty array.\n");
        return;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}

