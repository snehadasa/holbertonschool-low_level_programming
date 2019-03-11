#include "holberton.h"

/**
 **leet - capitalizes a string to leet speak
 *@str: the string to be converted
 *Return: the converted string
 */

char *leet(char *str)
{
	int i, j;
	char arr[] = {'a', 'A', '4', 'e', 'E', '3', 'o',
		'O', '0', 't', 'T', '7', 'l', 'L', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 2; j < sizeof(arr); j += 3)
		{
			if (str[i] == arr[j - 1] || str[i] == arr[j - 2])
			{
				str[i] = arr[j];
			}
		}
	}
	return (str);
}
