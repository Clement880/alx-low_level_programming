#include "main.h"
/**
 * print_diagonal - a code that prints diagonal lines
 *
 * @n: number of inputs
 */
void print_diagonal(int n)
{
	int e, t;

	for (e = 0; e < n; e++)
	{
		if (n > 1)
			for(t = 0; t < e; t++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
