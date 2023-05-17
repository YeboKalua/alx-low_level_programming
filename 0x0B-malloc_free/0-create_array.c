#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - ceates an array
 * @size: size of array
 * @c: variable allocated to memory
 * Return: pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}
	return (ptr);
}

