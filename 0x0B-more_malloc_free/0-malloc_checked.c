#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: character to initialize array.
 * Return: NULL if size = 0, pointer to the array or NULL if it fails.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
