#include "main.h"
/**
 * print_square - print square using #
 *
 * @size: no of # square
 */
void print_square(int size)
{
	int e, t;

	if (size > 0)
	{
		for (e = 0; e < size; e++)
		{
			for (t = 0; t < size; t++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
