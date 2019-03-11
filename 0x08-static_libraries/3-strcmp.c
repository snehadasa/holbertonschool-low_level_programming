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
 * _strcmp - comparison of two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == '\0')
		{
			break;
		}
	}
	return (0);
}
