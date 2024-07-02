#include "main.h"
/**
 * print_diagonal - print diagonal lines
 * @n: no of inputs
 * Return: (0)
 */
void print_diagonal(int n)
{
	int e, t;
	
	if (n <=0)
		return;
	
	for (e = 0; e < n; e++)
	{
		if (n > 1)
			for (t = 0; t < e; t++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
}
