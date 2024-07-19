#include "main.h"
/**
 * _strcmp - compares string values
 * @s1: value input
 * @s2: value input
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int t = 0;

	while (s1[t] != '\0' && s2[t] != '\0')
	{
		if (s1[t] != s2[t])
		{
			return (s1[t] - s2[t]);
		}
		t++;
	}
}
