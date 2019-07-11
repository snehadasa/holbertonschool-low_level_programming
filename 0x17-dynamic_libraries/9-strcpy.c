#include "holberton.h"

/**
 * *_strcpy - copying a string.
 * @dest: destination where src is copied into.
 * @src: source file.
 * Return: 0 if success.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = _strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
