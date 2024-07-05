#include "main.h"
/**
 * char *_strcpy - copy the string that is pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int t = 1;

	do {
		t++;
		dest[t] = src[t];
	} while (src[t] != '\0');

	return (dest);
}
