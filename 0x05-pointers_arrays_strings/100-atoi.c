#include "main.h"
/**
 * _atoi - converts a string to an int
 * @s: the pointer to convert
 * Return: (int)
 */

int _atoi(char *s)

{
	int t = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[t])
	{
	if (s[t] == 45)
	{
	min *= -1;
	}
	while (s[t] >= 48 && s[t] <= 57)
	{
	isi = 1;
	ni = (ni * 10) + (s[t] - '0');
	t++;
	}
	if (isi == 1)
	{
	break;
	}
	t++;
	}
	ni *= min;
	return (ni);

}
