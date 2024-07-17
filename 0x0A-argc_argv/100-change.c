#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of coins for change
 * for an amount od money
 * @argc: counts arguments
 * @argv: arguments
 * Return: everytime (0)
 *
 */
int main(int argc, char **argv)
{
	int b, c;
	unsigned int t;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	b = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (b > 1)
		{
			for (t = 0; t < sizeof(cents[t]); t++)
			{
				if (b >= cents[t])
				{
				c += b / cents[t];
				b = b % cents[t];
				}
			}
		}
		if (b == 1)
			c++;
	}
	else
	{
	printf("Error\n");
	return (1);
	}

	printf("%d\n", c);
	return (0);
}
