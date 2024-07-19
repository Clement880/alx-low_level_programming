#include "main.h"
/**
 * _strspn - main entry point
 * @s: input value
 * @accept: input value
 * Return: everytime (0) on success
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int t;
	unsigned int n = 0;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				n++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
