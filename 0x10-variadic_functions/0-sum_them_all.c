#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters passed to the function
 * @n: arguments to be passed to the sum
 * Return: the (sum)
 *
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int sum = 0;
	unsigned int t;

	va_list list;
	
	va_start(list, n);
	
	for (t = 0; t < n; t++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
