#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit_f = 0;
	int i;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			bit_f = 1;
		}
			else if (bit_f)
			{
				 putchar('0');
			}
	}
	if (!bit_f)
	putchar('0');
}
