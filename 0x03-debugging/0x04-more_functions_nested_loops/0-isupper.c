#include "main.h"
#include <stdio.h>
/**
 * _isupper - main function
 * description: checks for uppercase letters
 * @c: ASCII character
 * Return: 1 if uppercase otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
