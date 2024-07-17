#include <stdio.h>
/**
 * main - prints all arguments passing through it
 * @argc: count of arguments
 * @argv: arguments
 *
 * Return: everytime (0)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
