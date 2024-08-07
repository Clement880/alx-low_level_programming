#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - memory allocator
 * @b: size to be allocated
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
