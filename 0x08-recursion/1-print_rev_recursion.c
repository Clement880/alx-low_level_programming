#include "main.h"

/**
 * __print_rev_recursion - prints string in reverse
 * @s: the string in question
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion (s + 1);
		_putchar (*s);
	}
}
