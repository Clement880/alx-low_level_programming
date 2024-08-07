#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: amount of bytes
 *
 * Return: allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *s;
	unsigned int i;

	if (s1)
	while (s1[len1])
            len1++;

	if (s2)
	{
	while (s2[len2] && len2 < n)
		len2++;
	}

	s = malloc(len1 + len2 + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}
		s[len1 + len2] = '\0';

	return s;
}
