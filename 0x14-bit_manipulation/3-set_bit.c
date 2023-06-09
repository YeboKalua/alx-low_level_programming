#include "main.h"
/**
 * set_bit - sets bit value to one at a given index
 * @n: binay string
 * @index: where to set value
 * Return: 1 if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
