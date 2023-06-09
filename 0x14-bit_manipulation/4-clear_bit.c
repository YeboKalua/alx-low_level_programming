#include "main.h"
/**
 * clear_bit - sets bit to 0 at given index
 * @n: binary string
 * @index: where to clear bit
 * Return: 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
