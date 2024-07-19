#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr++ = *src++;
	}
	for ( ; i < n; t++)
	{
		*ptr++ = '0\';
	}

	return dest;
}
