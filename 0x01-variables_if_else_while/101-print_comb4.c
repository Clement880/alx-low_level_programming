#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0) on success
 *
 */
int main(void)
{
	int e = '0';
	int m;
	int z;

	while (e <= '7')
	{
		m = e + 1;
		while (m <= '8')
			z = m +1;
		{
			while (z <= '9')
			{
				putchar(e);
				putchar(m);
				putchar(z);
				if (!(e == '7' && m == '8' && z == '9'))
				{
				putchar(',');
				putchar(' ');
				}

				z++;
			}
			m++;
		}
		e++;
	}

	putchar ('\n');

	return (0);
}
