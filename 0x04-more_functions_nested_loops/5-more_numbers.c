#include "main.h"
/**
 * more_numbers - print 10 times numbers from 0 upto 14
 * Return: (void)
 */
void more_numbers(void)

{
	int t, m;

	for (t = 0; t <= 10; t++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
