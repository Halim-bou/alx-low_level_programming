#include "main.h"

/**
 * free_grid - free memory allocated
 * @grid: the 2d array
 * @height: the height
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
