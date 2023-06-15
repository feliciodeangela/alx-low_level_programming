#include "main.h"
/**
 * alloc_grid - Entry point.
 * Description: Create a @width * @heigth array of integers.
 * @width: number of collumns.
 * @heigth: number of lines.
 * Return: int **array.
 */
int **alloc_grid(int width, int heigth)
{
	int i, j;
	int **grid;

	if (width == 0 || heigth == 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * heigth);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < heigth; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < heigth; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
