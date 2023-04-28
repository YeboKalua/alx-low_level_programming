#include "main.h"
/**
 * print_line - function
 * description: draws a straight line
 * @n: ASCII character
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (n = 0; n >= 10; n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i =95; i == 95; i++)
			{
				_putchar(i);
			}
		}
	}
	_putchar('\n');
}
