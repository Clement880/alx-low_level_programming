#include "function_pointers.h"
/**
 * print_name -the function prints a name
 *
 * @f: string name variable
 * @name: persons name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
