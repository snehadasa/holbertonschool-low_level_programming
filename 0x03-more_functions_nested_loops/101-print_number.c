#include "holberton.h"

/**
 *print_number - prints any given integer from n
 *This function uses recursion to print any possible number
 *
 *@n: The given integer to print
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	else if (n < 0 && n > -2147483648)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n >= 10 && n <= 2147483647)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
