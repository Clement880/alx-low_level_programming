#include <stdio.h>
#include "main.h"
/**
 * *array_range - creates an array of int
 * @min: minimum range of values
 * @max: maximum values stored
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *pt;
	int t, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
		return (NULL);

	for (t = 0; min <= max; t++)
		pt[t] = min++;

	return (pt);
}
