#include "holberton.h"

/**
 *  _isalpha - is the character alphabet.
 * *@c: the character to test case.
 * Return: 1 if alphabet.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

