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
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
