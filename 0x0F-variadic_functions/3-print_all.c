#include "variadic_functions.h"

/**
 * print_all - prints all the arguments which are in main.
 * ('H', 'O', 'lberton')
 *
 * @format: list of types of arguments passed to the func.
 * (c: char, i: integer, f: float, s: char *)
 * if string is null, print (nil).
 *
 * Return: void(return nothing).
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *sep = "";
	int i;

	va_start(list, format);

	i = 0;

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				/*the sep is printing blank("")for the first letter*/
				break;

			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;

			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;

			case 's':
				printf("%s%s", sep, va_arg(list, char *));
				break;

			default:
				i++; /*incrementing to the next character.*/
				continue; /*going back to the while loop*/
		}
		sep = ", ";
		/*the sep is printing , and space( )for the remaining letters*/
		i++;
	}
	va_end(list);
	printf("\n");
}
