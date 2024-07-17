#include <stdio.h>
/**
 * main - prints every agument it recieves.
 * @argc: count the arguments
 * @argv: arguments
 *
 * Return: everytime (0)
 */
int main(int argc, char **argv)
{
	int t;

	for (t =0; t < argc; t++)
		printf("%s\n", argv[t]);

	return (0);
}
