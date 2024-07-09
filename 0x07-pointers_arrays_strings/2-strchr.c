#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: everytime (0) on success
 *
 * NULL - if c is not found
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] == c)
			return (s + t);
	}
	return (NULL);
}
