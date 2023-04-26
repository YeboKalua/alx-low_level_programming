#include "main.h"
/**
 * _isalpha - function name
 * @c: holder for ASCII character
 * description: checks for letters
 * Return: return 1 id alphabet letter found. Otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
