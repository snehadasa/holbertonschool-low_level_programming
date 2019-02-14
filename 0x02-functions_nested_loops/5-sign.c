#include "holberton.h"

/**
 *  print_sign - is the number positive, zero or negative.
 * *@n: integer.
 * Return: 1, 0, -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
