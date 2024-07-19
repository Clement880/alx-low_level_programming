#include "main"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be used in the program
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sig = 1, t = 0;
	unsigned int un = 0;

	while (!(s[t] <= '9' && s[t] >= '0') && s[t] != '\0')
	{
		if (s[t] == '-')
			sig *= -1;
		t++;
	}
	while (s[t] <= '9' && (s[t] >= '0' && s[t] != '\0'))
	{
		un = (un * 10) + (s[t] - '0');
		t++;
	}
	un *= sig;
	return (un);
}
