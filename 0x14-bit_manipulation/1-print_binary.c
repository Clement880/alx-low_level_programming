#include <stdio.h>
#include "main.h"
/**
 * print_bin - prints out recursive binary number
 * representation
 */
void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}
/**
 * print_binary - Prints out binary
 * @n: The decimal to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bin(n);
	}
}
