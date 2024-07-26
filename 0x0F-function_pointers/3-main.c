#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates functions on command line
 * @argc: argument count
 * @argv: argument vector
 * Return: calculated results of function execution calc
 */
int main(int argc, char *argv[])
{
	char *ops;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ops = atoi(argv[2]);

	if (get_op_func(ops) == NULL || ops[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ops == '/' && num2 == 0) || (*ops == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_function(ops)(num1, num2));

	return (0);
}

