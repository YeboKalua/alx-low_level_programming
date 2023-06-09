#include "main.h"
/**
 * get_bit - get value of bit at given index
 * @n: binary number
 * @index: index to get binary value
 * Return: obtained binary value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_digit;

	if (index > 63)
		return (-1);
	bit_digit = (n >> index) & 1;
	return (bit_digit);
}
