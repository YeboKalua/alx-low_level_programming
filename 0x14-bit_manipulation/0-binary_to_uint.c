#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string containing binary number
 * Return: unsigned int converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	while (*b != '\0')
	{
		n <<= 1;
		if (*b == '1')
			n |= 1;
		b++;
	}
	return (n);
}
