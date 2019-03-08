#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: lowest value
 * @max: highest value
 * Return: a pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min + 1);

	array = malloc(sizeof(int) * size);

	if (!array)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
