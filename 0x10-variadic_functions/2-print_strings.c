#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
	va_list tf;
	char *str;
	unsigned int vn;

	va_start(tf, n);

	for (vn = 0; vn < n; vn++)
	{
		str = va_arg(tf, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	if (vn != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(tf);
}
