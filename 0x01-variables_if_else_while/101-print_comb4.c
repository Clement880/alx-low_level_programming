#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: always (0) on success
 *
 */
int main(void)
{
	int t, c, z;

	for (t = '0'; t < '9'; t++)
	{

	for (c = t + 1; c <= '9'; c++)
	{

	for (z = t + 1; z <= '9'; z++)
	{
	if ((c != t) != z)
	{
	putchar(t);
	putchar(c);
	putchar(z);
	if (t == '7' && c == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
