#include <stdio.h>

/**
 *main - This program searches for a the largest prime
 *factor of 612852475143
 *
 *Return: Returns 0 if program is succesfull
 */
int main(void)
{
	long int num;
	long int div;

	div = 2;
	num = 612852475143;
	while (num != 1)
	{
		if (num % div == 0)
			num /= div;
		else if (num % div != 0)
			div++;
	}
	printf("%ld\n", div);
	return (0);
}
