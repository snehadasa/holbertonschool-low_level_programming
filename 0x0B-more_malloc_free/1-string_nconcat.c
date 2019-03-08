#include "holberton.h"
#include <stdlib.h>
/**
 * strlen_1 - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
unsigned int strlen_1(char *s)
{
	unsigned int i;

	if (s == NULL)
	{
		return (0);
	}

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string.
 * @s2: string to add to first one.
 * @n: no. of bytes.
 * Return: pointer to a newly allocated space in memory, null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, str_len_2;
	char *a;

	str_len_2 = strlen_1(s2);

	if (n >= str_len_2)
	{
		len = strlen_1(s1) + str_len_2 + 1;
	}
	else
	{
		len = strlen_1(s1) + n + 1;
	}

	a = malloc((len + n) * sizeof(char));

	if (!a)
	{
		return (NULL);
	}
	for (i = 0; s1 != NULL && s1[i]; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2 != NULL && s2[j] && j < n; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';

	return (a);
}
