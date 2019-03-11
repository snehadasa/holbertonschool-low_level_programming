#include "holberton.h"

/**
 * strchr_1 - locates character in string
 * @c: character c to be located for.
 * @s: pointer to a string.
 * Return: returns true if it matches.
 */
char strchr_1(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (1);
		}

	}
	return (0);
}

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
		if (strchr_1(accept, s[i]))
		{
			return (s + i);
		}
	}
	return (NULL);
}
