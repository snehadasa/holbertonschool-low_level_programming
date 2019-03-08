#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string.
 * @s2: string to add to first one.
 * @n: no. of bytes.
 * Return: pointer to a newly allocated space in memory, null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *a;


	for (i = 0; s1[i] && s1 != NULL; i++)
		;
	for (j = 0; s2[j] && s2 != NULL; j++)
		;

	if (n > j)
	{
		n = j;
	}

	a = malloc((i + j + 1) * sizeof(char));

	if (!a)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		a[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		a[k + j] = s2[k];
	}
	a[i + j] = 0;

	return (a);
}
