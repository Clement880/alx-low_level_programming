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
	unsigned int t = 0, u = 0, v = 0, w = 0;
	char *st;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[t])
		t++;

	while (s2[v])
		v++;
	if (n >= v)
		w = t + v;
	else
		w = t + n;
	st = malloc(sizeof(char) * w + 1);
	if (st == NULL)
		return (NULL);

	v = 0;
	while (u <= w)
	{
		if (u <= t)
			st[u] = s1[u];
		if (u >= t)
		{
			st[u] = s2[v];
			v++;
		}
		u++;
	}
	st[u] = '\0';
	return (st);
}
