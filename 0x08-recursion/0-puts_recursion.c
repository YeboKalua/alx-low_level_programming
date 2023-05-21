#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: 0 if successful
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
