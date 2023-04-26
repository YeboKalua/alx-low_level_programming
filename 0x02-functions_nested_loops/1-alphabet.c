#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 * description: print the alphabet using putchar
 * Return: return 0 of successful
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

