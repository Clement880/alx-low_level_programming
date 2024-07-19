#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocator
 * @b: size to be allocated
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	char *t;

	t = malloc(b);

	if (t == NULL)
		exit(98);
	return (t);
}
