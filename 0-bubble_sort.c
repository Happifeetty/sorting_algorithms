#include "sort.h"
/**
 * bubble_sort - an array of integers in ascending order
 * @array: the array to be sort
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int n;
if (size < 2)
return;
for (i = 0; i < size; i++)
for (j = 0; j < size - 1; j++)
if (array[j] > array[j + 1])
{
n = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
