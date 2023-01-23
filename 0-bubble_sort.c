#include "sort.h"

/**
 *bubble_sort- sort array in ascending order
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
size_t i, nSize = size;
int temp, flag;

if (array == NULL || size < 2)
		return;

while (nSize)
{
flag = 0;
for (i = 0; i < nSize - 1; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
flag = 1;
}
}
nSize--;
if (!flag)
break;
}
}
