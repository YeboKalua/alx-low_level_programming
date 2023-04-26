#include "main.h"
/**
 * _islower - function name
 * @c: stores ascii character to check whether lowcase or not
 * description: checks whether there are lower case letters
 * Return: return 1 if c is lowercase, return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
