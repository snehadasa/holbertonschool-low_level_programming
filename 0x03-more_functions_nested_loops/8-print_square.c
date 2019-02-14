#include "holberton.h"

/**
 * print_square - printing #.
 * @size: size is the number of times # has to print.
 * Return: 0 if success.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
