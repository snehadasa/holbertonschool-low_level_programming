#include "holberton.h"

/**
 * _puts - prints a string.
 * @str: string.
 * Return: 0 if success.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
