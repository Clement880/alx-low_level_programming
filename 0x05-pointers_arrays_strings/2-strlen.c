#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int t;

	t = 0;

	while (s[t] != '\0')
	{
	t++;
	}
	return (t);
}
