#include "main.h"

/**
 * factorial -calculates the factorial of a number
 * @n: the number to return the factorial from
 *
 * Return: factor of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
