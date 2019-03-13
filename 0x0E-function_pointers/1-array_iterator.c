#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function on each element of the array
 * and inserts array index to a function pointer named action.
 * @array: given array.
 * @size: size of the array.
 * @action: it is a pointer to the function.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
