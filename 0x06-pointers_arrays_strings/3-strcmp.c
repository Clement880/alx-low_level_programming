#include "main.h"
/**
 * _strcmp - compares pointers to two string values
 * @s1: pointer to the first string to compare
 * @s2: pointer to the second string to compare
 *
 * Return: s1[k] - s2[k]
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
