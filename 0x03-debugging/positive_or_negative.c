#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * description: determines whether a number is negative or positive
 * Return: 0 success
 *
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
