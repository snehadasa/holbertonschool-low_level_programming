#include "holberton.h"

/**
 * binary_to_uint - converts binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars.
 * Return: converted number or 0 if there is one or more chars
 * in string b(i.e., not 0 and 1); b if NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, k;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		k = b[i] - '0';
		result = 2 * result + k;
	}
	return (result);
}
