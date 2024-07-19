#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to be checked
 * Return: (1) if c is found and return (0) iff its not
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
