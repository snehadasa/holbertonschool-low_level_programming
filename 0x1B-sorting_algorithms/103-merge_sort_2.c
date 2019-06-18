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
 * split_array - divides the whole array into sub arrays and sorts each bit.
 * @array: array to be sorted.
 * @size: size of the given array.
 * Return: void
 */
 split_array(int *array, int size)
{
	int i = 0, j = 0, size1, size2, m = 0;
	int *l_array, *r_array;
	int **result;

	result = malloc(2 * sizeof(int*));

	if (!array || size <= 1)
		return;

	m = (size - 1) / 2;

	size1 = m + 1;
	size2 = size - size1;

	l_array = malloc(size1 * sizeof(int));
	for (i = 0; i < size1; i++)
		l_array[i] = array[i];

	r_array = malloc(size2 * sizeof(int));
	for (j = 0; j < size2; j++)
		r_array[j] = array[size1 + j];

	result[0] = l_array;
	result[1] = r_array;
	return result;
}

int *merge(int *a1, int *a2, int size1, int size2)
{
	int i = 0, j = 0, k = 0, size;
	int *a3;

	size = size1 + size2;
	a3 = malloc(sizeof(int) * (size));

	for (i = 0; k < size; k++)
	{
		if (i >= size1)
		{
			a3[k] = a2[j++];  a2[j]
		}j++
		else if (j >= size2)
		{
			a3[k] = a1[i++];
		}
		else if (a1[i] < a2[j])
		{
			a3[k] = a1[i++];
		}
		else
		{
			a3[k] = a2[j++];
		}
	}
	return (a3);
}

void merge_sort(int *array, size_t size)
{
	int **temp;

	if (!array || size < 2)
		return;

	temp = split_array(array, size);
	merge_sort(temp1, 

	merge
}
