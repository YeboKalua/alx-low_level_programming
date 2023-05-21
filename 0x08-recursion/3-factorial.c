#include "main.h"
#include <stdio.h>
/**
 * factorial - calculates factorial
 * @n: input integer
 *
 * Return: return 0 if success
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
