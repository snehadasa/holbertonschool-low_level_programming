#include "holberton.h"

/**
 * *_strncpy - copy strings.
 * @dest: destination where src is copied into.
 * @src: source file.
 * @n: till n variables.
 * Return: 0 if success.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (i < n)
	{
		for (j = i; j < n; j++)
		{
			dest[j] = '\0';
		}
	}

	return (dest);
}
