#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - action for each element
 * @array: elements
 * @size: size of array
 * @action: function pointer
 * return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (action == NULL || array == NULL)
		return;
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}

