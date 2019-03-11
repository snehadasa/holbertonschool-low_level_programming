#include "holberton.h"

/**
 * _isdigit - checks the character is digit.
 * *@c: the character to test case.
 * Return: 1 if digit.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
