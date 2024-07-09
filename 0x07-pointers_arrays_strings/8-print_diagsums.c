#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -printhe sum of two diagonals of a square matrix of integers
 *
 * @a: the matrix of integers
 * @size: the size of matrix
 */
void print_diagsums(int *a, int size)
{
	int index, t = 0, v =  0;

	for (index = 0; index < size; index++)
	{
		t += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		v += a[index];
		a -= size;
	}
	printf("%d, %d\n", t, v);
}
