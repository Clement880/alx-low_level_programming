#include "main.h"
/**
 * leet -  function that encodes a string into 1337
 * @n: input value
 * Return: value
 */
char *leet(char *n)
{
	int t, v;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (t = 0; n[t] != '\0'; t++)
	{
		for (v = 0; v < 10; v++)
		{
			if (n[t] == s1[v])
			{
				n[t] = s2[v];
			}
		}
	}
	return (n);
}
