#include "variadic_functions.h"

/**
 * print_numbers - prints numbers which are in the main
 * that is addressed here by the constant variable n.
 *
 * @separator: it is a string to be printed between numbers.
 *
 * @n: number of integers passed to the function.
 *
 * Return: void(return nothing).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int num;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);

		if (i != (n - 1) && separator)
		{
			printf("%d%s", num, separator);
		}
		else
		{
			printf("%d", num);
		}

	}

	printf("\n");


	va_end(list);
}
