#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the program's opcodes
 * @address: pointer to the address from which to start printing
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(unsigned char *address, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
	printf("%.2hhx", address[t]);
	if (t < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array pointer to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0) 
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((unsigned char *)main, n);

	return (0);
}

