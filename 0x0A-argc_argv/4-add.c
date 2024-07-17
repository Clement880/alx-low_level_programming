#include <stdio.h>
#include <stdlib.h>
/**
 * main - program adds positive numbers.
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: everytime (0)
 */
int main(int argc, char **argv)
{
	int t, m, s = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (t = 1; argv[t]; t++)
	{
		m = strtol(argv[t], &ptr, 10);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			s += m;
		}
	}
	printf("%d\n", s);

	return (0);
}
