#include "main.h"
/**
 * _strlen_recursion - calculate string length
 * @s: string
 * Return: 0 if successful
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
