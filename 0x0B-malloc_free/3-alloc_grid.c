#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocates 2D array
 * @width: array dimension
 * @height: array dimension
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int n, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(width * sizeof(int));

		if (grid[n] == NULL)
		{
			for (; n >= 0; n--)
				free(grid[n]);
			free(grid);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (i = 0; i < width; i++)
			grid[n][i] = 0;
	}
	return (grid);
}
