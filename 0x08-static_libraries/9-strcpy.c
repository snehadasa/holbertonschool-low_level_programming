#include "holberton.h"

/**
 * strlen_1 - gives the length of a string.
 * @s: string.
 * Return: 0 if success.
 */
int strlen_1(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);

}

/**
 * *_strcpy - copying a string.
 * @dest: destination where src is copied into.
 * @src: source file.
 * Return: 0 if success.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen_1(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
