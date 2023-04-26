#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - main function
 * description: print the alphabet using putchar
 * Return: return 0 of successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}

