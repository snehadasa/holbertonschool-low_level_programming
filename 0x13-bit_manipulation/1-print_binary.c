#include "holberton.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8; /*size of unsigned long = 8*/
	int count = 0;

	while (bit)
	{
		if (n >> bit & 1) /*by doing &1 we are checking for last digit
			       if its 1 or 0*/
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
