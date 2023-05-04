#include "main.h"
/**
 * swap_int - main function
 * description: swaps integers
 * @a : pointer of int 1
 * @b : pointer of int 2
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
