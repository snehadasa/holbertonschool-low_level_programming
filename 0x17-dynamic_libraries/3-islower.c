#include "holberton.h"

/**
 * _islower - printing the lowercse character.
 * *@c: the character to test case.
 * Return: 1 if lowercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

