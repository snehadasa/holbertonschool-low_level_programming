#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - it gives the sum of all the arguments
 *that are passed from main(n).
 *@n: The number of arguments that are passed(in main)
 *Return: sum of its paramters(n),
 *if n == 0, then it returns 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
