#include "holberton.h"

/**
 * strchr_1 - locates character in string
 * @c: character c to be located for.
 * @s: pointer to a string.
 * Return: returns true if it matches.
 */
char strchr_1(char *s, char *c)
{
	while (*s && *c)
	{
		if (*s != *c)
			return (0);
		s++;
		c++;
	}

	return (1);
}

/**
 * _strstr - searches string for a substring
 * @haystack: string to search for needle
 * @needle: the substring to find
 * Return: pointer to first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (needle[0] == '\0')
		return (haystack);

	while (*haystack)
	{
		if (strchr_1(haystack, needle))
			return (haystack);
		haystack++;
	}
	return ('\0');
}
