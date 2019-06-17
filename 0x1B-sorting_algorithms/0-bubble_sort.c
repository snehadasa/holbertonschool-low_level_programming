#include "sort.h"

/**
 * bubble_sort - sorting the array using bubble sort.
 * @array: array to be sorted.
 * @size: size of the array.
 * Return: void(nothing)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1 && *array; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
