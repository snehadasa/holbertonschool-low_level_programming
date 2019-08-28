#include "search_algos.h"

/**
 * print_array - prints array
 * @array: array is a pointer to the first element  to print.
 * @l: first element of the array. l = 0;
 * @r: last element of the array. r = size - 1.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i == r)
			printf("\n");
		else
			printf(", ");
	}
}
/**
 * binary_search - function that searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: array is a pointer to the first element of the array to search.
 * @size: size is the number of elements in array.
 * @value: value is the value to search for
 * Return: return the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (!array)
		return (-1);

	l = 0;
	r = size - 1;
	/*m = (l + r) / 2;*/

	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;

		if (array[m] == value)
			return (m);
		if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}
