#include "holberton.h"

/**
 * *_strncat - contancate(add) strings.
 * @dest: destination where src is copied into.
 * @src: source file.
 * @n: till n variables.
 * Return: 0 if success.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = _strlen(dest), j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
