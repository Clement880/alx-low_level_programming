#include "main.h"
/**
 * _strspn _ gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: number of bytes in the s which consists only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return ('\0');
}
