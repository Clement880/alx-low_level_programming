#include "main.h"
/**
 * _abs - computes the value of an integer.
 * @c: the int to be computed.
 * Return: the absolute value of the number or zero
 *
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
