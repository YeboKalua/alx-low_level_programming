#include "main.h"
/**
 * get_endianness - checks size of machine
 * Return: 0 for big 1 for little
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
