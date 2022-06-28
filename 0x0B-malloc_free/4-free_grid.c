#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2-dimensional array.
 * @grid: 2-dimensional grid.
 * @height: number of 1-dimensional array in the array.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
