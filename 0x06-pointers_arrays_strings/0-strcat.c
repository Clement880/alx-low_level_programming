#include "main.h"
/**
 * _strcat - concantenates two strings
 * @dest: string destination
 * @src: string source
 * Return: (void)
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int v;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	v = 0;
	while (src[v] != '\0')
	{
		dest[t] = src[v];
		t++;
		v++;
	}

	dest[t] = '\0';
	return (dest);
}
