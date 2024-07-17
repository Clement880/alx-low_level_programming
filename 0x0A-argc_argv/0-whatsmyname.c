#include <stdio.h>

/**
 * main - prints its name, follwed by a new line.
 * @argc: count the number of arguments
 * @argv: an array of arguments
 *
 * Return: everytime (0) on success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return(0);
}
