#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase,
 *
 * Return: everytime (0) on success
 *
 */
int main(void)
{
	char n = '0';
	char c = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
