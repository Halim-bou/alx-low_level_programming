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

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	while (i < height)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
