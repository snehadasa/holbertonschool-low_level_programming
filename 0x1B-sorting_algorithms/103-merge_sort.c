#include "sort.h"

/**
 * merge - merges the sub arrays into main array.
 * @a1: sub array 1
 * @a2: sub array 2
 * @size1: size of sub array 1.
 * @size2: size of sub array 2.
 * Return: void
 */
void merge(int *a1, int *a2, int size1, int size2)
{
	int i = 0, j = 0, k = 0, size;
	int *a3;

	size = size1 + size2;
	a3 = malloc(sizeof(int) * (size));

	printf("Merging...\n");
	printf("[left]: ");
	print_array(a1, size1);
	printf("[right]: ");
	print_array(a2, size2);
	for (i = 0; k < size; k++)
	{
		if (i >= size1)
		{
			a3[k] = a2[j++];  /* a2[j] */
		} /* j++ */
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

	for (i = 0; i < size; i++)
		a1[i] = a3[i];
	printf("[Done]: ");
	print_array(a1, size);
	free(a3);
}

/**
 * merge_sort - merge sort
 * @array: Array to be sorted
 * @size: Size of the array
 * Return: Nothing.
 */
void merge_sort(int *array, size_t size)
{
	int m;

	if (!array || size < 2)
		return;
	m = size / 2;
	merge_sort(array, m);
	merge_sort(array + m,  size - m);
	merge(array, array + m, m, size - m);
}
