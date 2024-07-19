#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first array
 * @height: second array
 *
 * Return: (a)
 */
int **alloc_grid(int width, int height)
{
	int t, u, v, w;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (t = 0; t < height; t++)
	{
		a[t] = malloc(sizeof(int) * width);

		if (a[t] == NULL)
		{
			for (u = t; u >= 0; u--)
			{
				free(a[u]);
			}
			free(a);
			return (NULL);
		}
	}

	for (v = 0; v < height; v++)
	{
		for (w = 0; w < width; w++)
		{
			a[v][w] = 0;
		}
	}

	return (a);
}
