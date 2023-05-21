#include "main.h"
int prime_finder(int n, int i);
/**
 * is_prime_number - finds prime number
 * @n: input integer
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_finder(n, n - 1));
}
/**
 * prime_finder - finds prime number
 * @n: integer input
 * @i: iterator
 * Return: prime number
 */
int prime_finder(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_finder(n, i - 1));
}
