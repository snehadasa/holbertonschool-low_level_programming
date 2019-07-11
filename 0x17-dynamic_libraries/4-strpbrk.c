#include "holberton.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to find
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_strchr(accept, s[i]))
		{
			return (s + i);
		}
	}
	return ('\0');
}
