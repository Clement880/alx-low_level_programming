#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: char to be checked
 *
 * Return: if uppercase return (1), else if return (0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);

	return (0);
}
