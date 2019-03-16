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

		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && str)
		{
			printf("%s%s", str, separator);
		}
		else if (!separator && !str)
		{
			printf("(nil)");
		}
		else if (!str)
		{
			printf("(nil)%s", separator);
		}
	}

		printf("%s\n", va_arg(list, char *));

		va_end(list);
}
