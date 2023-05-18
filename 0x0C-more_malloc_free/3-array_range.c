#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array
 * @min: minimum
 * @max: maximum
 * Return: 0 if successful
 */
int *array_range(int min, int max)
{
	int n = max - min + 1;
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * n);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
