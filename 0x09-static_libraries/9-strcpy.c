#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copied to
 * @src: copied from
 * Return: value of string
 *
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int v = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for (; v < t ; v++)
	{
		dest[v] = src[v];
	}
	dest[t] = '\0';
	return (dest);
}
