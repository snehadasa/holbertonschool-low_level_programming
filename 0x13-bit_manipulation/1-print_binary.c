#include "holberton.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int bit; /*sizeof(n) * 8;size of unsigned long = 8, bit = 64*/
	int count = 0;
	unsigned long int num;

	for (bit = 63; bit >= 0; bit--)
	{
		num = n >> bit;

		if (num & 1) /*&1 is checking for last digit if its 1 or 0*/
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
