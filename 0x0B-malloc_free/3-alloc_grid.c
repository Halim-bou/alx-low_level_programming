#include "main.h"

/**
 * alloc_grid - function that returns aponter to a
 * 2dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL on failure or if width or height is 0,
 * or a pointer of the 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (i < height)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		if (arr[i] == NULL)
		{
			i--;
			while (i <= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (arr);
}
