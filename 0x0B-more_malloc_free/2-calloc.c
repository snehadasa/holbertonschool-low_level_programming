#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: the number of elements of 'size' bytes each
 * @size: the size in bytes of each element
 * Return: a pointed to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);

	if (!a)
	{
		return (NULL);
	}
	for (i = 0; i <= nmemb; i++)
	{
		a[i] = 0;
	}
	return (a);
}
