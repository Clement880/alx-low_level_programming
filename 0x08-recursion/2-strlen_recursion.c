#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: is the string we count
 *
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s)
	{
		t++;
		t += _strlen_recursion(s + 1);
	}

	return (t);
}
