#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the size, in bytes, of the new memomry block
 * Return: a pointer to the array, or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *s, *ptr;

	if (!ptr)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (!new_size)
	{
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
