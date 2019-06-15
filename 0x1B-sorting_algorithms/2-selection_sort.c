#include "sort.h"

/**
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0;

	for (i = 0; i < size && *array; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				min = j;
		}
		swap(&array[min], &array[i]);
		if (i != min)
			print_array(array, size);
	}
}
