#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
	{
		return (0);
	}

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - concatenates all arguments to one string
 * @ac: the argument count
 * @av: the argument array
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j = 0, k = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		len += _strlen(av[i]);
	}

	p = malloc(sizeof(char) * (len + ac));

	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
