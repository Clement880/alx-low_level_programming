#include "main.h"
/**
 * _memcpy - function copies @n bytes from @src memory to @dest memory
 *
 * @n: function copies
 *
 * @src: bytes from memory
 *
 * @dest: to memory
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
