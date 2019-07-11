#include "holberton.h"

/**
 * _isupper - checks the uppercase character.
 * *@c: the character to test case.
 * Return: 1 if uppercase.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
