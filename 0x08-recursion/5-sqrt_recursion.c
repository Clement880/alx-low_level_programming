#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the root from
 * @i: iterator
 *
 * Return: resultant square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (i = i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}

/**
 * actual_sqrt_recursion - recurses to locate the natural square
 * root of a number
 * @n: number to be calculated for root
 * @i: iterator
 *
 * Return: the resultant square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
