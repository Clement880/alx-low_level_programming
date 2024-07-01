#include "main.h"

/**
 * _isupper - check if its an upper case letter
 *
 * @c: input the character
 *
 * Return: (1) for upper letter or (0) for anything else
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
