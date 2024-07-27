#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h> 

/**
 * print_strings - prints some strings followed by a new line
 * @...: variable of strings to be printed
 * @n: strings passed on to the function
 * @separator:string to be printed inbetween strings
 *
 * Description: separator will not print if it is NULL
 * if one string is NULLL, (nil) will be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *str;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	str = va_arg(args, const char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}

