#include <stdio.h>
#include <stdlib.h>

/**
 *countCoins - counts the amount of coints
 *needed to equal the value it is given
 *
 *@value: The value from which we will calculate the
 *amount of change to give back
 *
 *Return: returns the amount of coins counted from change
 */
int countCoins(int value)
{
	int count;

	count = 0;
	for (; value >= 25; count++)
		value -= 25;
	for (; value >= 10; count++)
		value -= 10;
	for (; value >= 5; count++)
		value -= 5;
	for (; value >= 2; count++)
		value -= 2;
	for (; value >= 1; count++)
		value -= 1;
	return (count);
}

/**
 *main - Counts the amount of change in coins needed
 *to equal the amount of value
 *
 *@argc: The amount of arguments in the terminal
 *
 *@argv: The double pointer that points to the string arguments in
 * the terminal
 *
 *Return: Retuns 0 if program is successful else it returns 1
 */
int main(int argc, char *argv[])
{
	int value;
	int ret;

	value = 0;
	ret = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value <= 0)
	{
		printf("0\n");
		return (0);
	}
	ret = countCoins(value);
	printf("%d\n", ret);
	return (0);
}
