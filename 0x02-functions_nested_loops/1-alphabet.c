#include "holberton.h"

/**
 * print_alphabet - Prints alphabets a-z
 * return.
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
