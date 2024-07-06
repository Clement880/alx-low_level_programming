#include "main.h"
/**
 * _strncat -  a function that concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int t;
	int v;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	v = 0;
	while (v < n && src[v] != '\0')
	{
	dest[t] = src[v];
	t++;
	v++;
	}
	dest[t] = '\0';
	return (dest);
}
