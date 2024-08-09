#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits you need
 * to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: bit number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		diff &= (diff - 1);
		count++;
	}

	return (count);
}
