#include "main.h"
/**
 * _abs - function name
 * description: computes absolute value of integers
 * @int: integer value
 * Return: integer value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
