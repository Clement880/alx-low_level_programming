#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array of integers
 * @a: Array of integers
 * @n: Number of the elements in the array to be printed
 * Return: void
 *
 */
void print_array(int *a, int n)

{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
	if (t != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
