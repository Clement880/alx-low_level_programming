#include <stdlib.h>
#include <stdio.h>

/**
 * main -prints multiplication of two numbers, followed by an new line.
 * @argc: count the arguments
 * @argv: arguments
 *
 * Return: everytime (0)
 */
int main(int argc, char **argv)
{
	int t;
	int h;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);
	h = atoi(argv[2]);
	printf("%d\n", t * h);

	return (0);
}
