#include "sort.h"

/**
 * swap - function for swapping using temporary variable.
 * @a: node a
 * @b: node b;
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Selection sort
 * @array: Array to be sorted
 * @size: Size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0;

	if (!array || size == 1)
	{
		return;
	}

	for (i = 0; i < size && *array; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		swap(&array[min], &array[i]);
		if (i != min)
			print_array(array, size);
	}
}
