#include "main.h"

/**
 * __print_rev_recursion - prints string in reverse
 * @s: the string in question
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
