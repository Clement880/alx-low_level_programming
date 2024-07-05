#include "main.h"
/**
 * char *_strcpy - copy the string that is pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int t;

	for (t = 0; src[t] != '\0'; t++)
	{
		dest[t] = src[t];
	}
	dest[t] = '\0';

	return (dest);
}
