#include "holberton.h"

/**
 * strchr_1 - locates character in string
 * @c: character c to be located for.
 * @s: pointer to a string.
 * Return: returns s.
 */
char strchr_1(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (1);

	}
	return (0);
}

/**
 * _strspn - to find length of prefix substring
 * @s: string to check
 * @accept: number of bytes of prefix
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] && strchr_1(accept, s[i]); i++)
		;
	return (i);

}
