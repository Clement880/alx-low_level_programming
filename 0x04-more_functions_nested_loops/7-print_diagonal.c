#include "main.h"
/**
 * print_diagonal - print diagonal lines
 * @n: no of inputs
 * Return: (0)
 */
void print_diagonal(int n)
{
	int e, t;
	
	if (n <= 0)
	{
	_putchar('\n');
	}
	else 
	{
	for (e = 0; e < n; e++)
	{
	for (t = 0; t < e; t++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
