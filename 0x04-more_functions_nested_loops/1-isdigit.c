#include "main.h"

/**
 * _isdigit _check if the parameter is a digit or character
 *
 * @c: parameter
 *
 * Return: (1) if its a digit and (0) otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
