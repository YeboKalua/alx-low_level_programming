#include "main.h"
/**
 * set_bit - sets bit to 1
 * @n: pointer to number to chaange
 * @index: index of bit to set
 * Return: int 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
