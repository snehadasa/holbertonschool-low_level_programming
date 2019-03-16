#include "variadic_functions.h"

/**
 * print_strings - prints strings from main(n)
 * @separator: separator between strings
 * @n: number of arguments that are to be printed from main
 * Return: void(return nothing)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
