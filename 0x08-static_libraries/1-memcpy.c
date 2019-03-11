#include "holberton.h"

/**
 *_memcpy - Copies from src to dest
 *@dest: The pointer that points to the address in dest
 *@src: The pointer that points to the address in src
 *@n: The n bytes of memory area in src
 *Return: returns value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
