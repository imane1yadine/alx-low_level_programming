#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The 2-dimensional grid to free.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
