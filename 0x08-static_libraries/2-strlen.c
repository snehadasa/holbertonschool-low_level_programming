#include "holberton.h"

/**
 * _strlen - gives the length of a string.
 * @s: string.
 * Return: 0 if success.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);

}
