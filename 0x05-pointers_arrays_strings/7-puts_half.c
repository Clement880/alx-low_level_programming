#include "main.h"
/**
 * puts_half - prints half a string
 * @str: the string to prints
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int t;

	while (str[i] != '\0')
	{
	i++;
	}
	if (i % 2 == 1)
	{
	t = (i - 1) / 2;
	t += 1;
	}
	else
	{
	t = i / 2;
	}

	for (; t < i; t++)
	{
	_putchar(str[t]);
	}
	_putchar('\n');
}

