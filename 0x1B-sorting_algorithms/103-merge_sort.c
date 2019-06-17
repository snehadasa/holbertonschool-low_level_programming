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
 * merge_sort - divides the whole array into sub arrays and sorts each bit.
 * @array: array to be sorted.
 * @size: size of the given array.
 * Return: void
 */
void divide_and_merge(int *array, int l, int m, int r)
{
	int i = 0, j = 0, k = 0, size1, size2;
	int *l_array, *r_array;
	if (!array)
		return;

	size1 = m - l + 1;
	size2 = r - m;

	l_array = malloc(size1 * sizeof(int));
	for (i = 0; i < size1 && *l_array; i++)
		l_array[i] = array[i + 1];

	r_array = malloc(size2 * sizeof(int));
	for (j = 0; j < size1 && *r_array; j++)
		r_array[j] = array[j + 1];

	i = 0;
	j = 0;
	k = l;

	while(i < size1 && j < size2)
	{
		if (l_array[i] <= r_array[j])
		{
			array[k] = l_array[i];
			i++;
		}

		else
		{
			array[k] = r_array[j];
			j++;
		}
		k++;
	}

	while (i < size1)
	{
		array[k] = l_array[i];
		i++;
		k++;
	}

	while (j < size2)
	{
		array[k] = r_array[j];
		j++;
		k++;
	}
}

void merge(int *array, int l, int r)
{
	int m;

	if (l < r)
	{
		m = l + (r - 1) / 2;

		merge(array, l, m);
		merge(array, m + 1, r);

		divide_and_merge(array, l, m, r);
	}
}

void merge_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	merge_sort(array, size);
}
