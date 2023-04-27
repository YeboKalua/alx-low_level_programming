#include "main.h"
/**
 * print_numbers - function
 * description: prints numbers from 0-9
 * Return: void
 */
void print_numbers(void)
{
	int n;

	while (n >= 48 && n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
