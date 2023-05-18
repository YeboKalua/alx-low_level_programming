#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees grid memory
 * @grid: array pointer
 * @height: height of array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
