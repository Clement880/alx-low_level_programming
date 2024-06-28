#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 *
 * Return: Everytime (0) on success
 *
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
