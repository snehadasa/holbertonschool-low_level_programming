#include "holberton.h"

/**
 * _atoi - converts string to an integer.
 * @s: string.
 * Return: 0 if success.
 */
int _atoi(char *s)
{
	int i;
	int sign = 1;
	int flag = 0;
	int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result =  result * 10 + sign * (s[i] - '0');
		}
		else if (flag == 1)
		{
			flag = 2;
		}
	}
	return (result);
}
