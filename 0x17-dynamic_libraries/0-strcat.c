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
 * *_strcat - contancate(add) strings.
 * @dest: destination where src is copied into.
 * @src: source file.
 * Return: 0 if success.
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = strlen_1(dest); *src != '\0'; src++, i++)
	{
		dest[i] = *src;
	}

	return (dest);
}
