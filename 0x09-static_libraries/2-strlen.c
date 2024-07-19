#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: the string
 * Return: length
 */
int _strlen(char s)
{
	int t = 0;

	while (*s != '\0')
	{
		t++;
		s++;
	}
	return (t);
}
