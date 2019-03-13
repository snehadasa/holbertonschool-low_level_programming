#include "function_pointers.h"

/**
 * int_index - searches for an integer in the given array
 * and inserts the array in cmp function.
 *
 * @array: given array.
 *
 * @size: number of elemnts in the array which is of the type int.
 *
 * @cmp: function pointer to the array used to compare values.
 *
 * Return: returns the index of first element for which cmp function
 * does not return 0. if no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
