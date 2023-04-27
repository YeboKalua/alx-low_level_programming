#include "main.h"
/**
 * _isdigit - main function
 * description: checks whether character is digit or not
 * @c: ASCII character
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
