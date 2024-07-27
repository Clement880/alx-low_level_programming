#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Return sum of all to its parameters
 * @n: parameters to be passed to the function
 * @...: variable of parameters to calculate the sum of
 * Return: if n == (0) - (0)
 *
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list tf;
	unsigned int l, sum = 0;

	va_start(tf, n);

	for (l = 0; l < n; l++)
		sum += va_arg(tf, int);

	va_end(tf);

	return (sum);
}
