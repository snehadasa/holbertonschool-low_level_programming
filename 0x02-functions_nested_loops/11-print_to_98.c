#include "holberton.h"

/**
 * print_integer - defines n till a 3 digit number.
 * @n: n is an integer.
 * Return: 0 if success
 */
void print_integer(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
	}
	else if (n >= 10 && n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + (n % 100) / 10);
		_putchar('0' + (n % 10));
	}
}

/**
 * print_spaces_except_98 - it prints spaces and comma for integers except 98.
 * @i: i is an integer.
 * Return: 0 if success
 */
void print_spaces_except_98(int i)
{
	if (i != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * print_to_98 - Prints a given number till 98.
 * @n: n is an integer.
 * Return: 0 if success
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_integer(i);
			print_spaces_except_98(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_integer(i);
			print_spaces_except_98(i);
		}
	}
	_putchar('\n');
}
