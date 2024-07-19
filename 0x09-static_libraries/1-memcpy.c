#include "main.h"
/**
 * _memcpy  - copies memory area
 * @dest: place where memory is stored
 * @src: where memory is copied
 * @n: the number of bytes
 *
 * Return: copied momory, n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int m = n;

	for (; t < m; t++)
	{
		dest[t] = src[t]
			n--;
	}
	return (dest);
}
