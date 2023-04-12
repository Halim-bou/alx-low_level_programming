#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the memory of the previoiusly 2d array
 * @grid: 2d array
 * @height: the height of 2d array
 * Return: empty
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
