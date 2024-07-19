#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees previously allocated memory
 * @grid: grid address
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}

	free(grid);
}
