#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocator
 * @b: size to be allocated
 *
 * Return: pointer to the given memory
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(98);
    }
    return (ptr);
}
