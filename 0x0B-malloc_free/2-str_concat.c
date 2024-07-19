#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function concantenates two strings any size
 * @s1: first string to be concantenated
 * @s2: second string to be concantenated
 * Return: both strings concantenated
 *
 */

char *str_concat(char *s1, char *s2)
{
	int t = 0, u = 0, v = 0, w = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[t])
		t++;
	while (s2[u])
		u++;

	w = t + u;
	s = malloc((sizeof(char) * w) + 1);

	if (s == NULL)
		return (NULL);
	u = 0;

	while (v < w)
	{
		if (v <= t)
			s[v] = s1[v];
		if (v >= t)
		{
			s[v] = s2[u];
			u++;
		}

		v++;
	}
	s[v] = '\0';
	return (s);
}
