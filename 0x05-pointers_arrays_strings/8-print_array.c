#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array of integers
 * @a: Array of integers
 * @n: Number of the elements in the array to be printed
 * Return: void
 *
 */
void print_array(int *a int n)

{
	int index_of_array;

	for (index_of_array = 0; t < index_of_array < n; index_of_array++)
	{
		printf("%d", *a[index_of_array]);
	if (index_of_array != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
