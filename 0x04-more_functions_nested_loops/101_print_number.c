#include "main.h"
/**
 * *print_number - print integer
 * @n: parameter, integer value/ input
 *
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_puthar(45);
		i = -i;
	}
	if (i /10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
