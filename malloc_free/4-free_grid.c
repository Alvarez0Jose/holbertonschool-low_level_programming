#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees up memory
 * @grid: grid being freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
