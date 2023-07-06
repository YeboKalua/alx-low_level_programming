#include "main.h"
/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
			count++;
	}
	return (count);
}
