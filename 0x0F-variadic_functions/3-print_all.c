#include "variadic_functions.h"

/**
 * print_all - prints all the arguments which are in main.
 * ('H', 'O', 'lberton')
 * @format: list of types of arguments passed to the func.
 * (c: char, i: integer, f: float, s: char *)
 * if string is null, print (nil).
 * Return: void(return nothing).
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *sep = "", *str;
	int i = 0;

	va_start(list, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				/*sep is printing ("")for first letter*/
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				break;
			default:
				i++; /*incrementing to next character.*/
				continue; /*going back to while loop*/
		}
		sep = ", "; /*sep is printing,& space( )for remaining letters*/
		i++;
	}
	printf("\n");
	va_end(list);
}
