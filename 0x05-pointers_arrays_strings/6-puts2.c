#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: the string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int t;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (t = 0; t < j; t += 2)
	{
	_putchar(str[t]);
	}
	_putchar('\n');
}
