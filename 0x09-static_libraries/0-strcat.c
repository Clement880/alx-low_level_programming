#include "main.h"
/**
 * _strcat - concantenates two strings
 * @dest: value entered
 * @src: value entered
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int f;

	a = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	f = 0;
	while (src[f] != '\0')
	{
		dest[t] = src[f];
		t++;
		f++;
	}

	dest[a] = '\0';
	return (dest);
}
