#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print parameters given as numbers
 * @seperator: string printed between numbers
 * @n: number of arguments passed into function
 * 
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t, arr;
	
	va_list ptr;

	va_start(ptr, n);

	for (t = 0; t < n; t++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (t != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
