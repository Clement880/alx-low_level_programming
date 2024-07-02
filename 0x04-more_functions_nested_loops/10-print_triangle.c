#include "main.h"

/**
 * print_triangle - print a triangle of squares using #
 * @size: Size of the squares triangle
 *
 */

void print_triangle(int size)
{
	int e, x;

	if (size > 0)
	{
	for (e = 0; e < size; e++)
	{
	for (x = 0; x < size; x++)
	{
	if (x < size - (e + 1))
	{
		_putchar(' ');
	}
	else
	{
		_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
