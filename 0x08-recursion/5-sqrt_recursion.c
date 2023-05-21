#include "main.h"
int sqrt_finder(int i, int n);
/**
 * _sqrt_recursion - calculates natural square root
 * @n: input value
 * Return: 0 if success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_finder(n, 0));
}
/**
 * sqrt_finder - finds square roots
 * @n: input integer
 * @i: iterator
 * Return: sqrt answer
 */
int sqrt_finder(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_finder(n, i + 1));
}
