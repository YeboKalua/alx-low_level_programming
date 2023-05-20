#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - custom code for calloc
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to calloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	array = malloc(total_size);

	if (array == NULL)
		return (NULL);
	memset(array, 0, total_size);

	return (array);
}
