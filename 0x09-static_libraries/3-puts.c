#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _puts - prints a string to stdout.
 * @str: string to be printed.
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	return _puts(str);
}
