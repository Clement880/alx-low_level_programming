#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums up two numbers
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of (a) and (b)
 *
 */
int op_sub(int a, int b)
{
	return(a - b);
}
/**
 * op_mul - multiples a and b
 * @a: the first number
 * @b: the second number
 * Return: multiple of (a) and (b)
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: divison of (a) and (b)
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - mods the division of the prototype
 * @a: the first number
 * @b: the second number
 * Return: the division done by the
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
