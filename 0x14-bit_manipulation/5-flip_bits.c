#include "main.h"
/**
 * flip_bits - flips bits
 * @n: binary string
 * @m: flipped binary string
 * Return: number of characters in flipped binary string
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int number;
	unsigned long int numnum = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		number = numnum >> i;
		if (number & 1)
			c++;
	}
	return (c);
}
