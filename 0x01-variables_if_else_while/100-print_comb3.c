#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing all numbers from 00 to 99..
 * Return: 0 if success.
*/

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i+1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
