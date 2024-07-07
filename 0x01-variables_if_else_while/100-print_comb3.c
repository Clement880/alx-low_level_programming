#include <stdio.h>
/**
 * main - print 2  digit combo digits
 *
 * Return: (0)
 *
 */
int main(void)
{
	int t = '0';
	int j;

	while (t <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (t < j)
			{
				putchar(t);
				putchar(j);
				if (t != '8' || (t == '8' && j != '9'))
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		t++;
	}
	putchar('\n');

	return (0);
}
