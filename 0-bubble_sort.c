#include "sort.h"
/**
 * bubble_sort - sort an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: data to sort
 * @size: the size of data
 *
 * Return: No Return
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int tmp;
if (size < 2)
return;
for (i = 0; i <= size - 1; i++)
{
for (j = 0; j <= size - 2; j++)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
}
}
}
}
