#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: is the pointer
 * @to: the char.
 * Return: everytime (0) on success
 */
void set_string(char **s, char *to)
{
	*s = to;
}
