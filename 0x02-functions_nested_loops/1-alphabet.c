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
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

