#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates the string
 * @str: string to be duplicated
 * Return: duplicate of string
 *
 */
char *_strdup(char *str)
{
	int t = 0, v = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[v])
	{
		v++;
	}

	s = malloc((sizeof(char) * v) + 1);

	if (s == NULL)
	return (NULL);

	while (t < v)
	{
		s[t] = str[t];
		t++;
	}
	s[t] = '\0';
	return (s);
}
