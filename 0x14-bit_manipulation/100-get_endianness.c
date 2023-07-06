#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: int on success
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
