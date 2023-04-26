#include "main.h"
#include <stdio.h>
/**
 * print_sign - function name
 * @n: variable name
 * description: prints sign of number
 * Return: return 1  if number is positive
 * return 0 if number is 0
 * return -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
