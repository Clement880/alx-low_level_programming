#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0, followed by a new line
 *
 * Return: always (0) on success
 *
 */
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
