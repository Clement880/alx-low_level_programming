#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @: string
 *
 * Return: length
 */
int _strlen(char *i)
{
	int t = 0;

	while (*i != '\0')
	{
		t++;
		i++;
	}

	return (t);
}
