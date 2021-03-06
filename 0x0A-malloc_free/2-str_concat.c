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
 * str_concat - concatenates two strings
 * @s1: first string.
 * @s2: string to add to first one.
 * Return: pointer to a newly allocated space in memory, null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len;
	char *a;

	len = _strlen(s1) + _strlen(s2) + 1;

	a = malloc(len * sizeof(char));

	if (!a)
	{
		return (NULL);
	}
	for (i = 0; s1 != NULL && s1[i]; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2 != NULL && s2[j]; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';

	return (a);
}
