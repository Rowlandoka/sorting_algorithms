#include "sort.h"

/**
 * selection_sort- sort array in ascending order
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
    size_t i, j;
    int index = 0, min, temp;

    if (array == NULL || size < 2)
         return;

    for (i = 0; i < size - 1; i++)
    {
        min = array[i];
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                index = j;
            }
        }
        if (min != array[i])
        {
            temp = array[i];
            array[i] = index;
            array[index] = temp;
            print_array(array, size);
        }
    }
}
