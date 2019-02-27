#include "holberton.h"

/**
 * _puts_recursion - prinys a string.
 * @s: sting.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	_puts_recursion(++s);
}