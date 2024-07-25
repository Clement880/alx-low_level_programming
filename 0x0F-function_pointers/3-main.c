#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - calculates functions on command line
 * @argc: argument count
 * @argv: argument vector
 * Return: calculated results of function execution calc
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);
	int num1, num2;
	char *operation;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = argv[2];

	if (strlen(operation) != 1 || (operation[0] != '+' && operation[0] != '-' &&operation[0] != '*' && operation[0] != '/'))
	{
	printf("Error\n");
	exit(99);
	}

	switch (operation[0])
	{
		case '+':
		oprt = &add;
		break;
		case '-':
		oprt = &sub;
		break;
		case '*':
		oprt = &mul;
		break;
		case '/':
		oprt = &div;
		break;
		default:
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(num1, num2));
	return (0);
}

