#include "main.h"
/**
 * print_binary - prints binary representation of number
 * @n: binary number to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int number;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		number = n >> i;

		if (number & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
