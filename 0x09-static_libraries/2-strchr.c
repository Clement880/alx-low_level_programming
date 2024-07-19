#include "main.h"
/**
 * _strchr - main entry point
 * @s: value input
 * @c: value input
 * Return: everytime (0) on success
 */
char *_strchr(char *s, char c)
{
	int t = 0;

	for (; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (&s[t]);
	}
	return (0);
}
