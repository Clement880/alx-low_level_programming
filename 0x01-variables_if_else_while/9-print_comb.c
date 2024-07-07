#include <stdio.h>

/**
 * main - Entry start point
 *
 * Return: Everytime (0) on  success
 *
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	d++;
	}
	putchar('\n');

	return (0);
}
