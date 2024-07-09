#include "main.h"
/**
 * _memset - entry point
 * @s: original pointer to return to later
 * @b: fills byte of s with the value of b
 * @n: returns pointer too the beginning of the memory area
 * Return: always (0) on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		s[t] = b;
	}

	return (s);
}
