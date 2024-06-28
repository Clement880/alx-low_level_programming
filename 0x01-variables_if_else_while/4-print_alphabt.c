#include <stdio.h>
/**
 * main - a code that prints alphabets except q and e
 *
 * Return: always (0) on success
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
