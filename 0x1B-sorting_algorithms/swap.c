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
