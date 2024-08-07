#include "main.h"
#include <stdlib.h>

/**
 * string_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: amount of bytes
 *
 * Return: allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t, u, v;
	char *s;

	if (s1 == NULL)
	{
		t = 0;
	}
	else
	{
		for (t = 0; s1[t]; ++t)
			;
	}
	if (s2 == NULL)
	{
		u = 0;
		;
	}
	if (u > n)
		u = n;
	s = malloc(sizeof(char) * (t + u + 1));
	if (s == NULL)
		return (NULL);
	for (v = 0; v < t; v++)
		s[v] = s1[v];
	for (v = 0; v < u; v++)
		s[v + t] = s2[v];
	s[t + u] = '\0';
	return (s);
}
