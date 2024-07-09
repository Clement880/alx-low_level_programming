#include "main.h"
/**
 * print_times_table - prints the times table of the input
 * start with 0.
 * @n: the value of the table to be printed
 */
void print_times_table(int n)
{
	int m, t, p;

	if (n >= 0 && n <= 15)
	{
	for (m = 0; m <= n; m++)
	{
	_putchar('0');
	for (t = 1; t <= n; t++)
	{
	_putchar(',');
	_putchar(' ');
	p = m * t;
	if (p <= 99)
	_putchar(' ');
	if (p <= 9)
	_putchar(' ');
	if (p >= 100)
	{
	_putchar((p / 100) + '0');
	_putchar(((p / 10)) % 10 + '0');
	}
	else if (p <= 99 && p >= 10)
	{
	_putchar((p / 10) + '0');
	}
	_putchar((p % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
