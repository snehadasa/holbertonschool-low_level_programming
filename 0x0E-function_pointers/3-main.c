#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * main - starting point.
  * @argc: number of arguments that are passed to the program.
  * @argv: array of passed arguments.
  * Return: 0 on success, 98 on passing wrong num of arguments,
  * 99 if some other operator is passed other than given below,
  * 100 if is divided or mod be 0.
  */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (get_op_func(argv[2])(num1, num2)));
	return (0);
}

