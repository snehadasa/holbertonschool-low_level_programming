#include "holberton.h"

/**
 * _abs - printing absolute value.
 * *@c: integer to print.
 * Return: absolute value of a number.
 * on error,-1 is returned.
 */

int _abs(int c)
{
	int n;

	if (c < 0)
	{
		n = (c * -1);
		return (n);
	}
	else
	{
		return (c);
	}

}

