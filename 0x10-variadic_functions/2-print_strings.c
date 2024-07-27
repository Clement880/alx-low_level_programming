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
		if (!str)
			str = "nil";
		if (!separator)
			printf("%s", str);
		else if(separator && vn == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(tf);
}
