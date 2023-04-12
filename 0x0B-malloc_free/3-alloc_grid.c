#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensional array
 * @width: width of grid
 * @height: height of grid
 * Return: a pointer to 2d array or NULL.
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i = 0;
	int j = 0;
	int a, b;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(ar[j]);
			}
			free(ar);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; i++)
		{
			ar[a][b] = 0;
		}
	}
	return (ar);
}
