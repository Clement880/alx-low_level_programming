#include <stdio.h>
/**
 * main - print the prime factor of the number 612852475143
 *
 * Return: (0)
 */
int main(void)
{
	long int i, n, t;

	n = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			t = n / i;
			n = t;
		}
	}

	return (0);
}
