#include <stdio.h>
/**
 * main - script prints the lowercase alphabet in reverse
 *
 * Return: everytime(0) on success
 *
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
