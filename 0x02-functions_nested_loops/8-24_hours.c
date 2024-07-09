#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 *
 * Return: ...
 */
void jack_bauer(void)
{
	int t, e, f, l;

	for (t = 0; t <= 2; t++)
	{
	for (e = 0; e <= 9; e++)
	{
	if ((t <= 1 && e <= 9) || (t <= 2 && e <= 3))
	{
	for (f = 0; f <= 5; f++)
	{
	for (l = 0; l <= 9; l++)
	{
	_putchar(t + '0');
	_putchar(e + '0');
	_putchar(58);
	_putchar(f + '0');
	_putchar(l + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
