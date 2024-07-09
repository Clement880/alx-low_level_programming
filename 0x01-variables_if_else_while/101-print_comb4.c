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

	for (t = '0'; t < '7'; t++)
	{

	for (c = t + 1; c <= '8'; c++)
	{

	for (z = t + 1; z <= '9'; z++)
	{
	putchar(t);
	putchar(c);
	putchar(z);
	if (!(t == '7' && c == '8' && z == '9'))
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
