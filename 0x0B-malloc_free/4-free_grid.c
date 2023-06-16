#include "main.h"
/**
 * free_grid - Entry point
 * Description: Free 2d array.
 * @**grid: Array to free.
 * @heigth: Array dimension.
 */
void free_grid(int **grid, int heigth)
{
	int i;

	for (i = heigth - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
