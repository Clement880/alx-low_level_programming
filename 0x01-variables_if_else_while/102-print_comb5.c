#include <stdio.h>
/**
 * main - program that prints possible combinations of two two-digit numbers
 * Return: (0) everytime on success
 *
 */

int main(void)
{
	int w, x;
	int a, b, c, d;

	for (w = '0'; w <= 99; w++)
	{
		a = w / 10;
		b = w % 10;

		for (x = '0'; x <= 99; x++)
		{
			c = w / 10;
			d = w % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);
				if (a != '9' && b != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
