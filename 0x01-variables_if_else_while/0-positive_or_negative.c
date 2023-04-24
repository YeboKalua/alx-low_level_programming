#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * description: determines whether a number is negative or positive
 * Return: 0 success
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive\n", n);
	}
	else if (n < 0)
	{
		printf("is negative\n", n);
	}
	else
	{
		printf("is zero\n", n);
	}

	return (0);
}
