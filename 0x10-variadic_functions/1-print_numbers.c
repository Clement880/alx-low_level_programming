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
	unsigned int t;
	
	va_list list;

	va_start(list, n);

	for (t = 0; t < n; t++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && t == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}
