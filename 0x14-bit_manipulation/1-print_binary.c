#include "main.h"
/**
 * print_binary - prints binary representation of number
 * @n: binary number to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int number;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	number = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	while (number)
	{
		if (n & i)
		{
			_putchar('1');
			i = 1;
		}
		else if (i)
		{
			_putchar('0');
		}
		number >>= 1;
	}
}
