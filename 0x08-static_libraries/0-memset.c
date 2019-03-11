#include "holberton.h"

/**
 * _memset - Fills the first n bytes of memory area pointed by s with byte b
 * @s: The pointer that points to the array's address
 * @b: The constant byte that will be inserted in the array
 * @n: The byte size of the memory area
 * Return: returns the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
