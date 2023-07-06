#include "main.h"
/**
 * clear_bit - sets bit to 0
 * @n: number to clear
 * @index: index to clear at
 * Return: int at success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
