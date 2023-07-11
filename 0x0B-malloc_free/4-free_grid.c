#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
