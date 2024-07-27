#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print parameters given as numbers
 * @seperator: string printed between numbers
 * @n: number of arguments passed into function
 * @...: number variable of numbers to be printed 
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list barz;
	unsigned int tf;

	va_start(barz, n);

	for (tf = 0; tf < n; tf++)
	{
		printf("%d", va_arg(barz, int));

	if (tf != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end (barz);
}
