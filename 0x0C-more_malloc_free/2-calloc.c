#include "main.h"
/**
 * _calloc - allocates memory for an array of @nmemb elements
 * @size bytes and returns a pointer to the allocated memory
 *
 * @nmemb: number of elements in an array
 * @size: allocates size bytes
 *
 * Return: pointer to the memory that is allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int v;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (v = 0; v < (nmemb * size); v++)
		t[v] = 0;
	return (t);
}
